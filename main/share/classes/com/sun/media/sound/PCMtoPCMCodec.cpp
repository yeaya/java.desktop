#include <com/sun/media/sound/PCMtoPCMCodec.h>

#include <com/sun/media/sound/PCMtoPCMCodec$PCMtoPCMCodecStream.h>
#include <java/util/Objects.h>
#include <java/util/Vector.h>
#include <javax/sound/sampled/AudioFormat$Encoding.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/AudioInputStream.h>
#include <javax/sound/sampled/spi/FormatConversionProvider.h>
#include <jcpp.h>

#undef PCM_SIGNED
#undef PCM_UNSIGNED

using $AudioFormat$EncodingArray = $Array<::javax::sound::sampled::AudioFormat$Encoding>;
using $AudioFormatArray = $Array<::javax::sound::sampled::AudioFormat>;
using $PCMtoPCMCodec$PCMtoPCMCodecStream = ::com::sun::media::sound::PCMtoPCMCodec$PCMtoPCMCodecStream;
using $ClassInfo = ::java::lang::ClassInfo;
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

$MethodInfo _PCMtoPCMCodec_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PCMtoPCMCodec::*)()>(&PCMtoPCMCodec::init$))},
	{"getAudioInputStream", "(Ljavax/sound/sampled/AudioFormat$Encoding;Ljavax/sound/sampled/AudioInputStream;)Ljavax/sound/sampled/AudioInputStream;", nullptr, $PUBLIC},
	{"getAudioInputStream", "(Ljavax/sound/sampled/AudioFormat;Ljavax/sound/sampled/AudioInputStream;)Ljavax/sound/sampled/AudioInputStream;", nullptr, $PUBLIC},
	{"getConvertedStream", "(Ljavax/sound/sampled/AudioFormat;Ljavax/sound/sampled/AudioInputStream;)Ljavax/sound/sampled/AudioInputStream;", nullptr, $PRIVATE, $method(static_cast<$AudioInputStream*(PCMtoPCMCodec::*)($AudioFormat*,$AudioInputStream*)>(&PCMtoPCMCodec::getConvertedStream))},
	{"getOutputFormats", "(Ljavax/sound/sampled/AudioFormat;)[Ljavax/sound/sampled/AudioFormat;", nullptr, $PRIVATE, $method(static_cast<$AudioFormatArray*(PCMtoPCMCodec::*)($AudioFormat*)>(&PCMtoPCMCodec::getOutputFormats))},
	{"getSourceEncodings", "()[Ljavax/sound/sampled/AudioFormat$Encoding;", nullptr, $PUBLIC},
	{"getTargetEncodings", "()[Ljavax/sound/sampled/AudioFormat$Encoding;", nullptr, $PUBLIC},
	{"getTargetEncodings", "(Ljavax/sound/sampled/AudioFormat;)[Ljavax/sound/sampled/AudioFormat$Encoding;", nullptr, $PUBLIC},
	{"getTargetFormats", "(Ljavax/sound/sampled/AudioFormat$Encoding;Ljavax/sound/sampled/AudioFormat;)[Ljavax/sound/sampled/AudioFormat;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PCMtoPCMCodec_InnerClassesInfo_[] = {
	{"com.sun.media.sound.PCMtoPCMCodec$PCMtoPCMCodecStream", "com.sun.media.sound.PCMtoPCMCodec", "PCMtoPCMCodecStream", 0},
	{}
};

$ClassInfo _PCMtoPCMCodec_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.PCMtoPCMCodec",
	"javax.sound.sampled.spi.FormatConversionProvider",
	nullptr,
	nullptr,
	_PCMtoPCMCodec_MethodInfo_,
	nullptr,
	nullptr,
	_PCMtoPCMCodec_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.media.sound.PCMtoPCMCodec$PCMtoPCMCodecStream"
};

$Object* allocate$PCMtoPCMCodec($Class* clazz) {
	return $of($alloc(PCMtoPCMCodec));
}

void PCMtoPCMCodec::init$() {
	$FormatConversionProvider::init$();
}

$AudioFormat$EncodingArray* PCMtoPCMCodec::getSourceEncodings() {
	$init($AudioFormat$Encoding);
	return $new($AudioFormat$EncodingArray, {
		$AudioFormat$Encoding::PCM_SIGNED,
		$AudioFormat$Encoding::PCM_UNSIGNED
	});
}

$AudioFormat$EncodingArray* PCMtoPCMCodec::getTargetEncodings() {
	return getSourceEncodings();
}

