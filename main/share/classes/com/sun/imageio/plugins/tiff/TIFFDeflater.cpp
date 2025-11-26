#include <com/sun/imageio/plugins/tiff/TIFFDeflater.h>

#include <com/sun/imageio/plugins/tiff/TIFFCompressor.h>
#include <java/util/zip/Deflater.h>
#include <javax/imageio/ImageWriteParam.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/stream/ImageOutputStream.h>
#include <jcpp.h>

#undef DEFAULT_COMPRESSION
#undef MODE_EXPLICIT
#undef PREDICTOR_HORIZONTAL_DIFFERENCING

using $TIFFCompressor = ::com::sun::imageio::plugins::tiff::TIFFCompressor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Deflater = ::java::util::zip::Deflater;
using $ImageWriteParam = ::javax::imageio::ImageWriteParam;
using $BaselineTIFFTagSet = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet;
using $ImageOutputStream = ::javax::imageio::stream::ImageOutputStream;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

$FieldInfo _TIFFDeflater_FieldInfo_[] = {
	{"deflater", "Ljava/util/zip/Deflater;", nullptr, 0, $field(TIFFDeflater, deflater)},
	{"predictor", "I", nullptr, 0, $field(TIFFDeflater, predictor)},
	{}
};

$MethodInfo _TIFFDeflater_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjavax/imageio/ImageWriteParam;I)V", nullptr, $PUBLIC, $method(static_cast<void(TIFFDeflater::*)($String*,int32_t,$ImageWriteParam*,int32_t)>(&TIFFDeflater::init$))},
	{"encode", "([BIII[II)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _TIFFDeflater_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.tiff.TIFFDeflater",
	"com.sun.imageio.plugins.tiff.TIFFCompressor",
	nullptr,
	_TIFFDeflater_FieldInfo_,
	_TIFFDeflater_MethodInfo_
};

$Object* allocate$TIFFDeflater($Class* clazz) {
	return $of($alloc(TIFFDeflater));
}

void TIFFDeflater::init$($String* compressionType, int32_t compressionTagValue, $ImageWriteParam* param, int32_t predictorValue) {
	$TIFFCompressor::init$(compressionType, compressionTagValue, true);
	this->predictor = predictorValue;
	int32_t deflateLevel = 0;
	if (param != nullptr && param->getCompressionMode() == $ImageWriteParam::MODE_EXPLICIT) {
		float quality = param->getCompressionQuality();
		deflateLevel = $cast(int32_t, (1 + 8 * quality));
	} else {
		deflateLevel = $Deflater::DEFAULT_COMPRESSION;
	}
	$set(this, deflater, $new($Deflater, deflateLevel));
}

int32_t TIFFDeflater::encode($bytes* b, int32_t off, int32_t width, int32_t height, $ints* bitsPerSample, int32_t scanlineStride) {
	$useLocalCurrentObjectStackCache();
	int32_t inputSize = height * scanlineStride;
	int32_t blocks = (inputSize + 32767) / 32768;
	$var($bytes, compData, $new($bytes, inputSize + 5 * blocks + 6));
	int32_t numCompressedBytes = 0;
	if (this->predictor == $BaselineTIFFTagSet::PREDICTOR_HORIZONTAL_DIFFERENCING) {
		int32_t samplesPerPixel = $nc(bitsPerSample)->length;
		int32_t bitsPerPixel = 0;
		for (int32_t i = 0; i < samplesPerPixel; ++i) {
			bitsPerPixel += bitsPerSample->get(i);
		}
		int32_t bytesPerRow = (bitsPerPixel * width + 7) / 8;
		$var($bytes, rowBuf, $new($bytes, bytesPerRow));
		int32_t maxRow = height - 1;
		for (int32_t i = 0; i < height; ++i) {
			$System::arraycopy(b, off, rowBuf, 0, bytesPerRow);
			for (int32_t j = bytesPerRow - 1; j >= samplesPerPixel; --j) {
				(*rowBuf)[j] -= rowBuf->get(j - samplesPerPixel);
			}
			$nc(this->deflater)->setInput(rowBuf);
			if (i == maxRow) {
				$nc(this->deflater)->finish();
			}
			int32_t numBytes = 0;
			while ((numBytes = $nc(this->deflater)->deflate(compData, numCompressedBytes, compData->length - numCompressedBytes)) != 0) {
				numCompressedBytes += numBytes;
			}
			off += scanlineStride;
		}
	} else {
		$nc(this->deflater)->setInput(b, off, height * scanlineStride);
		$nc(this->deflater)->finish();
		numCompressedBytes = $nc(this->deflater)->deflate(compData);
	}
	$nc(this->deflater)->reset();
	$nc(this->stream)->write(compData, 0, numCompressedBytes);
	return numCompressedBytes;
}

TIFFDeflater::TIFFDeflater() {
}

$Class* TIFFDeflater::load$($String* name, bool initialize) {
	$loadClass(TIFFDeflater, name, initialize, &_TIFFDeflater_ClassInfo_, allocate$TIFFDeflater);
	return class$;
}

$Class* TIFFDeflater::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com