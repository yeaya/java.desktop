#include <com/sun/media/sound/UlawCodec.h>

#include <com/sun/media/sound/UlawCodec$UlawCodecStream.h>
#include <java/util/Objects.h>
#include <java/util/Vector.h>
#include <javax/sound/sampled/AudioFormat$Encoding.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/AudioInputStream.h>
#include <javax/sound/sampled/spi/FormatConversionProvider.h>
#include <jcpp.h>

#undef PCM_SIGNED
#undef ULAW
#undef ULAW_TABH
#undef ULAW_TABL

using $AudioFormat$EncodingArray = $Array<::javax::sound::sampled::AudioFormat$Encoding>;
using $AudioFormatArray = $Array<::javax::sound::sampled::AudioFormat>;
using $UlawCodec$UlawCodecStream = ::com::sun::media::sound::UlawCodec$UlawCodecStream;
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

$FieldInfo _UlawCodec_FieldInfo_[] = {
	{"ULAW_TABH", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(UlawCodec, ULAW_TABH)},
	{"ULAW_TABL", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(UlawCodec, ULAW_TABL)},
	{"seg_end", "[S", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(UlawCodec, seg_end)},
	{}
};

$MethodInfo _UlawCodec_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(UlawCodec::*)()>(&UlawCodec::init$))},
	{"getAudioInputStream", "(Ljavax/sound/sampled/AudioFormat$Encoding;Ljavax/sound/sampled/AudioInputStream;)Ljavax/sound/sampled/AudioInputStream;", nullptr, $PUBLIC},
	{"getAudioInputStream", "(Ljavax/sound/sampled/AudioFormat;Ljavax/sound/sampled/AudioInputStream;)Ljavax/sound/sampled/AudioInputStream;", nullptr, $PUBLIC},
	{"getConvertedStream", "(Ljavax/sound/sampled/AudioFormat;Ljavax/sound/sampled/AudioInputStream;)Ljavax/sound/sampled/AudioInputStream;", nullptr, $PRIVATE, $method(static_cast<$AudioInputStream*(UlawCodec::*)($AudioFormat*,$AudioInputStream*)>(&UlawCodec::getConvertedStream))},
	{"getOutputFormats", "(Ljavax/sound/sampled/AudioFormat;)[Ljavax/sound/sampled/AudioFormat;", nullptr, $PRIVATE, $method(static_cast<$AudioFormatArray*(UlawCodec::*)($AudioFormat*)>(&UlawCodec::getOutputFormats))},
	{"getSourceEncodings", "()[Ljavax/sound/sampled/AudioFormat$Encoding;", nullptr, $PUBLIC},
	{"getTargetEncodings", "()[Ljavax/sound/sampled/AudioFormat$Encoding;", nullptr, $PUBLIC},
	{"getTargetEncodings", "(Ljavax/sound/sampled/AudioFormat;)[Ljavax/sound/sampled/AudioFormat$Encoding;", nullptr, $PUBLIC},
	{"getTargetFormats", "(Ljavax/sound/sampled/AudioFormat$Encoding;Ljavax/sound/sampled/AudioFormat;)[Ljavax/sound/sampled/AudioFormat;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _UlawCodec_InnerClassesInfo_[] = {
	{"com.sun.media.sound.UlawCodec$UlawCodecStream", "com.sun.media.sound.UlawCodec", "UlawCodecStream", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _UlawCodec_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.UlawCodec",
	"javax.sound.sampled.spi.FormatConversionProvider",
	nullptr,
	_UlawCodec_FieldInfo_,
	_UlawCodec_MethodInfo_,
	nullptr,
	nullptr,
	_UlawCodec_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.media.sound.UlawCodec$UlawCodecStream"
};

$Object* allocate$UlawCodec($Class* clazz) {
	return $of($alloc(UlawCodec));
}

$bytes* UlawCodec::ULAW_TABH = nullptr;
$bytes* UlawCodec::ULAW_TABL = nullptr;
$shorts* UlawCodec::seg_end = nullptr;

void UlawCodec::init$() {
	$FormatConversionProvider::init$();
}

$AudioFormat$EncodingArray* UlawCodec::getSourceEncodings() {
	$init($AudioFormat$Encoding);
	return $new($AudioFormat$EncodingArray, {
		$AudioFormat$Encoding::ULAW,
		$AudioFormat$Encoding::PCM_SIGNED
	});
}

$AudioFormat$EncodingArray* UlawCodec::getTargetEncodings() {
	return getSourceEncodings();
}

$AudioFormat$EncodingArray* UlawCodec::getTargetEncodings($AudioFormat* sourceFormat) {
	$useLocalCurrentObjectStackCache();
	$init($AudioFormat$Encoding);
	if ($nc($AudioFormat$Encoding::PCM_SIGNED)->equals($($nc(sourceFormat)->getEncoding()))) {
		if ($nc(sourceFormat)->getSampleSizeInBits() == 16) {
			$var($AudioFormat$EncodingArray, enc, $new($AudioFormat$EncodingArray, 1));
			enc->set(0, $AudioFormat$Encoding::ULAW);
			return enc;
		} else {
			return $new($AudioFormat$EncodingArray, 0);
		}
	} else {
		if ($nc($AudioFormat$Encoding::ULAW)->equals($($nc(sourceFormat)->getEncoding()))) {
			if ($nc(sourceFormat)->getSampleSizeInBits() == 8) {
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

$AudioFormatArray* UlawCodec::getTargetFormats($AudioFormat$Encoding* targetEncoding, $AudioFormat* sourceFormat) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(targetEncoding);
	$Objects::requireNonNull(sourceFormat);
	$init($AudioFormat$Encoding);
	bool var$1 = $nc($AudioFormat$Encoding::PCM_SIGNED)->equals(targetEncoding);
	bool var$0 = (var$1 && $nc($AudioFormat$Encoding::ULAW)->equals($(sourceFormat->getEncoding())));
	if (!var$0) {
		bool var$2 = $nc($AudioFormat$Encoding::ULAW)->equals(targetEncoding);
		var$0 = (var$2 && $nc($AudioFormat$Encoding::PCM_SIGNED)->equals($(sourceFormat->getEncoding())));
	}
	if (var$0) {
		return getOutputFormats(sourceFormat);
	} else {
		return $new($AudioFormatArray, 0);
	}
}

$AudioInputStream* UlawCodec::getAudioInputStream($AudioFormat$Encoding* targetEncoding, $AudioInputStream* sourceStream) {
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
	bool var$1 = $nc($AudioFormat$Encoding::ULAW)->equals(sourceEncoding);
	if (var$1 && $nc($AudioFormat$Encoding::PCM_SIGNED)->equals(targetEncoding)) {
		$var($AudioFormat$Encoding, var$2, targetEncoding);
		float var$3 = sourceFormat->getSampleRate();
		int32_t var$4 = sourceFormat->getChannels();
		int32_t var$5 = 2 * sourceFormat->getChannels();
		float var$6 = sourceFormat->getSampleRate();
		$assign(targetFormat, $new($AudioFormat, var$2, var$3, 16, var$4, var$5, var$6, sourceFormat->isBigEndian()));
	} else {
		bool var$8 = $nc($AudioFormat$Encoding::PCM_SIGNED)->equals(sourceEncoding);
		if (var$8 && $nc($AudioFormat$Encoding::ULAW)->equals(targetEncoding)) {
			$var($AudioFormat$Encoding, var$9, targetEncoding);
			float var$10 = sourceFormat->getSampleRate();
			int32_t var$11 = sourceFormat->getChannels();
			int32_t var$12 = sourceFormat->getChannels();
			$assign(targetFormat, $new($AudioFormat, var$9, var$10, 8, var$11, var$12, sourceFormat->getSampleRate(), false));
		} else {
			$var($String, var$13, $$str({"Unsupported conversion: "_s, $($nc($(sourceStream->getFormat()))->toString()), " to "_s}));
			$throwNew($IllegalArgumentException, $$concat(var$13, $($nc(targetEncoding)->toString())));
		}
	}
	return getConvertedStream(targetFormat, sourceStream);
}

$AudioInputStream* UlawCodec::getAudioInputStream($AudioFormat* targetFormat, $AudioInputStream* sourceStream) {
	$useLocalCurrentObjectStackCache();
	if (!isConversionSupported(targetFormat, $($nc(sourceStream)->getFormat()))) {
		$var($String, var$0, $$str({"Unsupported conversion: "_s, $($nc($($nc(sourceStream)->getFormat()))->toString()), " to "_s}));
		$throwNew($IllegalArgumentException, $$concat(var$0, $($nc(targetFormat)->toString())));
	}
	return getConvertedStream(targetFormat, sourceStream);
}

$AudioInputStream* UlawCodec::getConvertedStream($AudioFormat* outputFormat, $AudioInputStream* stream) {
	$useLocalCurrentObjectStackCache();
	$var($AudioInputStream, cs, nullptr);
	$var($AudioFormat, inputFormat, $nc(stream)->getFormat());
	if ($nc(inputFormat)->matches(outputFormat)) {
		$assign(cs, stream);
	} else {
		$assign(cs, $new($UlawCodec$UlawCodecStream, this, stream, outputFormat));
	}
	return cs;
}

$AudioFormatArray* UlawCodec::getOutputFormats($AudioFormat* inputFormat) {
	$useLocalCurrentObjectStackCache();
	$var($Vector, formats, $new($Vector));
	$var($AudioFormat, format, nullptr);
	bool var$0 = ($nc(inputFormat)->getSampleSizeInBits() == 16);
	$init($AudioFormat$Encoding);
	if (var$0 && $nc($AudioFormat$Encoding::PCM_SIGNED)->equals($(inputFormat->getEncoding()))) {
		$var($AudioFormat$Encoding, var$1, $AudioFormat$Encoding::ULAW);
		float var$2 = inputFormat->getSampleRate();
		int32_t var$3 = inputFormat->getChannels();
		int32_t var$4 = inputFormat->getChannels();
		$assign(format, $new($AudioFormat, var$1, var$2, 8, var$3, var$4, inputFormat->getSampleRate(), false));
		formats->addElement(format);
	}
	bool var$5 = $nc(inputFormat)->getSampleSizeInBits() == 8;
	if (var$5 && $nc($AudioFormat$Encoding::ULAW)->equals($(inputFormat->getEncoding()))) {
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

void clinit$UlawCodec($Class* class$) {
	$assignStatic(UlawCodec::ULAW_TABH, $new($bytes, 256));
	$assignStatic(UlawCodec::ULAW_TABL, $new($bytes, 256));
	$assignStatic(UlawCodec::seg_end, $new($shorts, {
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
			int32_t ulaw = ~i;
			int32_t t = 0;
			ulaw &= (uint32_t)255;
			t = (((int32_t)(ulaw & (uint32_t)15)) << 3) + 132;
			t <<= (((int32_t)(ulaw & (uint32_t)112)) >> 4);
			t = (((int32_t)(ulaw & (uint32_t)128)) != 0) ? (132 - t) : (t - 132);
			$nc(UlawCodec::ULAW_TABL)->set(i, (int8_t)((int32_t)(t & (uint32_t)255)));
			$nc(UlawCodec::ULAW_TABH)->set(i, (int8_t)((int32_t)((t >> 8) & (uint32_t)255)));
		}
	}
}

UlawCodec::UlawCodec() {
}

$Class* UlawCodec::load$($String* name, bool initialize) {
	$loadClass(UlawCodec, name, initialize, &_UlawCodec_ClassInfo_, clinit$UlawCodec, allocate$UlawCodec);
	return class$;
}

$Class* UlawCodec::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com