$AudioFormat$EncodingArray* PCMtoPCMCodec::getTargetEncodings($AudioFormat* sourceFormat) {
	int32_t sampleSize = $nc(sourceFormat)->getSampleSizeInBits();
	$var($AudioFormat$Encoding, encoding, sourceFormat->getEncoding());
	if (sampleSize == 8) {
		$init($AudioFormat$Encoding);
		if ($nc(encoding)->equals($AudioFormat$Encoding::PCM_SIGNED)) {
			return $new($AudioFormat$EncodingArray, {$AudioFormat$Encoding::PCM_UNSIGNED});
		}
		if ($nc(encoding)->equals($AudioFormat$Encoding::PCM_UNSIGNED)) {
			return $new($AudioFormat$EncodingArray, {$AudioFormat$Encoding::PCM_SIGNED});
		}
	} else if (sampleSize == 16) {
		$init($AudioFormat$Encoding);
		bool var$0 = $nc(encoding)->equals($AudioFormat$Encoding::PCM_SIGNED);
		if (var$0 || $nc(encoding)->equals($AudioFormat$Encoding::PCM_UNSIGNED)) {
			return $new($AudioFormat$EncodingArray, {
				$AudioFormat$Encoding::PCM_UNSIGNED,
				$AudioFormat$Encoding::PCM_SIGNED
			});
		}
	}
	return $new($AudioFormat$EncodingArray, 0);
}

$AudioFormatArray* PCMtoPCMCodec::getTargetFormats($AudioFormat$Encoding* targetEncoding, $AudioFormat* sourceFormat) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(targetEncoding);
	$var($AudioFormatArray, formats, getOutputFormats(sourceFormat));
	$var($Vector, newFormats, $new($Vector));
	for (int32_t i = 0; i < $nc(formats)->length; ++i) {
		if ($nc($($nc(formats->get(i))->getEncoding()))->equals(targetEncoding)) {
			newFormats->addElement(formats->get(i));
		}
	}
	$var($AudioFormatArray, formatArray, $new($AudioFormatArray, newFormats->size()));
	for (int32_t i = 0; i < formatArray->length; ++i) {
		formatArray->set(i, $cast($AudioFormat, $(newFormats->elementAt(i))));
	}
	return formatArray;
}

$AudioInputStream* PCMtoPCMCodec::getAudioInputStream($AudioFormat$Encoding* targetEncoding, $AudioInputStream* sourceStream) {
	$useLocalCurrentObjectStackCache();
	if (isConversionSupported(targetEncoding, $($nc(sourceStream)->getFormat()))) {
		$var($AudioFormat, sourceFormat, $nc(sourceStream)->getFormat());
		$var($AudioFormat$Encoding, var$0, targetEncoding);
		float var$1 = $nc(sourceFormat)->getSampleRate();
		int32_t var$2 = sourceFormat->getSampleSizeInBits();
		int32_t var$3 = sourceFormat->getChannels();
		int32_t var$4 = sourceFormat->getFrameSize();
		float var$5 = sourceFormat->getFrameRate();
		$var($AudioFormat, targetFormat, $new($AudioFormat, var$0, var$1, var$2, var$3, var$4, var$5, sourceFormat->isBigEndian()));
		return getConvertedStream(targetFormat, sourceStream);
	} else {
		$var($String, var$6, $$str({"Unsupported conversion: "_s, $($nc($($nc(sourceStream)->getFormat()))->toString()), " to "_s}));
		$throwNew($IllegalArgumentException, $$concat(var$6, $($nc(targetEncoding)->toString())));
	}
}

$AudioInputStream* PCMtoPCMCodec::getAudioInputStream($AudioFormat* targetFormat, $AudioInputStream* sourceStream) {
	$useLocalCurrentObjectStackCache();
	if (!isConversionSupported(targetFormat, $($nc(sourceStream)->getFormat()))) {
		$var($String, var$0, $$str({"Unsupported conversion: "_s, $($nc($($nc(sourceStream)->getFormat()))->toString()), " to "_s}));
		$throwNew($IllegalArgumentException, $$concat(var$0, $($nc(targetFormat)->toString())));
	}
	return getConvertedStream(targetFormat, sourceStream);
}

$AudioInputStream* PCMtoPCMCodec::getConvertedStream($AudioFormat* outputFormat, $AudioInputStream* stream) {
	$useLocalCurrentObjectStackCache();
	$var($AudioInputStream, cs, nullptr);
	$var($AudioFormat, inputFormat, $nc(stream)->getFormat());
	if ($nc(inputFormat)->matches(outputFormat)) {
		$assign(cs, stream);
	} else {
		$assign(cs, $new($PCMtoPCMCodec$PCMtoPCMCodecStream, this, stream, outputFormat));
	}
	return cs;
}

