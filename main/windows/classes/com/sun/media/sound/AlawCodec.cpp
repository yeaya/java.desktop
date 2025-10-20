#include <com/sun/media/sound/AlawCodec.h>

#include <com/sun/media/sound/AlawCodec$AlawCodecStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Objects.h>
#include <java/util/Vector.h>
#include <javax/sound/sampled/AudioFormat$Encoding.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/AudioInputStream.h>
#include <javax/sound/sampled/spi/FormatConversionProvider.h>
#include <jcpp.h>

#undef ALAW
#undef ALAW_TABH
#undef ALAW_TABL
#undef PCM_SIGNED

using $AudioFormat$EncodingArray = $Array<::javax::sound::sampled::AudioFormat$Encoding>;
using $AudioFormatArray = $Array<::javax::sound::sampled::AudioFormat>;
using $AlawCodec$AlawCodecStream = ::com::sun::media::sound::AlawCodec$AlawCodecStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;
using $Vector = ::java::util::Vector;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $AudioFormat$Encoding = ::javax::sound::sampled::AudioFormat$Encoding;
using $AudioInputStream = ::javax::sound::sampled::AudioInputStream;
using $FormatConversionProvider = ::javax::sound::sampled::spi::FormatConversionProvider;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _AlawCodec_FieldInfo_[] = {
	{"ALAW_TABH", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AlawCodec, ALAW_TABH)},
	{"ALAW_TABL", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AlawCodec, ALAW_TABL)},
	{"seg_end", "[S", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AlawCodec, seg_end)},
	{}
};

$MethodInfo _AlawCodec_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AlawCodec::*)()>(&AlawCodec::init$))},
	{"getAudioInputStream", "(Ljavax/sound/sampled/AudioFormat$Encoding;Ljavax/sound/sampled/AudioInputStream;)Ljavax/sound/sampled/AudioInputStream;", nullptr, $PUBLIC},
	{"getAudioInputStream", "(Ljavax/sound/sampled/AudioFormat;Ljavax/sound/sampled/AudioInputStream;)Ljavax/sound/sampled/AudioInputStream;", nullptr, $PUBLIC},
	{"getConvertedStream", "(Ljavax/sound/sampled/AudioFormat;Ljavax/sound/sampled/AudioInputStream;)Ljavax/sound/sampled/AudioInputStream;", nullptr, $PRIVATE, $method(static_cast<$AudioInputStream*(AlawCodec::*)($AudioFormat*,$AudioInputStream*)>(&AlawCodec::getConvertedStream))},
	{"getOutputFormats", "(Ljavax/sound/sampled/AudioFormat;)[Ljavax/sound/sampled/AudioFormat;", nullptr, $PRIVATE, $method(static_cast<$AudioFormatArray*(AlawCodec::*)($AudioFormat*)>(&AlawCodec::getOutputFormats))},
	{"getSourceEncodings", "()[Ljavax/sound/sampled/AudioFormat$Encoding;", nullptr, $PUBLIC},
	{"getTargetEncodings", "()[Ljavax/sound/sampled/AudioFormat$Encoding;", nullptr, $PUBLIC},
	{"getTargetEncodings", "(Ljavax/sound/sampled/AudioFormat;)[Ljavax/sound/sampled/AudioFormat$Encoding;", nullptr, $PUBLIC},
	{"getTargetFormats", "(Ljavax/sound/sampled/AudioFormat$Encoding;Ljavax/sound/sampled/AudioFormat;)[Ljavax/sound/sampled/AudioFormat;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AlawCodec_InnerClassesInfo_[] = {
	{"com.sun.media.sound.AlawCodec$AlawCodecStream", "com.sun.media.sound.AlawCodec", "AlawCodecStream", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _AlawCodec_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.AlawCodec",
	"javax.sound.sampled.spi.FormatConversionProvider",
	nullptr,
	_AlawCodec_FieldInfo_,
	_AlawCodec_MethodInfo_,
	nullptr,
	nullptr,
	_AlawCodec_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.media.sound.AlawCodec$AlawCodecStream"
};

$Object* allocate$AlawCodec($Class* clazz) {
	return $of($alloc(AlawCodec));
}

$bytes* AlawCodec::ALAW_TABH = nullptr;
$bytes* AlawCodec::ALAW_TABL = nullptr;
$shorts* AlawCodec::seg_end = nullptr;

void AlawCodec::init$() {
	$FormatConversionProvider::init$();
}

$AudioFormat$EncodingArray* AlawCodec::getSourceEncodings() {
		$init($AudioFormat$Encoding);
	return $new($AudioFormat$EncodingArray, {
		$AudioFormat$Encoding::ALAW,
		$AudioFormat$Encoding::PCM_SIGNED
	});
}

$AudioFormat$EncodingArray* AlawCodec::getTargetEncodings() {
	return getSourceEncodings();
}

$AudioFormat$EncodingArray* AlawCodec::getTargetEncodings($AudioFormat* sourceFormat) {
	$useLocalCurrentObjectStackCache();
	$init($AudioFormat$Encoding);
	if ($nc($($nc(sourceFormat)->getEncoding()))->equals($AudioFormat$Encoding::PCM_SIGNED)) {
		if (sourceFormat->getSampleSizeInBits() == 16) {
			$var($AudioFormat$EncodingArray, enc, $new($AudioFormat$EncodingArray, 1));
			enc->set(0, $AudioFormat$Encoding::ALAW);
			return enc;
		} else {
			return $new($AudioFormat$EncodingArray, 0);
		}
	} else {
		if ($nc($(sourceFormat->getEncoding()))->equals($AudioFormat$Encoding::ALAW)) {
			if (sourceFormat->getSampleSizeInBits() == 8) {
				$var($AudioFormat$EncodingArray, enc, $new($AudioFormat$EncodingArray, 1));
				enc->set(0, $AudioFormat$Encoding::PCM_SIGNED);
				return enc;
			} else {
				return $new($AudioFormat$EncodingArray, 0);
			}
		} else {
			return $new($AudioFormat$EncodingArray, 0);
		}
	}
}

$AudioFormatArray* AlawCodec::getTargetFormats($AudioFormat$Encoding* targetEncoding, $AudioFormat* sourceFormat) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(sourceFormat);
	$init($AudioFormat$Encoding);
	bool var$1 = $nc(targetEncoding)->equals($AudioFormat$Encoding::PCM_SIGNED);
	bool var$0 = (var$1 && $nc($(sourceFormat->getEncoding()))->equals($AudioFormat$Encoding::ALAW));
	if (!var$0) {
		bool var$2 = $nc(targetEncoding)->equals($AudioFormat$Encoding::ALAW);
		var$0 = (var$2 && $nc($(sourceFormat->getEncoding()))->equals($AudioFormat$Encoding::PCM_SIGNED));
	}
	if (var$0) {
		return getOutputFormats(sourceFormat);
	} else {
		return $new($AudioFormatArray, 0);
	}
}

