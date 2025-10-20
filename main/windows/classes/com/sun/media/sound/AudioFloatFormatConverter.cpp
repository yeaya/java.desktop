#include <com/sun/media/sound/AudioFloatFormatConverter.h>

#include <com/sun/media/sound/AudioFloatConverter.h>
#include <com/sun/media/sound/AudioFloatFormatConverter$AudioFloatFormatConverterInputStream.h>
#include <com/sun/media/sound/AudioFloatFormatConverter$AudioFloatInputStreamChannelMixer.h>
#include <com/sun/media/sound/AudioFloatFormatConverter$AudioFloatInputStreamResampler.h>
#include <com/sun/media/sound/AudioFloatInputStream.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ArrayList.h>
#include <java/util/Objects.h>
#include <javax/sound/sampled/AudioFormat$Encoding.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/AudioInputStream.h>
#include <javax/sound/sampled/AudioSystem.h>
#include <javax/sound/sampled/spi/FormatConversionProvider.h>
#include <jcpp.h>

#undef NOT_SPECIFIED
#undef PCM_FLOAT
#undef PCM_SIGNED
#undef PCM_UNSIGNED

using $AudioFormat$EncodingArray = $Array<::javax::sound::sampled::AudioFormat$Encoding>;
using $AudioFormatArray = $Array<::javax::sound::sampled::AudioFormat>;
using $AudioFloatConverter = ::com::sun::media::sound::AudioFloatConverter;
using $AudioFloatFormatConverter$AudioFloatFormatConverterInputStream = ::com::sun::media::sound::AudioFloatFormatConverter$AudioFloatFormatConverterInputStream;
using $AudioFloatFormatConverter$AudioFloatInputStreamChannelMixer = ::com::sun::media::sound::AudioFloatFormatConverter$AudioFloatInputStreamChannelMixer;
using $AudioFloatFormatConverter$AudioFloatInputStreamResampler = ::com::sun::media::sound::AudioFloatFormatConverter$AudioFloatInputStreamResampler;
using $AudioFloatInputStream = ::com::sun::media::sound::AudioFloatInputStream;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $Objects = ::java::util::Objects;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $AudioFormat$Encoding = ::javax::sound::sampled::AudioFormat$Encoding;
using $AudioInputStream = ::javax::sound::sampled::AudioInputStream;
using $AudioSystem = ::javax::sound::sampled::AudioSystem;
using $FormatConversionProvider = ::javax::sound::sampled::spi::FormatConversionProvider;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _AudioFloatFormatConverter_FieldInfo_[] = {
	{"formats", "[Ljavax/sound/sampled/AudioFormat$Encoding;", nullptr, $PRIVATE | $FINAL, $field(AudioFloatFormatConverter, formats)},
	{}
};

