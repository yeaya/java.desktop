#include <com/sun/imageio/plugins/tiff/TIFFPackBitsDecompressor.h>

#include <com/sun/imageio/plugins/tiff/TIFFDecompressor.h>
#include <com/sun/imageio/plugins/tiff/TIFFImageReader.h>
#include <java/lang/Array.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/imageio/ImageReader.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <jcpp.h>

using $TIFFDecompressor = ::com::sun::imageio::plugins::tiff::TIFFDecompressor;
using $TIFFImageReader = ::com::sun::imageio::plugins::tiff::TIFFImageReader;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageReader = ::javax::imageio::ImageReader;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

$MethodInfo _TIFFPackBitsDecompressor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TIFFPackBitsDecompressor::*)()>(&TIFFPackBitsDecompressor::init$))},
	{"decode", "([BI[BI)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"decodeRaw", "([BIII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _TIFFPackBitsDecompressor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.tiff.TIFFPackBitsDecompressor",
	"com.sun.imageio.plugins.tiff.TIFFDecompressor",
	nullptr,
	nullptr,
	_TIFFPackBitsDecompressor_MethodInfo_
};

$Object* allocate$TIFFPackBitsDecompressor($Class* clazz) {
	return $of($alloc(TIFFPackBitsDecompressor));
}

void TIFFPackBitsDecompressor::init$() {
	$TIFFDecompressor::init$();
}

int32_t TIFFPackBitsDecompressor::decode($bytes* srcData, int32_t srcOffset, $bytes* dstData, int32_t dstOffset) {
	int32_t srcIndex = srcOffset;
	int32_t dstIndex = dstOffset;
	int32_t dstArraySize = $nc(dstData)->length;
	int32_t srcArraySize = $nc(srcData)->length;
	try {
		while (dstIndex < dstArraySize && srcIndex < srcArraySize) {
			int8_t b = srcData->get(srcIndex++);
			if (b >= 0 && b <= 127) {
				for (int32_t i = 0; i < b + 1; ++i) {
					dstData->set(dstIndex++, srcData->get(srcIndex++));
				}
			} else if (b <= -1 && b >= -127) {
				int8_t repeat = srcData->get(srcIndex++);
				for (int32_t i = 0; i < (-b + 1); ++i) {
					dstData->set(dstIndex++, repeat);
				}
			} else {
				++srcIndex;
			}
		}
	} catch ($ArrayIndexOutOfBoundsException&) {
		$var($ArrayIndexOutOfBoundsException, e, $catch());
		if ($instanceOf($TIFFImageReader, this->reader)) {
			$nc(($cast($TIFFImageReader, this->reader)))->forwardWarningMessage("ArrayIndexOutOfBoundsException ignored in TIFFPackBitsDecompressor.decode()"_s);
		}
	}
	return dstIndex - dstOffset;
}

void TIFFPackBitsDecompressor::decodeRaw($bytes* b, int32_t dstOffset, int32_t bitsPerPixel, int32_t scanlineStride) {
	$nc(this->stream)->seek(this->offset);
	$var($bytes, srcData, $new($bytes, this->byteCount));
	$nc(this->stream)->readFully(srcData);
	int32_t bytesPerRow = (this->srcWidth * bitsPerPixel + 7) / 8;
	$var($bytes, buf, nullptr);
	int32_t bufOffset = 0;
	if (bytesPerRow == scanlineStride) {
		$assign(buf, b);
		bufOffset = dstOffset;
	} else {
		$assign(buf, $new($bytes, bytesPerRow * this->srcHeight));
		bufOffset = 0;
	}
	decode(srcData, 0, buf, bufOffset);
	if (bytesPerRow != scanlineStride) {
		int32_t off = 0;
		for (int32_t y = 0; y < this->srcHeight; ++y) {
			$System::arraycopy(buf, off, b, dstOffset, bytesPerRow);
			off += bytesPerRow;
			dstOffset += scanlineStride;
		}
	}
}

TIFFPackBitsDecompressor::TIFFPackBitsDecompressor() {
}

$Class* TIFFPackBitsDecompressor::load$($String* name, bool initialize) {
	$loadClass(TIFFPackBitsDecompressor, name, initialize, &_TIFFPackBitsDecompressor_ClassInfo_, allocate$TIFFPackBitsDecompressor);
	return class$;
}

$Class* TIFFPackBitsDecompressor::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com