$AudioInputStream* AlawCodec::getAudioInputStream($AudioFormat$Encoding* targetEncoding, $AudioInputStream* sourceStream) {
	$useLocalCurrentObjectStackCache();
	$var($AudioFormat, sourceFormat, $nc(sourceStream)->getFormat());
	$var($AudioFormat$Encoding, sourceEncoding, $nc(sourceFormat)->getEncoding());
	if (!isConversionSupported(targetEncoding, $(sourceStream->getFormat()))) {
		$var($String, var$0, $$str({"Unsupported conversion: "_s, $($nc($(sourceStream->getFormat()))->toString()), " to "_s}));
		$throwNew($IllegalArgumentException, $$concat(var$0, $($nc(targetEncoding)->toString())));
	}
	if ($nc(sourceEncoding)->equals(targetEncoding)) {
		return sourceStream;
	}
	$var($AudioFormat, targetFormat, nullptr);
	bool var$1 = $nc(sourceEncoding)->equals($AudioFormat$Encoding::ALAW);
	if (var$1 && $nc(targetEncoding)->equals($AudioFormat$Encoding::PCM_SIGNED)) {
		$var($AudioFormat$Encoding, var$2, targetEncoding);
		float var$3 = sourceFormat->getSampleRate();
		int32_t var$4 = sourceFormat->getChannels();
		int32_t var$5 = 2 * sourceFormat->getChannels();
		float var$6 = sourceFormat->getSampleRate();
		$assign(targetFormat, $new($AudioFormat, var$2, var$3, 16, var$4, var$5, var$6, sourceFormat->isBigEndian()));
	} else {
		bool var$8 = sourceEncoding->equals($AudioFormat$Encoding::PCM_SIGNED);
		if (var$8 && targetEncoding->equals($AudioFormat$Encoding::ALAW)) {
			$var($AudioFormat$Encoding, var$9, targetEncoding);
			float var$10 = sourceFormat->getSampleRate();
			int32_t var$11 = sourceFormat->getChannels();
			int32_t var$12 = sourceFormat->getChannels();
			$assign(targetFormat, $new($AudioFormat, var$9, var$10, 8, var$11, var$12, sourceFormat->getSampleRate(), false));
		} else {
			$var($String, var$13, $$str({"Unsupported conversion: "_s, $($nc($(sourceStream->getFormat()))->toString()), " to "_s}));
			$throwNew($IllegalArgumentException, $$concat(var$13, $(targetEncoding->toString())));
		}
	}
	return getConvertedStream(targetFormat, sourceStream);
}