$MethodInfo _AudioFloatFormatConverter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AudioFloatFormatConverter::*)()>(&AudioFloatFormatConverter::init$))},
	{"getAudioInputStream", "(Ljavax/sound/sampled/AudioFormat$Encoding;Ljavax/sound/sampled/AudioInputStream;)Ljavax/sound/sampled/AudioInputStream;", nullptr, $PUBLIC},
	{"getAudioInputStream", "(Ljavax/sound/sampled/AudioFormat;Ljavax/sound/sampled/AudioInputStream;)Ljavax/sound/sampled/AudioInputStream;", nullptr, $PUBLIC},
	{"getAudioInputStream", "(Ljavax/sound/sampled/AudioFormat;Lcom/sun/media/sound/AudioFloatInputStream;)Ljavax/sound/sampled/AudioInputStream;", nullptr, $PUBLIC, $method(static_cast<$AudioInputStream*(AudioFloatFormatConverter::*)($AudioFormat*,$AudioFloatInputStream*)>(&AudioFloatFormatConverter::getAudioInputStream))},
	{"getSourceEncodings", "()[Ljavax/sound/sampled/AudioFormat$Encoding;", nullptr, $PUBLIC},
	{"getTargetEncodings", "()[Ljavax/sound/sampled/AudioFormat$Encoding;", nullptr, $PUBLIC},
	{"getTargetEncodings", "(Ljavax/sound/sampled/AudioFormat;)[Ljavax/sound/sampled/AudioFormat$Encoding;", nullptr, $PUBLIC},
	{"getTargetFormats", "(Ljavax/sound/sampled/AudioFormat$Encoding;Ljavax/sound/sampled/AudioFormat;)[Ljavax/sound/sampled/AudioFormat;", nullptr, $PUBLIC},
	{"isConversionSupported", "(Ljavax/sound/sampled/AudioFormat;Ljavax/sound/sampled/AudioFormat;)Z", nullptr, $PUBLIC},
	{"isConversionSupported", "(Ljavax/sound/sampled/AudioFormat$Encoding;Ljavax/sound/sampled/AudioFormat;)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AudioFloatFormatConverter_InnerClassesInfo_[] = {
	{"com.sun.media.sound.AudioFloatFormatConverter$AudioFloatInputStreamResampler", "com.sun.media.sound.AudioFloatFormatConverter", "AudioFloatInputStreamResampler", $PRIVATE | $STATIC},
	{"com.sun.media.sound.AudioFloatFormatConverter$AudioFloatInputStreamChannelMixer", "com.sun.media.sound.AudioFloatFormatConverter", "AudioFloatInputStreamChannelMixer", $PRIVATE | $STATIC},
	{"com.sun.media.sound.AudioFloatFormatConverter$AudioFloatFormatConverterInputStream", "com.sun.media.sound.AudioFloatFormatConverter", "AudioFloatFormatConverterInputStream", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AudioFloatFormatConverter_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.AudioFloatFormatConverter",
	"javax.sound.sampled.spi.FormatConversionProvider",
	nullptr,
	_AudioFloatFormatConverter_FieldInfo_,
	_AudioFloatFormatConverter_MethodInfo_,
	nullptr,
	nullptr,
	_AudioFloatFormatConverter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.media.sound.AudioFloatFormatConverter$AudioFloatInputStreamResampler,com.sun.media.sound.AudioFloatFormatConverter$AudioFloatInputStreamChannelMixer,com.sun.media.sound.AudioFloatFormatConverter$AudioFloatFormatConverterInputStream"
};

$Object* allocate$AudioFloatFormatConverter($Class* clazz) {
	return $of($alloc(AudioFloatFormatConverter));
}

void AudioFloatFormatConverter::init$() {
	$FormatConversionProvider::init$();
		$init($AudioFormat$Encoding);
	$set(this, formats, $new($AudioFormat$EncodingArray, {
		$AudioFormat$Encoding::PCM_SIGNED,
		$AudioFormat$Encoding::PCM_UNSIGNED,
		$AudioFormat$Encoding::PCM_FLOAT
	}));
}

$AudioInputStream* AudioFloatFormatConverter::getAudioInputStream($AudioFormat$Encoding* targetEncoding, $AudioInputStream* sourceStream) {
	$useLocalCurrentObjectStackCache();
	if (!isConversionSupported(targetEncoding, $($nc(sourceStream)->getFormat()))) {
		$var($String, var$0, $$str({"Unsupported conversion: "_s, $($nc($($nc(sourceStream)->getFormat()))->toString()), " to "_s}));
		$throwNew($IllegalArgumentException, $$concat(var$0, $($nc(targetEncoding)->toString())));
	}
	if ($nc($($nc($($nc(sourceStream)->getFormat()))->getEncoding()))->equals(targetEncoding)) {
		return sourceStream;
	}
	$var($AudioFormat, format, $nc(sourceStream)->getFormat());
	int32_t channels = $nc(format)->getChannels();
	$var($AudioFormat$Encoding, encoding, targetEncoding);
	float samplerate = format->getSampleRate();
	int32_t bits = format->getSampleSizeInBits();
	bool bigendian = format->isBigEndian();
	if ($nc(targetEncoding)->equals($AudioFormat$Encoding::PCM_FLOAT)) {
		bits = 32;
	}
	$var($AudioFormat, targetFormat, $new($AudioFormat, encoding, samplerate, bits, channels, channels * bits / 8, samplerate, bigendian));
	return getAudioInputStream(targetFormat, sourceStream);
}

$AudioInputStream* AudioFloatFormatConverter::getAudioInputStream($AudioFormat* targetFormat, $AudioInputStream* sourceStream) {
	$useLocalCurrentObjectStackCache();
	if (!isConversionSupported(targetFormat, $($nc(sourceStream)->getFormat()))) {
		$var($String, var$0, $$str({"Unsupported conversion: "_s, $($nc($($nc(sourceStream)->getFormat()))->toString()), " to "_s}));
		$throwNew($IllegalArgumentException, $$concat(var$0, $($nc(targetFormat)->toString())));
	}
	return getAudioInputStream(targetFormat, $($AudioFloatInputStream::getInputStream(sourceStream)));
}

$AudioInputStream* AudioFloatFormatConverter::getAudioInputStream($AudioFormat* targetFormat, $AudioFloatInputStream* sourceStream$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($AudioFloatInputStream, sourceStream, sourceStream$renamed);
	if (!isConversionSupported(targetFormat, $($nc(sourceStream)->getFormat()))) {
		$var($String, var$0, $$str({"Unsupported conversion: "_s, $($nc($($nc(sourceStream)->getFormat()))->toString()), " to "_s}));
		$throwNew($IllegalArgumentException, $$concat(var$0, $($nc(targetFormat)->toString())));
	}
	int32_t var$1 = $nc(targetFormat)->getChannels();
	if (var$1 != $nc($($nc(sourceStream)->getFormat()))->getChannels()) {
		$assign(sourceStream, $new($AudioFloatFormatConverter$AudioFloatInputStreamChannelMixer, sourceStream, targetFormat->getChannels()));
	}
	float var$2 = $nc(targetFormat)->getSampleRate();
	if ($Math::abs(var$2 - $nc($($nc(sourceStream)->getFormat()))->getSampleRate()) > 1.0E-6) {
		$assign(sourceStream, $new($AudioFloatFormatConverter$AudioFloatInputStreamResampler, sourceStream, targetFormat));
	}
	$var($InputStream, var$3, static_cast<$InputStream*>($new($AudioFloatFormatConverter$AudioFloatFormatConverterInputStream, targetFormat, sourceStream)));
	$var($AudioFormat, var$4, targetFormat);
	return $new($AudioInputStream, var$3, var$4, $nc(sourceStream)->getFrameLength());
}

$AudioFormat$EncodingArray* AudioFloatFormatConverter::getSourceEncodings() {
		$init($AudioFormat$Encoding);
	return $new($AudioFormat$EncodingArray, {
		$AudioFormat$Encoding::PCM_SIGNED,
		$AudioFormat$Encoding::PCM_UNSIGNED,
		$AudioFormat$Encoding::PCM_FLOAT
	});
}

$AudioFormat$EncodingArray* AudioFloatFormatConverter::getTargetEncodings() {
	return getSourceEncodings();
}

$AudioFormat$EncodingArray* AudioFloatFormatConverter::getTargetEncodings($AudioFormat* sourceFormat) {
	if ($AudioFloatConverter::getConverter(sourceFormat) == nullptr) {
		return $new($AudioFormat$EncodingArray, 0);
	}
		$init($AudioFormat$Encoding);
	return $new($AudioFormat$EncodingArray, {
		$AudioFormat$Encoding::PCM_SIGNED,
		$AudioFormat$Encoding::PCM_UNSIGNED,
		$AudioFormat$Encoding::PCM_FLOAT
	});
}

$AudioFormatArray* AudioFloatFormatConverter::getTargetFormats($AudioFormat$Encoding* targetEncoding, $AudioFormat* sourceFormat) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(targetEncoding);
	if ($AudioFloatConverter::getConverter(sourceFormat) == nullptr) {
		return $new($AudioFormatArray, 0);
	}
	int32_t channels = $nc(sourceFormat)->getChannels();
	$var($ArrayList, formats, $new($ArrayList));
	$init($AudioFormat$Encoding);
	if (targetEncoding->equals($AudioFormat$Encoding::PCM_SIGNED)) {
		formats->add($$new($AudioFormat, $AudioFormat$Encoding::PCM_SIGNED, (float)$AudioSystem::NOT_SPECIFIED, 8, channels, channels, (float)$AudioSystem::NOT_SPECIFIED, false));
	}
	if (targetEncoding->equals($AudioFormat$Encoding::PCM_UNSIGNED)) {
		formats->add($$new($AudioFormat, $AudioFormat$Encoding::PCM_UNSIGNED, (float)$AudioSystem::NOT_SPECIFIED, 8, channels, channels, (float)$AudioSystem::NOT_SPECIFIED, false));
	}
	for (int32_t bits = 16; bits < 32; bits += 8) {
		if (targetEncoding->equals($AudioFormat$Encoding::PCM_SIGNED)) {
			formats->add($$new($AudioFormat, $AudioFormat$Encoding::PCM_SIGNED, (float)$AudioSystem::NOT_SPECIFIED, bits, channels, channels * bits / 8, (float)$AudioSystem::NOT_SPECIFIED, false));
			formats->add($$new($AudioFormat, $AudioFormat$Encoding::PCM_SIGNED, (float)$AudioSystem::NOT_SPECIFIED, bits, channels, channels * bits / 8, (float)$AudioSystem::NOT_SPECIFIED, true));
		}
		if (targetEncoding->equals($AudioFormat$Encoding::PCM_UNSIGNED)) {
			formats->add($$new($AudioFormat, $AudioFormat$Encoding::PCM_UNSIGNED, (float)$AudioSystem::NOT_SPECIFIED, bits, channels, channels * bits / 8, (float)$AudioSystem::NOT_SPECIFIED, true));
			formats->add($$new($AudioFormat, $AudioFormat$Encoding::PCM_UNSIGNED, (float)$AudioSystem::NOT_SPECIFIED, bits, channels, channels * bits / 8, (float)$AudioSystem::NOT_SPECIFIED, false));
		}
	}
	if (targetEncoding->equals($AudioFormat$Encoding::PCM_FLOAT)) {
		formats->add($$new($AudioFormat, $AudioFormat$Encoding::PCM_FLOAT, (float)$AudioSystem::NOT_SPECIFIED, 32, channels, channels * 4, (float)$AudioSystem::NOT_SPECIFIED, false));
		formats->add($$new($AudioFormat, $AudioFormat$Encoding::PCM_FLOAT, (float)$AudioSystem::NOT_SPECIFIED, 32, channels, channels * 4, (float)$AudioSystem::NOT_SPECIFIED, true));
		formats->add($$new($AudioFormat, $AudioFormat$Encoding::PCM_FLOAT, (float)$AudioSystem::NOT_SPECIFIED, 64, channels, channels * 8, (float)$AudioSystem::NOT_SPECIFIED, false));
		formats->add($$new($AudioFormat, $AudioFormat$Encoding::PCM_FLOAT, (float)$AudioSystem::NOT_SPECIFIED, 64, channels, channels * 8, (float)$AudioSystem::NOT_SPECIFIED, true));
	}
	return $fcast($AudioFormatArray, formats->toArray($$new($AudioFormatArray, formats->size())));
}

