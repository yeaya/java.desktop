#include <com/sun/imageio/plugins/tiff/TIFFPackBitsCompressor.h>

#include <com/sun/imageio/plugins/tiff/TIFFCompressor.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/stream/ImageOutputStream.h>
#include <jcpp.h>

#undef COMPRESSION_PACKBITS

using $TIFFCompressor = ::com::sun::imageio::plugins::tiff::TIFFCompressor;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BaselineTIFFTagSet = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet;
using $ImageOutputStream = ::javax::imageio::stream::ImageOutputStream;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

$MethodInfo _TIFFPackBitsCompressor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TIFFPackBitsCompressor::*)()>(&TIFFPackBitsCompressor::init$))},
	{"encode", "([BIII[II)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"packBits", "([BII[BI)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($bytes*,int32_t,int32_t,$bytes*,int32_t)>(&TIFFPackBitsCompressor::packBits))},
	{}
};

$ClassInfo _TIFFPackBitsCompressor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.tiff.TIFFPackBitsCompressor",
	"com.sun.imageio.plugins.tiff.TIFFCompressor",
	nullptr,
	nullptr,
	_TIFFPackBitsCompressor_MethodInfo_
};

$Object* allocate$TIFFPackBitsCompressor($Class* clazz) {
	return $of($alloc(TIFFPackBitsCompressor));
}

void TIFFPackBitsCompressor::init$() {
	$TIFFCompressor::init$("PackBits"_s, $BaselineTIFFTagSet::COMPRESSION_PACKBITS, true);
}

int32_t TIFFPackBitsCompressor::packBits($bytes* input, int32_t inOffset, int32_t inCount, $bytes* output, int32_t outOffset) {
	$init(TIFFPackBitsCompressor);
	int32_t inMax = inOffset + inCount - 1;
	int32_t inMaxMinus1 = inMax - 1;
	while (inOffset <= inMax) {
		int32_t run = 1;
		int8_t replicate = $nc(input)->get(inOffset);
		while (run < 127 && inOffset < inMax && input->get(inOffset) == input->get(inOffset + 1)) {
			++run;
			++inOffset;
		}
		if (run > 1) {
			++inOffset;
			$nc(output)->set(outOffset++, (int8_t)(-(run - 1)));
			output->set(outOffset++, replicate);
		}
		run = 0;
		int32_t saveOffset = outOffset;
		while (run < 128 && ((inOffset < inMax && input->get(inOffset) != input->get(inOffset + 1)) || (inOffset < inMaxMinus1 && input->get(inOffset) != input->get(inOffset + 2)))) {
			++run;
			$nc(output)->set(++outOffset, input->get(inOffset++));
		}
		if (run > 0) {
			$nc(output)->set(saveOffset, (int8_t)(run - 1));
			++outOffset;
		}
		if (inOffset == inMax) {
			if (run > 0 && run < 128) {
				++(*$nc(output))[saveOffset];
				output->set(outOffset++, input->get(inOffset++));
			} else {
				$nc(output)->set(outOffset++, (int8_t)0);
				output->set(outOffset++, input->get(inOffset++));
			}
		}
	}
	return outOffset;
}

int32_t TIFFPackBitsCompressor::encode($bytes* b, int32_t off, int32_t width, int32_t height, $ints* bitsPerSample, int32_t scanlineStride) {
	int32_t bitsPerPixel = 0;
	for (int32_t i = 0; i < $nc(bitsPerSample)->length; ++i) {
		bitsPerPixel += bitsPerSample->get(i);
	}
	int32_t bytesPerRow = (bitsPerPixel * width + 7) / 8;
	int32_t bufSize = (bytesPerRow + (bytesPerRow + 127) / 128);
	$var($bytes, compData, $new($bytes, bufSize));
	int32_t bytesWritten = 0;
	for (int32_t i = 0; i < height; ++i) {
		int32_t bytes = packBits(b, off, scanlineStride, compData, 0);
		off += scanlineStride;
		bytesWritten += bytes;
		$nc(this->stream)->write(compData, 0, bytes);
	}
	return bytesWritten;
}

TIFFPackBitsCompressor::TIFFPackBitsCompressor() {
}

$Class* TIFFPackBitsCompressor::load$($String* name, bool initialize) {
	$loadClass(TIFFPackBitsCompressor, name, initialize, &_TIFFPackBitsCompressor_ClassInfo_, allocate$TIFFPackBitsCompressor);
	return class$;
}

$Class* TIFFPackBitsCompressor::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com