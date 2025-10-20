#include <com/sun/media/sound/SoftMixingMainMixer$1.h>

#include <com/sun/media/sound/SoftAudioBuffer.h>
#include <com/sun/media/sound/SoftMixingMainMixer.h>
#include <com/sun/media/sound/SoftMixingMixer.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <jcpp.h>

using $SoftAudioBufferArray = $Array<::com::sun::media::sound::SoftAudioBuffer>;
using $SoftAudioBuffer = ::com::sun::media::sound::SoftAudioBuffer;
using $SoftMixingMainMixer = ::com::sun::media::sound::SoftMixingMainMixer;
using $SoftMixingMixer = ::com::sun::media::sound::SoftMixingMixer;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SoftMixingMainMixer$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/media/sound/SoftMixingMainMixer;", nullptr, $FINAL | $SYNTHETIC, $field(SoftMixingMainMixer$1, this$0)},
	{"buffers", "[Lcom/sun/media/sound/SoftAudioBuffer;", nullptr, $PRIVATE | $FINAL, $field(SoftMixingMainMixer$1, buffers)},
	{"nrofchannels", "I", nullptr, $PRIVATE | $FINAL, $field(SoftMixingMainMixer$1, nrofchannels)},
	{"buffersize", "I", nullptr, $PRIVATE | $FINAL, $field(SoftMixingMainMixer$1, buffersize)},
	{"bbuffer", "[B", nullptr, $PRIVATE | $FINAL, $field(SoftMixingMainMixer$1, bbuffer)},
	{"bbuffer_pos", "I", nullptr, $PRIVATE, $field(SoftMixingMainMixer$1, bbuffer_pos)},
	{"single", "[B", nullptr, $PRIVATE | $FINAL, $field(SoftMixingMainMixer$1, single)},
	{}
};

$MethodInfo _SoftMixingMainMixer$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/SoftMixingMainMixer;)V", nullptr, 0, $method(static_cast<void(SoftMixingMainMixer$1::*)($SoftMixingMainMixer*)>(&SoftMixingMainMixer$1::init$))},
	{"available", "()I", nullptr, $PUBLIC},
	{"close", "()V", nullptr, $PUBLIC},
	{"fillBuffer", "()V", nullptr, $PUBLIC},
	{"read", "([BII)I", nullptr, $PUBLIC},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _SoftMixingMainMixer$1_EnclosingMethodInfo_ = {
	"com.sun.media.sound.SoftMixingMainMixer",
	"<init>",
	"(Lcom/sun/media/sound/SoftMixingMixer;)V"
};

$InnerClassInfo _SoftMixingMainMixer$1_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SoftMixingMainMixer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SoftMixingMainMixer$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.SoftMixingMainMixer$1",
	"java.io.InputStream",
	nullptr,
	_SoftMixingMainMixer$1_FieldInfo_,
	_SoftMixingMainMixer$1_MethodInfo_,
	nullptr,
	&_SoftMixingMainMixer$1_EnclosingMethodInfo_,
	_SoftMixingMainMixer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.SoftMixingMainMixer"
};

$Object* allocate$SoftMixingMainMixer$1($Class* clazz) {
	return $of($alloc(SoftMixingMainMixer$1));
}

void SoftMixingMainMixer$1::init$($SoftMixingMainMixer* this$0) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$InputStream::init$();
	$set(this, buffers, this->this$0->buffers);
	this->nrofchannels = $nc($($nc(this->this$0->mixer)->getFormat()))->getChannels();
	this->buffersize = $nc($nc(this->buffers)->get(0))->getSize();
	$set(this, bbuffer, $new($bytes, this->buffersize * ($nc($($nc(this->this$0->mixer)->getFormat()))->getSampleSizeInBits() / 8) * this->nrofchannels));
	this->bbuffer_pos = 0;
	$set(this, single, $new($bytes, 1));
}

void SoftMixingMainMixer$1::fillBuffer() {
	this->this$0->processAudioBuffers();
	for (int32_t i = 0; i < this->nrofchannels; ++i) {
		$nc($nc(this->buffers)->get(i))->get(this->bbuffer, i);
	}
	this->bbuffer_pos = 0;
}

int32_t SoftMixingMainMixer$1::read($bytes* b, int32_t off, int32_t len) {
	int32_t bbuffer_len = $nc(this->bbuffer)->length;
	int32_t offlen = off + len;
	$var($bytes, bbuffer, this->bbuffer);
	while (off < offlen) {
		if (available() == 0) {
			fillBuffer();
		} else {
			int32_t bbuffer_pos = this->bbuffer_pos;
			while (off < offlen && bbuffer_pos < bbuffer_len) {
				$nc(b)->set(off++, $nc(bbuffer)->get(bbuffer_pos++));
			}
			this->bbuffer_pos = bbuffer_pos;
		}
	}
	return len;
}

int32_t SoftMixingMainMixer$1::read() {
	int32_t ret = read(this->single);
	if (ret == -1) {
		return -1;
	}
	return (int32_t)($nc(this->single)->get(0) & (uint32_t)255);
}

int32_t SoftMixingMainMixer$1::available() {
	return $nc(this->bbuffer)->length - this->bbuffer_pos;
}

void SoftMixingMainMixer$1::close() {
	$nc(this->this$0->mixer)->close();
}

SoftMixingMainMixer$1::SoftMixingMainMixer$1() {
}

$Class* SoftMixingMainMixer$1::load$($String* name, bool initialize) {
	$loadClass(SoftMixingMainMixer$1, name, initialize, &_SoftMixingMainMixer$1_ClassInfo_, allocate$SoftMixingMainMixer$1);
	return class$;
}

$Class* SoftMixingMainMixer$1::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com