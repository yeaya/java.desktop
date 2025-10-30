#include <com/sun/media/sound/UlawCodec$UlawCodecStream.h>

#include <com/sun/media/sound/UlawCodec.h>
#include <java/io/InputStream.h>
#include <javax/sound/sampled/AudioFormat$Encoding.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/AudioInputStream.h>
#include <javax/sound/sampled/AudioSystem.h>
#include <jcpp.h>

#undef BIAS
#undef NOT_SPECIFIED
#undef ULAW
#undef ULAW_TABH
#undef ULAW_TABL

using $UlawCodec = ::com::sun::media::sound::UlawCodec;
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

$FieldInfo _UlawCodec$UlawCodecStream_FieldInfo_[] = {
	{"this$0", "Lcom/sun/media/sound/UlawCodec;", nullptr, $FINAL | $SYNTHETIC, $field(UlawCodec$UlawCodecStream, this$0)},
	{"tempBufferSize", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UlawCodec$UlawCodecStream, tempBufferSize)},
	{"tempBuffer", "[B", nullptr, $PRIVATE, $field(UlawCodec$UlawCodecStream, tempBuffer)},
	{"encode", "Z", nullptr, 0, $field(UlawCodec$UlawCodecStream, encode)},
	{"encodeFormat", "Ljavax/sound/sampled/AudioFormat;", nullptr, 0, $field(UlawCodec$UlawCodecStream, encodeFormat)},
	{"decodeFormat", "Ljavax/sound/sampled/AudioFormat;", nullptr, 0, $field(UlawCodec$UlawCodecStream, decodeFormat)},
	{"tabByte1", "[B", nullptr, 0, $field(UlawCodec$UlawCodecStream, tabByte1)},
	{"tabByte2", "[B", nullptr, 0, $field(UlawCodec$UlawCodecStream, tabByte2)},
	{"highByte", "I", nullptr, 0, $field(UlawCodec$UlawCodecStream, highByte)},
	{"lowByte", "I", nullptr, 0, $field(UlawCodec$UlawCodecStream, lowByte)},
	{}
};

