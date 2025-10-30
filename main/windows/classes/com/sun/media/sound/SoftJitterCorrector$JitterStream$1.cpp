#include <com/sun/media/sound/SoftJitterCorrector$JitterStream$1.h>

#include <com/sun/media/sound/SoftJitterCorrector$JitterStream.h>
#include <java/io/EOFException.h>
#include <java/io/IOException.h>
#include <java/lang/InterruptedException.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/AudioInputStream.h>
#include <jcpp.h>

#undef MAX_VALUE

using $byteArray2 = $Array<int8_t, 2>;
using $SoftJitterCorrector$JitterStream = ::com::sun::media::sound::SoftJitterCorrector$JitterStream;
using $EOFException = ::java::io::EOFException;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $AudioInputStream = ::javax::sound::sampled::AudioInputStream;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SoftJitterCorrector$JitterStream$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/media/sound/SoftJitterCorrector$JitterStream;", nullptr, $FINAL | $SYNTHETIC, $field(SoftJitterCorrector$JitterStream$1, this$0)},
	{}
};

$MethodInfo _SoftJitterCorrector$JitterStream$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/SoftJitterCorrector$JitterStream;)V", nullptr, 0, $method(static_cast<void(SoftJitterCorrector$JitterStream$1::*)($SoftJitterCorrector$JitterStream*)>(&SoftJitterCorrector$JitterStream$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SoftJitterCorrector$JitterStream$1_EnclosingMethodInfo_ = {
	"com.sun.media.sound.SoftJitterCorrector$JitterStream",
	"<init>",
	"(Ljavax/sound/sampled/AudioInputStream;II)V"
};

$InnerClassInfo _SoftJitterCorrector$JitterStream$1_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SoftJitterCorrector$JitterStream", "com.sun.media.sound.SoftJitterCorrector", "JitterStream", $PRIVATE | $STATIC},
	{"com.sun.media.sound.SoftJitterCorrector$JitterStream$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SoftJitterCorrector$JitterStream$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.SoftJitterCorrector$JitterStream$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_SoftJitterCorrector$JitterStream$1_FieldInfo_,
	_SoftJitterCorrector$JitterStream$1_MethodInfo_,
	nullptr,
	&_SoftJitterCorrector$JitterStream$1_EnclosingMethodInfo_,
	_SoftJitterCorrector$JitterStream$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.SoftJitterCorrector"
};

$Object* allocate$SoftJitterCorrector$JitterStream$1($Class* clazz) {
	return $of($alloc(SoftJitterCorrector$JitterStream$1));
}

void SoftJitterCorrector$JitterStream$1::init$($SoftJitterCorrector$JitterStream* this$0) {
	$set(this, this$0, this$0);
}

void SoftJitterCorrector$JitterStream$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($AudioFormat, format, $nc(this->this$0->stream)->getFormat());
	int32_t bufflen = $nc($nc(this->this$0->buffers)->get(0))->length;
	int32_t frames = $div(bufflen, $nc(format)->getFrameSize());
	int64_t nanos = $cast(int64_t, (frames * 1.0E9 / format->getSampleRate()));
	int64_t now = $System::nanoTime();
	int64_t next = now + nanos;
	int32_t correction = 0;
	while (true) {
		$synchronized(this->this$0) {
			if (!this->this$0->active) {
				break;
			}
		}
		int32_t curbuffsize = 0;
		$synchronized(this->this$0->buffers) {
			curbuffsize = this->this$0->writepos - this->this$0->readpos;
			if (correction == 0) {
				++this->this$0->w;
				if (this->this$0->w_min != $Integer::MAX_VALUE) {
					if (this->this$0->w == this->this$0->w_count) {
						correction = 0;
						if (this->this$0->w_min < this->this$0->w_min_tol) {
							correction = (this->this$0->w_min_tol + this->this$0->w_max_tol) / 2 - this->this$0->w_min;
						}
						if (this->this$0->w_min > this->this$0->w_max_tol) {
							correction = (this->this$0->w_min_tol + this->this$0->w_max_tol) / 2 - this->this$0->w_min;
						}
						this->this$0->w = 0;
						this->this$0->w_min = $Integer::MAX_VALUE;
					}
				}
			}
		}
		while (curbuffsize > this->this$0->bbuffer_max) {
			$synchronized(this->this$0->buffers) {
				curbuffsize = this->this$0->writepos - this->this$0->readpos;
			}
			$synchronized(this->this$0) {
				if (!this->this$0->active) {
					break;
				}
			}
			try {
				$Thread::sleep(1);
			} catch ($InterruptedException& e) {
			}
		}
		if (correction < 0) {
			++correction;
		} else {
			$var($bytes, buff, this->this$0->nextWriteBuffer());
			try {
				int32_t n = 0;
				while (n != $nc(buff)->length) {
					int32_t s = $nc(this->this$0->stream)->read(buff, n, buff->length - n);
					if (s < 0) {
						$throwNew($EOFException);
					}
					if (s == 0) {
						$Thread::yield();
					}
					n += s;
				}
			} catch ($IOException& e1) {
			}
			this->this$0->commit();
		}
		if (correction > 0) {
			--correction;
			next = $System::nanoTime() + nanos;
			continue;
		}
		int64_t wait = next - $System::nanoTime();
		if (wait > 0) {
			try {
				$Thread::sleep($div(wait, (int64_t)1000000));
			} catch ($InterruptedException& e) {
			}
		}
		next += nanos;
	}
}

SoftJitterCorrector$JitterStream$1::SoftJitterCorrector$JitterStream$1() {
}

$Class* SoftJitterCorrector$JitterStream$1::load$($String* name, bool initialize) {
	$loadClass(SoftJitterCorrector$JitterStream$1, name, initialize, &_SoftJitterCorrector$JitterStream$1_ClassInfo_, allocate$SoftJitterCorrector$JitterStream$1);
	return class$;
}

$Class* SoftJitterCorrector$JitterStream$1::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com