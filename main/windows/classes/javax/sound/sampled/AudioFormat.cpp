#include <javax/sound/sampled/AudioFormat.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <javax/sound/sampled/AudioFormat$Encoding.h>
#include <javax/sound/sampled/AudioSystem.h>
#include <jcpp.h>

#undef NOT_SPECIFIED
#undef PCM_SIGNED
#undef PCM_UNSIGNED

using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $AudioFormat$Encoding = ::javax::sound::sampled::AudioFormat$Encoding;
using $AudioSystem = ::javax::sound::sampled::AudioSystem;

namespace javax {
	namespace sound {
		namespace sampled {

$FieldInfo _AudioFormat_FieldInfo_[] = {
	{"encoding", "Ljavax/sound/sampled/AudioFormat$Encoding;", nullptr, $PROTECTED, $field(AudioFormat, encoding)},
	{"sampleRate", "F", nullptr, $PROTECTED, $field(AudioFormat, sampleRate)},
	{"sampleSizeInBits", "I", nullptr, $PROTECTED, $field(AudioFormat, sampleSizeInBits)},
	{"channels", "I", nullptr, $PROTECTED, $field(AudioFormat, channels)},
	{"frameSize", "I", nullptr, $PROTECTED, $field(AudioFormat, frameSize)},
	{"frameRate", "F", nullptr, $PROTECTED, $field(AudioFormat, frameRate)},
	{"bigEndian", "Z", nullptr, $PROTECTED, $field(AudioFormat, bigEndian)},
	{"properties", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Object;>;", $PRIVATE, $field(AudioFormat, properties$)},
	{}
};

$MethodInfo _AudioFormat_MethodInfo_[] = {
	{"<init>", "(Ljavax/sound/sampled/AudioFormat$Encoding;FIIIFZ)V", nullptr, $PUBLIC, $method(static_cast<void(AudioFormat::*)($AudioFormat$Encoding*,float,int32_t,int32_t,int32_t,float,bool)>(&AudioFormat::init$))},
	{"<init>", "(Ljavax/sound/sampled/AudioFormat$Encoding;FIIIFZLjava/util/Map;)V", "(Ljavax/sound/sampled/AudioFormat$Encoding;FIIIFZLjava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;)V", $PUBLIC, $method(static_cast<void(AudioFormat::*)($AudioFormat$Encoding*,float,int32_t,int32_t,int32_t,float,bool,$Map*)>(&AudioFormat::init$))},
	{"<init>", "(FIIZZ)V", nullptr, $PUBLIC, $method(static_cast<void(AudioFormat::*)(float,int32_t,int32_t,bool,bool)>(&AudioFormat::init$))},
	{"getChannels", "()I", nullptr, $PUBLIC},
	{"getEncoding", "()Ljavax/sound/sampled/AudioFormat$Encoding;", nullptr, $PUBLIC},
	{"getFrameRate", "()F", nullptr, $PUBLIC},
	{"getFrameSize", "()I", nullptr, $PUBLIC},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getSampleRate", "()F", nullptr, $PUBLIC},
	{"getSampleSizeInBits", "()I", nullptr, $PUBLIC},
	{"isBigEndian", "()Z", nullptr, $PUBLIC},
	{"matches", "(Ljavax/sound/sampled/AudioFormat;)Z", nullptr, $PUBLIC},
	{"properties", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;", $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AudioFormat_InnerClassesInfo_[] = {
	{"javax.sound.sampled.AudioFormat$Encoding", "javax.sound.sampled.AudioFormat", "Encoding", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _AudioFormat_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.sound.sampled.AudioFormat",
	"java.lang.Object",
	nullptr,
	_AudioFormat_FieldInfo_,
	_AudioFormat_MethodInfo_,
	nullptr,
	nullptr,
	_AudioFormat_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.sound.sampled.AudioFormat$Encoding"
};

$Object* allocate$AudioFormat($Class* clazz) {
	return $of($alloc(AudioFormat));
}

void AudioFormat::init$($AudioFormat$Encoding* encoding, float sampleRate, int32_t sampleSizeInBits, int32_t channels, int32_t frameSize, float frameRate, bool bigEndian) {
	$set(this, encoding, encoding);
	this->sampleRate = sampleRate;
	this->sampleSizeInBits = sampleSizeInBits;
	this->channels = channels;
	this->frameSize = frameSize;
	this->frameRate = frameRate;
	this->bigEndian = bigEndian;
	$set(this, properties$, nullptr);
}

void AudioFormat::init$($AudioFormat$Encoding* encoding, float sampleRate, int32_t sampleSizeInBits, int32_t channels, int32_t frameSize, float frameRate, bool bigEndian, $Map* properties) {
	AudioFormat::init$(encoding, sampleRate, sampleSizeInBits, channels, frameSize, frameRate, bigEndian);
	$set(this, properties$, $new($HashMap, properties));
}

void AudioFormat::init$(float sampleRate, int32_t sampleSizeInBits, int32_t channels, bool signed$, bool bigEndian) {
	$init($AudioFormat$Encoding);
	AudioFormat::init$((signed$ == true ? $AudioFormat$Encoding::PCM_SIGNED : $AudioFormat$Encoding::PCM_UNSIGNED), sampleRate, sampleSizeInBits, channels, (channels == $AudioSystem::NOT_SPECIFIED || sampleSizeInBits == $AudioSystem::NOT_SPECIFIED) ? $AudioSystem::NOT_SPECIFIED : ((sampleSizeInBits + 7) / 8) * channels, sampleRate, bigEndian);
}

$AudioFormat$Encoding* AudioFormat::getEncoding() {
	return this->encoding;
}

float AudioFormat::getSampleRate() {
	return this->sampleRate;
}

int32_t AudioFormat::getSampleSizeInBits() {
	return this->sampleSizeInBits;
}

int32_t AudioFormat::getChannels() {
	return this->channels;
}

int32_t AudioFormat::getFrameSize() {
	return this->frameSize;
}

float AudioFormat::getFrameRate() {
	return this->frameRate;
}

bool AudioFormat::isBigEndian() {
	return this->bigEndian;
}

$Map* AudioFormat::properties() {
	$var($Map, ret, nullptr);
	if (this->properties$ == nullptr) {
		$assign(ret, $new($HashMap, 0));
	} else {
		$assign(ret, ($cast($Map, $nc(this->properties$)->clone())));
	}
	return $Collections::unmodifiableMap(ret);
}

$Object* AudioFormat::getProperty($String* key) {
	if (this->properties$ == nullptr) {
		return $of(nullptr);
	}
	return $of($nc(this->properties$)->get(key));
}

bool AudioFormat::matches(AudioFormat* format) {
	bool var$5 = $nc($($nc(format)->getEncoding()))->equals($(getEncoding()));
	if (var$5) {
		bool var$6 = format->getChannels() == $AudioSystem::NOT_SPECIFIED;
		if (!var$6) {
			int32_t var$7 = $nc(format)->getChannels();
			var$6 = var$7 == getChannels();
		}
		var$5 = (var$6);
	}
	bool var$4 = var$5;
	if (var$4) {
		bool var$8 = format->getSampleRate() == (float)$AudioSystem::NOT_SPECIFIED;
		if (!var$8) {
			float var$9 = $nc(format)->getSampleRate();
			var$8 = var$9 == getSampleRate();
		}
		var$4 = (var$8);
	}
	bool var$3 = var$4;
	if (var$3) {
		bool var$10 = format->getSampleSizeInBits() == $AudioSystem::NOT_SPECIFIED;
		if (!var$10) {
			int32_t var$11 = $nc(format)->getSampleSizeInBits();
			var$10 = var$11 == getSampleSizeInBits();
		}
		var$3 = (var$10);
	}
	bool var$2 = var$3;
	if (var$2) {
		bool var$12 = format->getFrameRate() == (float)$AudioSystem::NOT_SPECIFIED;
		if (!var$12) {
			float var$13 = $nc(format)->getFrameRate();
			var$12 = var$13 == getFrameRate();
		}
		var$2 = (var$12);
	}
	bool var$1 = var$2;
	if (var$1) {
		bool var$14 = format->getFrameSize() == $AudioSystem::NOT_SPECIFIED;
		if (!var$14) {
			int32_t var$15 = $nc(format)->getFrameSize();
			var$14 = var$15 == getFrameSize();
		}
		var$1 = (var$14);
	}
	bool var$0 = var$1;
	if (var$0) {
		bool var$16 = getSampleSizeInBits() <= 8;
		if (!var$16) {
			bool var$17 = $nc(format)->isBigEndian();
			var$16 = var$17 == isBigEndian();
		}
		var$0 = (var$16);
	}
	if (var$0) {
		return true;
	}
	return false;
}

$String* AudioFormat::toString() {
	$var($String, sampleRate, getSampleRate() == $AudioSystem::NOT_SPECIFIED ? "unknown sample rate"_s : $str({$$str(getSampleRate()), " Hz"_s}));
	$var($String, sampleSize, getSampleSizeInBits() == $AudioSystem::NOT_SPECIFIED ? "unknown bits per sample"_s : $str({$$str(getSampleSizeInBits()), " bit"_s}));

	$var($String, var$0, nullptr)
	switch (getChannels()) {
	case 1:
		{
			$assign(var$0, "mono"_s);
			break;
		}
	case 2:
		{
			$assign(var$0, "stereo"_s);
			break;
		}
	case $AudioSystem::NOT_SPECIFIED:
		{
			$assign(var$0, "unknown number of channels"_s);
			break;
		}
	default:
		{
			$assign(var$0, $str({$$str(getChannels()), " channels"_s}));
			break;
		}
	}
	$var($String, channels, var$0);
	$var($String, frameSize, getFrameSize() == $AudioSystem::NOT_SPECIFIED ? "unknown frame size"_s : $str({$$str(getFrameSize()), " bytes/frame"_s}));
	$var($String, frameRate, ""_s);
	float var$1 = getSampleRate();
	if ($Math::abs(var$1 - getFrameRate()) > 1.0E-5) {
		$assign(frameRate, getFrameRate() == $AudioSystem::NOT_SPECIFIED ? ", unknown frame rate"_s : $str({", "_s, $$str(getFrameRate()), " frames/second"_s}));
	}
	$var($String, bigEndian, ""_s);
	$init($AudioFormat$Encoding);
	bool var$3 = $nc($(getEncoding()))->equals($AudioFormat$Encoding::PCM_SIGNED);
	bool var$2 = (var$3 || $nc($(getEncoding()))->equals($AudioFormat$Encoding::PCM_UNSIGNED));
	if (var$2) {
		bool var$4 = (getSampleSizeInBits() > 8);
		var$2 = (var$4 || (getSampleSizeInBits() == $AudioSystem::NOT_SPECIFIED));
	}
	if (var$2) {
		$assign(bigEndian, isBigEndian() ? ", big-endian"_s : ", little-endian"_s);
	}
	return $String::format("%s %s, %s, %s, %s%s%s"_s, $$new($ObjectArray, {
		$($of(getEncoding())),
		$of(sampleRate),
		$of(sampleSize),
		$of(channels),
		$of(frameSize),
		$of(frameRate),
		$of(bigEndian)
	}));
}

AudioFormat::AudioFormat() {
}

$Class* AudioFormat::load$($String* name, bool initialize) {
	$loadClass(AudioFormat, name, initialize, &_AudioFormat_ClassInfo_, allocate$AudioFormat);
	return class$;
}

$Class* AudioFormat::class$ = nullptr;

		} // sampled
	} // sound
} // javax