$MethodInfo _UlawCodec$UlawCodecStream_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/UlawCodec;Ljavax/sound/sampled/AudioInputStream;Ljavax/sound/sampled/AudioFormat;)V", nullptr, 0, $method(static_cast<void(UlawCodec$UlawCodecStream::*)($UlawCodec*,$AudioInputStream*,$AudioFormat*)>(&UlawCodec$UlawCodecStream::init$))},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([B)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"search", "(S[SS)S", nullptr, $PRIVATE, $method(static_cast<int16_t(UlawCodec$UlawCodecStream::*)(int16_t,$shorts*,int16_t)>(&UlawCodec$UlawCodecStream::search))},
	{"skip", "(J)J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _UlawCodec$UlawCodecStream_InnerClassesInfo_[] = {
	{"com.sun.media.sound.UlawCodec$UlawCodecStream", "com.sun.media.sound.UlawCodec", "UlawCodecStream", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _UlawCodec$UlawCodecStream_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.media.sound.UlawCodec$UlawCodecStream",
	"javax.sound.sampled.AudioInputStream",
	nullptr,
	_UlawCodec$UlawCodecStream_FieldInfo_,
	_UlawCodec$UlawCodecStream_MethodInfo_,
	nullptr,
	nullptr,
	_UlawCodec$UlawCodecStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.UlawCodec"
};

$Object* allocate$UlawCodec$UlawCodecStream($Class* clazz) {
	return $of($alloc(UlawCodec$UlawCodecStream));
}

void UlawCodec$UlawCodecStream::init$($UlawCodec* this$0, $AudioInputStream* stream, $AudioFormat* outputFormat) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$AudioInputStream::init$(stream, outputFormat, $AudioSystem::NOT_SPECIFIED);
	$set(this, tempBuffer, nullptr);
	this->encode = false;
	$set(this, tabByte1, nullptr);
	$set(this, tabByte2, nullptr);
	this->highByte = 0;
	this->lowByte = 1;
	$var($AudioFormat, inputFormat, $nc(stream)->getFormat());
	if (!(this$0->isConversionSupported(outputFormat, inputFormat))) {
		$var($String, var$0, $$str({"Unsupported conversion: "_s, $($nc(inputFormat)->toString()), " to "_s}));
		$throwNew($IllegalArgumentException, $$concat(var$0, $($nc(outputFormat)->toString())));
	}
	bool PCMIsBigEndian = false;
	$init($AudioFormat$Encoding);
	if ($nc($AudioFormat$Encoding::ULAW)->equals($($nc(inputFormat)->getEncoding()))) {
		this->encode = false;
		$set(this, encodeFormat, inputFormat);
		$set(this, decodeFormat, outputFormat);
		PCMIsBigEndian = $nc(outputFormat)->isBigEndian();
	} else {
		this->encode = true;
		$set(this, encodeFormat, outputFormat);
		$set(this, decodeFormat, inputFormat);
		PCMIsBigEndian = $nc(inputFormat)->isBigEndian();
		$set(this, tempBuffer, $new($bytes, UlawCodec$UlawCodecStream::tempBufferSize));
	}
	if (PCMIsBigEndian) {
		$set(this, tabByte1, $UlawCodec::ULAW_TABH);
		$set(this, tabByte2, $UlawCodec::ULAW_TABL);
		this->highByte = 0;
		this->lowByte = 1;
	} else {
		$set(this, tabByte1, $UlawCodec::ULAW_TABL);
		$set(this, tabByte2, $UlawCodec::ULAW_TABH);
		this->highByte = 1;
		this->lowByte = 0;
	}
	if ($instanceOf($AudioInputStream, stream)) {
		this->frameLength = stream->getFrameLength();
	}
	this->framePos = 0;
	this->frameSize = $nc(inputFormat)->getFrameSize();
	if (this->frameSize == $AudioSystem::NOT_SPECIFIED) {
		this->frameSize = 1;
	}
}

int16_t UlawCodec$UlawCodecStream::search(int16_t val, $shorts* table, int16_t size) {
	for (int16_t i = (int16_t)0; i < size; ++i) {
		if (val <= $nc(table)->get(i)) {
			return i;
		}
	}
	return size;
}

int32_t UlawCodec$UlawCodecStream::read() {
	$var($bytes, b, $new($bytes, 1));
	if (read(b, 0, b->length) == 1) {
		return (int32_t)(b->get(1) & (uint32_t)255);
	}
	return -1;
}

int32_t UlawCodec$UlawCodecStream::read($bytes* b) {
	return read(b, 0, $nc(b)->length);
}

int32_t UlawCodec$UlawCodecStream::read($bytes* b, int32_t off, int32_t len) {
	if ($mod(len, this->frameSize) != 0) {
		len -= ($mod(len, this->frameSize));
	}
	if (this->encode) {
		int16_t BIAS = (int16_t)132;
		int16_t mask = 0;
		int16_t seg = 0;
		int32_t i = 0;
		int16_t sample = 0;
		int8_t enc = 0;
		int32_t readCount = 0;
		int32_t currentPos = off;
		int32_t readLeft = len * 2;
		int32_t readLen = ((readLeft > UlawCodec$UlawCodecStream::tempBufferSize) ? UlawCodec$UlawCodecStream::tempBufferSize : readLeft);
		while ((readCount = $AudioInputStream::read(this->tempBuffer, 0, readLen)) > 0) {
			for (i = 0; i < readCount; i += 2) {
				sample = (int16_t)((int32_t)((($nc(this->tempBuffer)->get(i + this->highByte)) << 8) & (uint32_t)0x0000FF00));
				sample |= (int16_t)((int32_t)((int16_t)($nc(this->tempBuffer)->get(i + this->lowByte)) & (uint32_t)255));
				if (sample < 0) {
					sample = (int16_t)(BIAS - sample);
					mask = (int16_t)127;
				} else {
					sample += BIAS;
					mask = (int16_t)255;
				}
				$init($UlawCodec);
				seg = search(sample, $UlawCodec::seg_end, (int16_t)8);
				if (seg >= 8) {
					enc = (int8_t)(127 ^ mask);
				} else {
					enc = (int8_t)((seg << 4) | ((int32_t)(($sr((int32_t)sample, seg + 3)) & (uint32_t)15)));
					enc ^= mask;
				}
				$nc(b)->set(currentPos, enc);
				++currentPos;
			}
			readLeft -= readCount;
			readLen = ((readLeft > UlawCodec$UlawCodecStream::tempBufferSize) ? UlawCodec$UlawCodecStream::tempBufferSize : readLeft);
		}
		if (currentPos == off && readCount < 0) {
			return readCount;
		}
		return (currentPos - off);
	} else {
		int32_t i = 0;
		int32_t readLen = len / 2;
		int32_t readOffset = off + len / 2;
		int32_t readCount = $AudioInputStream::read(b, readOffset, readLen);
		if (readCount < 0) {
			return readCount;
		}
		for (i = off; i < (off + (readCount * 2)); i += 2) {
			$nc(b)->set(i, $nc(this->tabByte1)->get((int32_t)(b->get(readOffset) & (uint32_t)255)));
			b->set(i + 1, $nc(this->tabByte2)->get((int32_t)(b->get(readOffset) & (uint32_t)255)));
			++readOffset;
		}
		return (i - off);
	}
}

int64_t UlawCodec$UlawCodecStream::skip(int64_t n) {
	return this->encode ? $AudioInputStream::skip(n * 2) / 2 : $AudioInputStream::skip(n / 2) * 2;
}

UlawCodec$UlawCodecStream::UlawCodec$UlawCodecStream() {
}

$Class* UlawCodec$UlawCodecStream::load$($String* name, bool initialize) {
	$loadClass(UlawCodec$UlawCodecStream, name, initialize, &_UlawCodec$UlawCodecStream_ClassInfo_, allocate$UlawCodec$UlawCodecStream);
	return class$;
}

$Class* UlawCodec$UlawCodecStream::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com