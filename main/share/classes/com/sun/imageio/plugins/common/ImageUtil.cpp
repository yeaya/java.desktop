#include <com/sun/imageio/plugins/common/ImageUtil.h>

#include <com/sun/imageio/plugins/common/BogusColorSpace.h>
#include <com/sun/imageio/plugins/common/I18N.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Transparency.h>
#include <java/awt/color/ColorSpace.h>
#include <java/awt/color/ICC_ColorSpace.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ComponentColorModel.h>
#include <java/awt/image/ComponentSampleModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DataBufferByte.h>
#include <java/awt/image/DataBufferInt.h>
#include <java/awt/image/DataBufferShort.h>
#include <java/awt/image/DataBufferUShort.h>
#include <java/awt/image/DirectColorModel.h>
#include <java/awt/image/IndexColorModel.h>
#include <java/awt/image/MultiPixelPackedSampleModel.h>
#include <java/awt/image/PackedColorModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/RenderedImage.h>
#include <java/awt/image/SampleModel.h>
#include <java/awt/image/SinglePixelPackedSampleModel.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/Math.h>
#include <java/util/Iterator.h>
#include <javax/imageio/IIOException.h>
#include <javax/imageio/ImageReadParam.h>
#include <javax/imageio/ImageTypeSpecifier.h>
#include <javax/imageio/ImageWriter.h>
#include <javax/imageio/spi/ImageWriterSpi.h>
#include <jcpp.h>

#undef CS_CIEXYZ
#undef CS_GRAY
#undef CS_LINEAR_RGB
#undef CS_PYCC
#undef OPAQUE
#undef TRANSLUCENT
#undef TYPE_BYTE
#undef TYPE_DOUBLE
#undef TYPE_FLOAT
#undef TYPE_INT
#undef TYPE_SHORT
#undef TYPE_USHORT