bool AudioFloatFormatConverter::isConversionSupported($AudioFormat* targetFormat, $AudioFormat* sourceFormat) {
	$Objects::requireNonNull(targetFormat);
	if ($AudioFloatConverter::getConverter(sourceFormat) == nullptr) {
		return false;
	}
	if ($AudioFloatConverter::getConverter(targetFormat) == nullptr) {
		return false;
	}
	if ($nc(sourceFormat)->getChannels() <= 0) {
		return false;
	}
	if (targetFormat->getChannels() <= 0) {
		return false;
	}
	return true;
}

bool AudioFloatFormatConverter::isConversionSupported($AudioFormat$Encoding* targetEncoding, $AudioFormat* sourceFormat) {
	$Objects::requireNonNull(targetEncoding);
	if ($AudioFloatConverter::getConverter(sourceFormat) == nullptr) {
		return false;
	}
	for (int32_t i = 0; i < $nc(this->formats)->length; ++i) {
		if (targetEncoding->equals($nc(this->formats)->get(i))) {
			return true;
		}
	}
	return false;
}

AudioFloatFormatConverter::AudioFloatFormatConverter() {
}

$Class* AudioFloatFormatConverter::load$($String* name, bool initialize) {
	$loadClass(AudioFloatFormatConverter, name, initialize, &_AudioFloatFormatConverter_ClassInfo_, allocate$AudioFloatFormatConverter);
	return class$;
}

$Class* AudioFloatFormatConverter::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com