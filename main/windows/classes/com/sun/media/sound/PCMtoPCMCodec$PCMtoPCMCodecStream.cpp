#include <com/sun/media/sound/PCMtoPCMCodec$PCMtoPCMCodecStream.h>

#include <com/sun/media/sound/PCMtoPCMCodec.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
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
#include <javax/sound/sampled/AudioFormat$Encoding.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/AudioInputStream.h>
#include <javax/sound/sampled/AudioSystem.h>
#include <jcpp.h>

#undef NOT_SPECIFIED
#undef PCM_SIGNED
#undef PCM_SIGNED_BE2UNSIGNED_LE
#undef PCM_SIGNED_LE2UNSIGNED_BE
#undef PCM_SWITCH_ENDIAN
#undef PCM_SWITCH_SIGNED_8BIT
#undef PCM_SWITCH_SIGNED_BE
#undef PCM_SWITCH_SIGNED_LE
#undef PCM_UNSIGNED
#undef PCM_UNSIGNED_BE2SIGNED_LE
#undef PCM_UNSIGNED_LE2SIGNED_BE

using $PCMtoPCMCodec = ::com::sun::media::sound::PCMtoPCMCodec;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $AudioFormat$Encoding = ::javax::sound::sampled::AudioFormat$Encoding;
using $AudioInputStream = ::javax::sound::sampled::AudioInputStream;
using $AudioSystem = ::javax::sound::sampled::AudioSystem;
using $FormatConversionProvider = ::javax::sound::sampled::spi::FormatConversionProvider;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _PCMtoPCMCodec$PCMtoPCMCodecStream_FieldInfo_[] = {
	{"this$0", "Lcom/sun/media/sound/PCMtoPCMCodec;", nullptr, $FINAL | $SYNTHETIC, $field(PCMtoPCMCodec$PCMtoPCMCodecStream, this$0)},
	{"PCM_SWITCH_SIGNED_8BIT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PCMtoPCMCodec$PCMtoPCMCodecStream, PCM_SWITCH_SIGNED_8BIT)},
	{"PCM_SWITCH_ENDIAN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PCMtoPCMCodec$PCMtoPCMCodecStream, PCM_SWITCH_ENDIAN)},
	{"PCM_SWITCH_SIGNED_LE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PCMtoPCMCodec$PCMtoPCMCodecStream, PCM_SWITCH_SIGNED_LE)},
	{"PCM_SWITCH_SIGNED_BE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PCMtoPCMCodec$PCMtoPCMCodecStream, PCM_SWITCH_SIGNED_BE)},
	{"PCM_UNSIGNED_LE2SIGNED_BE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PCMtoPCMCodec$PCMtoPCMCodecStream, PCM_UNSIGNED_LE2SIGNED_BE)},
	{"PCM_SIGNED_LE2UNSIGNED_BE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PCMtoPCMCodec$PCMtoPCMCodecStream, PCM_SIGNED_LE2UNSIGNED_BE)},
	{"PCM_UNSIGNED_BE2SIGNED_LE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PCMtoPCMCodec$PCMtoPCMCodecStream, PCM_UNSIGNED_BE2SIGNED_LE)},
	{"PCM_SIGNED_BE2UNSIGNED_LE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PCMtoPCMCodec$PCMtoPCMCodecStream, PCM_SIGNED_BE2UNSIGNED_LE)},
	{"sampleSizeInBytes", "I", nullptr, $PRIVATE | $FINAL, $field(PCMtoPCMCodec$PCMtoPCMCodecStream, sampleSizeInBytes)},
	{"conversionType", "I", nullptr, $PRIVATE, $field(PCMtoPCMCodec$PCMtoPCMCodecStream, conversionType)},
	{}
};

$MethodInfo _PCMtoPCMCodec$PCMtoPCMCodecStream_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/PCMtoPCMCodec;Ljavax/sound/sampled/AudioInputStream;Ljavax/sound/sampled/AudioFormat;)V", nullptr, 0, $method(static_cast<void(PCMtoPCMCodec$PCMtoPCMCodecStream::*)($PCMtoPCMCodec*,$AudioInputStream*,$AudioFormat*)>(&PCMtoPCMCodec$PCMtoPCMCodecStream::init$))},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([B)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"switchEndian", "([BIII)V", nullptr, $PRIVATE, $method(static_cast<void(PCMtoPCMCodec$PCMtoPCMCodecStream::*)($bytes*,int32_t,int32_t,int32_t)>(&PCMtoPCMCodec$PCMtoPCMCodecStream::switchEndian))},
	{"switchSigned8bit", "([BIII)V", nullptr, $PRIVATE, $method(static_cast<void(PCMtoPCMCodec$PCMtoPCMCodecStream::*)($bytes*,int32_t,int32_t,int32_t)>(&PCMtoPCMCodec$PCMtoPCMCodecStream::switchSigned8bit))},
	{"switchSignedBE", "([BIII)V", nullptr, $PRIVATE, $method(static_cast<void(PCMtoPCMCodec$PCMtoPCMCodecStream::*)($bytes*,int32_t,int32_t,int32_t)>(&PCMtoPCMCodec$PCMtoPCMCodecStream::switchSignedBE))},
	{"switchSignedLE", "([BIII)V", nullptr, $PRIVATE, $method(static_cast<void(PCMtoPCMCodec$PCMtoPCMCodecStream::*)($bytes*,int32_t,int32_t,int32_t)>(&PCMtoPCMCodec$PCMtoPCMCodecStream::switchSignedLE))},
	{}
};

$InnerClassInfo _PCMtoPCMCodec$PCMtoPCMCodecStream_InnerClassesInfo_[] = {
	{"com.sun.media.sound.PCMtoPCMCodec$PCMtoPCMCodecStream", "com.sun.media.sound.PCMtoPCMCodec", "PCMtoPCMCodecStream", 0},
	{}
};

$ClassInfo _PCMtoPCMCodec$PCMtoPCMCodecStream_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.PCMtoPCMCodec$PCMtoPCMCodecStream",
	"javax.sound.sampled.AudioInputStream",
	nullptr,
	_PCMtoPCMCodec$PCMtoPCMCodecStream_FieldInfo_,
	_PCMtoPCMCodec$PCMtoPCMCodecStream_MethodInfo_,
	nullptr,
	nullptr,
	_PCMtoPCMCodec$PCMtoPCMCodecStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.PCMtoPCMCodec"
};

$Object* allocate$PCMtoPCMCodec$PCMtoPCMCodecStream($Class* clazz) {
	return $of($alloc(PCMtoPCMCodec$PCMtoPCMCodecStream));
}

void PCMtoPCMCodec$PCMtoPCMCodecStream::init$($PCMtoPCMCodec* this$0, $AudioInputStream* stream, $AudioFormat* outputFormat) {
	$set(this, this$0, this$0);
	$AudioInputStream::init$(stream, outputFormat, -1);
	this->conversionType = 0;
	int32_t sampleSizeInBits = 0;
	$var($AudioFormat$Encoding, inputEncoding, nullptr);
	$var($AudioFormat$Encoding, outputEncoding, nullptr);
	bool inputIsBigEndian = false;
	bool outputIsBigEndian = false;
	$var($AudioFormat, inputFormat, $nc(stream)->getFormat());
	if (!(this$0->isConversionSupported(inputFormat, outputFormat))) {
		$var($String, var$0, $$str({"Unsupported conversion: "_s, $($nc(inputFormat)->toString()), " to "_s}));
		$throwNew($IllegalArgumentException, $$concat(var$0, $($nc(outputFormat)->toString())));
	}
	$assign(inputEncoding, $nc(inputFormat)->getEncoding());
	$assign(outputEncoding, $nc(outputFormat)->getEncoding());
	inputIsBigEndian = inputFormat->isBigEndian();
	outputIsBigEndian = outputFormat->isBigEndian();
	sampleSizeInBits = inputFormat->getSampleSizeInBits();
	this->sampleSizeInBytes = sampleSizeInBits / 8;
	if (sampleSizeInBits == 8) {
		$init($AudioFormat$Encoding);
		bool var$1 = $nc($AudioFormat$Encoding::PCM_UNSIGNED)->equals(inputEncoding);
		if (var$1 && $nc($AudioFormat$Encoding::PCM_SIGNED)->equals(outputEncoding)) {
			this->conversionType = this->PCM_SWITCH_SIGNED_8BIT;
		} else {
			bool var$3 = $nc($AudioFormat$Encoding::PCM_SIGNED)->equals(inputEncoding);
			if (var$3 && $nc($AudioFormat$Encoding::PCM_UNSIGNED)->equals(outputEncoding)) {
				this->conversionType = this->PCM_SWITCH_SIGNED_8BIT;
			}
		}
	} else if (inputEncoding->equals(outputEncoding) && (inputIsBigEndian != outputIsBigEndian)) {
		this->conversionType = this->PCM_SWITCH_ENDIAN;
	} else {
		$init($AudioFormat$Encoding);
		bool var$5 = $nc($AudioFormat$Encoding::PCM_UNSIGNED)->equals(inputEncoding) && !inputIsBigEndian;
		if (var$5 && $nc($AudioFormat$Encoding::PCM_SIGNED)->equals(outputEncoding) && outputIsBigEndian) {
			this->conversionType = this->PCM_UNSIGNED_LE2SIGNED_BE;
		} else {
			bool var$7 = $nc($AudioFormat$Encoding::PCM_SIGNED)->equals(inputEncoding) && !inputIsBigEndian;
			if (var$7 && $nc($AudioFormat$Encoding::PCM_UNSIGNED)->equals(outputEncoding) && outputIsBigEndian) {
				this->conversionType = this->PCM_SIGNED_LE2UNSIGNED_BE;
			} else {
				bool var$9 = $nc($AudioFormat$Encoding::PCM_UNSIGNED)->equals(inputEncoding) && inputIsBigEndian;
				if (var$9 && $nc($AudioFormat$Encoding::PCM_SIGNED)->equals(outputEncoding) && !outputIsBigEndian) {
					this->conversionType = this->PCM_UNSIGNED_BE2SIGNED_LE;
				} else {
					bool var$11 = $nc($AudioFormat$Encoding::PCM_SIGNED)->equals(inputEncoding) && inputIsBigEndian;
					if (var$11 && $nc($AudioFormat$Encoding::PCM_UNSIGNED)->equals(outputEncoding) && !outputIsBigEndian) {
						this->conversionType = this->PCM_SIGNED_BE2UNSIGNED_LE;
					}
				}
			}
		}
	}
	this->frameSize = inputFormat->getFrameSize();
	if (this->frameSize == $AudioSystem::NOT_SPECIFIED) {
		this->frameSize = 1;
	}
	if ($instanceOf($AudioInputStream, stream)) {
		this->frameLength = stream->getFrameLength();
	} else {
		this->frameLength = $AudioSystem::NOT_SPECIFIED;
	}
	this->framePos = 0;
}

int32_t PCMtoPCMCodec$PCMtoPCMCodecStream::read() {
	int32_t temp = 0;
	int8_t tempbyte = 0;
	if (this->frameSize == 1) {
		if (this->conversionType == this->PCM_SWITCH_SIGNED_8BIT) {
			temp = $AudioInputStream::read();
			if (temp < 0) {
				return temp;
			}
			tempbyte = (int8_t)((int32_t)(temp & (uint32_t)15));
			tempbyte = (tempbyte >= 0) ? (int8_t)(128 | tempbyte) : (int8_t)((int32_t)(127 & (uint32_t)(int32_t)tempbyte));
			temp = (int32_t)((int32_t)tempbyte & (uint32_t)15);
			return temp;
		} else {
			$throwNew($IOException, "cannot read a single byte if frame size > 1"_s);
		}
	} else {
		$throwNew($IOException, "cannot read a single byte if frame size > 1"_s);
	}
}

int32_t PCMtoPCMCodec$PCMtoPCMCodecStream::read($bytes* b) {
	return read(b, 0, $nc(b)->length);
}

int32_t PCMtoPCMCodec$PCMtoPCMCodecStream::read($bytes* b, int32_t off, int32_t len) {
	int32_t i = 0;
	if ($mod(len, this->frameSize) != 0) {
		len -= ($mod(len, this->frameSize));
	}
	if ((this->frameLength != $AudioSystem::NOT_SPECIFIED) && (($div(len, this->frameSize)) > (this->frameLength - this->framePos))) {
		len = (int32_t)(this->frameLength - this->framePos) * this->frameSize;
	}
	int32_t readCount = $AudioInputStream::read(b, off, len);
	int8_t tempByte = 0;
	if (readCount < 0) {
		return readCount;
	}
	switch (this->conversionType) {
	case this->PCM_SWITCH_SIGNED_8BIT:
		{
			switchSigned8bit(b, off, len, readCount);
			break;
		}
	case this->PCM_SWITCH_ENDIAN:
		{
			switchEndian(b, off, len, readCount);
			break;
		}
	case this->PCM_SWITCH_SIGNED_LE:
		{
			switchSignedLE(b, off, len, readCount);
			break;
		}
	case this->PCM_SWITCH_SIGNED_BE:
		{
			switchSignedBE(b, off, len, readCount);
			break;
		}
	case this->PCM_UNSIGNED_LE2SIGNED_BE:
		{}
	case this->PCM_SIGNED_LE2UNSIGNED_BE:
		{
			switchSignedLE(b, off, len, readCount);
			switchEndian(b, off, len, readCount);
			break;
		}
	case this->PCM_UNSIGNED_BE2SIGNED_LE:
		{}
	case this->PCM_SIGNED_BE2UNSIGNED_LE:
		{
			switchSignedBE(b, off, len, readCount);
			switchEndian(b, off, len, readCount);
			break;
		}
	default:
		{}
	}
	return readCount;
}

void PCMtoPCMCodec$PCMtoPCMCodecStream::switchSigned8bit($bytes* b, int32_t off, int32_t len, int32_t readCount) {
	for (int32_t i = off; i < (off + readCount); ++i) {
		$nc(b)->set(i, (b->get(i) >= 0) ? (int8_t)(128 | b->get(i)) : (int8_t)((int32_t)(127 & (uint32_t)(int32_t)b->get(i))));
	}
}

void PCMtoPCMCodec$PCMtoPCMCodecStream::switchSignedBE($bytes* b, int32_t off, int32_t len, int32_t readCount) {
	for (int32_t i = off; i < (off + readCount); i += this->sampleSizeInBytes) {
		$nc(b)->set(i, (b->get(i) >= 0) ? (int8_t)(128 | b->get(i)) : (int8_t)((int32_t)(127 & (uint32_t)(int32_t)b->get(i))));
	}
}

void PCMtoPCMCodec$PCMtoPCMCodecStream::switchSignedLE($bytes* b, int32_t off, int32_t len, int32_t readCount) {
	for (int32_t i = (off + this->sampleSizeInBytes - 1); i < (off + readCount); i += this->sampleSizeInBytes) {
		$nc(b)->set(i, (b->get(i) >= 0) ? (int8_t)(128 | b->get(i)) : (int8_t)((int32_t)(127 & (uint32_t)(int32_t)b->get(i))));
	}
}

void PCMtoPCMCodec$PCMtoPCMCodecStream::switchEndian($bytes* b, int32_t off, int32_t len, int32_t readCount) {
	if (this->sampleSizeInBytes == 2) {
		for (int32_t i = off; i < (off + readCount); i += this->sampleSizeInBytes) {
			int8_t temp = 0;
			temp = $nc(b)->get(i);
			b->set(i, b->get(i + 1));
			b->set(i + 1, temp);
		}
	}
}

PCMtoPCMCodec$PCMtoPCMCodecStream::PCMtoPCMCodec$PCMtoPCMCodecStream() {
}

$Class* PCMtoPCMCodec$PCMtoPCMCodecStream::load$($String* name, bool initialize) {
	$loadClass(PCMtoPCMCodec$PCMtoPCMCodecStream, name, initialize, &_PCMtoPCMCodec$PCMtoPCMCodecStream_ClassInfo_, allocate$PCMtoPCMCodec$PCMtoPCMCodecStream);
	return class$;
}

$Class* PCMtoPCMCodec$PCMtoPCMCodecStream::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com