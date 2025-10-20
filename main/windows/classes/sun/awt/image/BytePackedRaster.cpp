#include <sun/awt/image/BytePackedRaster.h>

#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DataBufferByte.h>
#include <java/awt/image/MultiPixelPackedSampleModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/RasterFormatException.h>
#include <java/awt/image/SampleModel.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/Array.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/image/IntegerComponentRaster.h>
#include <sun/awt/image/NativeLibLoader.h>
#include <sun/awt/image/SunWritableRaster.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef TYPE_BYTE_BINARY_SAMPLES

using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $DataBufferByte = ::java::awt::image::DataBufferByte;
using $MultiPixelPackedSampleModel = ::java::awt::image::MultiPixelPackedSampleModel;
using $Raster = ::java::awt::image::Raster;
using $RasterFormatException = ::java::awt::image::RasterFormatException;
using $SampleModel = ::java::awt::image::SampleModel;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $IntegerComponentRaster = ::sun::awt::image::IntegerComponentRaster;
using $NativeLibLoader = ::sun::awt::image::NativeLibLoader;
using $SunWritableRaster = ::sun::awt::image::SunWritableRaster;

namespace sun {
	namespace awt {
		namespace image {

$FieldInfo _BytePackedRaster_FieldInfo_[] = {
	{"dataBitOffset", "I", nullptr, 0, $field(BytePackedRaster, dataBitOffset)},
	{"scanlineStride", "I", nullptr, 0, $field(BytePackedRaster, scanlineStride)},
	{"pixelBitStride", "I", nullptr, 0, $field(BytePackedRaster, pixelBitStride)},
	{"bitMask", "I", nullptr, 0, $field(BytePackedRaster, bitMask)},
	{"data", "[B", nullptr, 0, $field(BytePackedRaster, data)},
	{"shiftOffset", "I", nullptr, 0, $field(BytePackedRaster, shiftOffset)},
	{"type", "I", nullptr, 0, $field(BytePackedRaster, type)},
	{"maxX", "I", nullptr, $PRIVATE, $field(BytePackedRaster, maxX)},
	{"maxY", "I", nullptr, $PRIVATE, $field(BytePackedRaster, maxY)},
	{}
};

$MethodInfo _BytePackedRaster_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/image/SampleModel;Ljava/awt/Point;)V", nullptr, $PUBLIC, $method(static_cast<void(BytePackedRaster::*)($SampleModel*,$Point*)>(&BytePackedRaster::init$))},
	{"<init>", "(Ljava/awt/image/SampleModel;Ljava/awt/image/DataBufferByte;Ljava/awt/Point;)V", nullptr, $PUBLIC, $method(static_cast<void(BytePackedRaster::*)($SampleModel*,$DataBufferByte*,$Point*)>(&BytePackedRaster::init$))},
	{"<init>", "(Ljava/awt/image/SampleModel;Ljava/awt/image/DataBufferByte;Ljava/awt/Rectangle;Ljava/awt/Point;Lsun/awt/image/BytePackedRaster;)V", nullptr, $PUBLIC, $method(static_cast<void(BytePackedRaster::*)($SampleModel*,$DataBufferByte*,$Rectangle*,$Point*,BytePackedRaster*)>(&BytePackedRaster::init$))},
	{"createChild", "(IIIIII[I)Ljava/awt/image/Raster;", nullptr, $PUBLIC},
	{"createCompatibleWritableRaster", "(II)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC},
	{"createCompatibleWritableRaster", "()Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC},
	{"createWritableChild", "(IIIIII[I)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC},
	{"getByteData", "(IIIII[B)[B", nullptr, $PUBLIC},
	{"getByteData", "(IIII[B)[B", nullptr, $PUBLIC},
	{"getDataBitOffset", "()I", nullptr, $PUBLIC},
	{"getDataElements", "(IILjava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getDataElements", "(IIIILjava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getDataStorage", "()[B", nullptr, $PUBLIC},
	{"getPixelBitStride", "()I", nullptr, $PUBLIC},
	{"getPixelData", "(IIIILjava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getPixels", "(IIII[I)[I", nullptr, $PUBLIC},
	{"getScanlineStride", "()I", nullptr, $PUBLIC},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&BytePackedRaster::initIDs))},
	{"putByteData", "(IIIII[B)V", nullptr, $PUBLIC},
	{"putByteData", "(IIII[B)V", nullptr, $PUBLIC},
	{"setDataElements", "(IILjava/lang/Object;)V", nullptr, $PUBLIC},
	{"setDataElements", "(IILjava/awt/image/Raster;)V", nullptr, $PUBLIC},
	{"setDataElements", "(IIIIIILsun/awt/image/BytePackedRaster;)V", nullptr, $PRIVATE, $method(static_cast<void(BytePackedRaster::*)(int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,BytePackedRaster*)>(&BytePackedRaster::setDataElements))},
	{"setDataElements", "(IIIILjava/lang/Object;)V", nullptr, $PUBLIC},
	{"setPixels", "(IIII[I)V", nullptr, $PUBLIC},
	{"setRect", "(IILjava/awt/image/Raster;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"verify", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(BytePackedRaster::*)(bool)>(&BytePackedRaster::verify))},
	{}
};

#define _METHOD_INDEX_initIDs 17

$ClassInfo _BytePackedRaster_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.image.BytePackedRaster",
	"sun.awt.image.SunWritableRaster",
	nullptr,
	_BytePackedRaster_FieldInfo_,
	_BytePackedRaster_MethodInfo_
};

$Object* allocate$BytePackedRaster($Class* clazz) {
	return $of($alloc(BytePackedRaster));
}

void BytePackedRaster::initIDs() {
	$init(BytePackedRaster);
	$prepareNativeStatic(BytePackedRaster, initIDs, void);
	$invokeNativeStatic(BytePackedRaster, initIDs);
	$finishNativeStatic();
}

void BytePackedRaster::init$($SampleModel* sampleModel, $Point* origin) {
	$useLocalCurrentObjectStackCache();
	$var($SampleModel, var$0, sampleModel);
	$var($DataBufferByte, var$1, $cast($DataBufferByte, $nc(sampleModel)->createDataBuffer()));
	int32_t var$2 = $nc(origin)->x;
	int32_t var$3 = origin->y;
	int32_t var$4 = sampleModel->getWidth();
	BytePackedRaster::init$(var$0, var$1, $$new($Rectangle, var$2, var$3, var$4, sampleModel->getHeight()), origin, nullptr);
}

void BytePackedRaster::init$($SampleModel* sampleModel, $DataBufferByte* dataBuffer, $Point* origin) {
	int32_t var$0 = $nc(origin)->x;
	int32_t var$1 = origin->y;
	int32_t var$2 = $nc(sampleModel)->getWidth();
	BytePackedRaster::init$(sampleModel, dataBuffer, $$new($Rectangle, var$0, var$1, var$2, sampleModel->getHeight()), origin, nullptr);
}

void BytePackedRaster::init$($SampleModel* sampleModel, $DataBufferByte* dataBuffer, $Rectangle* aRegion, $Point* origin, BytePackedRaster* parent) {
	$SunWritableRaster::init$(sampleModel, dataBuffer, aRegion, origin, parent);
	this->maxX = this->minX + this->width;
	this->maxY = this->minY + this->height;
	$set(this, data, stealData(dataBuffer, 0));
	if ($nc(dataBuffer)->getNumBanks() != 1) {
		$throwNew($RasterFormatException, "DataBuffer for BytePackedRasters must only have 1 bank."_s);
	}
	int32_t dbOffset = $nc(dataBuffer)->getOffset();
	if ($instanceOf($MultiPixelPackedSampleModel, sampleModel)) {
		$var($MultiPixelPackedSampleModel, mppsm, $cast($MultiPixelPackedSampleModel, sampleModel));
		this->type = $IntegerComponentRaster::TYPE_BYTE_BINARY_SAMPLES;
		this->pixelBitStride = $nc(mppsm)->getPixelBitStride();
		if (this->pixelBitStride != 1 && this->pixelBitStride != 2 && this->pixelBitStride != 4) {
			$throwNew($RasterFormatException, "BytePackedRasters must have a bit depth of 1, 2, or 4"_s);
		}
		this->scanlineStride = mppsm->getScanlineStride();
		this->dataBitOffset = mppsm->getDataBitOffset() + dbOffset * 8;
		int32_t xOffset = $nc(aRegion)->x - $nc(origin)->x;
		int32_t yOffset = aRegion->y - origin->y;
		this->dataBitOffset += xOffset * this->pixelBitStride + yOffset * this->scanlineStride * 8;
		this->bitMask = ($sl(1, this->pixelBitStride)) - 1;
		this->shiftOffset = 8 - this->pixelBitStride;
	} else {
		$throwNew($RasterFormatException, "BytePackedRasters must haveMultiPixelPackedSampleModel"_s);
	}
	verify(false);
}

int32_t BytePackedRaster::getDataBitOffset() {
	return this->dataBitOffset;
}

int32_t BytePackedRaster::getScanlineStride() {
	return this->scanlineStride;
}

int32_t BytePackedRaster::getPixelBitStride() {
	return this->pixelBitStride;
}

$bytes* BytePackedRaster::getDataStorage() {
	return this->data;
}

$Object* BytePackedRaster::getDataElements(int32_t x, int32_t y, Object$* obj) {
	if ((x < this->minX) || (y < this->minY) || (x >= this->maxX) || (y >= this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	$var($bytes, outData, nullptr);
	if (obj == nullptr) {
		$assign(outData, $new($bytes, this->numDataElements));
	} else {
		$assign(outData, $cast($bytes, obj));
	}
	int32_t bitnum = this->dataBitOffset + (x - this->minX) * this->pixelBitStride;
	int32_t element = (int32_t)($nc(this->data)->get((y - this->minY) * this->scanlineStride + (bitnum >> 3)) & (uint32_t)255);
	int32_t shift = this->shiftOffset - ((int32_t)(bitnum & (uint32_t)7));
	$nc(outData)->set(0, (int8_t)((int32_t)(($sr(element, shift)) & (uint32_t)this->bitMask)));
	return $of(outData);
}

$Object* BytePackedRaster::getDataElements(int32_t x, int32_t y, int32_t w, int32_t h, Object$* outData) {
	return $of(getByteData(x, y, w, h, $cast($bytes, outData)));
}

$Object* BytePackedRaster::getPixelData(int32_t x, int32_t y, int32_t w, int32_t h, Object$* obj) {
	$useLocalCurrentObjectStackCache();
	if ((x < this->minX) || (y < this->minY) || (x + w > this->maxX) || (y + h > this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	$var($bytes, outData, nullptr);
	if (obj == nullptr) {
		$assign(outData, $new($bytes, this->numDataElements * w * h));
	} else {
		$assign(outData, $cast($bytes, obj));
	}
	int32_t pixbits = this->pixelBitStride;
	int32_t scanbit = this->dataBitOffset + (x - this->minX) * pixbits;
	int32_t index = (y - this->minY) * this->scanlineStride;
	int32_t outindex = 0;
	$var($bytes, data, this->data);
	for (int32_t j = 0; j < h; ++j) {
		int32_t bitnum = scanbit;
		for (int32_t i = 0; i < w; ++i) {
			int32_t shift = this->shiftOffset - ((int32_t)(bitnum & (uint32_t)7));
			$nc(outData)->set(outindex++, (int8_t)((int32_t)(this->bitMask & (uint32_t)($sr((int32_t)$nc(data)->get(index + (bitnum >> 3)), shift)))));
			bitnum += pixbits;
		}
		index += this->scanlineStride;
	}
	return $of(outData);
}

$bytes* BytePackedRaster::getByteData(int32_t x, int32_t y, int32_t w, int32_t h, int32_t band, $bytes* outData) {
	return getByteData(x, y, w, h, outData);
}

$bytes* BytePackedRaster::getByteData(int32_t x, int32_t y, int32_t w, int32_t h, $bytes* outData$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, outData, outData$renamed);
	if ((x < this->minX) || (y < this->minY) || (x + w > this->maxX) || (y + h > this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	if (outData == nullptr) {
		$assign(outData, $new($bytes, w * h));
	}
	int32_t pixbits = this->pixelBitStride;
	int32_t scanbit = this->dataBitOffset + (x - this->minX) * pixbits;
	int32_t index = (y - this->minY) * this->scanlineStride;
	int32_t outindex = 0;
	$var($bytes, data, this->data);
	for (int32_t j = 0; j < h; ++j) {
		int32_t bitnum = scanbit;
		int32_t element = 0;
		int32_t i = 0;
		while ((i < w) && (((int32_t)(bitnum & (uint32_t)7)) != 0)) {
			int32_t shift = this->shiftOffset - ((int32_t)(bitnum & (uint32_t)7));
			$nc(outData)->set(outindex++, (int8_t)((int32_t)(this->bitMask & (uint32_t)($sr((int32_t)$nc(data)->get(index + (bitnum >> 3)), shift)))));
			bitnum += pixbits;
			++i;
		}
		int32_t inIndex = index + (bitnum >> 3);
		switch (pixbits) {
		case 1:
			{
				for (; i < w - 7; i += 8) {
					element = $nc(data)->get(inIndex++);
					$nc(outData)->set(outindex++, (int8_t)((int32_t)((element >> 7) & (uint32_t)1)));
					outData->set(outindex++, (int8_t)((int32_t)((element >> 6) & (uint32_t)1)));
					outData->set(outindex++, (int8_t)((int32_t)((element >> 5) & (uint32_t)1)));
					outData->set(outindex++, (int8_t)((int32_t)((element >> 4) & (uint32_t)1)));
					outData->set(outindex++, (int8_t)((int32_t)((element >> 3) & (uint32_t)1)));
					outData->set(outindex++, (int8_t)((int32_t)((element >> 2) & (uint32_t)1)));
					outData->set(outindex++, (int8_t)((int32_t)((element >> 1) & (uint32_t)1)));
					outData->set(outindex++, (int8_t)((int32_t)(element & (uint32_t)1)));
					bitnum += 8;
				}
				break;
			}
		case 2:
			{
				for (; i < w - 7; i += 8) {
					element = $nc(data)->get(inIndex++);
					$nc(outData)->set(outindex++, (int8_t)((int32_t)((element >> 6) & (uint32_t)3)));
					outData->set(outindex++, (int8_t)((int32_t)((element >> 4) & (uint32_t)3)));
					outData->set(outindex++, (int8_t)((int32_t)((element >> 2) & (uint32_t)3)));
					outData->set(outindex++, (int8_t)((int32_t)(element & (uint32_t)3)));
					element = data->get(inIndex++);
					outData->set(outindex++, (int8_t)((int32_t)((element >> 6) & (uint32_t)3)));
					outData->set(outindex++, (int8_t)((int32_t)((element >> 4) & (uint32_t)3)));
					outData->set(outindex++, (int8_t)((int32_t)((element >> 2) & (uint32_t)3)));
					outData->set(outindex++, (int8_t)((int32_t)(element & (uint32_t)3)));
					bitnum += 16;
				}
				break;
			}
		case 4:
			{
				for (; i < w - 7; i += 8) {
					element = $nc(data)->get(inIndex++);
					$nc(outData)->set(outindex++, (int8_t)((int32_t)((element >> 4) & (uint32_t)15)));
					outData->set(outindex++, (int8_t)((int32_t)(element & (uint32_t)15)));
					element = data->get(inIndex++);
					outData->set(outindex++, (int8_t)((int32_t)((element >> 4) & (uint32_t)15)));
					outData->set(outindex++, (int8_t)((int32_t)(element & (uint32_t)15)));
					element = data->get(inIndex++);
					outData->set(outindex++, (int8_t)((int32_t)((element >> 4) & (uint32_t)15)));
					outData->set(outindex++, (int8_t)((int32_t)(element & (uint32_t)15)));
					element = data->get(inIndex++);
					outData->set(outindex++, (int8_t)((int32_t)((element >> 4) & (uint32_t)15)));
					outData->set(outindex++, (int8_t)((int32_t)(element & (uint32_t)15)));
					bitnum += 32;
				}
				break;
			}
		}
		for (; i < w; ++i) {
			int32_t shift = this->shiftOffset - ((int32_t)(bitnum & (uint32_t)7));
			$nc(outData)->set(outindex++, (int8_t)((int32_t)(this->bitMask & (uint32_t)($sr((int32_t)$nc(data)->get(index + (bitnum >> 3)), shift)))));
			bitnum += pixbits;
		}
		index += this->scanlineStride;
	}
	return outData;
}

void BytePackedRaster::setDataElements(int32_t x, int32_t y, Object$* obj) {
	if ((x < this->minX) || (y < this->minY) || (x >= this->maxX) || (y >= this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	$var($bytes, inData, $cast($bytes, obj));
	int32_t bitnum = this->dataBitOffset + (x - this->minX) * this->pixelBitStride;
	int32_t index = (y - this->minY) * this->scanlineStride + (bitnum >> 3);
	int32_t shift = this->shiftOffset - ((int32_t)(bitnum & (uint32_t)7));
	int8_t element = $nc(this->data)->get(index);
	element &= (uint8_t)~($sl(this->bitMask, shift));
	element |= $sl((int32_t)($nc(inData)->get(0) & (uint32_t)this->bitMask), shift);
	$nc(this->data)->set(index, element);
	markDirty();
}

void BytePackedRaster::setDataElements(int32_t x, int32_t y, $Raster* inRaster) {
	if (!($instanceOf(BytePackedRaster, inRaster)) || $nc(($cast(BytePackedRaster, inRaster)))->pixelBitStride != this->pixelBitStride) {
		$SunWritableRaster::setDataElements(x, y, inRaster);
		return;
	}
	int32_t srcOffX = $nc(inRaster)->getMinX();
	int32_t srcOffY = inRaster->getMinY();
	int32_t dstOffX = srcOffX + x;
	int32_t dstOffY = srcOffY + y;
	int32_t width = inRaster->getWidth();
	int32_t height = inRaster->getHeight();
	if ((dstOffX < this->minX) || (dstOffY < this->minY) || (dstOffX + width > this->maxX) || (dstOffY + height > this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	setDataElements(dstOffX, dstOffY, srcOffX, srcOffY, width, height, $cast(BytePackedRaster, inRaster));
}

void BytePackedRaster::setDataElements(int32_t dstX, int32_t dstY, int32_t srcX, int32_t srcY, int32_t width, int32_t height, BytePackedRaster* inRaster) {
	$useLocalCurrentObjectStackCache();
	if (width <= 0 || height <= 0) {
		return;
	}
	$var($bytes, inData, $nc(inRaster)->data);
	$var($bytes, outData, this->data);
	int32_t inscan = inRaster->scanlineStride;
	int32_t outscan = this->scanlineStride;
	int32_t inbit = inRaster->dataBitOffset + 8 * (srcY - inRaster->minY) * inscan + (srcX - inRaster->minX) * inRaster->pixelBitStride;
	int32_t outbit = (this->dataBitOffset + 8 * (dstY - this->minY) * outscan + (dstX - this->minX) * this->pixelBitStride);
	int32_t copybits = width * this->pixelBitStride;
	if (((int32_t)(inbit & (uint32_t)7)) == ((int32_t)(outbit & (uint32_t)7))) {
		int32_t bitpos = (int32_t)(outbit & (uint32_t)7);
		if (bitpos != 0) {
			int32_t bits = 8 - bitpos;
			int32_t inbyte = inbit >> 3;
			int32_t outbyte = outbit >> 3;
			int32_t mask = $sr(255, bitpos);
			if (copybits < bits) {
				mask &= (uint32_t)$sl(255, bits - copybits);
				bits = copybits;
			}
			for (int32_t j = 0; j < height; ++j) {
				int32_t element = $nc(outData)->get(outbyte);
				element &= (uint32_t)~mask;
				element |= ((int32_t)($nc(inData)->get(inbyte) & (uint32_t)mask));
				outData->set(outbyte, (int8_t)element);
				inbyte += inscan;
				outbyte += outscan;
			}
			inbit += bits;
			outbit += bits;
			copybits -= bits;
		}
		if (copybits >= 8) {
			int32_t inbyte = inbit >> 3;
			int32_t outbyte = outbit >> 3;
			int32_t copybytes = copybits >> 3;
			if (copybytes == inscan && inscan == outscan) {
				$System::arraycopy(inData, inbyte, outData, outbyte, inscan * height);
			} else {
				for (int32_t j = 0; j < height; ++j) {
					$System::arraycopy(inData, inbyte, outData, outbyte, copybytes);
					inbyte += inscan;
					outbyte += outscan;
				}
			}
			int32_t bits = copybytes * 8;
			inbit += bits;
			outbit += bits;
			copybits -= bits;
		}
		if (copybits > 0) {
			int32_t inbyte = inbit >> 3;
			int32_t outbyte = outbit >> 3;
			int32_t mask = (int32_t)(($sr(0x0000FF00, copybits)) & (uint32_t)255);
			for (int32_t j = 0; j < height; ++j) {
				int32_t element = $nc(outData)->get(outbyte);
				element &= (uint32_t)~mask;
				element |= ((int32_t)($nc(inData)->get(inbyte) & (uint32_t)mask));
				outData->set(outbyte, (int8_t)element);
				inbyte += inscan;
				outbyte += outscan;
			}
		}
	} else {
		int32_t bitpos = (int32_t)(outbit & (uint32_t)7);
		if (bitpos != 0 || copybits < 8) {
			int32_t bits = 8 - bitpos;
			int32_t inbyte = inbit >> 3;
			int32_t outbyte = outbit >> 3;
			int32_t lshift = (int32_t)(inbit & (uint32_t)7);
			int32_t rshift = 8 - lshift;
			int32_t mask = $sr(255, bitpos);
			if (copybits < bits) {
				mask &= (uint32_t)$sl(255, bits - copybits);
				bits = copybits;
			}
			int32_t lastByte = $nc(inData)->length - 1;
			for (int32_t j = 0; j < height; ++j) {
				int8_t inData0 = inData->get(inbyte);
				int8_t inData1 = (int8_t)0;
				if (inbyte < lastByte) {
					inData1 = inData->get(inbyte + 1);
				}
				int32_t element = $nc(outData)->get(outbyte);
				element &= (uint32_t)~mask;
				element |= (int32_t)(($sr(($sl((int32_t)inData0, lshift)) | ($sr((int32_t)(inData1 & (uint32_t)255), rshift)), bitpos)) & (uint32_t)mask);
				outData->set(outbyte, (int8_t)element);
				inbyte += inscan;
				outbyte += outscan;
			}
			inbit += bits;
			outbit += bits;
			copybits -= bits;
		}
		if (copybits >= 8) {
			int32_t inbyte = inbit >> 3;
			int32_t outbyte = outbit >> 3;
			int32_t copybytes = copybits >> 3;
			int32_t lshift = (int32_t)(inbit & (uint32_t)7);
			int32_t rshift = 8 - lshift;
			for (int32_t j = 0; j < height; ++j) {
				int32_t ibyte = inbyte + j * inscan;
				int32_t obyte = outbyte + j * outscan;
				int32_t inData0 = $nc(inData)->get(ibyte);
				for (int32_t i = 0; i < copybytes; ++i) {
					int32_t inData1 = inData->get(ibyte + 1);
					int32_t val = ($sl(inData0, lshift)) | ($sr((int32_t)(inData1 & (uint32_t)255), rshift));
					$nc(outData)->set(obyte, (int8_t)val);
					inData0 = inData1;
					++ibyte;
					++obyte;
				}
			}
			int32_t bits = copybytes * 8;
			inbit += bits;
			outbit += bits;
			copybits -= bits;
		}
		if (copybits > 0) {
			int32_t inbyte = inbit >> 3;
			int32_t outbyte = outbit >> 3;
			int32_t mask = (int32_t)(($sr(0x0000FF00, copybits)) & (uint32_t)255);
			int32_t lshift = (int32_t)(inbit & (uint32_t)7);
			int32_t rshift = 8 - lshift;
			int32_t lastByte = $nc(inData)->length - 1;
			for (int32_t j = 0; j < height; ++j) {
				int8_t inData0 = inData->get(inbyte);
				int8_t inData1 = (int8_t)0;
				if (inbyte < lastByte) {
					inData1 = inData->get(inbyte + 1);
				}
				int32_t element = $nc(outData)->get(outbyte);
				element &= (uint32_t)~mask;
				element |= (int32_t)((($sl((int32_t)inData0, lshift)) | ($sr((int32_t)(inData1 & (uint32_t)255), rshift))) & (uint32_t)mask);
				outData->set(outbyte, (int8_t)element);
				inbyte += inscan;
				outbyte += outscan;
			}
		}
	}
	markDirty();
}

void BytePackedRaster::setRect(int32_t dx, int32_t dy, $Raster* srcRaster) {
	if (!($instanceOf(BytePackedRaster, srcRaster)) || $nc(($cast(BytePackedRaster, srcRaster)))->pixelBitStride != this->pixelBitStride) {
		$SunWritableRaster::setRect(dx, dy, srcRaster);
		return;
	}
	int32_t width = $nc(srcRaster)->getWidth();
	int32_t height = srcRaster->getHeight();
	int32_t srcOffX = srcRaster->getMinX();
	int32_t srcOffY = srcRaster->getMinY();
	int32_t dstOffX = dx + srcOffX;
	int32_t dstOffY = dy + srcOffY;
	if (dstOffX < this->minX) {
		int32_t skipX = this->minX - dstOffX;
		width -= skipX;
		srcOffX += skipX;
		dstOffX = this->minX;
	}
	if (dstOffY < this->minY) {
		int32_t skipY = this->minY - dstOffY;
		height -= skipY;
		srcOffY += skipY;
		dstOffY = this->minY;
	}
	if (dstOffX + width > this->maxX) {
		width = this->maxX - dstOffX;
	}
	if (dstOffY + height > this->maxY) {
		height = this->maxY - dstOffY;
	}
	setDataElements(dstOffX, dstOffY, srcOffX, srcOffY, width, height, $cast(BytePackedRaster, srcRaster));
}

void BytePackedRaster::setDataElements(int32_t x, int32_t y, int32_t w, int32_t h, Object$* obj) {
	putByteData(x, y, w, h, $cast($bytes, obj));
}

void BytePackedRaster::putByteData(int32_t x, int32_t y, int32_t w, int32_t h, int32_t band, $bytes* inData) {
	putByteData(x, y, w, h, inData);
}

void BytePackedRaster::putByteData(int32_t x, int32_t y, int32_t w, int32_t h, $bytes* inData) {
	if ((x < this->minX) || (y < this->minY) || (x + w > this->maxX) || (y + h > this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	if (w == 0 || h == 0) {
		return;
	}
	int32_t pixbits = this->pixelBitStride;
	int32_t scanbit = this->dataBitOffset + (x - this->minX) * pixbits;
	int32_t index = (y - this->minY) * this->scanlineStride;
	int32_t outindex = 0;
	$var($bytes, data, this->data);
	for (int32_t j = 0; j < h; ++j) {
		int32_t bitnum = scanbit;
		int32_t element = 0;
		int32_t i = 0;
		while ((i < w) && (((int32_t)(bitnum & (uint32_t)7)) != 0)) {
			int32_t shift = this->shiftOffset - ((int32_t)(bitnum & (uint32_t)7));
			element = $nc(data)->get(index + (bitnum >> 3));
			element &= (uint32_t)~($sl(this->bitMask, shift));
			element |= $sl((int32_t)($nc(inData)->get(outindex++) & (uint32_t)this->bitMask), shift);
			data->set(index + (bitnum >> 3), (int8_t)element);
			bitnum += pixbits;
			++i;
		}
		int32_t inIndex = index + (bitnum >> 3);
		switch (pixbits) {
		case 1:
			{
				for (; i < w - 7; i += 8) {
					element = ((int32_t)($nc(inData)->get(outindex++) & (uint32_t)1)) << 7;
					element |= ((int32_t)(inData->get(outindex++) & (uint32_t)1)) << 6;
					element |= ((int32_t)(inData->get(outindex++) & (uint32_t)1)) << 5;
					element |= ((int32_t)(inData->get(outindex++) & (uint32_t)1)) << 4;
					element |= ((int32_t)(inData->get(outindex++) & (uint32_t)1)) << 3;
					element |= ((int32_t)(inData->get(outindex++) & (uint32_t)1)) << 2;
					element |= ((int32_t)(inData->get(outindex++) & (uint32_t)1)) << 1;
					element |= ((int32_t)(inData->get(outindex++) & (uint32_t)1));
					$nc(data)->set(inIndex++, (int8_t)element);
					bitnum += 8;
				}
				break;
			}
		case 2:
			{
				for (; i < w - 7; i += 8) {
					element = ((int32_t)($nc(inData)->get(outindex++) & (uint32_t)3)) << 6;
					element |= ((int32_t)(inData->get(outindex++) & (uint32_t)3)) << 4;
					element |= ((int32_t)(inData->get(outindex++) & (uint32_t)3)) << 2;
					element |= ((int32_t)(inData->get(outindex++) & (uint32_t)3));
					$nc(data)->set(inIndex++, (int8_t)element);
					element = ((int32_t)(inData->get(outindex++) & (uint32_t)3)) << 6;
					element |= ((int32_t)(inData->get(outindex++) & (uint32_t)3)) << 4;
					element |= ((int32_t)(inData->get(outindex++) & (uint32_t)3)) << 2;
					element |= ((int32_t)(inData->get(outindex++) & (uint32_t)3));
					data->set(inIndex++, (int8_t)element);
					bitnum += 16;
				}
				break;
			}
		case 4:
			{
				for (; i < w - 7; i += 8) {
					element = ((int32_t)($nc(inData)->get(outindex++) & (uint32_t)15)) << 4;
					element |= ((int32_t)(inData->get(outindex++) & (uint32_t)15));
					$nc(data)->set(inIndex++, (int8_t)element);
					element = ((int32_t)(inData->get(outindex++) & (uint32_t)15)) << 4;
					element |= ((int32_t)(inData->get(outindex++) & (uint32_t)15));
					data->set(inIndex++, (int8_t)element);
					element = ((int32_t)(inData->get(outindex++) & (uint32_t)15)) << 4;
					element |= ((int32_t)(inData->get(outindex++) & (uint32_t)15));
					data->set(inIndex++, (int8_t)element);
					element = ((int32_t)(inData->get(outindex++) & (uint32_t)15)) << 4;
					element |= ((int32_t)(inData->get(outindex++) & (uint32_t)15));
					data->set(inIndex++, (int8_t)element);
					bitnum += 32;
				}
				break;
			}
		}
		for (; i < w; ++i) {
			int32_t shift = this->shiftOffset - ((int32_t)(bitnum & (uint32_t)7));
			element = $nc(data)->get(index + (bitnum >> 3));
			element &= (uint32_t)~($sl(this->bitMask, shift));
			element |= $sl((int32_t)($nc(inData)->get(outindex++) & (uint32_t)this->bitMask), shift);
			data->set(index + (bitnum >> 3), (int8_t)element);
			bitnum += pixbits;
		}
		index += this->scanlineStride;
	}
	markDirty();
}

$ints* BytePackedRaster::getPixels(int32_t x, int32_t y, int32_t w, int32_t h, $ints* iArray$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($ints, iArray, iArray$renamed);
	if ((x < this->minX) || (y < this->minY) || (x + w > this->maxX) || (y + h > this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	if (iArray == nullptr) {
		$assign(iArray, $new($ints, w * h));
	}
	int32_t pixbits = this->pixelBitStride;
	int32_t scanbit = this->dataBitOffset + (x - this->minX) * pixbits;
	int32_t index = (y - this->minY) * this->scanlineStride;
	int32_t outindex = 0;
	$var($bytes, data, this->data);
	for (int32_t j = 0; j < h; ++j) {
		int32_t bitnum = scanbit;
		int32_t element = 0;
		int32_t i = 0;
		while ((i < w) && (((int32_t)(bitnum & (uint32_t)7)) != 0)) {
			int32_t shift = this->shiftOffset - ((int32_t)(bitnum & (uint32_t)7));
			$nc(iArray)->set(outindex++, (int32_t)(this->bitMask & (uint32_t)($sr((int32_t)$nc(data)->get(index + (bitnum >> 3)), shift))));
			bitnum += pixbits;
			++i;
		}
		int32_t inIndex = index + (bitnum >> 3);
		switch (pixbits) {
		case 1:
			{
				for (; i < w - 7; i += 8) {
					element = $nc(data)->get(inIndex++);
					$nc(iArray)->set(outindex++, (int32_t)((element >> 7) & (uint32_t)1));
					iArray->set(outindex++, (int32_t)((element >> 6) & (uint32_t)1));
					iArray->set(outindex++, (int32_t)((element >> 5) & (uint32_t)1));
					iArray->set(outindex++, (int32_t)((element >> 4) & (uint32_t)1));
					iArray->set(outindex++, (int32_t)((element >> 3) & (uint32_t)1));
					iArray->set(outindex++, (int32_t)((element >> 2) & (uint32_t)1));
					iArray->set(outindex++, (int32_t)((element >> 1) & (uint32_t)1));
					iArray->set(outindex++, (int32_t)(element & (uint32_t)1));
					bitnum += 8;
				}
				break;
			}
		case 2:
			{
				for (; i < w - 7; i += 8) {
					element = $nc(data)->get(inIndex++);
					$nc(iArray)->set(outindex++, (int32_t)((element >> 6) & (uint32_t)3));
					iArray->set(outindex++, (int32_t)((element >> 4) & (uint32_t)3));
					iArray->set(outindex++, (int32_t)((element >> 2) & (uint32_t)3));
					iArray->set(outindex++, (int32_t)(element & (uint32_t)3));
					element = data->get(inIndex++);
					iArray->set(outindex++, (int32_t)((element >> 6) & (uint32_t)3));
					iArray->set(outindex++, (int32_t)((element >> 4) & (uint32_t)3));
					iArray->set(outindex++, (int32_t)((element >> 2) & (uint32_t)3));
					iArray->set(outindex++, (int32_t)(element & (uint32_t)3));
					bitnum += 16;
				}
				break;
			}
		case 4:
			{
				for (; i < w - 7; i += 8) {
					element = $nc(data)->get(inIndex++);
					$nc(iArray)->set(outindex++, (int32_t)((element >> 4) & (uint32_t)15));
					iArray->set(outindex++, (int32_t)(element & (uint32_t)15));
					element = data->get(inIndex++);
					iArray->set(outindex++, (int32_t)((element >> 4) & (uint32_t)15));
					iArray->set(outindex++, (int32_t)(element & (uint32_t)15));
					element = data->get(inIndex++);
					iArray->set(outindex++, (int32_t)((element >> 4) & (uint32_t)15));
					iArray->set(outindex++, (int32_t)(element & (uint32_t)15));
					element = data->get(inIndex++);
					iArray->set(outindex++, (int32_t)((element >> 4) & (uint32_t)15));
					iArray->set(outindex++, (int32_t)(element & (uint32_t)15));
					bitnum += 32;
				}
				break;
			}
		}
		for (; i < w; ++i) {
			int32_t shift = this->shiftOffset - ((int32_t)(bitnum & (uint32_t)7));
			$nc(iArray)->set(outindex++, (int32_t)(this->bitMask & (uint32_t)($sr((int32_t)$nc(data)->get(index + (bitnum >> 3)), shift))));
			bitnum += pixbits;
		}
		index += this->scanlineStride;
	}
	return iArray;
}

void BytePackedRaster::setPixels(int32_t x, int32_t y, int32_t w, int32_t h, $ints* iArray) {
	if ((x < this->minX) || (y < this->minY) || (x + w > this->maxX) || (y + h > this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	int32_t pixbits = this->pixelBitStride;
	int32_t scanbit = this->dataBitOffset + (x - this->minX) * pixbits;
	int32_t index = (y - this->minY) * this->scanlineStride;
	int32_t outindex = 0;
	$var($bytes, data, this->data);
	for (int32_t j = 0; j < h; ++j) {
		int32_t bitnum = scanbit;
		int32_t element = 0;
		int32_t i = 0;
		while ((i < w) && (((int32_t)(bitnum & (uint32_t)7)) != 0)) {
			int32_t shift = this->shiftOffset - ((int32_t)(bitnum & (uint32_t)7));
			element = $nc(data)->get(index + (bitnum >> 3));
			element &= (uint32_t)~($sl(this->bitMask, shift));
			element |= $sl((int32_t)($nc(iArray)->get(outindex++) & (uint32_t)this->bitMask), shift);
			data->set(index + (bitnum >> 3), (int8_t)element);
			bitnum += pixbits;
			++i;
		}
		int32_t inIndex = index + (bitnum >> 3);
		switch (pixbits) {
		case 1:
			{
				for (; i < w - 7; i += 8) {
					element = ((int32_t)($nc(iArray)->get(outindex++) & (uint32_t)1)) << 7;
					element |= ((int32_t)(iArray->get(outindex++) & (uint32_t)1)) << 6;
					element |= ((int32_t)(iArray->get(outindex++) & (uint32_t)1)) << 5;
					element |= ((int32_t)(iArray->get(outindex++) & (uint32_t)1)) << 4;
					element |= ((int32_t)(iArray->get(outindex++) & (uint32_t)1)) << 3;
					element |= ((int32_t)(iArray->get(outindex++) & (uint32_t)1)) << 2;
					element |= ((int32_t)(iArray->get(outindex++) & (uint32_t)1)) << 1;
					element |= ((int32_t)(iArray->get(outindex++) & (uint32_t)1));
					$nc(data)->set(inIndex++, (int8_t)element);
					bitnum += 8;
				}
				break;
			}
		case 2:
			{
				for (; i < w - 7; i += 8) {
					element = ((int32_t)($nc(iArray)->get(outindex++) & (uint32_t)3)) << 6;
					element |= ((int32_t)(iArray->get(outindex++) & (uint32_t)3)) << 4;
					element |= ((int32_t)(iArray->get(outindex++) & (uint32_t)3)) << 2;
					element |= ((int32_t)(iArray->get(outindex++) & (uint32_t)3));
					$nc(data)->set(inIndex++, (int8_t)element);
					element = ((int32_t)(iArray->get(outindex++) & (uint32_t)3)) << 6;
					element |= ((int32_t)(iArray->get(outindex++) & (uint32_t)3)) << 4;
					element |= ((int32_t)(iArray->get(outindex++) & (uint32_t)3)) << 2;
					element |= ((int32_t)(iArray->get(outindex++) & (uint32_t)3));
					data->set(inIndex++, (int8_t)element);
					bitnum += 16;
				}
				break;
			}
		case 4:
			{
				for (; i < w - 7; i += 8) {
					element = ((int32_t)($nc(iArray)->get(outindex++) & (uint32_t)15)) << 4;
					element |= ((int32_t)(iArray->get(outindex++) & (uint32_t)15));
					$nc(data)->set(inIndex++, (int8_t)element);
					element = ((int32_t)(iArray->get(outindex++) & (uint32_t)15)) << 4;
					element |= ((int32_t)(iArray->get(outindex++) & (uint32_t)15));
					data->set(inIndex++, (int8_t)element);
					element = ((int32_t)(iArray->get(outindex++) & (uint32_t)15)) << 4;
					element |= ((int32_t)(iArray->get(outindex++) & (uint32_t)15));
					data->set(inIndex++, (int8_t)element);
					element = ((int32_t)(iArray->get(outindex++) & (uint32_t)15)) << 4;
					element |= ((int32_t)(iArray->get(outindex++) & (uint32_t)15));
					data->set(inIndex++, (int8_t)element);
					bitnum += 32;
				}
				break;
			}
		}
		for (; i < w; ++i) {
			int32_t shift = this->shiftOffset - ((int32_t)(bitnum & (uint32_t)7));
			element = $nc(data)->get(index + (bitnum >> 3));
			element &= (uint32_t)~($sl(this->bitMask, shift));
			element |= $sl((int32_t)($nc(iArray)->get(outindex++) & (uint32_t)this->bitMask), shift);
			data->set(index + (bitnum >> 3), (int8_t)element);
			bitnum += pixbits;
		}
		index += this->scanlineStride;
	}
	markDirty();
}

$Raster* BytePackedRaster::createChild(int32_t x, int32_t y, int32_t width, int32_t height, int32_t x0, int32_t y0, $ints* bandList) {
	$var($WritableRaster, newRaster, createWritableChild(x, y, width, height, x0, y0, bandList));
	return static_cast<$Raster*>(newRaster);
}

$WritableRaster* BytePackedRaster::createWritableChild(int32_t x, int32_t y, int32_t width, int32_t height, int32_t x0, int32_t y0, $ints* bandList) {
	$useLocalCurrentObjectStackCache();
	if (x < this->minX) {
		$throwNew($RasterFormatException, "x lies outside the raster"_s);
	}
	if (y < this->minY) {
		$throwNew($RasterFormatException, "y lies outside the raster"_s);
	}
	if ((x + width < x) || (x + width > this->minX + this->width)) {
		$throwNew($RasterFormatException, "(x + width) is outside of Raster"_s);
	}
	if ((y + height < y) || (y + height > this->minY + this->height)) {
		$throwNew($RasterFormatException, "(y + height) is outside of Raster"_s);
	}
	$var($SampleModel, sm, nullptr);
	if (bandList != nullptr) {
		$assign(sm, $nc(this->sampleModel)->createSubsetSampleModel(bandList));
	} else {
		$assign(sm, this->sampleModel);
	}
	int32_t deltaX = x0 - x;
	int32_t deltaY = y0 - y;
	$var($SampleModel, var$0, sm);
	$var($DataBufferByte, var$1, $cast($DataBufferByte, this->dataBuffer));
	$var($Rectangle, var$2, $new($Rectangle, x0, y0, width, height));
	return $new(BytePackedRaster, var$0, var$1, var$2, $$new($Point, this->sampleModelTranslateX + deltaX, this->sampleModelTranslateY + deltaY), this);
}

$WritableRaster* BytePackedRaster::createCompatibleWritableRaster(int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	if (w <= 0 || h <= 0) {
		$throwNew($RasterFormatException, $$str({"negative "_s, ((w <= 0) ? "width"_s : "height"_s)}));
	}
	$var($SampleModel, sm, $nc(this->sampleModel)->createCompatibleSampleModel(w, h));
	return $new(BytePackedRaster, sm, $$new($Point, 0, 0));
}

$WritableRaster* BytePackedRaster::createCompatibleWritableRaster() {
	return createCompatibleWritableRaster(this->width, this->height);
}

void BytePackedRaster::verify(bool strictCheck) {
	$useLocalCurrentObjectStackCache();
	if (this->dataBitOffset < 0) {
		$throwNew($RasterFormatException, "Data offsets must be >= 0"_s);
	}
	if (this->width <= 0 || this->height <= 0 || this->height > ($div($Integer::MAX_VALUE, this->width))) {
		$throwNew($RasterFormatException, "Invalid raster dimension"_s);
	}
	if ((this->width - 1) > $div($Integer::MAX_VALUE, this->pixelBitStride)) {
		$throwNew($RasterFormatException, "Invalid raster dimension"_s);
	}
	if ((int64_t)this->minX - this->sampleModelTranslateX < 0 || (int64_t)this->minY - this->sampleModelTranslateY < 0) {
		$throwNew($RasterFormatException, $$str({"Incorrect origin/translate: ("_s, $$str(this->minX), ", "_s, $$str(this->minY), ") / ("_s, $$str(this->sampleModelTranslateX), ", "_s, $$str(this->sampleModelTranslateY), ")"_s}));
	}
	if (this->scanlineStride < 0 || this->scanlineStride > ($div($Integer::MAX_VALUE, this->height))) {
		$throwNew($RasterFormatException, "Invalid scanline stride"_s);
	}
	if (this->height > 1 || this->minY - this->sampleModelTranslateY > 0) {
		if (this->scanlineStride > $nc(this->data)->length) {
			$throwNew($RasterFormatException, $$str({"Incorrect scanline stride: "_s, $$str(this->scanlineStride)}));
		}
	}
	int64_t lastbit = (int64_t)this->dataBitOffset + (int64_t)(this->height - 1) * (int64_t)this->scanlineStride * 8 + (int64_t)(this->width - 1) * (int64_t)this->pixelBitStride + (int64_t)this->pixelBitStride - 1;
	if (lastbit < 0 || lastbit / 8 >= $nc(this->data)->length) {
		$throwNew($RasterFormatException, "raster dimensions overflow array bounds"_s);
	}
	if (strictCheck) {
		if (this->height > 1) {
			lastbit = this->width * this->pixelBitStride - 1;
			if (lastbit / 8 >= this->scanlineStride) {
				$throwNew($RasterFormatException, "data for adjacent scanlines overlaps"_s);
			}
		}
	}
}

$String* BytePackedRaster::toString() {
	$useLocalCurrentObjectStackCache();
	return $new($String, $$str({"BytePackedRaster: width = "_s, $$str(this->width), " height = "_s, $$str(this->height), " #channels "_s, $$str(this->numBands), " xOff = "_s, $$str(this->sampleModelTranslateX), " yOff = "_s, $$str(this->sampleModelTranslateY)}));
}

void clinit$BytePackedRaster($Class* class$) {
	{
		$NativeLibLoader::loadLibraries();
		BytePackedRaster::initIDs();
	}
}

BytePackedRaster::BytePackedRaster() {
}

$Class* BytePackedRaster::load$($String* name, bool initialize) {
	$loadClass(BytePackedRaster, name, initialize, &_BytePackedRaster_ClassInfo_, clinit$BytePackedRaster, allocate$BytePackedRaster);
	return class$;
}

$Class* BytePackedRaster::class$ = nullptr;

		} // image
	} // awt
} // sun