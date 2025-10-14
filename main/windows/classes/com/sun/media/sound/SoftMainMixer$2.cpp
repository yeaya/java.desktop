#include <com/sun/media/sound/SoftMainMixer$2.h>

#include <com/sun/media/sound/SoftAudioBuffer.h>
#include <com/sun/media/sound/SoftMainMixer.h>
#include <com/sun/media/sound/SoftSynthesizer.h>
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
using $SoftMainMixer = ::com::sun::media::sound::SoftMainMixer;
using $SoftSynthesizer = ::com::sun::media::sound::SoftSynthesizer;
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

$FieldInfo _SoftMainMixer$2_FieldInfo_[] = {
	{"this$0", "Lcom/sun/media/sound/SoftMainMixer;", nullptr, $FINAL | $SYNTHETIC, $field(SoftMainMixer$2, this$0)},
	{"buffers", "[Lcom/sun/media/sound/SoftAudioBuffer;", nullptr, $PRIVATE | $FINAL, $field(SoftMainMixer$2, buffers)},
	{"nrofchannels", "I", nullptr, $PRIVATE | $FINAL, $field(SoftMainMixer$2, nrofchannels)},
	{"buffersize", "I", nullptr, $PRIVATE | $FINAL, $field(SoftMainMixer$2, buffersize)},
	{"bbuffer", "[B", nullptr, $PRIVATE | $FINAL, $field(SoftMainMixer$2, bbuffer)},
	{"bbuffer_pos", "I", nullptr, $PRIVATE, $field(SoftMainMixer$2, bbuffer_pos)},
	{"single", "[B", nullptr, $PRIVATE | $FINAL, $field(SoftMainMixer$2, single)},
	{}
};

$MethodInfo _SoftMainMixer$2_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/SoftMainMixer;)V", nullptr, 0, $method(static_cast<void(SoftMainMixer$2::*)($SoftMainMixer*)>(&SoftMainMixer$2::init$))},
	{"available", "()I", nullptr, $PUBLIC},
	{"close", "()V", nullptr, $PUBLIC},
	{"fillBuffer", "()V", nullptr, $PUBLIC},
	{"read", "([BII)I", nullptr, $PUBLIC},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _SoftMainMixer$2_EnclosingMethodInfo_ = {
	"com.sun.media.sound.SoftMainMixer",
	"<init>",
	"(Lcom/sun/media/sound/SoftSynthesizer;)V"
};

$InnerClassInfo _SoftMainMixer$2_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SoftMainMixer$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SoftMainMixer$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.SoftMainMixer$2",
	"java.io.InputStream",
	nullptr,
	_SoftMainMixer$2_FieldInfo_,
	_SoftMainMixer$2_MethodInfo_,
	nullptr,
	&_SoftMainMixer$2_EnclosingMethodInfo_,
	_SoftMainMixer$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.SoftMainMixer"
};

$Object* allocate$SoftMainMixer$2($Class* clazz) {
	return $of($alloc(SoftMainMixer$2));
}

void SoftMainMixer$2::init$($SoftMainMixer* this$0) {
	$set(this, this$0, this$0);
	$InputStream::init$();
	$set(this, buffers, this->this$0->buffers);
	this->nrofchannels = $nc($($nc(this->this$0->synth)->getFormat()))->getChannels();
	this->buffersize = $nc($nc(this->buffers)->get(0))->getSize();
	$set(this, bbuffer, $new($bytes, this->buffersize * ($nc($($nc(this->this$0->synth)->getFormat()))->getSampleSizeInBits() / 8) * this->nrofchannels));
	this->bbuffer_pos = 0;
	$set(this, single, $new($bytes, 1));
}

void SoftMainMixer$2::fillBuffer() {
	this->this$0->processAudioBuffers();
	for (int32_t i = 0; i < this->nrofchannels; ++i) {
		$nc($nc(this->buffers)->get(i))->get(this->bbuffer, i);
	}
	this->bbuffer_pos = 0;
}

int32_t SoftMainMixer$2::read($bytes* b, int32_t off, int32_t len) {
	int32_t bbuffer_len = $nc(this->bbuffer)->length;
	int32_t offlen = off + len;
	int32_t orgoff = off;
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
			if (!this->this$0->readfully) {
				return off - orgoff;
			}
		}
	}
	return len;
}

int32_t SoftMainMixer$2::read() {
	int32_t ret = read(this->single);
	if (ret == -1) {
		return -1;
	}
	return (int32_t)($nc(this->single)->get(0) & (uint32_t)255);
}

int32_t SoftMainMixer$2::available() {
	return $nc(this->bbuffer)->length - this->bbuffer_pos;
}

void SoftMainMixer$2::close() {
	$nc(this->this$0->synth)->close();
}

SoftMainMixer$2::SoftMainMixer$2() {
}

$Class* SoftMainMixer$2::load$($String* name, bool initialize) {
	$loadClass(SoftMainMixer$2, name, initialize, &_SoftMainMixer$2_ClassInfo_, allocate$SoftMainMixer$2);
	return class$;
}

$Class* SoftMainMixer$2::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com