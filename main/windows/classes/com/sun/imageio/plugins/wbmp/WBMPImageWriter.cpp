#include <com/sun/imageio/plugins/wbmp/WBMPImageWriter.h>

#include <com/sun/imageio/plugins/common/I18N.h>
#include <com/sun/imageio/plugins/wbmp/WBMPMetadata.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DataBufferByte.h>
#include <java/awt/image/IndexColorModel.h>
#include <java/awt/image/MultiPixelPackedSampleModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/RenderedImage.h>
#include <java/awt/image/SampleModel.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/IllegalStateException.h>
#include <javax/imageio/IIOImage.h>
#include <javax/imageio/ImageTypeSpecifier.h>
#include <javax/imageio/ImageWriteParam.h>
#include <javax/imageio/ImageWriter.h>
#include <javax/imageio/metadata/IIOMetadata.h>
#include <javax/imageio/spi/ImageWriterSpi.h>
#include <javax/imageio/stream/ImageOutputStream.h>
#include <jcpp.h>

#undef TYPE_BYTE
#undef TYPE_INT

using $I18N = ::com::sun::imageio::plugins::common::I18N;
using $WBMPMetadata = ::com::sun::imageio::plugins::wbmp::WBMPMetadata;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ColorModel = ::java::awt::image::ColorModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $DataBufferByte = ::java::awt::image::DataBufferByte;
using $IndexColorModel = ::java::awt::image::IndexColorModel;
using $MultiPixelPackedSampleModel = ::java::awt::image::MultiPixelPackedSampleModel;
using $Raster = ::java::awt::image::Raster;
using $RenderedImage = ::java::awt::image::RenderedImage;
using $SampleModel = ::java::awt::image::SampleModel;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $IIOImage = ::javax::imageio::IIOImage;
using $IIOParam = ::javax::imageio::IIOParam;
using $ImageTypeSpecifier = ::javax::imageio::ImageTypeSpecifier;
using $ImageWriteParam = ::javax::imageio::ImageWriteParam;
using $ImageWriter = ::javax::imageio::ImageWriter;
using $IIOMetadata = ::javax::imageio::metadata::IIOMetadata;
using $ImageWriterSpi = ::javax::imageio::spi::ImageWriterSpi;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;
using $ImageOutputStream = ::javax::imageio::stream::ImageOutputStream;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace wbmp {

$FieldInfo _WBMPImageWriter_FieldInfo_[] = {
	{"stream", "Ljavax/imageio/stream/ImageOutputStream;", nullptr, $PRIVATE, $field(WBMPImageWriter, stream)},
	{}
};

$MethodInfo _WBMPImageWriter_MethodInfo_[] = {
	{"<init>", "(Ljavax/imageio/spi/ImageWriterSpi;)V", nullptr, $PUBLIC, $method(static_cast<void(WBMPImageWriter::*)($ImageWriterSpi*)>(&WBMPImageWriter::init$))},
	{"canWriteRasters", "()Z", nullptr, $PUBLIC},
	{"checkSampleModel", "(Ljava/awt/image/SampleModel;)V", nullptr, $PRIVATE, $method(static_cast<void(WBMPImageWriter::*)($SampleModel*)>(&WBMPImageWriter::checkSampleModel))},
	{"convertImageMetadata", "(Ljavax/imageio/metadata/IIOMetadata;Ljavax/imageio/ImageTypeSpecifier;Ljavax/imageio/ImageWriteParam;)Ljavax/imageio/metadata/IIOMetadata;", nullptr, $PUBLIC},
	{"convertStreamMetadata", "(Ljavax/imageio/metadata/IIOMetadata;Ljavax/imageio/ImageWriteParam;)Ljavax/imageio/metadata/IIOMetadata;", nullptr, $PUBLIC},
	{"getDefaultImageMetadata", "(Ljavax/imageio/ImageTypeSpecifier;Ljavax/imageio/ImageWriteParam;)Ljavax/imageio/metadata/IIOMetadata;", nullptr, $PUBLIC},
	{"getDefaultStreamMetadata", "(Ljavax/imageio/ImageWriteParam;)Ljavax/imageio/metadata/IIOMetadata;", nullptr, $PUBLIC},
	{"getNumBits", "(I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&WBMPImageWriter::getNumBits))},
	{"intToMultiByte", "(I)[B", nullptr, $PRIVATE | $STATIC, $method(static_cast<$bytes*(*)(int32_t)>(&WBMPImageWriter::intToMultiByte))},
	{"reset", "()V", nullptr, $PUBLIC},
	{"setOutput", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"write", "(Ljavax/imageio/metadata/IIOMetadata;Ljavax/imageio/IIOImage;Ljavax/imageio/ImageWriteParam;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _WBMPImageWriter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.wbmp.WBMPImageWriter",
	"javax.imageio.ImageWriter",
	nullptr,
	_WBMPImageWriter_FieldInfo_,
	_WBMPImageWriter_MethodInfo_
};

$Object* allocate$WBMPImageWriter($Class* clazz) {
	return $of($alloc(WBMPImageWriter));
}

int32_t WBMPImageWriter::getNumBits(int32_t intValue) {
	$init(WBMPImageWriter);
	int32_t numBits = 32;
	int32_t mask = (int32_t)0x80000000;
	while (mask != 0 && ((int32_t)(intValue & (uint32_t)mask)) == 0) {
		--numBits;
		$usrAssign(mask, 1);
	}
	return numBits;
}

$bytes* WBMPImageWriter::intToMultiByte(int32_t intValue) {
	$init(WBMPImageWriter);
	int32_t numBitsLeft = getNumBits(intValue);
	$var($bytes, multiBytes, $new($bytes, (numBitsLeft + 6) / 7));
	int32_t maxIndex = multiBytes->length - 1;
	for (int32_t b = 0; b <= maxIndex; ++b) {
		multiBytes->set(b, (int8_t)((int32_t)(($usr(intValue, (maxIndex - b) * 7)) & (uint32_t)127)));
		if (b != maxIndex) {
			(*multiBytes)[b] |= (int8_t)128;
		}
	}
	return multiBytes;
}

void WBMPImageWriter::init$($ImageWriterSpi* originator) {
	$ImageWriter::init$(originator);
	$set(this, stream, nullptr);
}

void WBMPImageWriter::setOutput(Object$* output) {
	$ImageWriter::setOutput(output);
	if (output != nullptr) {
		if (!($instanceOf($ImageOutputStream, output))) {
			$throwNew($IllegalArgumentException, $($I18N::getString("WBMPImageWriter"_s)));
		}
		$set(this, stream, $cast($ImageOutputStream, output));
	} else {
		$set(this, stream, nullptr);
	}
}

$IIOMetadata* WBMPImageWriter::getDefaultStreamMetadata($ImageWriteParam* param) {
	return nullptr;
}

$IIOMetadata* WBMPImageWriter::getDefaultImageMetadata($ImageTypeSpecifier* imageType, $ImageWriteParam* param) {
	$var($WBMPMetadata, meta, $new($WBMPMetadata));
	meta->wbmpType = 0;
	return meta;
}

$IIOMetadata* WBMPImageWriter::convertStreamMetadata($IIOMetadata* inData, $ImageWriteParam* param) {
	return nullptr;
}

$IIOMetadata* WBMPImageWriter::convertImageMetadata($IIOMetadata* metadata, $ImageTypeSpecifier* type, $ImageWriteParam* param) {
	return nullptr;
}

bool WBMPImageWriter::canWriteRasters() {
	return true;
}

void WBMPImageWriter::write($IIOMetadata* streamMetadata, $IIOImage* image, $ImageWriteParam* param$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($ImageWriteParam, param, param$renamed);
	if (this->stream == nullptr) {
		$throwNew($IllegalStateException, $($I18N::getString("WBMPImageWriter3"_s)));
	}
	if (image == nullptr) {
		$throwNew($IllegalArgumentException, $($I18N::getString("WBMPImageWriter4"_s)));
	}
	clearAbortRequest();
	processImageStarted(0);
	if (param == nullptr) {
		$assign(param, getDefaultWriteParam());
	}
	$var($RenderedImage, input, nullptr);
	$var($Raster, inputRaster, nullptr);
	bool writeRaster = $nc(image)->hasRaster();
	$var($Rectangle, sourceRegion, $nc(param)->getSourceRegion());
	$var($SampleModel, sampleModel, nullptr);
	if (writeRaster) {
		$assign(inputRaster, image->getRaster());
		$assign(sampleModel, $nc(inputRaster)->getSampleModel());
	} else {
		$assign(input, image->getRenderedImage());
		$assign(sampleModel, $nc(input)->getSampleModel());
		$assign(inputRaster, input->getData());
	}
	checkSampleModel(sampleModel);
	if (sourceRegion == nullptr) {
		$assign(sourceRegion, $nc(inputRaster)->getBounds());
	} else {
		$assign(sourceRegion, $nc(sourceRegion)->intersection($($nc(inputRaster)->getBounds())));
	}
	if ($nc(sourceRegion)->isEmpty()) {
		$throwNew($RuntimeException, $($I18N::getString("WBMPImageWriter1"_s)));
	}
	int32_t scaleX = param->getSourceXSubsampling();
	int32_t scaleY = param->getSourceYSubsampling();
	int32_t xOffset = param->getSubsamplingXOffset();
	int32_t yOffset = param->getSubsamplingYOffset();
	$nc(sourceRegion)->translate(xOffset, yOffset);
	sourceRegion->width -= xOffset;
	sourceRegion->height -= yOffset;
	int32_t minX = $div(sourceRegion->x, scaleX);
	int32_t minY = $div(sourceRegion->y, scaleY);
	int32_t w = $div((sourceRegion->width + scaleX - 1), scaleX);
	int32_t h = $div((sourceRegion->height + scaleY - 1), scaleY);
	$var($Rectangle, destinationRegion, $new($Rectangle, minX, minY, w, h));
	$assign(sampleModel, $nc(sampleModel)->createCompatibleSampleModel(w, h));
	$var($SampleModel, destSM, sampleModel);
	bool var$0 = sampleModel->getDataType() != $DataBuffer::TYPE_BYTE || !($instanceOf($MultiPixelPackedSampleModel, sampleModel));
	if (var$0 || $nc(($cast($MultiPixelPackedSampleModel, sampleModel)))->getDataBitOffset() != 0) {
		$assign(destSM, $new($MultiPixelPackedSampleModel, $DataBuffer::TYPE_BYTE, w, h, 1, (w + 7) >> 3, 0));
	}
	if (!destinationRegion->equals(sourceRegion)) {
		if (scaleX == 1 && scaleY == 1) {
			int32_t var$1 = inputRaster->getMinX();
			$assign(inputRaster, $nc(inputRaster)->createChild(var$1, inputRaster->getMinY(), w, h, minX, minY, nullptr));
		} else {
			$var($WritableRaster, ras, $Raster::createWritableRaster(destSM, $$new($Point, minX, minY)));
			$var($bytes, data, $nc(($cast($DataBufferByte, $($nc(ras)->getDataBuffer()))))->getData());
			{
				int32_t j = minY;
				int32_t y = sourceRegion->y;
				int32_t k = 0;
				for (; j < minY + h; ++j, y += scaleY) {
					{
						int32_t i = 0;
						int32_t x = sourceRegion->x;
						for (; i < w; ++i, x += scaleX) {
							int32_t v = $nc(inputRaster)->getSample(x, y, 0);
							(*$nc(data))[k + (i >> 3)] |= $sl(v, 7 - ((int32_t)(i & (uint32_t)7)));
						}
					}
					k += (w + 7) >> 3;
				}
			}
			$assign(inputRaster, ras);
		}
	}
	if (!$of(destSM)->equals($($nc(inputRaster)->getSampleModel()))) {
		int32_t var$2 = $nc(inputRaster)->getMinX();
		$var($WritableRaster, raster, $Raster::createWritableRaster(destSM, $$new($Point, var$2, inputRaster->getMinY())));
		$nc(raster)->setRect(inputRaster);
		$assign(inputRaster, raster);
	}
	bool isWhiteZero = false;
	if (!writeRaster && $instanceOf($IndexColorModel, $($nc(input)->getColorModel()))) {
		$var($IndexColorModel, icm, $cast($IndexColorModel, input->getColorModel()));
		int32_t var$3 = $nc(icm)->getRed(0);
		isWhiteZero = var$3 > icm->getRed(1);
	}
	int32_t lineStride = $nc(($cast($MultiPixelPackedSampleModel, destSM)))->getScanlineStride();
	int32_t bytesPerRow = (w + 7) / 8;
	$var($bytes, bdata, $nc(($cast($DataBufferByte, $($nc(inputRaster)->getDataBuffer()))))->getData());
	$nc(this->stream)->write(0);
	$nc(this->stream)->write(0);
	$nc(this->stream)->write($(intToMultiByte(w)));
	$nc(this->stream)->write($(intToMultiByte(h)));
	if (!isWhiteZero && lineStride == bytesPerRow) {
		$nc(this->stream)->write(bdata, 0, h * bytesPerRow);
		processImageProgress(100.0f);
	} else {
		int32_t offset = 0;
		if (!isWhiteZero) {
			for (int32_t row = 0; row < h; ++row) {
				if (abortRequested()) {
					break;
				}
				$nc(this->stream)->write(bdata, offset, bytesPerRow);
				offset += lineStride;
				processImageProgress(100.0f * row / h);
			}
		} else {
			$var($bytes, inverted, $new($bytes, bytesPerRow));
			for (int32_t row = 0; row < h; ++row) {
				if (abortRequested()) {
					break;
				}
				for (int32_t col = 0; col < bytesPerRow; ++col) {
					inverted->set(col, (int8_t)(~($nc(bdata)->get(col + offset))));
				}
				$nc(this->stream)->write(inverted, 0, bytesPerRow);
				offset += lineStride;
				processImageProgress(100.0f * row / h);
			}
		}
	}
	if (abortRequested()) {
		processWriteAborted();
	} else {
		processImageComplete();
		$nc(this->stream)->flushBefore($nc(this->stream)->getStreamPosition());
	}
}

void WBMPImageWriter::reset() {
	$ImageWriter::reset();
	$set(this, stream, nullptr);
}

void WBMPImageWriter::checkSampleModel($SampleModel* sm) {
	int32_t type = $nc(sm)->getDataType();
	bool var$0 = type < $DataBuffer::TYPE_BYTE || type > $DataBuffer::TYPE_INT || sm->getNumBands() != 1;
	if (var$0 || sm->getSampleSize(0) != 1) {
		$throwNew($IllegalArgumentException, $($I18N::getString("WBMPImageWriter2"_s)));
	}
}

WBMPImageWriter::WBMPImageWriter() {
}

$Class* WBMPImageWriter::load$($String* name, bool initialize) {
	$loadClass(WBMPImageWriter, name, initialize, &_WBMPImageWriter_ClassInfo_, allocate$WBMPImageWriter);
	return class$;
}

$Class* WBMPImageWriter::class$ = nullptr;

				} // wbmp
			} // plugins
		} // imageio
	} // sun
} // com