$AudioInputStream* AlawCodec::getAudioInputStream($AudioFormat* targetFormat, $AudioInputStream* sourceStream) {
	$useLocalCurrentObjectStackCache();
	if (!isConversionSupported(targetFormat, $($nc(sourceStream)->getFormat()))) {
		$var($String, var$0, $$str({"Unsupported conversion: "_s, $($nc($($nc(sourceStream)->getFormat()))->toString()), " to "_s}));
		$throwNew($IllegalArgumentException, $$concat(var$0, $($nc(targetFormat)->toString())));
	}
	return getConvertedStream(targetFormat, sourceStream);
}

$AudioInputStream* AlawCodec::getConvertedStream($AudioFormat* outputFormat, $AudioInputStream* stream) {
	$useLocalCurrentObjectStackCache();
	$var($AudioInputStream, cs, nullptr);
	$var($AudioFormat, inputFormat, $nc(stream)->getFormat());
	if ($nc(inputFormat)->matches(outputFormat)) {
		$assign(cs, stream);
	} else {
		$assign(cs, $new($AlawCodec$AlawCodecStream, this, stream, outputFormat));
	}
	return cs;
}

$AudioFormatArray* AlawCodec::getOutputFormats($AudioFormat* inputFormat) {
	$useLocalCurrentObjectStackCache();
	$var($Vector, formats, $new($Vector));
	$var($AudioFormat, format, nullptr);
	bool var$0 = $nc(inputFormat)->getSampleSizeInBits() == 16;
	$init($AudioFormat$Encoding);
	if (var$0 && $nc($AudioFormat$Encoding::PCM_SIGNED)->equals($(inputFormat->getEncoding()))) {
		$var($AudioFormat$Encoding, var$1, $AudioFormat$Encoding::ALAW);
		float var$2 = inputFormat->getSampleRate();
		int32_t var$3 = inputFormat->getChannels();
		int32_t var$4 = inputFormat->getChannels();
		$assign(format, $new($AudioFormat, var$1, var$2, 8, var$3, var$4, inputFormat->getSampleRate(), false));
		formats->addElement(format);
	}
	bool var$5 = $nc(inputFormat)->getSampleSizeInBits() == 8;
	if (var$5 && $nc($AudioFormat$Encoding::ALAW)->equals($(inputFormat->getEncoding()))) {
		$var($AudioFormat$Encoding, var$6, $AudioFormat$Encoding::PCM_SIGNED);
		float var$7 = inputFormat->getSampleRate();
		int32_t var$8 = inputFormat->getChannels();
		int32_t var$9 = inputFormat->getChannels() * 2;
		$assign(format, $new($AudioFormat, var$6, var$7, 16, var$8, var$9, inputFormat->getSampleRate(), false));
		formats->addElement(format);
		$var($AudioFormat$Encoding, var$10, $AudioFormat$Encoding::PCM_SIGNED);
		float var$11 = inputFormat->getSampleRate();
		int32_t var$12 = inputFormat->getChannels();
		int32_t var$13 = inputFormat->getChannels() * 2;
		$assign(format, $new($AudioFormat, var$10, var$11, 16, var$12, var$13, inputFormat->getSampleRate(), true));
		formats->addElement(format);
	}
	$var($AudioFormatArray, formatArray, $new($AudioFormatArray, formats->size()));
	for (int32_t i = 0; i < formatArray->length; ++i) {
		formatArray->set(i, $cast($AudioFormat, $(formats->elementAt(i))));
	}
	return formatArray;
}

void clinit$AlawCodec($Class* class$) {
	$assignStatic(AlawCodec::ALAW_TABH, $new($bytes, 256));
	$assignStatic(AlawCodec::ALAW_TABL, $new($bytes, 256));
	$assignStatic(AlawCodec::seg_end, $new($shorts, {
		(int16_t)255,
		(int16_t)511,
		(int16_t)1023,
		(int16_t)2047,
		(int16_t)4095,
		(int16_t)8191,
		(int16_t)16383,
		(int16_t)32767
	}));
	{
		for (int32_t i = 0; i < 256; ++i) {
			int32_t input = i ^ 85;
			int32_t mantissa = ((int32_t)(input & (uint32_t)15)) << 4;
			int32_t segment = ((int32_t)(input & (uint32_t)112)) >> 4;
			int32_t value = mantissa + 8;
			if (segment >= 1) {
				value += 256;
			}
			if (segment > 1) {
				value <<= (segment - 1);
			}
			if (((int32_t)(input & (uint32_t)128)) == 0) {
				value = -value;
			}
			$nc(AlawCodec::ALAW_TABL)->set(i, (int8_t)value);
			$nc(AlawCodec::ALAW_TABH)->set(i, (int8_t)(value >> 8));
		}
	}
}

AlawCodec::AlawCodec() {
}

$Class* AlawCodec::load$($String* name, bool initialize) {
	$loadClass(AlawCodec, name, initialize, &_AlawCodec_ClassInfo_, clinit$AlawCodec, allocate$AlawCodec);
	return class$;
}

$Class* AlawCodec::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com