#include <com/sun/media/sound/AlawCodec$AlawCodecStream.h>

#include <com/sun/media/sound/AlawCodec.h>
#include <java/io/InputStream.h>
#include <javax/sound/sampled/AudioFormat$Encoding.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/AudioInputStream.h>
#include <javax/sound/sampled/AudioSystem.h>
#include <jcpp.h>

#undef ALAW
#undef ALAW_TABH
#undef ALAW_TABL
#undef NOT_SPECIFIED
#undef QUANT_MASK
#undef SEG_SHIFT

using $AlawCodec = ::com::sun::media::sound::AlawCodec;
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

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _AlawCodec$AlawCodecStream_FieldInfo_[] = {
	{"this$0", "Lcom/sun/media/sound/AlawCodec;", nullptr, $FINAL | $SYNTHETIC, $field(AlawCodec$AlawCodecStream, this$0)},
	{"tempBufferSize", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AlawCodec$AlawCodecStream, tempBufferSize)},
	{"tempBuffer", "[B", nullptr, $PRIVATE, $field(AlawCodec$AlawCodecStream, tempBuffer)},
	{"encode", "Z", nullptr, 0, $field(AlawCodec$AlawCodecStream, encode)},
	{"encodeFormat", "Ljavax/sound/sampled/AudioFormat;", nullptr, 0, $field(AlawCodec$AlawCodecStream, encodeFormat)},
	{"decodeFormat", "Ljavax/sound/sampled/AudioFormat;", nullptr, 0, $field(AlawCodec$AlawCodecStream, decodeFormat)},
	{"tabByte1", "[B", nullptr, 0, $field(AlawCodec$AlawCodecStream, tabByte1)},
	{"tabByte2", "[B", nullptr, 0, $field(AlawCodec$AlawCodecStream, tabByte2)},
	{"highByte", "I", nullptr, 0, $field(AlawCodec$AlawCodecStream, highByte)},
	{"lowByte", "I", nullptr, 0, $field(AlawCodec$AlawCodecStream, lowByte)},
	{}
};

