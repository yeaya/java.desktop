#include <com/sun/media/sound/SoftJitterCorrector$JitterStream.h>

#include <com/sun/media/sound/SoftJitterCorrector$JitterStream$1.h>
#include <com/sun/media/sound/SoftJitterCorrector.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/sound/sampled/AudioInputStream.h>
#include <jcpp.h>

#undef MAX_BUFFER_SIZE
#undef MAX_PRIORITY

using $byteArray2 = $Array<int8_t, 2>;
using $SoftJitterCorrector = ::com::sun::media::sound::SoftJitterCorrector;
using $SoftJitterCorrector$JitterStream$1 = ::com::sun::media::sound::SoftJitterCorrector$JitterStream$1;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $AudioInputStream = ::javax::sound::sampled::AudioInputStream;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SoftJitterCorrector$JitterStream_FieldInfo_[] = {
	{"MAX_BUFFER_SIZE", "I", nullptr, $STATIC, $staticField(SoftJitterCorrector$JitterStream, MAX_BUFFER_SIZE)},
	{"active", "Z", nullptr, 0, $field(SoftJitterCorrector$JitterStream, active)},
	{"thread", "Ljava/lang/Thread;", nullptr, 0, $field(SoftJitterCorrector$JitterStream, thread)},
	{"stream", "Ljavax/sound/sampled/AudioInputStream;", nullptr, 0, $field(SoftJitterCorrector$JitterStream, stream)},
	{"writepos", "I", nullptr, 0, $field(SoftJitterCorrector$JitterStream, writepos)},
	{"readpos", "I", nullptr, 0, $field(SoftJitterCorrector$JitterStream, readpos)},
	{"buffers", "[[B", nullptr, 0, $field(SoftJitterCorrector$JitterStream, buffers)},
	{"buffers_mutex", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(SoftJitterCorrector$JitterStream, buffers_mutex)},
	{"w_count", "I", nullptr, 0, $field(SoftJitterCorrector$JitterStream, w_count)},
	{"w_min_tol", "I", nullptr, 0, $field(SoftJitterCorrector$JitterStream, w_min_tol)},
	{"w_max_tol", "I", nullptr, 0, $field(SoftJitterCorrector$JitterStream, w_max_tol)},
	{"w", "I", nullptr, 0, $field(SoftJitterCorrector$JitterStream, w)},
	{"w_min", "I", nullptr, 0, $field(SoftJitterCorrector$JitterStream, w_min)},
	{"bbuffer_pos", "I", nullptr, 0, $field(SoftJitterCorrector$JitterStream, bbuffer_pos)},
	{"bbuffer_max", "I", nullptr, 0, $field(SoftJitterCorrector$JitterStream, bbuffer_max)},
	{"bbuffer", "[B", nullptr, 0, $field(SoftJitterCorrector$JitterStream, bbuffer)},
	{}
};

$MethodInfo _SoftJitterCorrector$JitterStream_MethodInfo_[] = {
	{"<init>", "(Ljavax/sound/sampled/AudioInputStream;II)V", nullptr, 0, $method(static_cast<void(SoftJitterCorrector$JitterStream::*)($AudioInputStream*,int32_t,int32_t)>(&SoftJitterCorrector$JitterStream::init$))},
	{"available", "()I", nullptr, $PUBLIC},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"commit", "()V", nullptr, $PUBLIC},
	{"fillBuffer", "()V", nullptr, $PUBLIC},
	{"nextReadBuffer", "()[B", nullptr, $PUBLIC},
	{"nextWriteBuffer", "()[B", nullptr, $PUBLIC},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SoftJitterCorrector$JitterStream_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SoftJitterCorrector$JitterStream", "com.sun.media.sound.SoftJitterCorrector", "JitterStream", $PRIVATE | $STATIC},
	{"com.sun.media.sound.SoftJitterCorrector$JitterStream$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SoftJitterCorrector$JitterStream_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.SoftJitterCorrector$JitterStream",
	"java.io.InputStream",
	nullptr,
	_SoftJitterCorrector$JitterStream_FieldInfo_,
	_SoftJitterCorrector$JitterStream_MethodInfo_,
	nullptr,
	nullptr,
	_SoftJitterCorrector$JitterStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.SoftJitterCorrector"
};

$Object* allocate$SoftJitterCorrector$JitterStream($Class* clazz) {
	return $of($alloc(SoftJitterCorrector$JitterStream));
}

int32_t SoftJitterCorrector$JitterStream::MAX_BUFFER_SIZE = 0;

