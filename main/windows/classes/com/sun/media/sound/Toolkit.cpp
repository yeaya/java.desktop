#include <com/sun/media/sound/Toolkit.h>

#include <com/sun/media/sound/Platform.h>
#include <com/sun/media/sound/Printer.h>
#include <java/lang/Math.h>
#include <javax/sound/sampled/AudioFormat$Encoding.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/AudioInputStream.h>
#include <javax/sound/sampled/AudioSystem.h>
#include <jcpp.h>

#undef ALAW
#undef PCM_SIGNED
#undef PCM_UNSIGNED
#undef ULAW

using $Platform = ::com::sun::media::sound::Platform;
using $Printer = ::com::sun::media::sound::Printer;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $AudioFormat$Encoding = ::javax::sound::sampled::AudioFormat$Encoding;
using $AudioInputStream = ::javax::sound::sampled::AudioInputStream;
using $AudioSystem = ::javax::sound::sampled::AudioSystem;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$MethodInfo _Toolkit_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Toolkit::*)()>(&Toolkit::init$))},
	{"align", "(JI)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(int64_t,int32_t)>(&Toolkit::align))},
	{"align", "(II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&Toolkit::align))},
	{"bytes2micros", "(Ljavax/sound/sampled/AudioFormat;J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($AudioFormat*,int64_t)>(&Toolkit::bytes2micros))},
	{"bytes2millis", "(Ljavax/sound/sampled/AudioFormat;J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($AudioFormat*,int64_t)>(&Toolkit::bytes2millis))},
	{"dBToLinear", "(F)F", nullptr, $STATIC, $method(static_cast<float(*)(float)>(&Toolkit::dBToLinear))},
	{"frames2micros", "(Ljavax/sound/sampled/AudioFormat;J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($AudioFormat*,int64_t)>(&Toolkit::frames2micros))},
	{"getByteSwapped", "([BII)V", nullptr, $STATIC, $method(static_cast<void(*)($bytes*,int32_t,int32_t)>(&Toolkit::getByteSwapped))},
	{"getPCMConvertedAudioInputStream", "(Ljavax/sound/sampled/AudioInputStream;)Ljavax/sound/sampled/AudioInputStream;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AudioInputStream*(*)($AudioInputStream*)>(&Toolkit::getPCMConvertedAudioInputStream))},
	{"getUnsigned8", "([BII)V", nullptr, $STATIC, $method(static_cast<void(*)($bytes*,int32_t,int32_t)>(&Toolkit::getUnsigned8))},
	{"isFullySpecifiedAudioFormat", "(Ljavax/sound/sampled/AudioFormat;)V", nullptr, $STATIC, $method(static_cast<void(*)($AudioFormat*)>(&Toolkit::isFullySpecifiedAudioFormat))},
	{"isFullySpecifiedPCMFormat", "(Ljavax/sound/sampled/AudioFormat;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($AudioFormat*)>(&Toolkit::isFullySpecifiedPCMFormat))},
	{"linearToDB", "(F)F", nullptr, $STATIC, $method(static_cast<float(*)(float)>(&Toolkit::linearToDB))},
	{"micros2bytes", "(Ljavax/sound/sampled/AudioFormat;J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($AudioFormat*,int64_t)>(&Toolkit::micros2bytes))},
	{"micros2frames", "(Ljavax/sound/sampled/AudioFormat;J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($AudioFormat*,int64_t)>(&Toolkit::micros2frames))},
	{"millis2bytes", "(Ljavax/sound/sampled/AudioFormat;J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($AudioFormat*,int64_t)>(&Toolkit::millis2bytes))},
	{"validateBuffer", "(II)V", nullptr, $STATIC, $method(static_cast<void(*)(int32_t,int32_t)>(&Toolkit::validateBuffer))},
	{}
};

$ClassInfo _Toolkit_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.Toolkit",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Toolkit_MethodInfo_
};

$Object* allocate$Toolkit($Class* clazz) {
	return $of($alloc(Toolkit));
}

void Toolkit::init$() {
}

void Toolkit::getUnsigned8($bytes* b, int32_t off, int32_t len) {
	for (int32_t i = off; i < (off + len); ++i) {
		(*$nc(b))[i] += 128;
	}
}

void Toolkit::getByteSwapped($bytes* b, int32_t off, int32_t len) {
	int8_t tempByte = 0;
	for (int32_t i = off; i < (off + len); i += 2) {
		tempByte = $nc(b)->get(i);
		b->set(i, b->get(i + 1));
		b->set(i + 1, tempByte);
	}
}

float Toolkit::linearToDB(float linear) {
	double var$0 = $Math::log(((linear == 0.0) ? 1.0E-4 : (double)linear));
	float dB = (float)(var$0 / $Math::log(10.0) * 20.0);
	return dB;
}

float Toolkit::dBToLinear(float dB) {
	float linear = (float)$Math::pow(10.0, dB / 20.0);
	return linear;
}

int64_t Toolkit::align(int64_t bytes, int32_t blockSize) {
	if (blockSize <= 1) {
		return bytes;
	}
	return bytes - ($mod(bytes, blockSize));
}

int32_t Toolkit::align(int32_t bytes, int32_t blockSize) {
	if (blockSize <= 1) {
		return bytes;
	}
	return bytes - ($mod(bytes, blockSize));
}

int64_t Toolkit::millis2bytes($AudioFormat* format, int64_t millis) {
	float var$0 = millis * $nc(format)->getFrameRate() / 1000.0f;
	int64_t result = $cast(int64_t, (var$0 * format->getFrameSize()));
	return align(result, format->getFrameSize());
}

int64_t Toolkit::bytes2millis($AudioFormat* format, int64_t bytes) {
	float var$0 = bytes / $nc(format)->getFrameRate() * 1000.0f;
	return $cast(int64_t, (var$0 / format->getFrameSize()));
}

int64_t Toolkit::micros2bytes($AudioFormat* format, int64_t micros) {
	float var$0 = micros * $nc(format)->getFrameRate() / 1000000.0f;
	int64_t result = $cast(int64_t, (var$0 * format->getFrameSize()));
	return align(result, format->getFrameSize());
}

int64_t Toolkit::bytes2micros($AudioFormat* format, int64_t bytes) {
	float var$0 = bytes / $nc(format)->getFrameRate() * 1000000.0f;
	return $cast(int64_t, (var$0 / format->getFrameSize()));
}

int64_t Toolkit::micros2frames($AudioFormat* format, int64_t micros) {
	return $cast(int64_t, (micros * $nc(format)->getFrameRate() / 1000000.0f));
}

int64_t Toolkit::frames2micros($AudioFormat* format, int64_t frames) {
	return $cast(int64_t, (((double)frames) / $nc(format)->getFrameRate() * 1000000.0));
}

void Toolkit::validateBuffer(int32_t frameSize, int32_t bufferSize) {
	$useLocalCurrentObjectStackCache();
	if ($mod(bufferSize, frameSize) == 0) {
		return;
	}
	$throwNew($IllegalArgumentException, $($String::format("Buffer size (%d) does not represent an integral number of sample frames (%d)"_s, $$new($ObjectArray, {
		$($of($Integer::valueOf(bufferSize))),
		$($of($Integer::valueOf(frameSize)))
	}))));
}

void Toolkit::isFullySpecifiedAudioFormat($AudioFormat* format) {
	$useLocalCurrentObjectStackCache();
	if ($nc(format)->getFrameSize() <= 0) {
		$throwNew($IllegalArgumentException, $$str({"invalid frame size: "_s, ((format->getFrameSize() == -1) ? "NOT_SPECIFIED"_s : $($String::valueOf(format->getFrameSize())))}));
	}
	$init($AudioFormat$Encoding);
	bool var$2 = !$nc($($nc(format)->getEncoding()))->equals($AudioFormat$Encoding::PCM_SIGNED);
	bool var$1 = var$2 && !$nc($(format->getEncoding()))->equals($AudioFormat$Encoding::PCM_UNSIGNED);
	bool var$0 = var$1 && !$nc($(format->getEncoding()))->equals($AudioFormat$Encoding::ULAW);
	if (var$0 && !$nc($(format->getEncoding()))->equals($AudioFormat$Encoding::ALAW)) {
		return;
	}
	if ($nc(format)->getFrameRate() <= 0) {
		$throwNew($IllegalArgumentException, $$str({"invalid frame rate: "_s, ((format->getFrameRate() == -1) ? "NOT_SPECIFIED"_s : $($String::valueOf(format->getFrameRate())))}));
	}
	if ($nc(format)->getSampleRate() <= 0) {
		$throwNew($IllegalArgumentException, $$str({"invalid sample rate: "_s, ((format->getSampleRate() == -1) ? "NOT_SPECIFIED"_s : $($String::valueOf(format->getSampleRate())))}));
	}
	if ($nc(format)->getSampleSizeInBits() <= 0) {
		$throwNew($IllegalArgumentException, $$str({"invalid sample size in bits: "_s, ((format->getSampleSizeInBits() == -1) ? "NOT_SPECIFIED"_s : $($String::valueOf(format->getSampleSizeInBits())))}));
	}
	if ($nc(format)->getChannels() <= 0) {
		$throwNew($IllegalArgumentException, $$str({"invalid number of channels: "_s, ((format->getChannels() == -1) ? "NOT_SPECIFIED"_s : $($String::valueOf(format->getChannels())))}));
	}
}

bool Toolkit::isFullySpecifiedPCMFormat($AudioFormat* format) {
	$useLocalCurrentObjectStackCache();
	$init($AudioFormat$Encoding);
	bool var$0 = !$nc($($nc(format)->getEncoding()))->equals($AudioFormat$Encoding::PCM_SIGNED);
	if (var$0 && !$nc($(format->getEncoding()))->equals($AudioFormat$Encoding::PCM_UNSIGNED)) {
		return false;
	}
	bool var$4 = ($nc(format)->getFrameRate() <= 0);
	bool var$3 = var$4 || ($nc(format)->getSampleRate() <= 0);
	bool var$2 = var$3 || ($nc(format)->getSampleSizeInBits() <= 0);
	bool var$1 = var$2 || ($nc(format)->getFrameSize() <= 0);
	if (var$1 || ($nc(format)->getChannels() <= 0)) {
		return false;
	}
	return true;
}

$AudioInputStream* Toolkit::getPCMConvertedAudioInputStream($AudioInputStream* ais$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($AudioInputStream, ais, ais$renamed);
	$var($AudioFormat, af, $nc(ais)->getFormat());
	$init($AudioFormat$Encoding);
	bool var$0 = (!$nc($($nc(af)->getEncoding()))->equals($AudioFormat$Encoding::PCM_SIGNED));
	if (var$0 && (!$nc($(af->getEncoding()))->equals($AudioFormat$Encoding::PCM_UNSIGNED))) {
		try {
			$var($AudioFormat$Encoding, var$1, $AudioFormat$Encoding::PCM_SIGNED);
			float var$2 = af->getSampleRate();
			int32_t var$3 = af->getChannels();
			int32_t var$4 = af->getChannels() * 2;
			float var$5 = af->getSampleRate();
			$var($AudioFormat, newFormat, $new($AudioFormat, var$1, var$2, 16, var$3, var$4, var$5, $Platform::isBigEndian()));
			$assign(ais, $AudioSystem::getAudioInputStream(newFormat, ais));
		} catch ($Exception& e) {
			$init($Printer);
			if ($Printer::err$) {
				e->printStackTrace();
			}
			$assign(ais, nullptr);
		}
	}
	return ais;
}

Toolkit::Toolkit() {
}

$Class* Toolkit::load$($String* name, bool initialize) {
	$loadClass(Toolkit, name, initialize, &_Toolkit_ClassInfo_, allocate$Toolkit);
	return class$;
}

$Class* Toolkit::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com