using $BogusColorSpace = ::com::sun::imageio::plugins::common::BogusColorSpace;
using $I18N = ::com::sun::imageio::plugins::common::I18N;
using $Rectangle = ::java::awt::Rectangle;
using $Transparency = ::java::awt::Transparency;
using $ColorSpace = ::java::awt::color::ColorSpace;
using $ICC_ColorSpace = ::java::awt::color::ICC_ColorSpace;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $ComponentColorModel = ::java::awt::image::ComponentColorModel;
using $ComponentSampleModel = ::java::awt::image::ComponentSampleModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $DataBufferByte = ::java::awt::image::DataBufferByte;
using $DataBufferInt = ::java::awt::image::DataBufferInt;
using $DataBufferShort = ::java::awt::image::DataBufferShort;
using $DataBufferUShort = ::java::awt::image::DataBufferUShort;
using $DirectColorModel = ::java::awt::image::DirectColorModel;
using $IndexColorModel = ::java::awt::image::IndexColorModel;
using $MultiPixelPackedSampleModel = ::java::awt::image::MultiPixelPackedSampleModel;
using $PackedColorModel = ::java::awt::image::PackedColorModel;
using $Raster = ::java::awt::image::Raster;
using $RenderedImage = ::java::awt::image::RenderedImage;
using $SampleModel = ::java::awt::image::SampleModel;
using $SinglePixelPackedSampleModel = ::java::awt::image::SinglePixelPackedSampleModel;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $IIOException = ::javax::imageio::IIOException;
using $ImageReadParam = ::javax::imageio::ImageReadParam;
using $ImageTypeSpecifier = ::javax::imageio::ImageTypeSpecifier;
using $ImageWriter = ::javax::imageio::ImageWriter;
using $ImageWriterSpi = ::javax::imageio::spi::ImageWriterSpi;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace common {

$MethodInfo _ImageUtil_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ImageUtil::*)()>(&ImageUtil::init$))},
	{"canEncodeImage", "(Ljavax/imageio/ImageWriter;Ljavax/imageio/ImageTypeSpecifier;)V", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<void(*)($ImageWriter*,$ImageTypeSpecifier*)>(&ImageUtil::canEncodeImage)), "javax.imageio.IIOException"},
	{"canEncodeImage", "(Ljavax/imageio/ImageWriter;Ljava/awt/image/ColorModel;Ljava/awt/image/SampleModel;)V", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<void(*)($ImageWriter*,$ColorModel*,$SampleModel*)>(&ImageUtil::canEncodeImage)), "javax.imageio.IIOException"},
	{"convertObjectToString", "(Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)(Object$*)>(&ImageUtil::convertObjectToString))},
	{"createColorModel", "(Ljava/awt/image/SampleModel;)Ljava/awt/image/ColorModel;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<$ColorModel*(*)($SampleModel*)>(&ImageUtil::createColorModel))},
	{"createColorModel", "(Ljava/awt/color/ColorSpace;Ljava/awt/image/SampleModel;)Ljava/awt/image/ColorModel;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ColorModel*(*)($ColorSpace*,$SampleModel*)>(&ImageUtil::createColorModel))},
	{"getBandSize", "(Ljava/awt/image/SampleModel;)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)($SampleModel*)>(&ImageUtil::getBandSize))},
	{"getDestinationType", "(Ljavax/imageio/ImageReadParam;Ljava/util/Iterator;)Ljavax/imageio/ImageTypeSpecifier;", "(Ljavax/imageio/ImageReadParam;Ljava/util/Iterator<Ljavax/imageio/ImageTypeSpecifier;>;)Ljavax/imageio/ImageTypeSpecifier;", $PUBLIC | $STATIC | $FINAL, $method(static_cast<$ImageTypeSpecifier*(*)($ImageReadParam*,$Iterator*)>(&ImageUtil::getDestinationType)), "javax.imageio.IIOException"},
	{"getElementSize", "(Ljava/awt/image/SampleModel;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($SampleModel*)>(&ImageUtil::getElementSize))},
	{"getPackedBinaryData", "(Ljava/awt/image/Raster;Ljava/awt/Rectangle;)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)($Raster*,$Rectangle*)>(&ImageUtil::getPackedBinaryData))},
	{"getTileSize", "(Ljava/awt/image/SampleModel;)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)($SampleModel*)>(&ImageUtil::getTileSize))},
	{"getUnpackedBinaryData", "(Ljava/awt/image/Raster;Ljava/awt/Rectangle;)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)($Raster*,$Rectangle*)>(&ImageUtil::getUnpackedBinaryData))},
	{"imageIsContiguous", "(Ljava/awt/image/RenderedImage;)Z", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<bool(*)($RenderedImage*)>(&ImageUtil::imageIsContiguous))},
	{"isBinary", "(Ljava/awt/image/SampleModel;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($SampleModel*)>(&ImageUtil::isBinary))},
	{"isIndicesForGrayscale", "([B[B[B)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($bytes*,$bytes*,$bytes*)>(&ImageUtil::isIndicesForGrayscale))},
	{"isNonStandardICCColorSpace", "(Ljava/awt/color/ColorSpace;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($ColorSpace*)>(&ImageUtil::isNonStandardICCColorSpace))},
	{"setPackedBinaryData", "([BLjava/awt/image/WritableRaster;Ljava/awt/Rectangle;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($bytes*,$WritableRaster*,$Rectangle*)>(&ImageUtil::setPackedBinaryData))},
	{"setUnpackedBinaryData", "([BLjava/awt/image/WritableRaster;Ljava/awt/Rectangle;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($bytes*,$WritableRaster*,$Rectangle*)>(&ImageUtil::setUnpackedBinaryData))},
	{}
};

$ClassInfo _ImageUtil_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.common.ImageUtil",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ImageUtil_MethodInfo_
};

$Object* allocate$ImageUtil($Class* clazz) {
	return $of($alloc(ImageUtil));
}

void ImageUtil::init$() {
}

$ColorModel* ImageUtil::createColorModel($SampleModel* sampleModel) {
	$useLocalCurrentObjectStackCache();
	if (sampleModel == nullptr) {
		$throwNew($IllegalArgumentException, "sampleModel == null!"_s);
	}
	int32_t dataType = $nc(sampleModel)->getDataType();
	switch (dataType) {
	case $DataBuffer::TYPE_BYTE:
		{}
	case $DataBuffer::TYPE_USHORT:
		{}
	case $DataBuffer::TYPE_SHORT:
		{}
	case $DataBuffer::TYPE_INT:
		{}
	case $DataBuffer::TYPE_FLOAT:
		{}
	case $DataBuffer::TYPE_DOUBLE:
		{
			break;
		}
	default:
		{
			return nullptr;
		}
	}
	$var($ColorModel, colorModel, nullptr);
	$var($ints, sampleSize, sampleModel->getSampleSize());
	if ($instanceOf($ComponentSampleModel, sampleModel)) {
		int32_t numBands = sampleModel->getNumBands();
		$var($ColorSpace, colorSpace, nullptr);
		if (numBands <= 2) {
			$assign(colorSpace, $ColorSpace::getInstance($ColorSpace::CS_GRAY));
		} else if (numBands <= 4) {
			$assign(colorSpace, $ColorSpace::getInstance($ColorSpace::CS_sRGB));
		} else {
			$assign(colorSpace, $new($BogusColorSpace, numBands));
		}
		bool hasAlpha = (numBands == 2) || (numBands == 4);
		bool isAlphaPremultiplied = false;
		int32_t transparency = hasAlpha ? $Transparency::TRANSLUCENT : $Transparency::OPAQUE;
		$assign(colorModel, $new($ComponentColorModel, colorSpace, sampleSize, hasAlpha, isAlphaPremultiplied, transparency, dataType));
	} else if (sampleModel->getNumBands() <= 4 && $instanceOf($SinglePixelPackedSampleModel, sampleModel)) {
		$var($SinglePixelPackedSampleModel, sppsm, $cast($SinglePixelPackedSampleModel, sampleModel));
		$var($ints, bitMasks, sppsm->getBitMasks());
		int32_t rmask = 0;
		int32_t gmask = 0;
		int32_t bmask = 0;
		int32_t amask = 0;
		int32_t numBands = $nc(bitMasks)->length;
		if (numBands <= 2) {
			rmask = (gmask = (bmask = bitMasks->get(0)));
			if (numBands == 2) {
				amask = bitMasks->get(1);
			}
		} else {
			rmask = bitMasks->get(0);
			gmask = bitMasks->get(1);
			bmask = bitMasks->get(2);
			if (numBands == 4) {
				amask = bitMasks->get(3);
			}
		}
		int32_t bits = 0;
		for (int32_t i = 0; i < $nc(sampleSize)->length; ++i) {
			bits += sampleSize->get(i);
		}
		return $new($DirectColorModel, bits, rmask, gmask, bmask, amask);
	} else if ($instanceOf($MultiPixelPackedSampleModel, sampleModel)) {
		int32_t bitsPerSample = $nc(sampleSize)->get(0);
		int32_t numEntries = $sl(1, bitsPerSample);
		$var($bytes, map, $new($bytes, numEntries));
		for (int32_t i = 0; i < numEntries; ++i) {
			map->set(i, (int8_t)($div(i * 255, (numEntries - 1))));
		}
		$assign(colorModel, $new($IndexColorModel, bitsPerSample, numEntries, map, map, map));
	}
	return colorModel;
}

$bytes* ImageUtil::getPackedBinaryData($Raster* raster, $Rectangle* rect) {
	$useLocalCurrentObjectStackCache();
	$var($SampleModel, sm, $nc(raster)->getSampleModel());
	if (!isBinary(sm)) {
		$throwNew($IllegalArgumentException, $($I18N::getString("ImageUtil0"_s)));
	}
	int32_t rectX = $nc(rect)->x;
	int32_t rectY = rect->y;
	int32_t rectWidth = rect->width;
	int32_t rectHeight = rect->height;
	$var($DataBuffer, dataBuffer, raster->getDataBuffer());
	int32_t dx = rectX - raster->getSampleModelTranslateX();
	int32_t dy = rectY - raster->getSampleModelTranslateY();
	$var($MultiPixelPackedSampleModel, mpp, $cast($MultiPixelPackedSampleModel, sm));
	int32_t lineStride = $nc(mpp)->getScanlineStride();
	int32_t var$0 = $nc(dataBuffer)->getOffset();
	int32_t eltOffset = var$0 + mpp->getOffset(dx, dy);
	int32_t bitOffset = mpp->getBitOffset(dx);
	int32_t numBytesPerRow = (rectWidth + 7) / 8;
	if ($instanceOf($DataBufferByte, dataBuffer) && eltOffset == 0 && bitOffset == 0 && numBytesPerRow == lineStride && $nc($($nc(($cast($DataBufferByte, dataBuffer)))->getData()))->length == numBytesPerRow * rectHeight) {
		return $nc(($cast($DataBufferByte, dataBuffer)))->getData();
	}
	$var($bytes, binaryDataArray, $new($bytes, numBytesPerRow * rectHeight));
	int32_t b = 0;
	if (bitOffset == 0) {
		if ($instanceOf($DataBufferByte, dataBuffer)) {
			$var($bytes, data, $nc(($cast($DataBufferByte, dataBuffer)))->getData());
			int32_t stride = numBytesPerRow;
			int32_t offset = 0;
			for (int32_t y = 0; y < rectHeight; ++y) {
				$System::arraycopy(data, eltOffset, binaryDataArray, offset, stride);
				offset += stride;
				eltOffset += lineStride;
			}
		} else if ($instanceOf($DataBufferShort, dataBuffer) || $instanceOf($DataBufferUShort, dataBuffer)) {
			$var($shorts, data, $instanceOf($DataBufferShort, dataBuffer) ? $nc(($cast($DataBufferShort, dataBuffer)))->getData() : $nc(($cast($DataBufferUShort, dataBuffer)))->getData());
			for (int32_t y = 0; y < rectHeight; ++y) {
				int32_t xRemaining = rectWidth;
				int32_t i = eltOffset;
				while (xRemaining > 8) {
					int16_t datum = $nc(data)->get(i++);
					binaryDataArray->set(b++, (int8_t)((int32_t)(((int32_t)((uint32_t)datum >> 8)) & (uint32_t)255)));
					binaryDataArray->set(b++, (int8_t)((int32_t)(datum & (uint32_t)255)));
					xRemaining -= 16;
				}
				if (xRemaining > 0) {
					binaryDataArray->set(b++, (int8_t)((int32_t)(((int32_t)((uint32_t)$nc(data)->get(i) >> 8)) & (uint32_t)255)));
				}
				eltOffset += lineStride;
			}
		} else if ($instanceOf($DataBufferInt, dataBuffer)) {
			$var($ints, data, $nc(($cast($DataBufferInt, dataBuffer)))->getData());
			for (int32_t y = 0; y < rectHeight; ++y) {
				int32_t xRemaining = rectWidth;
				int32_t i = eltOffset;
				while (xRemaining > 24) {
					int32_t datum = $nc(data)->get(i++);
					binaryDataArray->set(b++, (int8_t)((int32_t)(((int32_t)((uint32_t)datum >> 24)) & (uint32_t)255)));
					binaryDataArray->set(b++, (int8_t)((int32_t)(((int32_t)((uint32_t)datum >> 16)) & (uint32_t)255)));
					binaryDataArray->set(b++, (int8_t)((int32_t)(((int32_t)((uint32_t)datum >> 8)) & (uint32_t)255)));
					binaryDataArray->set(b++, (int8_t)((int32_t)(datum & (uint32_t)255)));
					xRemaining -= 32;
				}
				int32_t shift = 24;
				while (xRemaining > 0) {
					binaryDataArray->set(b++, (int8_t)((int32_t)(($usr($nc(data)->get(i), shift)) & (uint32_t)255)));
					shift -= 8;
					xRemaining -= 8;
				}
				eltOffset += lineStride;
			}
		}
	} else if ($instanceOf($DataBufferByte, dataBuffer)) {
		$var($bytes, data, $nc(($cast($DataBufferByte, dataBuffer)))->getData());
		if (((int32_t)(bitOffset & (uint32_t)7)) == 0) {
			int32_t stride = numBytesPerRow;
			int32_t offset = 0;
			for (int32_t y = 0; y < rectHeight; ++y) {
				$System::arraycopy(data, eltOffset, binaryDataArray, offset, stride);
				offset += stride;
				eltOffset += lineStride;
			}
		} else {
			int32_t leftShift = (int32_t)(bitOffset & (uint32_t)7);
			int32_t rightShift = 8 - leftShift;
			for (int32_t y = 0; y < rectHeight; ++y) {
				int32_t i = eltOffset;
				int32_t xRemaining = rectWidth;
				while (xRemaining > 0) {
					if (xRemaining > rightShift) {
						int32_t var$1 = ($sl((int32_t)($nc(data)->get(i++) & (uint32_t)255), leftShift));
						binaryDataArray->set(b++, (int8_t)(var$1 | ($usr((int32_t)(data->get(i) & (uint32_t)255), rightShift))));
					} else {
						binaryDataArray->set(b++, (int8_t)($sl((int32_t)($nc(data)->get(i) & (uint32_t)255), leftShift)));
					}
					xRemaining -= 8;
				}
				eltOffset += lineStride;
			}
		}
	} else if ($instanceOf($DataBufferShort, dataBuffer) || $instanceOf($DataBufferUShort, dataBuffer)) {
		$var($shorts, data, $instanceOf($DataBufferShort, dataBuffer) ? $nc(($cast($DataBufferShort, dataBuffer)))->getData() : $nc(($cast($DataBufferUShort, dataBuffer)))->getData());
		for (int32_t y = 0; y < rectHeight; ++y) {
			int32_t bOffset = bitOffset;
			for (int32_t x = 0; x < rectWidth; x += 8, bOffset += 8) {
				int32_t i = eltOffset + bOffset / 16;
				int32_t mod = bOffset % 16;
				int32_t left = (int32_t)($nc(data)->get(i) & (uint32_t)0x0000FFFF);
				if (mod <= 8) {
					binaryDataArray->set(b++, (int8_t)($usr(left, 8 - mod)));
				} else {
					int32_t delta = mod - 8;
					int32_t right = (int32_t)(data->get(i + 1) & (uint32_t)0x0000FFFF);
					binaryDataArray->set(b++, (int8_t)(($sl(left, delta)) | ($usr(right, 16 - delta))));
				}
			}
			eltOffset += lineStride;
		}
	} else if ($instanceOf($DataBufferInt, dataBuffer)) {
		$var($ints, data, $nc(($cast($DataBufferInt, dataBuffer)))->getData());
		for (int32_t y = 0; y < rectHeight; ++y) {
			int32_t bOffset = bitOffset;
			for (int32_t x = 0; x < rectWidth; x += 8, bOffset += 8) {
				int32_t i = eltOffset + bOffset / 32;
				int32_t mod = bOffset % 32;
				int32_t left = $nc(data)->get(i);
				if (mod <= 24) {
					binaryDataArray->set(b++, (int8_t)($usr(left, 24 - mod)));
				} else {
					int32_t delta = mod - 24;
					int32_t right = data->get(i + 1);
					binaryDataArray->set(b++, (int8_t)(($sl(left, delta)) | ($usr(right, 32 - delta))));
				}
			}
			eltOffset += lineStride;
		}
	}
	return binaryDataArray;
}

$bytes* ImageUtil::getUnpackedBinaryData($Raster* raster, $Rectangle* rect) {
	$useLocalCurrentObjectStackCache();
	$var($SampleModel, sm, $nc(raster)->getSampleModel());
	if (!isBinary(sm)) {
		$throwNew($IllegalArgumentException, $($I18N::getString("ImageUtil0"_s)));
	}
	int32_t rectX = $nc(rect)->x;
	int32_t rectY = rect->y;
	int32_t rectWidth = rect->width;
	int32_t rectHeight = rect->height;
	$var($DataBuffer, dataBuffer, raster->getDataBuffer());
	int32_t dx = rectX - raster->getSampleModelTranslateX();
	int32_t dy = rectY - raster->getSampleModelTranslateY();
	$var($MultiPixelPackedSampleModel, mpp, $cast($MultiPixelPackedSampleModel, sm));
	int32_t lineStride = $nc(mpp)->getScanlineStride();
	int32_t var$0 = $nc(dataBuffer)->getOffset();
	int32_t eltOffset = var$0 + mpp->getOffset(dx, dy);
	int32_t bitOffset = mpp->getBitOffset(dx);
	$var($bytes, bdata, $new($bytes, rectWidth * rectHeight));
	int32_t maxY = rectY + rectHeight;
	int32_t maxX = rectX + rectWidth;
	int32_t k = 0;
	if ($instanceOf($DataBufferByte, dataBuffer)) {
		$var($bytes, data, $nc(($cast($DataBufferByte, dataBuffer)))->getData());
		for (int32_t y = rectY; y < maxY; ++y) {
			int32_t bOffset = eltOffset * 8 + bitOffset;
			for (int32_t x = rectX; x < maxX; ++x) {
				int8_t b = $nc(data)->get(bOffset / 8);
				bdata->set(k++, (int8_t)((int32_t)(($usr((int32_t)b, (int32_t)((7 - bOffset) & (uint32_t)7))) & (uint32_t)1)));
				++bOffset;
			}
			eltOffset += lineStride;
		}
	} else if ($instanceOf($DataBufferShort, dataBuffer) || $instanceOf($DataBufferUShort, dataBuffer)) {
		$var($shorts, data, $instanceOf($DataBufferShort, dataBuffer) ? $nc(($cast($DataBufferShort, dataBuffer)))->getData() : $nc(($cast($DataBufferUShort, dataBuffer)))->getData());
		for (int32_t y = rectY; y < maxY; ++y) {
			int32_t bOffset = eltOffset * 16 + bitOffset;
			for (int32_t x = rectX; x < maxX; ++x) {
				int16_t s = $nc(data)->get(bOffset / 16);
				bdata->set(k++, (int8_t)((int32_t)(($usr((int32_t)s, 15 - bOffset % 16)) & (uint32_t)1)));
				++bOffset;
			}
			eltOffset += lineStride;
		}
	} else if ($instanceOf($DataBufferInt, dataBuffer)) {
		$var($ints, data, $nc(($cast($DataBufferInt, dataBuffer)))->getData());
		for (int32_t y = rectY; y < maxY; ++y) {
			int32_t bOffset = eltOffset * 32 + bitOffset;
			for (int32_t x = rectX; x < maxX; ++x) {
				int32_t i = $nc(data)->get(bOffset / 32);
				bdata->set(k++, (int8_t)((int32_t)(($usr(i, 31 - bOffset % 32)) & (uint32_t)1)));
				++bOffset;
			}
			eltOffset += lineStride;
		}
	}
	return bdata;
}

void ImageUtil::setPackedBinaryData($bytes* binaryDataArray, $WritableRaster* raster, $Rectangle* rect) {
	$useLocalCurrentObjectStackCache();
	$var($SampleModel, sm, $nc(raster)->getSampleModel());
	if (!isBinary(sm)) {
		$throwNew($IllegalArgumentException, $($I18N::getString("ImageUtil0"_s)));
	}
	int32_t rectX = $nc(rect)->x;
	int32_t rectY = rect->y;
	int32_t rectWidth = rect->width;
	int32_t rectHeight = rect->height;
	$var($DataBuffer, dataBuffer, raster->getDataBuffer());
	int32_t dx = rectX - raster->getSampleModelTranslateX();
	int32_t dy = rectY - raster->getSampleModelTranslateY();
	$var($MultiPixelPackedSampleModel, mpp, $cast($MultiPixelPackedSampleModel, sm));
	int32_t lineStride = $nc(mpp)->getScanlineStride();
	int32_t var$0 = $nc(dataBuffer)->getOffset();
	int32_t eltOffset = var$0 + mpp->getOffset(dx, dy);
	int32_t bitOffset = mpp->getBitOffset(dx);
	int32_t b = 0;
	if (bitOffset == 0) {
		if ($instanceOf($DataBufferByte, dataBuffer)) {
			$var($bytes, data, $nc(($cast($DataBufferByte, dataBuffer)))->getData());
			if (data == binaryDataArray) {
				return;
			}
			int32_t stride = (rectWidth + 7) / 8;
			int32_t offset = 0;
			for (int32_t y = 0; y < rectHeight; ++y) {
				$System::arraycopy(binaryDataArray, offset, data, eltOffset, stride);
				offset += stride;
				eltOffset += lineStride;
			}
		} else if ($instanceOf($DataBufferShort, dataBuffer) || $instanceOf($DataBufferUShort, dataBuffer)) {
			$var($shorts, data, $instanceOf($DataBufferShort, dataBuffer) ? $nc(($cast($DataBufferShort, dataBuffer)))->getData() : $nc(($cast($DataBufferUShort, dataBuffer)))->getData());
			for (int32_t y = 0; y < rectHeight; ++y) {
				int32_t xRemaining = rectWidth;
				int32_t i = eltOffset;
				while (xRemaining > 8) {
					int32_t var$1 = (((int32_t)($nc(binaryDataArray)->get(b++) & (uint32_t)255)) << 8);
					$nc(data)->set(i++, (int16_t)(var$1 | ((int32_t)(binaryDataArray->get(b++) & (uint32_t)255))));
					xRemaining -= 16;
				}
				if (xRemaining > 0) {
					$nc(data)->set(i++, (int16_t)(((int32_t)($nc(binaryDataArray)->get(b++) & (uint32_t)255)) << 8));
				}
				eltOffset += lineStride;
			}
		} else if ($instanceOf($DataBufferInt, dataBuffer)) {
			$var($ints, data, $nc(($cast($DataBufferInt, dataBuffer)))->getData());
			for (int32_t y = 0; y < rectHeight; ++y) {
				int32_t xRemaining = rectWidth;
				int32_t i = eltOffset;
				while (xRemaining > 24) {
					int32_t var$4 = (((int32_t)($nc(binaryDataArray)->get(b++) & (uint32_t)255)) << 24);
					int32_t var$3 = var$4 | (((int32_t)(binaryDataArray->get(b++) & (uint32_t)255)) << 16);
					int32_t var$2 = var$3 | (((int32_t)(binaryDataArray->get(b++) & (uint32_t)255)) << 8);
					$nc(data)->set(i++, (var$2 | ((int32_t)(binaryDataArray->get(b++) & (uint32_t)255))));
					xRemaining -= 32;
				}
				int32_t shift = 24;
				while (xRemaining > 0) {
					(*$nc(data))[i] |= ($sl((int32_t)($nc(binaryDataArray)->get(b++) & (uint32_t)255), shift));
					shift -= 8;
					xRemaining -= 8;
				}
				eltOffset += lineStride;
			}
		}
	} else {
		int32_t stride = (rectWidth + 7) / 8;
		int32_t offset = 0;
		if ($instanceOf($DataBufferByte, dataBuffer)) {
			$var($bytes, data, $nc(($cast($DataBufferByte, dataBuffer)))->getData());
			if (((int32_t)(bitOffset & (uint32_t)7)) == 0) {
				for (int32_t y = 0; y < rectHeight; ++y) {
					$System::arraycopy(binaryDataArray, offset, data, eltOffset, stride);
					offset += stride;
					eltOffset += lineStride;
				}
			} else {
				int32_t rightShift = (int32_t)(bitOffset & (uint32_t)7);
				int32_t leftShift = 8 - rightShift;
				int32_t leftShift8 = 8 + leftShift;
				int32_t mask = (int8_t)($sl(255, leftShift));
				int32_t mask1 = (int8_t)~mask;
				for (int32_t y = 0; y < rectHeight; ++y) {
					int32_t i = eltOffset;
					int32_t xRemaining = rectWidth;
					while (xRemaining > 0) {
						int8_t datum = $nc(binaryDataArray)->get(b++);
						if (xRemaining > leftShift8) {
							$nc(data)->set(i, (int8_t)(((int32_t)(data->get(i) & (uint32_t)mask)) | ($usr((int32_t)(datum & (uint32_t)255), rightShift))));
							data->set(++i, (int8_t)($sl((int32_t)(datum & (uint32_t)255), leftShift)));
						} else if (xRemaining > leftShift) {
							$nc(data)->set(i, (int8_t)(((int32_t)(data->get(i) & (uint32_t)mask)) | ($usr((int32_t)(datum & (uint32_t)255), rightShift))));
							++i;
							data->set(i, (int8_t)(((int32_t)(data->get(i) & (uint32_t)mask1)) | ($sl((int32_t)(datum & (uint32_t)255), leftShift))));
						} else {
							int32_t remainMask = ($sl(1, leftShift - xRemaining)) - 1;
							$nc(data)->set(i, (int8_t)(((int32_t)(data->get(i) & (uint32_t)(mask | remainMask))) | ((int32_t)($usr((int32_t)(datum & (uint32_t)255), rightShift) & (uint32_t)~remainMask))));
						}
						xRemaining -= 8;
					}
					eltOffset += lineStride;
				}
			}
		} else if ($instanceOf($DataBufferShort, dataBuffer) || $instanceOf($DataBufferUShort, dataBuffer)) {
			$var($shorts, data, $instanceOf($DataBufferShort, dataBuffer) ? $nc(($cast($DataBufferShort, dataBuffer)))->getData() : $nc(($cast($DataBufferUShort, dataBuffer)))->getData());
			int32_t rightShift = (int32_t)(bitOffset & (uint32_t)7);
			int32_t leftShift = 8 - rightShift;
			int32_t leftShift16 = 16 + leftShift;
			int32_t mask = (int16_t)(~($sl(255, leftShift)));
			int32_t mask1 = (int16_t)($sl(0x0000FFFF, leftShift));
			int32_t mask2 = (int16_t)~mask1;
			for (int32_t y = 0; y < rectHeight; ++y) {
				int32_t bOffset = bitOffset;
				int32_t xRemaining = rectWidth;
				for (int32_t x = 0; x < rectWidth; x += 8, bOffset += 8, xRemaining -= 8) {
					int32_t i = eltOffset + (bOffset >> 4);
					int32_t mod = (int32_t)(bOffset & (uint32_t)15);
					int32_t datum = (int32_t)($nc(binaryDataArray)->get(b++) & (uint32_t)255);
					if (mod <= 8) {
						if (xRemaining < 8) {
							datum &= (uint32_t)$sl(255, 8 - xRemaining);
						}
						$nc(data)->set(i, (int16_t)(((int32_t)(data->get(i) & (uint32_t)mask)) | ($sl(datum, leftShift))));
					} else if (xRemaining > leftShift16) {
						$nc(data)->set(i, (int16_t)(((int32_t)(data->get(i) & (uint32_t)mask1)) | ((int32_t)(($usr(datum, rightShift)) & (uint32_t)0x0000FFFF))));
						data->set(++i, (int16_t)((int32_t)(($sl(datum, leftShift)) & (uint32_t)0x0000FFFF)));
					} else if (xRemaining > leftShift) {
						$nc(data)->set(i, (int16_t)(((int32_t)(data->get(i) & (uint32_t)mask1)) | ((int32_t)(($usr(datum, rightShift)) & (uint32_t)0x0000FFFF))));
						++i;
						data->set(i, (int16_t)(((int32_t)(data->get(i) & (uint32_t)mask2)) | ((int32_t)(($sl(datum, leftShift)) & (uint32_t)0x0000FFFF))));
					} else {
						int32_t remainMask = ($sl(1, leftShift - xRemaining)) - 1;
						$nc(data)->set(i, (int16_t)(((int32_t)(data->get(i) & (uint32_t)(mask1 | remainMask))) | ((int32_t)(((int32_t)(($usr(datum, rightShift)) & (uint32_t)0x0000FFFF)) & (uint32_t)~remainMask))));
					}
				}
				eltOffset += lineStride;
			}
		} else if ($instanceOf($DataBufferInt, dataBuffer)) {
			$var($ints, data, $nc(($cast($DataBufferInt, dataBuffer)))->getData());
			int32_t rightShift = (int32_t)(bitOffset & (uint32_t)7);
			int32_t leftShift = 8 - rightShift;
			int32_t leftShift32 = 32 + leftShift;
			int32_t mask = $sl(-1, leftShift);
			int32_t mask1 = ~mask;
			for (int32_t y = 0; y < rectHeight; ++y) {
				int32_t bOffset = bitOffset;
				int32_t xRemaining = rectWidth;
				for (int32_t x = 0; x < rectWidth; x += 8, bOffset += 8, xRemaining -= 8) {
					int32_t i = eltOffset + (bOffset >> 5);
					int32_t mod = (int32_t)(bOffset & (uint32_t)31);
					int32_t datum = (int32_t)($nc(binaryDataArray)->get(b++) & (uint32_t)255);
					if (mod <= 24) {
						int32_t shift = 24 - mod;
						if (xRemaining < 8) {
							datum &= (uint32_t)$sl(255, 8 - xRemaining);
						}
						$nc(data)->set(i, ((int32_t)(data->get(i) & (uint32_t)(~($sl(255, shift))))) | ($sl(datum, shift)));
					} else if (xRemaining > leftShift32) {
						$nc(data)->set(i, ((int32_t)(data->get(i) & (uint32_t)mask)) | ($usr(datum, rightShift)));
						data->set(++i, $sl(datum, leftShift));
					} else if (xRemaining > leftShift) {
						$nc(data)->set(i, ((int32_t)(data->get(i) & (uint32_t)mask)) | ($usr(datum, rightShift)));
						++i;
						data->set(i, ((int32_t)(data->get(i) & (uint32_t)mask1)) | ($sl(datum, leftShift)));
					} else {
						int32_t remainMask = ($sl(1, leftShift - xRemaining)) - 1;
						$nc(data)->set(i, ((int32_t)(data->get(i) & (uint32_t)(mask | remainMask))) | ((int32_t)($usr(datum, rightShift) & (uint32_t)~remainMask)));
					}
				}
				eltOffset += lineStride;
			}
		}
	}
}

void ImageUtil::setUnpackedBinaryData($bytes* bdata, $WritableRaster* raster, $Rectangle* rect) {
	$useLocalCurrentObjectStackCache();
	$var($SampleModel, sm, $nc(raster)->getSampleModel());
	if (!isBinary(sm)) {
		$throwNew($IllegalArgumentException, $($I18N::getString("ImageUtil0"_s)));
	}
	int32_t rectX = $nc(rect)->x;
	int32_t rectY = rect->y;
	int32_t rectWidth = rect->width;
	int32_t rectHeight = rect->height;
	$var($DataBuffer, dataBuffer, raster->getDataBuffer());
	int32_t dx = rectX - raster->getSampleModelTranslateX();
	int32_t dy = rectY - raster->getSampleModelTranslateY();
	$var($MultiPixelPackedSampleModel, mpp, $cast($MultiPixelPackedSampleModel, sm));
	int32_t lineStride = $nc(mpp)->getScanlineStride();
	int32_t var$0 = $nc(dataBuffer)->getOffset();
	int32_t eltOffset = var$0 + mpp->getOffset(dx, dy);
	int32_t bitOffset = mpp->getBitOffset(dx);
	int32_t k = 0;
	if ($instanceOf($DataBufferByte, dataBuffer)) {
		$var($bytes, data, $nc(($cast($DataBufferByte, dataBuffer)))->getData());
		for (int32_t y = 0; y < rectHeight; ++y) {
			int32_t bOffset = eltOffset * 8 + bitOffset;
			for (int32_t x = 0; x < rectWidth; ++x) {
				if ($nc(bdata)->get(k++) != (int8_t)0) {
					(*$nc(data))[bOffset / 8] |= (int8_t)($sl(1, (int32_t)((7 - bOffset) & (uint32_t)7)));
				}
				++bOffset;
			}
			eltOffset += lineStride;
		}
	} else if ($instanceOf($DataBufferShort, dataBuffer) || $instanceOf($DataBufferUShort, dataBuffer)) {
		$var($shorts, data, $instanceOf($DataBufferShort, dataBuffer) ? $nc(($cast($DataBufferShort, dataBuffer)))->getData() : $nc(($cast($DataBufferUShort, dataBuffer)))->getData());
		for (int32_t y = 0; y < rectHeight; ++y) {
			int32_t bOffset = eltOffset * 16 + bitOffset;
			for (int32_t x = 0; x < rectWidth; ++x) {
				if ($nc(bdata)->get(k++) != (int8_t)0) {
					(*$nc(data))[bOffset / 16] |= (int16_t)($sl(1, 15 - bOffset % 16));
				}
				++bOffset;
			}
			eltOffset += lineStride;
		}
	} else if ($instanceOf($DataBufferInt, dataBuffer)) {
		$var($ints, data, $nc(($cast($DataBufferInt, dataBuffer)))->getData());
		for (int32_t y = 0; y < rectHeight; ++y) {
			int32_t bOffset = eltOffset * 32 + bitOffset;
			for (int32_t x = 0; x < rectWidth; ++x) {
				if ($nc(bdata)->get(k++) != (int8_t)0) {
					(*$nc(data))[bOffset / 32] |= ($sl(1, 31 - bOffset % 32));
				}
				++bOffset;
			}
			eltOffset += lineStride;
		}
	}
}

bool ImageUtil::isBinary($SampleModel* sm) {
	bool var$0 = $instanceOf($MultiPixelPackedSampleModel, sm) && $nc(($cast($MultiPixelPackedSampleModel, sm)))->getPixelBitStride() == 1;
	return var$0 && $nc(sm)->getNumBands() == 1;
}

$ColorModel* ImageUtil::createColorModel($ColorSpace* colorSpace$renamed, $SampleModel* sampleModel) {
	$useLocalCurrentObjectStackCache();
	$var($ColorSpace, colorSpace, colorSpace$renamed);
	$var($ColorModel, colorModel, nullptr);
	if (sampleModel == nullptr) {
		$throwNew($IllegalArgumentException, $($I18N::getString("ImageUtil1"_s)));
	}
	int32_t numBands = $nc(sampleModel)->getNumBands();
	if (numBands < 1 || numBands > 4) {
		return nullptr;
	}
	int32_t dataType = sampleModel->getDataType();
	if ($instanceOf($ComponentSampleModel, sampleModel)) {
		if (dataType < $DataBuffer::TYPE_BYTE || dataType > $DataBuffer::TYPE_DOUBLE) {
			return nullptr;
		}
		if (colorSpace == nullptr) {
			$assign(colorSpace, numBands <= 2 ? $ColorSpace::getInstance($ColorSpace::CS_GRAY) : $ColorSpace::getInstance($ColorSpace::CS_sRGB));
		}
		bool useAlpha = (numBands == 2) || (numBands == 4);
		int32_t transparency = useAlpha ? $Transparency::TRANSLUCENT : $Transparency::OPAQUE;
		bool premultiplied = false;
		int32_t dataTypeSize = $DataBuffer::getDataTypeSize(dataType);
		$var($ints, bits, $new($ints, numBands));
		for (int32_t i = 0; i < numBands; ++i) {
			bits->set(i, dataTypeSize);
		}
		$assign(colorModel, $new($ComponentColorModel, colorSpace, bits, useAlpha, premultiplied, transparency, dataType));
	} else if ($instanceOf($SinglePixelPackedSampleModel, sampleModel)) {
		$var($SinglePixelPackedSampleModel, sppsm, $cast($SinglePixelPackedSampleModel, sampleModel));
		$var($ints, bitMasks, sppsm->getBitMasks());
		int32_t rmask = 0;
		int32_t gmask = 0;
		int32_t bmask = 0;
		int32_t amask = 0;
		numBands = $nc(bitMasks)->length;
		if (numBands <= 2) {
			rmask = (gmask = (bmask = bitMasks->get(0)));
			if (numBands == 2) {
				amask = bitMasks->get(1);
			}
		} else {
			rmask = bitMasks->get(0);
			gmask = bitMasks->get(1);
			bmask = bitMasks->get(2);
			if (numBands == 4) {
				amask = bitMasks->get(3);
			}
		}
		$var($ints, sampleSize, sppsm->getSampleSize());
		int32_t bits = 0;
		for (int32_t i = 0; i < $nc(sampleSize)->length; ++i) {
			bits += sampleSize->get(i);
		}
		if (colorSpace == nullptr) {
			$assign(colorSpace, $ColorSpace::getInstance($ColorSpace::CS_sRGB));
		}
		$assign(colorModel, $new($DirectColorModel, colorSpace, bits, rmask, gmask, bmask, amask, false, sampleModel->getDataType()));
	} else if ($instanceOf($MultiPixelPackedSampleModel, sampleModel)) {
		int32_t bits = $nc(($cast($MultiPixelPackedSampleModel, sampleModel)))->getPixelBitStride();
		int32_t size = $sl(1, bits);
		$var($bytes, comp, $new($bytes, size));
		for (int32_t i = 0; i < size; ++i) {
			comp->set(i, (int8_t)($div(255 * i, (size - 1))));
		}
		$assign(colorModel, $new($IndexColorModel, bits, size, comp, comp, comp));
	}
	return colorModel;
}

int32_t ImageUtil::getElementSize($SampleModel* sm) {
	int32_t elementSize = $DataBuffer::getDataTypeSize($nc(sm)->getDataType());
	if ($instanceOf($MultiPixelPackedSampleModel, sm)) {
		$var($MultiPixelPackedSampleModel, mppsm, $cast($MultiPixelPackedSampleModel, sm));
		int32_t var$0 = $nc(mppsm)->getSampleSize(0);
		return var$0 * mppsm->getNumBands();
	} else if ($instanceOf($ComponentSampleModel, sm)) {
		return $nc(sm)->getNumBands() * elementSize;
	} else if ($instanceOf($SinglePixelPackedSampleModel, sm)) {
		return elementSize;
	}
	return elementSize * $nc(sm)->getNumBands();
}

int64_t ImageUtil::getTileSize($SampleModel* sm) {
	$useLocalCurrentObjectStackCache();
	int32_t elementSize = $DataBuffer::getDataTypeSize($nc(sm)->getDataType());
	if ($instanceOf($MultiPixelPackedSampleModel, sm)) {
		$var($MultiPixelPackedSampleModel, mppsm, $cast($MultiPixelPackedSampleModel, sm));
		int32_t var$1 = $nc(mppsm)->getScanlineStride();
		int32_t var$0 = var$1 * mppsm->getHeight();
		return (var$0 + $div((mppsm->getDataBitOffset() + elementSize - 1), elementSize)) * ((elementSize + 7) / 8);
	} else if ($instanceOf($ComponentSampleModel, sm)) {
		$var($ComponentSampleModel, csm, $cast($ComponentSampleModel, sm));
		$var($ints, bandOffsets, $nc(csm)->getBandOffsets());
		int32_t maxBandOff = $nc(bandOffsets)->get(0);
		for (int32_t i = 1; i < bandOffsets->length; ++i) {
			maxBandOff = $Math::max(maxBandOff, bandOffsets->get(i));
		}
		int64_t size = 0;
		int32_t pixelStride = csm->getPixelStride();
		int32_t scanlineStride = csm->getScanlineStride();
		if (maxBandOff >= 0) {
			size += maxBandOff + 1;
		}
		if (pixelStride > 0) {
			size += pixelStride * ($nc(sm)->getWidth() - 1);
		}
		if (scanlineStride > 0) {
			size += scanlineStride * ($nc(sm)->getHeight() - 1);
		}
		$var($ints, bankIndices, csm->getBankIndices());
		maxBandOff = $nc(bankIndices)->get(0);
		for (int32_t i = 1; i < bankIndices->length; ++i) {
			maxBandOff = $Math::max(maxBandOff, bankIndices->get(i));
		}
		return size * (maxBandOff + 1) * ((elementSize + 7) / 8);
	} else if ($instanceOf($SinglePixelPackedSampleModel, sm)) {
		$var($SinglePixelPackedSampleModel, sppsm, $cast($SinglePixelPackedSampleModel, sm));
		int32_t var$3 = $nc(sppsm)->getScanlineStride();
		int32_t var$2 = var$3 * (sppsm->getHeight() - 1);
		int64_t size = var$2 + sppsm->getWidth();
		return size * ((elementSize + 7) / 8);
	}
	return 0;
}

int64_t ImageUtil::getBandSize($SampleModel* sm) {
	int32_t elementSize = $DataBuffer::getDataTypeSize($nc(sm)->getDataType());
	if ($instanceOf($ComponentSampleModel, sm)) {
		$var($ComponentSampleModel, csm, $cast($ComponentSampleModel, sm));
		int32_t pixelStride = $nc(csm)->getPixelStride();
		int32_t scanlineStride = csm->getScanlineStride();
		int64_t size = $Math::min(pixelStride, scanlineStride);
		if (pixelStride > 0) {
			size += pixelStride * ($nc(sm)->getWidth() - 1);
		}
		if (scanlineStride > 0) {
			size += scanlineStride * ($nc(sm)->getHeight() - 1);
		}
		return size * ((elementSize + 7) / 8);
	} else {
		return getTileSize(sm);
	}
}

bool ImageUtil::isIndicesForGrayscale($bytes* r, $bytes* g, $bytes* b) {
	if ($nc(r)->length != $nc(g)->length || $nc(r)->length != $nc(b)->length) {
		return false;
	}
	int32_t size = $nc(r)->length;
	if (size != 256) {
		return false;
	}
	for (int32_t i = 0; i < size; ++i) {
		int8_t temp = (int8_t)i;
		if (r->get(i) != temp || $nc(g)->get(i) != temp || $nc(b)->get(i) != temp) {
			return false;
		}
	}
	return true;
}

$String* ImageUtil::convertObjectToString(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	if (obj == nullptr) {
		return ""_s;
	}
	$var($String, s, ""_s);
	if ($instanceOf($bytes, obj)) {
		$var($bytes, bArray, $cast($bytes, obj));
		for (int32_t i = 0; i < $nc(bArray)->length; ++i) {
			$plusAssign(s, $$str({$$str(bArray->get(i)), " "_s}));
		}
		return s;
	}
	if ($instanceOf($ints, obj)) {
		$var($ints, iArray, $cast($ints, obj));
		for (int32_t i = 0; i < $nc(iArray)->length; ++i) {
			$plusAssign(s, $$str({$$str(iArray->get(i)), " "_s}));
		}
		return s;
	}
	if ($instanceOf($shorts, obj)) {
		$var($shorts, sArray, $cast($shorts, obj));
		for (int32_t i = 0; i < $nc(sArray)->length; ++i) {
			$plusAssign(s, $$str({$$str(sArray->get(i)), " "_s}));
		}
		return s;
	}
	return $nc($of(obj))->toString();
}

void ImageUtil::canEncodeImage($ImageWriter* writer, $ImageTypeSpecifier* type) {
	$useLocalCurrentObjectStackCache();
	$var($ImageWriterSpi, spi, $nc(writer)->getOriginatingProvider());
	if (type != nullptr && spi != nullptr && !spi->canEncodeImage(type)) {
		$var($String, var$0, $$str({$($I18N::getString("ImageUtil2"_s)), " "_s}));
		$throwNew($IIOException, $$concat(var$0, $($of(writer)->getClass()->getName())));
	}
}

void ImageUtil::canEncodeImage($ImageWriter* writer, $ColorModel* colorModel, $SampleModel* sampleModel) {
	$var($ImageTypeSpecifier, type, nullptr);
	if (colorModel != nullptr && sampleModel != nullptr) {
		$assign(type, $new($ImageTypeSpecifier, colorModel, sampleModel));
	}
	canEncodeImage(writer, type);
}

bool ImageUtil::imageIsContiguous($RenderedImage* image) {
	$useLocalCurrentObjectStackCache();
	$var($SampleModel, sm, nullptr);
	if ($instanceOf($BufferedImage, image)) {
		$var($WritableRaster, ras, $nc(($cast($BufferedImage, image)))->getRaster());
		$assign(sm, $nc(ras)->getSampleModel());
	} else {
		$assign(sm, $nc(image)->getSampleModel());
	}
	if ($instanceOf($ComponentSampleModel, sm)) {
		$var($ComponentSampleModel, csm, $cast($ComponentSampleModel, sm));
		int32_t var$0 = $nc(csm)->getPixelStride();
		if (var$0 != csm->getNumBands()) {
			return false;
		}
		$var($ints, bandOffsets, $nc(csm)->getBandOffsets());
		for (int32_t i = 0; i < $nc(bandOffsets)->length; ++i) {
			if (bandOffsets->get(i) != i) {
				return false;
			}
		}
		$var($ints, bankIndices, csm->getBankIndices());
		for (int32_t i = 0; i < $nc(bandOffsets)->length; ++i) {
			if ($nc(bankIndices)->get(i) != 0) {
				return false;
			}
		}
		return true;
	}
	return ImageUtil::isBinary(sm);
}

$ImageTypeSpecifier* ImageUtil::getDestinationType($ImageReadParam* param, $Iterator* imageTypes) {
	$useLocalCurrentObjectStackCache();
	if (imageTypes == nullptr || !$nc(imageTypes)->hasNext()) {
		$throwNew($IllegalArgumentException, "imageTypes null or empty!"_s);
	}
	$var($ImageTypeSpecifier, imageType, nullptr);
	if (param != nullptr) {
		$assign(imageType, param->getDestinationType());
	}
	if (imageType == nullptr) {
		$var($Object, o, $nc(imageTypes)->next());
		if (!($instanceOf($ImageTypeSpecifier, o))) {
			$throwNew($IllegalArgumentException, "Non-ImageTypeSpecifier retrieved from imageTypes!"_s);
		}
		$assign(imageType, $cast($ImageTypeSpecifier, o));
	} else {
		bool foundIt = false;
		while ($nc(imageTypes)->hasNext()) {
			$var($ImageTypeSpecifier, type, $cast($ImageTypeSpecifier, imageTypes->next()));
			if ($nc(type)->equals(imageType)) {
				foundIt = true;
				break;
			}
		}
		if (!foundIt) {
			$throwNew($IIOException, "Destination type from ImageReadParam does not match!"_s);
		}
	}
	return imageType;
}

bool ImageUtil::isNonStandardICCColorSpace($ColorSpace* cs) {
	$useLocalCurrentObjectStackCache();
	bool var$3 = $instanceOf($ICC_ColorSpace, cs) && !$nc(cs)->isCS_sRGB();
	bool var$2 = var$3 && !$of(cs)->equals($($ColorSpace::getInstance($ColorSpace::CS_LINEAR_RGB)));
	bool var$1 = var$2 && !$of(cs)->equals($($ColorSpace::getInstance($ColorSpace::CS_GRAY)));
	bool var$0 = var$1 && !$of(cs)->equals($($ColorSpace::getInstance($ColorSpace::CS_CIEXYZ)));
	return var$0 && !$of(cs)->equals($($ColorSpace::getInstance($ColorSpace::CS_PYCC)));
}

ImageUtil::ImageUtil() {
}

$Class* ImageUtil::load$($String* name, bool initialize) {
	$loadClass(ImageUtil, name, initialize, &_ImageUtil_ClassInfo_, allocate$ImageUtil);
	return class$;
}

$Class* ImageUtil::class$ = nullptr;

				} // common
			} // plugins
		} // imageio
	} // sun
} // com