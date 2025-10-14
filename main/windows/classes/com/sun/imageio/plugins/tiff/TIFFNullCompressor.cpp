#include <com/sun/imageio/plugins/tiff/TIFFNullCompressor.h>

#include <com/sun/imageio/plugins/tiff/TIFFCompressor.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/stream/ImageOutputStream.h>
#include <jcpp.h>

#undef COMPRESSION_NONE

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

$MethodInfo _TIFFNullCompressor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TIFFNullCompressor::*)()>(&TIFFNullCompressor::init$))},
	{"encode", "([BIII[II)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _TIFFNullCompressor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.tiff.TIFFNullCompressor",
	"com.sun.imageio.plugins.tiff.TIFFCompressor",
	nullptr,
	nullptr,
	_TIFFNullCompressor_MethodInfo_
};

$Object* allocate$TIFFNullCompressor($Class* clazz) {
	return $of($alloc(TIFFNullCompressor));
}

void TIFFNullCompressor::init$() {
	$TIFFCompressor::init$(""_s, $BaselineTIFFTagSet::COMPRESSION_NONE, true);
}

int32_t TIFFNullCompressor::encode($bytes* b, int32_t off, int32_t width, int32_t height, $ints* bitsPerSample, int32_t scanlineStride) {
	int32_t bitsPerPixel = 0;
	for (int32_t i = 0; i < $nc(bitsPerSample)->length; ++i) {
		bitsPerPixel += bitsPerSample->get(i);
	}
	int32_t bytesPerRow = (bitsPerPixel * width + 7) / 8;
	int32_t numBytes = height * bytesPerRow;
	if (bytesPerRow == scanlineStride) {
		$nc(this->stream)->write(b, off, numBytes);
	} else {
		for (int32_t row = 0; row < height; ++row) {
			$nc(this->stream)->write(b, off, bytesPerRow);
			off += scanlineStride;
		}
	}
	return numBytes;
}

TIFFNullCompressor::TIFFNullCompressor() {
}

$Class* TIFFNullCompressor::load$($String* name, bool initialize) {
	$loadClass(TIFFNullCompressor, name, initialize, &_TIFFNullCompressor_ClassInfo_, allocate$TIFFNullCompressor);
	return class$;
}

$Class* TIFFNullCompressor::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com