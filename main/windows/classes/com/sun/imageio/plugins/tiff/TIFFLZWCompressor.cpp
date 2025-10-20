#include <com/sun/imageio/plugins/tiff/TIFFLZWCompressor.h>

#include <com/sun/imageio/plugins/common/LZWCompressor.h>
#include <com/sun/imageio/plugins/tiff/TIFFCompressor.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/stream/ImageOutputStream.h>
#include <jcpp.h>

#undef COMPRESSION_LZW
#undef PREDICTOR_HORIZONTAL_DIFFERENCING

using $LZWCompressor = ::com::sun::imageio::plugins::common::LZWCompressor;
using $TIFFCompressor = ::com::sun::imageio::plugins::tiff::TIFFCompressor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BaselineTIFFTagSet = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;
using $ImageOutputStream = ::javax::imageio::stream::ImageOutputStream;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

$FieldInfo _TIFFLZWCompressor_FieldInfo_[] = {
	{"predictor", "I", nullptr, $PRIVATE | $FINAL, $field(TIFFLZWCompressor, predictor)},
	{}
};

$MethodInfo _TIFFLZWCompressor_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(TIFFLZWCompressor::*)(int32_t)>(&TIFFLZWCompressor::init$))},
	{"encode", "([BIII[II)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"setStream", "(Ljavax/imageio/stream/ImageOutputStream;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TIFFLZWCompressor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.tiff.TIFFLZWCompressor",
	"com.sun.imageio.plugins.tiff.TIFFCompressor",
	nullptr,
	_TIFFLZWCompressor_FieldInfo_,
	_TIFFLZWCompressor_MethodInfo_
};

$Object* allocate$TIFFLZWCompressor($Class* clazz) {
	return $of($alloc(TIFFLZWCompressor));
}

void TIFFLZWCompressor::init$(int32_t predictorValue) {
	$TIFFCompressor::init$("LZW"_s, $BaselineTIFFTagSet::COMPRESSION_LZW, true);
	this->predictor = predictorValue;
}

void TIFFLZWCompressor::setStream($ImageOutputStream* stream) {
	$TIFFCompressor::setStream(stream);
}

int32_t TIFFLZWCompressor::encode($bytes* b, int32_t off, int32_t width, int32_t height, $ints* bitsPerSample, int32_t scanlineStride) {
	$useLocalCurrentObjectStackCache();
	$var($LZWCompressor, lzwCompressor, $new($LZWCompressor, this->stream, 8, true));
	int32_t samplesPerPixel = $nc(bitsPerSample)->length;
	int32_t bitsPerPixel = 0;
	for (int32_t i = 0; i < samplesPerPixel; ++i) {
		bitsPerPixel += bitsPerSample->get(i);
	}
	int32_t bytesPerRow = (bitsPerPixel * width + 7) / 8;
	int64_t initialStreamPosition = $nc(this->stream)->getStreamPosition();
	bool usePredictor = this->predictor == $BaselineTIFFTagSet::PREDICTOR_HORIZONTAL_DIFFERENCING;
	if (bytesPerRow == scanlineStride && !usePredictor) {
		lzwCompressor->compress(b, off, bytesPerRow * height);
	} else {
		$var($bytes, rowBuf, usePredictor ? $new($bytes, bytesPerRow) : ($bytes*)nullptr);
		for (int32_t i = 0; i < height; ++i) {
			if (usePredictor) {
				$System::arraycopy(b, off, rowBuf, 0, bytesPerRow);
				for (int32_t j = bytesPerRow - 1; j >= samplesPerPixel; --j) {
					(*$nc(rowBuf))[j] -= rowBuf->get(j - samplesPerPixel);
				}
				lzwCompressor->compress(rowBuf, 0, bytesPerRow);
			} else {
				lzwCompressor->compress(b, off, bytesPerRow);
			}
			off += scanlineStride;
		}
	}
	lzwCompressor->flush();
	int32_t bytesWritten = (int32_t)($nc(this->stream)->getStreamPosition() - initialStreamPosition);
	return bytesWritten;
}

TIFFLZWCompressor::TIFFLZWCompressor() {
}

$Class* TIFFLZWCompressor::load$($String* name, bool initialize) {
	$loadClass(TIFFLZWCompressor, name, initialize, &_TIFFLZWCompressor_ClassInfo_, allocate$TIFFLZWCompressor);
	return class$;
}

$Class* TIFFLZWCompressor::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com