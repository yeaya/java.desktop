#include <com/sun/imageio/plugins/tiff/TIFFLSBDecompressor.h>

#include <com/sun/imageio/plugins/tiff/TIFFDecompressor.h>
#include <com/sun/imageio/plugins/tiff/TIFFFaxDecompressor.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <jcpp.h>

using $TIFFDecompressor = ::com::sun::imageio::plugins::tiff::TIFFDecompressor;
using $TIFFFaxDecompressor = ::com::sun::imageio::plugins::tiff::TIFFFaxDecompressor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

$FieldInfo _TIFFLSBDecompressor_FieldInfo_[] = {
	{"flipTable", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TIFFLSBDecompressor, flipTable)},
	{}
};

$MethodInfo _TIFFLSBDecompressor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TIFFLSBDecompressor::*)()>(&TIFFLSBDecompressor::init$))},
	{"decodeRaw", "([BIII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _TIFFLSBDecompressor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.tiff.TIFFLSBDecompressor",
	"com.sun.imageio.plugins.tiff.TIFFDecompressor",
	nullptr,
	_TIFFLSBDecompressor_FieldInfo_,
	_TIFFLSBDecompressor_MethodInfo_
};

$Object* allocate$TIFFLSBDecompressor($Class* clazz) {
	return $of($alloc(TIFFLSBDecompressor));
}


$bytes* TIFFLSBDecompressor::flipTable = nullptr;

void TIFFLSBDecompressor::init$() {
	$TIFFDecompressor::init$();
}

void TIFFLSBDecompressor::decodeRaw($bytes* b, int32_t dstOffset, int32_t bitsPerPixel, int32_t scanlineStride) {
	$nc(this->stream)->seek(this->offset);
	int32_t bytesPerRow = (this->srcWidth * bitsPerPixel + 7) / 8;
	if (bytesPerRow == scanlineStride) {
		int32_t numBytes = bytesPerRow * this->srcHeight;
		$nc(this->stream)->readFully(b, dstOffset, numBytes);
		int32_t xMax = dstOffset + numBytes;
		for (int32_t x = dstOffset; x < xMax; ++x) {
			$nc(b)->set(x, $nc(TIFFLSBDecompressor::flipTable)->get((int32_t)(b->get(x) & (uint32_t)255)));
		}
	} else {
		for (int32_t y = 0; y < this->srcHeight; ++y) {
			$nc(this->stream)->readFully(b, dstOffset, bytesPerRow);
			int32_t xMax = dstOffset + bytesPerRow;
			for (int32_t x = dstOffset; x < xMax; ++x) {
				$nc(b)->set(x, $nc(TIFFLSBDecompressor::flipTable)->get((int32_t)(b->get(x) & (uint32_t)255)));
			}
			dstOffset += scanlineStride;
		}
	}
}

void clinit$TIFFLSBDecompressor($Class* class$) {
	$init($TIFFFaxDecompressor);
	$assignStatic(TIFFLSBDecompressor::flipTable, $TIFFFaxDecompressor::flipTable);
}

TIFFLSBDecompressor::TIFFLSBDecompressor() {
}

$Class* TIFFLSBDecompressor::load$($String* name, bool initialize) {
	$loadClass(TIFFLSBDecompressor, name, initialize, &_TIFFLSBDecompressor_ClassInfo_, clinit$TIFFLSBDecompressor, allocate$TIFFLSBDecompressor);
	return class$;
}

$Class* TIFFLSBDecompressor::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com