$MethodInfo _AlawCodec$AlawCodecStream_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/AlawCodec;Ljavax/sound/sampled/AudioInputStream;Ljavax/sound/sampled/AudioFormat;)V", nullptr, 0, $method(static_cast<void(AlawCodec$AlawCodecStream::*)($AlawCodec*,$AudioInputStream*,$AudioFormat*)>(&AlawCodec$AlawCodecStream::init$))},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([B)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"search", "(S[SS)S", nullptr, $PRIVATE, $method(static_cast<int16_t(AlawCodec$AlawCodecStream::*)(int16_t,$shorts*,int16_t)>(&AlawCodec$AlawCodecStream::search))},
	{"skip", "(J)J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _AlawCodec$AlawCodecStream_InnerClassesInfo_[] = {
	{"com.sun.media.sound.AlawCodec$AlawCodecStream", "com.sun.media.sound.AlawCodec", "AlawCodecStream", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _AlawCodec$AlawCodecStream_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.media.sound.AlawCodec$AlawCodecStream",
	"javax.sound.sampled.AudioInputStream",
	nullptr,
	_AlawCodec$AlawCodecStream_FieldInfo_,
	_AlawCodec$AlawCodecStream_MethodInfo_,
	nullptr,
	nullptr,
	_AlawCodec$AlawCodecStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.AlawCodec"
};

$Object* allocate$AlawCodec$AlawCodecStream($Class* clazz) {
	return $of($alloc(AlawCodec$AlawCodecStream));
}

void AlawCodec$AlawCodecStream::init$($AlawCodec* this$0, $AudioInputStream* stream, $AudioFormat* outputFormat) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$AudioInputStream::init$(stream, outputFormat, -1);
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
	if ($nc($AudioFormat$Encoding::ALAW)->equals($($nc(inputFormat)->getEncoding()))) {
		this->encode = false;
		$set(this, encodeFormat, inputFormat);
		$set(this, decodeFormat, outputFormat);
		PCMIsBigEndian = $nc(outputFormat)->isBigEndian();
	} else {
		this->encode = true;
		$set(this, encodeFormat, outputFormat);
		$set(this, decodeFormat, inputFormat);
		PCMIsBigEndian = $nc(inputFormat)->isBigEndian();
		$set(this, tempBuffer, $new($bytes, AlawCodec$AlawCodecStream::tempBufferSize));
	}
	if (PCMIsBigEndian) {
		$set(this, tabByte1, $AlawCodec::ALAW_TABH);
		$set(this, tabByte2, $AlawCodec::ALAW_TABL);
		this->highByte = 0;
		this->lowByte = 1;
	} else {
		$set(this, tabByte1, $AlawCodec::ALAW_TABL);
		$set(this, tabByte2, $AlawCodec::ALAW_TABH);
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

int16_t AlawCodec$AlawCodecStream::search(int16_t val, $shorts* table, int16_t size) {
	for (int16_t i = (int16_t)0; i < size; ++i) {
		if (val <= $nc(table)->get(i)) {
			return i;
		}
	}
	return size;
}

int32_t AlawCodec$AlawCodecStream::read() {
	$var($bytes, b, $new($bytes, 1));
	return read(b, 0, b->length);
}

int32_t AlawCodec$AlawCodecStream::read($bytes* b) {
	return read(b, 0, $nc(b)->length);
}

int32_t AlawCodec$AlawCodecStream::read($bytes* b, int32_t off, int32_t len) {
	if ($mod(len, this->frameSize) != 0) {
		len -= ($mod(len, this->frameSize));
	}
	if (this->encode) {
		int16_t QUANT_MASK = (int16_t)15;
		int16_t SEG_SHIFT = (int16_t)4;
		int16_t mask = 0;
		int16_t seg = 0;
		int32_t adj = 0;
		int32_t i = 0;
		int16_t sample = 0;
		int8_t enc = 0;
		int32_t readCount = 0;
		int32_t currentPos = off;
		int32_t readLeft = len * 2;
		int32_t readLen = ((readLeft > AlawCodec$AlawCodecStream::tempBufferSize) ? AlawCodec$AlawCodecStream::tempBufferSize : readLeft);
		while ((readCount = $AudioInputStream::read(this->tempBuffer, 0, readLen)) > 0) {
			for (i = 0; i < readCount; i += 2) {
				sample = (int16_t)((int32_t)((($nc(this->tempBuffer)->get(i + this->highByte)) << 8) & (uint32_t)0x0000FF00));
				sample |= (int16_t)((int32_t)(($nc(this->tempBuffer)->get(i + this->lowByte)) & (uint32_t)255));
				if (sample >= 0) {
					mask = (int16_t)213;
				} else {
					mask = (int16_t)85;
					sample = (int16_t)(-sample - 8);
				}
				$init($AlawCodec);
				seg = search(sample, $AlawCodec::seg_end, (int16_t)8);
				if (seg >= 8) {
					enc = (int8_t)(127 ^ mask);
				} else {
					enc = (int8_t)($sl((int32_t)seg, SEG_SHIFT));
					if (seg < 2) {
						enc |= (int8_t)((int32_t)((sample >> 4) & (uint32_t)(int32_t)QUANT_MASK));
					} else {
						enc |= (int8_t)((int32_t)(($sr((int32_t)sample, seg + 3)) & (uint32_t)(int32_t)QUANT_MASK));
					}
					enc ^= mask;
				}
				$nc(b)->set(currentPos, enc);
				++currentPos;
			}
			readLeft -= readCount;
			readLen = ((readLeft > AlawCodec$AlawCodecStream::tempBufferSize) ? AlawCodec$AlawCodecStream::tempBufferSize : readLeft);
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
		for (i = off; i < (off + (readCount * 2)); i += 2) {
			$nc(b)->set(i, $nc(this->tabByte1)->get((int32_t)(b->get(readOffset) & (uint32_t)255)));
			b->set(i + 1, $nc(this->tabByte2)->get((int32_t)(b->get(readOffset) & (uint32_t)255)));
			++readOffset;
		}
		if (readCount < 0) {
			return readCount;
		}
		return (i - off);
	}
}

int64_t AlawCodec$AlawCodecStream::skip(int64_t n) {
	return this->encode ? $AudioInputStream::skip(n * 2) / 2 : $AudioInputStream::skip(n / 2) * 2;
}

AlawCodec$AlawCodecStream::AlawCodec$AlawCodecStream() {
}

$Class* AlawCodec$AlawCodecStream::load$($String* name, bool initialize) {
	$loadClass(AlawCodec$AlawCodecStream, name, initialize, &_AlawCodec$AlawCodecStream_ClassInfo_, allocate$AlawCodec$AlawCodecStream);
	return class$;
}

$Class* AlawCodec$AlawCodecStream::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com