$AudioFormatArray* PCMtoPCMCodec::getOutputFormats($AudioFormat* inputFormat) {
	$useLocalCurrentObjectStackCache();
	$var($Vector, formats, $new($Vector));
	$var($AudioFormat, format, nullptr);
	int32_t sampleSize = $nc(inputFormat)->getSampleSizeInBits();
	bool isBigEndian = inputFormat->isBigEndian();
	if (sampleSize == 8) {
		$init($AudioFormat$Encoding);
		if ($nc($AudioFormat$Encoding::PCM_SIGNED)->equals($(inputFormat->getEncoding()))) {
			$var($AudioFormat$Encoding, var$0, $AudioFormat$Encoding::PCM_UNSIGNED);
			float var$1 = inputFormat->getSampleRate();
			int32_t var$2 = inputFormat->getSampleSizeInBits();
			int32_t var$3 = inputFormat->getChannels();
			int32_t var$4 = inputFormat->getFrameSize();
			$assign(format, $new($AudioFormat, var$0, var$1, var$2, var$3, var$4, inputFormat->getFrameRate(), false));
			formats->addElement(format);
		}
		if ($nc($AudioFormat$Encoding::PCM_UNSIGNED)->equals($(inputFormat->getEncoding()))) {
			$var($AudioFormat$Encoding, var$5, $AudioFormat$Encoding::PCM_SIGNED);
			float var$6 = inputFormat->getSampleRate();
			int32_t var$7 = inputFormat->getSampleSizeInBits();
			int32_t var$8 = inputFormat->getChannels();
			int32_t var$9 = inputFormat->getFrameSize();
			$assign(format, $new($AudioFormat, var$5, var$6, var$7, var$8, var$9, inputFormat->getFrameRate(), false));
			formats->addElement(format);
		}
	} else if (sampleSize == 16) {
		$init($AudioFormat$Encoding);
		if ($nc($AudioFormat$Encoding::PCM_SIGNED)->equals($(inputFormat->getEncoding())) && isBigEndian) {
			$var($AudioFormat$Encoding, var$10, $AudioFormat$Encoding::PCM_UNSIGNED);
			float var$11 = inputFormat->getSampleRate();
			int32_t var$12 = inputFormat->getSampleSizeInBits();
			int32_t var$13 = inputFormat->getChannels();
			int32_t var$14 = inputFormat->getFrameSize();
			$assign(format, $new($AudioFormat, var$10, var$11, var$12, var$13, var$14, inputFormat->getFrameRate(), true));
			formats->addElement(format);
			$var($AudioFormat$Encoding, var$15, $AudioFormat$Encoding::PCM_SIGNED);
			float var$16 = inputFormat->getSampleRate();
			int32_t var$17 = inputFormat->getSampleSizeInBits();
			int32_t var$18 = inputFormat->getChannels();
			int32_t var$19 = inputFormat->getFrameSize();
			$assign(format, $new($AudioFormat, var$15, var$16, var$17, var$18, var$19, inputFormat->getFrameRate(), false));
			formats->addElement(format);
			$var($AudioFormat$Encoding, var$20, $AudioFormat$Encoding::PCM_UNSIGNED);
			float var$21 = inputFormat->getSampleRate();
			int32_t var$22 = inputFormat->getSampleSizeInBits();
			int32_t var$23 = inputFormat->getChannels();
			int32_t var$24 = inputFormat->getFrameSize();
			$assign(format, $new($AudioFormat, var$20, var$21, var$22, var$23, var$24, inputFormat->getFrameRate(), false));
			formats->addElement(format);
		}
		if ($nc($AudioFormat$Encoding::PCM_UNSIGNED)->equals($(inputFormat->getEncoding())) && isBigEndian) {
			$var($AudioFormat$Encoding, var$25, $AudioFormat$Encoding::PCM_SIGNED);
			float var$26 = inputFormat->getSampleRate();
			int32_t var$27 = inputFormat->getSampleSizeInBits();
			int32_t var$28 = inputFormat->getChannels();
			int32_t var$29 = inputFormat->getFrameSize();
			$assign(format, $new($AudioFormat, var$25, var$26, var$27, var$28, var$29, inputFormat->getFrameRate(), true));
			formats->addElement(format);
			$var($AudioFormat$Encoding, var$30, $AudioFormat$Encoding::PCM_UNSIGNED);
			float var$31 = inputFormat->getSampleRate();
			int32_t var$32 = inputFormat->getSampleSizeInBits();
			int32_t var$33 = inputFormat->getChannels();
			int32_t var$34 = inputFormat->getFrameSize();
			$assign(format, $new($AudioFormat, var$30, var$31, var$32, var$33, var$34, inputFormat->getFrameRate(), false));
			formats->addElement(format);
			$var($AudioFormat$Encoding, var$35, $AudioFormat$Encoding::PCM_SIGNED);
			float var$36 = inputFormat->getSampleRate();
			int32_t var$37 = inputFormat->getSampleSizeInBits();
			int32_t var$38 = inputFormat->getChannels();
			int32_t var$39 = inputFormat->getFrameSize();
			$assign(format, $new($AudioFormat, var$35, var$36, var$37, var$38, var$39, inputFormat->getFrameRate(), false));
			formats->addElement(format);
		}
		if ($nc($AudioFormat$Encoding::PCM_SIGNED)->equals($(inputFormat->getEncoding())) && !isBigEndian) {
			$var($AudioFormat$Encoding, var$40, $AudioFormat$Encoding::PCM_UNSIGNED);
			float var$41 = inputFormat->getSampleRate();
			int32_t var$42 = inputFormat->getSampleSizeInBits();
			int32_t var$43 = inputFormat->getChannels();
			int32_t var$44 = inputFormat->getFrameSize();
			$assign(format, $new($AudioFormat, var$40, var$41, var$42, var$43, var$44, inputFormat->getFrameRate(), false));
			formats->addElement(format);
			$var($AudioFormat$Encoding, var$45, $AudioFormat$Encoding::PCM_SIGNED);
			float var$46 = inputFormat->getSampleRate();
			int32_t var$47 = inputFormat->getSampleSizeInBits();
			int32_t var$48 = inputFormat->getChannels();
			int32_t var$49 = inputFormat->getFrameSize();
			$assign(format, $new($AudioFormat, var$45, var$46, var$47, var$48, var$49, inputFormat->getFrameRate(), true));
			formats->addElement(format);
			$var($AudioFormat$Encoding, var$50, $AudioFormat$Encoding::PCM_UNSIGNED);
			float var$51 = inputFormat->getSampleRate();
			int32_t var$52 = inputFormat->getSampleSizeInBits();
			int32_t var$53 = inputFormat->getChannels();
			int32_t var$54 = inputFormat->getFrameSize();
			$assign(format, $new($AudioFormat, var$50, var$51, var$52, var$53, var$54, inputFormat->getFrameRate(), true));
			formats->addElement(format);
		}
		if ($nc($AudioFormat$Encoding::PCM_UNSIGNED)->equals($(inputFormat->getEncoding())) && !isBigEndian) {
			$var($AudioFormat$Encoding, var$55, $AudioFormat$Encoding::PCM_SIGNED);
			float var$56 = inputFormat->getSampleRate();
			int32_t var$57 = inputFormat->getSampleSizeInBits();
			int32_t var$58 = inputFormat->getChannels();
			int32_t var$59 = inputFormat->getFrameSize();
			$assign(format, $new($AudioFormat, var$55, var$56, var$57, var$58, var$59, inputFormat->getFrameRate(), false));
			formats->addElement(format);
			$var($AudioFormat$Encoding, var$60, $AudioFormat$Encoding::PCM_UNSIGNED);
			float var$61 = inputFormat->getSampleRate();
			int32_t var$62 = inputFormat->getSampleSizeInBits();
			int32_t var$63 = inputFormat->getChannels();
			int32_t var$64 = inputFormat->getFrameSize();
			$assign(format, $new($AudioFormat, var$60, var$61, var$62, var$63, var$64, inputFormat->getFrameRate(), true));
			formats->addElement(format);
			$var($AudioFormat$Encoding, var$65, $AudioFormat$Encoding::PCM_SIGNED);
			float var$66 = inputFormat->getSampleRate();
			int32_t var$67 = inputFormat->getSampleSizeInBits();
			int32_t var$68 = inputFormat->getChannels();
			int32_t var$69 = inputFormat->getFrameSize();
			$assign(format, $new($AudioFormat, var$65, var$66, var$67, var$68, var$69, inputFormat->getFrameRate(), true));
			formats->addElement(format);
		}
	}
	$var($AudioFormatArray, formatArray, nullptr);
	$synchronized(formats) {
		$assign(formatArray, $new($AudioFormatArray, formats->size()));
		for (int32_t i = 0; i < formatArray->length; ++i) {
			formatArray->set(i, $cast($AudioFormat, $(formats->elementAt(i))));
		}
	}
	return formatArray;
}

PCMtoPCMCodec::PCMtoPCMCodec() {
}

$Class* PCMtoPCMCodec::load$($String* name, bool initialize) {
	$loadClass(PCMtoPCMCodec, name, initialize, &_PCMtoPCMCodec_ClassInfo_, allocate$PCMtoPCMCodec);
	return class$;
}

$Class* PCMtoPCMCodec::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com