$bytes* SoftJitterCorrector$JitterStream::nextReadBuffer() {
	$synchronized(this->buffers_mutex) {
		if (this->writepos > this->readpos) {
			int32_t w_m = this->writepos - this->readpos;
			if (w_m < this->w_min) {
				this->w_min = w_m;
			}
			int32_t buffpos = this->readpos;
			++this->readpos;
			return $nc(this->buffers)->get($mod(buffpos, $nc(this->buffers)->length));
		}
		this->w_min = -1;
		this->w = this->w_count - 1;
	}
	while (true) {
		try {
			$Thread::sleep(1);
		} catch ($InterruptedException&) {
			$var($InterruptedException, e, $catch());
			return nullptr;
		}
		$synchronized(this->buffers_mutex) {
			if (this->writepos > this->readpos) {
				this->w = 0;
				this->w_min = -1;
				this->w = this->w_count - 1;
				int32_t buffpos = this->readpos;
				++this->readpos;
				return $nc(this->buffers)->get($mod(buffpos, $nc(this->buffers)->length));
			}
		}
	}
}

$bytes* SoftJitterCorrector$JitterStream::nextWriteBuffer() {
	$synchronized(this->buffers_mutex) {
		return $nc(this->buffers)->get($mod(this->writepos, $nc(this->buffers)->length));
	}
}

void SoftJitterCorrector$JitterStream::commit() {
	$synchronized(this->buffers_mutex) {
		++this->writepos;
		if ((this->writepos - this->readpos) > $nc(this->buffers)->length) {
			int32_t newsize = (this->writepos - this->readpos) + 10;
			newsize = $Math::max($nc(this->buffers)->length * 2, newsize);
			$set(this, buffers, $new($byteArray2, newsize, $nc($nc(this->buffers)->get(0))->length));
		}
	}
}

void SoftJitterCorrector$JitterStream::init$($AudioInputStream* s, int32_t buffersize, int32_t smallbuffersize) {
	$InputStream::init$();
	this->active = true;
	this->writepos = 0;
	this->readpos = 0;
	$set(this, buffers_mutex, $new($Object));
	this->w_count = 1000;
	this->w_min_tol = 2;
	this->w_max_tol = 10;
	this->w = 0;
	this->w_min = -1;
	this->bbuffer_pos = 0;
	this->bbuffer_max = 0;
	$set(this, bbuffer, nullptr);
	this->w_count = 10 * ($div(buffersize, smallbuffersize));
	if (this->w_count < 100) {
		this->w_count = 100;
	}
	$set(this, buffers, $new($byteArray2, ($div(buffersize, smallbuffersize)) + 10, smallbuffersize));
	this->bbuffer_max = $div(SoftJitterCorrector$JitterStream::MAX_BUFFER_SIZE, smallbuffersize);
	$set(this, stream, s);
	$var($Runnable, runnable, $new($SoftJitterCorrector$JitterStream$1, this));
	$set(this, thread, $new($Thread, nullptr, runnable, "JitterCorrector"_s, 0, false));
	$nc(this->thread)->setDaemon(true);
	$nc(this->thread)->setPriority($Thread::MAX_PRIORITY);
	$nc(this->thread)->start();
}

void SoftJitterCorrector$JitterStream::close() {
	$synchronized(this) {
		this->active = false;
	}
	try {
		$nc(this->thread)->join();
	} catch ($InterruptedException&) {
		$catch();
	}
	$nc(this->stream)->close();
}

int32_t SoftJitterCorrector$JitterStream::read() {
	$var($bytes, b, $new($bytes, 1));
	if (read(b) == -1) {
		return -1;
	}
	return (int32_t)(b->get(0) & (uint32_t)255);
}

void SoftJitterCorrector$JitterStream::fillBuffer() {
	$set(this, bbuffer, nextReadBuffer());
	this->bbuffer_pos = 0;
}

int32_t SoftJitterCorrector$JitterStream::read($bytes* b, int32_t off, int32_t len) {
	if (this->bbuffer == nullptr) {
		fillBuffer();
	}
	int32_t bbuffer_len = $nc(this->bbuffer)->length;
	int32_t offlen = off + len;
	while (off < offlen) {
		if (available() == 0) {
			fillBuffer();
		} else {
			$var($bytes, bbuffer, this->bbuffer);
			int32_t bbuffer_pos = this->bbuffer_pos;
			while (off < offlen && bbuffer_pos < bbuffer_len) {
				$nc(b)->set(off++, $nc(bbuffer)->get(bbuffer_pos++));
			}
			this->bbuffer_pos = bbuffer_pos;
		}
	}
	return len;
}

int32_t SoftJitterCorrector$JitterStream::available() {
	return $nc(this->bbuffer)->length - this->bbuffer_pos;
}

void clinit$SoftJitterCorrector$JitterStream($Class* class$) {
	SoftJitterCorrector$JitterStream::MAX_BUFFER_SIZE = 0x00100000;
}

SoftJitterCorrector$JitterStream::SoftJitterCorrector$JitterStream() {
}

$Class* SoftJitterCorrector$JitterStream::load$($String* name, bool initialize) {
	$loadClass(SoftJitterCorrector$JitterStream, name, initialize, &_SoftJitterCorrector$JitterStream_ClassInfo_, clinit$SoftJitterCorrector$JitterStream, allocate$SoftJitterCorrector$JitterStream);
	return class$;
}

$Class* SoftJitterCorrector$JitterStream::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com