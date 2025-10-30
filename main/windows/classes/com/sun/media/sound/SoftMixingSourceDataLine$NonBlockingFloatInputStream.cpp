#include <com/sun/media/sound/SoftMixingSourceDataLine$NonBlockingFloatInputStream.h>

#include <com/sun/media/sound/AudioFloatInputStream.h>
#include <com/sun/media/sound/SoftMixingSourceDataLine.h>
#include <java/util/Arrays.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <jcpp.h>

using $AudioFloatInputStream = ::com::sun::media::sound::AudioFloatInputStream;
using $SoftMixingSourceDataLine = ::com::sun::media::sound::SoftMixingSourceDataLine;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SoftMixingSourceDataLine$NonBlockingFloatInputStream_FieldInfo_[] = {
	{"ais", "Lcom/sun/media/sound/AudioFloatInputStream;", nullptr, 0, $field(SoftMixingSourceDataLine$NonBlockingFloatInputStream, ais)},
	{}
};

$MethodInfo _SoftMixingSourceDataLine$NonBlockingFloatInputStream_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/AudioFloatInputStream;)V", nullptr, 0, $method(static_cast<void(SoftMixingSourceDataLine$NonBlockingFloatInputStream::*)($AudioFloatInputStream*)>(&SoftMixingSourceDataLine$NonBlockingFloatInputStream::init$))},
	{"available", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getFormat", "()Ljavax/sound/sampled/AudioFormat;", nullptr, $PUBLIC},
	{"getFrameLength", "()J", nullptr, $PUBLIC},
	{"mark", "(I)V", nullptr, $PUBLIC},
	{"markSupported", "()Z", nullptr, $PUBLIC},
	{"read", "([FII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"reset", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"skip", "(J)J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _SoftMixingSourceDataLine$NonBlockingFloatInputStream_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SoftMixingSourceDataLine$NonBlockingFloatInputStream", "com.sun.media.sound.SoftMixingSourceDataLine", "NonBlockingFloatInputStream", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SoftMixingSourceDataLine$NonBlockingFloatInputStream_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.SoftMixingSourceDataLine$NonBlockingFloatInputStream",
	"com.sun.media.sound.AudioFloatInputStream",
	nullptr,
	_SoftMixingSourceDataLine$NonBlockingFloatInputStream_FieldInfo_,
	_SoftMixingSourceDataLine$NonBlockingFloatInputStream_MethodInfo_,
	nullptr,
	nullptr,
	_SoftMixingSourceDataLine$NonBlockingFloatInputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.SoftMixingSourceDataLine"
};

$Object* allocate$SoftMixingSourceDataLine$NonBlockingFloatInputStream($Class* clazz) {
	return $of($alloc(SoftMixingSourceDataLine$NonBlockingFloatInputStream));
}

void SoftMixingSourceDataLine$NonBlockingFloatInputStream::init$($AudioFloatInputStream* ais) {
	$AudioFloatInputStream::init$();
	$set(this, ais, ais);
}

int32_t SoftMixingSourceDataLine$NonBlockingFloatInputStream::available() {
	return $nc(this->ais)->available();
}

void SoftMixingSourceDataLine$NonBlockingFloatInputStream::close() {
	$nc(this->ais)->close();
}

$AudioFormat* SoftMixingSourceDataLine$NonBlockingFloatInputStream::getFormat() {
	return $nc(this->ais)->getFormat();
}

int64_t SoftMixingSourceDataLine$NonBlockingFloatInputStream::getFrameLength() {
	return $nc(this->ais)->getFrameLength();
}

void SoftMixingSourceDataLine$NonBlockingFloatInputStream::mark(int32_t readlimit) {
	$nc(this->ais)->mark(readlimit);
}

bool SoftMixingSourceDataLine$NonBlockingFloatInputStream::markSupported() {
	return $nc(this->ais)->markSupported();
}

int32_t SoftMixingSourceDataLine$NonBlockingFloatInputStream::read($floats* b, int32_t off, int32_t len) {
	int32_t avail = available();
	if (len > avail) {
		int32_t ret = $nc(this->ais)->read(b, off, avail);
		$Arrays::fill(b, off + ret, off + len, (float)0);
		return len;
	}
	return $nc(this->ais)->read(b, off, len);
}

void SoftMixingSourceDataLine$NonBlockingFloatInputStream::reset() {
	$nc(this->ais)->reset();
}

int64_t SoftMixingSourceDataLine$NonBlockingFloatInputStream::skip(int64_t len) {
	return $nc(this->ais)->skip(len);
}

SoftMixingSourceDataLine$NonBlockingFloatInputStream::SoftMixingSourceDataLine$NonBlockingFloatInputStream() {
}

$Class* SoftMixingSourceDataLine$NonBlockingFloatInputStream::load$($String* name, bool initialize) {
	$loadClass(SoftMixingSourceDataLine$NonBlockingFloatInputStream, name, initialize, &_SoftMixingSourceDataLine$NonBlockingFloatInputStream_ClassInfo_, allocate$SoftMixingSourceDataLine$NonBlockingFloatInputStream);
	return class$;
}

$Class* SoftMixingSourceDataLine$NonBlockingFloatInputStream::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com