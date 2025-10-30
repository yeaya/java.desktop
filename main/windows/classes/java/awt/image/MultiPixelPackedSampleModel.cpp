#include <java/awt/image/MultiPixelPackedSampleModel.h>

#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DataBufferByte.h>
#include <java/awt/image/DataBufferInt.h>
#include <java/awt/image/DataBufferUShort.h>
#include <java/awt/image/RasterFormatException.h>
#include <java/awt/image/SampleModel.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <jcpp.h>

#undef TYPE_BYTE
#undef TYPE_INT
#undef TYPE_USHORT

using $DataBuffer = ::java::awt::image::DataBuffer;
using $DataBufferByte = ::java::awt::image::DataBufferByte;
using $DataBufferInt = ::java::awt::image::DataBufferInt;
using $DataBufferUShort = ::java::awt::image::DataBufferUShort;
using $RasterFormatException = ::java::awt::image::RasterFormatException;
using $SampleModel = ::java::awt::image::SampleModel;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace image {

$FieldInfo _MultiPixelPackedSampleModel_FieldInfo_[] = {
	{"pixelBitStride", "I", nullptr, 0, $field(MultiPixelPackedSampleModel, pixelBitStride)},
	{"bitMask", "I", nullptr, 0, $field(MultiPixelPackedSampleModel, bitMask)},
	{"pixelsPerDataElement", "I", nullptr, 0, $field(MultiPixelPackedSampleModel, pixelsPerDataElement)},
	{"dataElementSize", "I", nullptr, 0, $field(MultiPixelPackedSampleModel, dataElementSize)},
	{"dataBitOffset", "I", nullptr, 0, $field(MultiPixelPackedSampleModel, dataBitOffset)},
	{"scanlineStride", "I", nullptr, 0, $field(MultiPixelPackedSampleModel, scanlineStride)},
	{}
};

$MethodInfo _MultiPixelPackedSampleModel_MethodInfo_[] = {
	{"<init>", "(IIII)V", nullptr, $PUBLIC, $method(static_cast<void(MultiPixelPackedSampleModel::*)(int32_t,int32_t,int32_t,int32_t)>(&MultiPixelPackedSampleModel::init$))},
	{"<init>", "(IIIIII)V", nullptr, $PUBLIC, $method(static_cast<void(MultiPixelPackedSampleModel::*)(int32_t,int32_t,int32_t,int32_t,int32_t,int32_t)>(&MultiPixelPackedSampleModel::init$))},
	{"createCompatibleSampleModel", "(II)Ljava/awt/image/SampleModel;", nullptr, $PUBLIC},
	{"createDataBuffer", "()Ljava/awt/image/DataBuffer;", nullptr, $PUBLIC},
	{"createSubsetSampleModel", "([I)Ljava/awt/image/SampleModel;", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getBitOffset", "(I)I", nullptr, $PUBLIC},
	{"getDataBitOffset", "()I", nullptr, $PUBLIC},
	{"getDataElements", "(IILjava/lang/Object;Ljava/awt/image/DataBuffer;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getNumDataElements", "()I", nullptr, $PUBLIC},
	{"getOffset", "(II)I", nullptr, $PUBLIC},
	{"getPixel", "(II[ILjava/awt/image/DataBuffer;)[I", nullptr, $PUBLIC},
	{"getPixelBitStride", "()I", nullptr, $PUBLIC},
	{"getSample", "(IIILjava/awt/image/DataBuffer;)I", nullptr, $PUBLIC},
	{"getSampleSize", "()[I", nullptr, $PUBLIC},
	{"getSampleSize", "(I)I", nullptr, $PUBLIC},
	{"getScanlineStride", "()I", nullptr, $PUBLIC},
	{"getTransferType", "()I", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"setDataElements", "(IILjava/lang/Object;Ljava/awt/image/DataBuffer;)V", nullptr, $PUBLIC},
	{"setPixel", "(II[ILjava/awt/image/DataBuffer;)V", nullptr, $PUBLIC},
	{"setSample", "(IIIILjava/awt/image/DataBuffer;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MultiPixelPackedSampleModel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.image.MultiPixelPackedSampleModel",
	"java.awt.image.SampleModel",
	nullptr,
	_MultiPixelPackedSampleModel_FieldInfo_,
	_MultiPixelPackedSampleModel_MethodInfo_
};

$Object* allocate$MultiPixelPackedSampleModel($Class* clazz) {
	return $of($alloc(MultiPixelPackedSampleModel));
}

void MultiPixelPackedSampleModel::init$(int32_t dataType, int32_t w, int32_t h, int32_t numberOfBits) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = (w * numberOfBits + $DataBuffer::getDataTypeSize(dataType) - 1);
	MultiPixelPackedSampleModel::init$(dataType, w, h, numberOfBits, $div(var$0, $DataBuffer::getDataTypeSize(dataType)), 0);
	if (dataType != $DataBuffer::TYPE_BYTE && dataType != $DataBuffer::TYPE_USHORT && dataType != $DataBuffer::TYPE_INT) {
		$throwNew($IllegalArgumentException, $$str({"Unsupported data type "_s, $$str(dataType)}));
	}
}

void MultiPixelPackedSampleModel::init$(int32_t dataType, int32_t w, int32_t h, int32_t numberOfBits, int32_t scanlineStride, int32_t dataBitOffset) {
	$useLocalCurrentObjectStackCache();
	$SampleModel::init$(dataType, w, h, 1);
	if (dataType != $DataBuffer::TYPE_BYTE && dataType != $DataBuffer::TYPE_USHORT && dataType != $DataBuffer::TYPE_INT) {
		$throwNew($IllegalArgumentException, $$str({"Unsupported data type "_s, $$str(dataType)}));
	}
	this->dataType = dataType;
	this->pixelBitStride = numberOfBits;
	this->scanlineStride = scanlineStride;
	this->dataBitOffset = dataBitOffset;
	this->dataElementSize = $DataBuffer::getDataTypeSize(dataType);
	this->pixelsPerDataElement = $div(this->dataElementSize, numberOfBits);
	if (this->pixelsPerDataElement * numberOfBits != this->dataElementSize) {
		$throwNew($RasterFormatException, "MultiPixelPackedSampleModel does not allow pixels to span data element boundaries"_s);
	}
	this->bitMask = ($sl(1, numberOfBits)) - 1;
}

$SampleModel* MultiPixelPackedSampleModel::createCompatibleSampleModel(int32_t w, int32_t h) {
	$var($SampleModel, sampleModel, $new(MultiPixelPackedSampleModel, this->dataType, w, h, this->pixelBitStride));
	return sampleModel;
}

$DataBuffer* MultiPixelPackedSampleModel::createDataBuffer() {
	$var($DataBuffer, dataBuffer, nullptr);
	int32_t size = this->scanlineStride * this->height;
	switch (this->dataType) {
	case $DataBuffer::TYPE_BYTE:
		{
			$assign(dataBuffer, $new($DataBufferByte, size + (this->dataBitOffset + 7) / 8));
			break;
		}
	case $DataBuffer::TYPE_USHORT:
		{
			$assign(dataBuffer, $new($DataBufferUShort, size + (this->dataBitOffset + 15) / 16));
			break;
		}
	case $DataBuffer::TYPE_INT:
		{
			$assign(dataBuffer, $new($DataBufferInt, size + (this->dataBitOffset + 31) / 32));
			break;
		}
	}
	return dataBuffer;
}

int32_t MultiPixelPackedSampleModel::getNumDataElements() {
	return 1;
}

$ints* MultiPixelPackedSampleModel::getSampleSize() {
	$var($ints, sampleSize, $new($ints, {this->pixelBitStride}));
	return sampleSize;
}

int32_t MultiPixelPackedSampleModel::getSampleSize(int32_t band) {
	return this->pixelBitStride;
}

int32_t MultiPixelPackedSampleModel::getOffset(int32_t x, int32_t y) {
	int32_t offset = y * this->scanlineStride;
	offset += $div((x * this->pixelBitStride + this->dataBitOffset), this->dataElementSize);
	return offset;
}

int32_t MultiPixelPackedSampleModel::getBitOffset(int32_t x) {
	return $mod((x * this->pixelBitStride + this->dataBitOffset), this->dataElementSize);
}

int32_t MultiPixelPackedSampleModel::getScanlineStride() {
	return this->scanlineStride;
}

int32_t MultiPixelPackedSampleModel::getPixelBitStride() {
	return this->pixelBitStride;
}

int32_t MultiPixelPackedSampleModel::getDataBitOffset() {
	return this->dataBitOffset;
}

int32_t MultiPixelPackedSampleModel::getTransferType() {
	if (this->pixelBitStride > 16) {
		return $DataBuffer::TYPE_INT;
	} else if (this->pixelBitStride > 8) {
		return $DataBuffer::TYPE_USHORT;
	} else {
		return $DataBuffer::TYPE_BYTE;
	}
}

$SampleModel* MultiPixelPackedSampleModel::createSubsetSampleModel($ints* bands) {
	if (bands != nullptr) {
		if (bands->length != 1) {
			$throwNew($RasterFormatException, "MultiPixelPackedSampleModel has only one band."_s);
		}
	}
	$var($SampleModel, sm, createCompatibleSampleModel(this->width, this->height));
	return sm;
}

int32_t MultiPixelPackedSampleModel::getSample(int32_t x, int32_t y, int32_t b, $DataBuffer* data) {
	if ((x < 0) || (y < 0) || (x >= this->width) || (y >= this->height) || (b != 0)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	int32_t bitnum = this->dataBitOffset + x * this->pixelBitStride;
	int32_t element = $nc(data)->getElem(y * this->scanlineStride + $div(bitnum, this->dataElementSize));
	int32_t shift = this->dataElementSize - ((int32_t)(bitnum & (uint32_t)(this->dataElementSize - 1))) - this->pixelBitStride;
	return (int32_t)(($sr(element, shift)) & (uint32_t)this->bitMask);
}

void MultiPixelPackedSampleModel::setSample(int32_t x, int32_t y, int32_t b, int32_t s, $DataBuffer* data) {
	if ((x < 0) || (y < 0) || (x >= this->width) || (y >= this->height) || (b != 0)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	int32_t bitnum = this->dataBitOffset + x * this->pixelBitStride;
	int32_t index = y * this->scanlineStride + ($div(bitnum, this->dataElementSize));
	int32_t shift = this->dataElementSize - ((int32_t)(bitnum & (uint32_t)(this->dataElementSize - 1))) - this->pixelBitStride;
	int32_t element = $nc(data)->getElem(index);
	element &= (uint32_t)~($sl(this->bitMask, shift));
	element |= $sl((int32_t)(s & (uint32_t)this->bitMask), shift);
	data->setElem(index, element);
}

$Object* MultiPixelPackedSampleModel::getDataElements(int32_t x, int32_t y, Object$* obj$renamed, $DataBuffer* data) {
	$useLocalCurrentObjectStackCache();
	$var($Object, obj, obj$renamed);
	if ((x < 0) || (y < 0) || (x >= this->width) || (y >= this->height)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	int32_t type = getTransferType();
	int32_t bitnum = this->dataBitOffset + x * this->pixelBitStride;
	int32_t shift = this->dataElementSize - ((int32_t)(bitnum & (uint32_t)(this->dataElementSize - 1))) - this->pixelBitStride;
	int32_t element = 0;
	{
		$var($bytes, bdata, nullptr)
		$var($shorts, sdata, nullptr)
		$var($ints, idata, nullptr)
		switch (type) {
		case $DataBuffer::TYPE_BYTE:
			{
				if (obj == nullptr) {
					$assign(bdata, $new($bytes, 1));
				} else {
					$assign(bdata, $cast($bytes, obj));
				}
				element = $nc(data)->getElem(y * this->scanlineStride + $div(bitnum, this->dataElementSize));
				$nc(bdata)->set(0, (int8_t)((int32_t)(($sr(element, shift)) & (uint32_t)this->bitMask)));
				$assign(obj, $of(bdata));
				break;
			}
		case $DataBuffer::TYPE_USHORT:
			{
				if (obj == nullptr) {
					$assign(sdata, $new($shorts, 1));
				} else {
					$assign(sdata, $cast($shorts, obj));
				}
				element = $nc(data)->getElem(y * this->scanlineStride + $div(bitnum, this->dataElementSize));
				$nc(sdata)->set(0, (int16_t)((int32_t)(($sr(element, shift)) & (uint32_t)this->bitMask)));
				$assign(obj, $of(sdata));
				break;
			}
		case $DataBuffer::TYPE_INT:
			{
				if (obj == nullptr) {
					$assign(idata, $new($ints, 1));
				} else {
					$assign(idata, $cast($ints, obj));
				}
				element = $nc(data)->getElem(y * this->scanlineStride + $div(bitnum, this->dataElementSize));
				$nc(idata)->set(0, (int32_t)(($sr(element, shift)) & (uint32_t)this->bitMask));
				$assign(obj, $of(idata));
				break;
			}
		}
	}
	return $of(obj);
}

$ints* MultiPixelPackedSampleModel::getPixel(int32_t x, int32_t y, $ints* iArray, $DataBuffer* data) {
	if ((x < 0) || (y < 0) || (x >= this->width) || (y >= this->height)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	$var($ints, pixels, nullptr);
	if (iArray != nullptr) {
		$assign(pixels, iArray);
	} else {
		$assign(pixels, $new($ints, this->numBands));
	}
	int32_t bitnum = this->dataBitOffset + x * this->pixelBitStride;
	int32_t element = $nc(data)->getElem(y * this->scanlineStride + $div(bitnum, this->dataElementSize));
	int32_t shift = this->dataElementSize - ((int32_t)(bitnum & (uint32_t)(this->dataElementSize - 1))) - this->pixelBitStride;
	$nc(pixels)->set(0, (int32_t)(($sr(element, shift)) & (uint32_t)this->bitMask));
	return pixels;
}

void MultiPixelPackedSampleModel::setDataElements(int32_t x, int32_t y, Object$* obj, $DataBuffer* data) {
	$useLocalCurrentObjectStackCache();
	if ((x < 0) || (y < 0) || (x >= this->width) || (y >= this->height)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	int32_t type = getTransferType();
	int32_t bitnum = this->dataBitOffset + x * this->pixelBitStride;
	int32_t index = y * this->scanlineStride + ($div(bitnum, this->dataElementSize));
	int32_t shift = this->dataElementSize - ((int32_t)(bitnum & (uint32_t)(this->dataElementSize - 1))) - this->pixelBitStride;
	int32_t element = $nc(data)->getElem(index);
	element &= (uint32_t)~($sl(this->bitMask, shift));
	{
		$var($bytes, barray, nullptr)
		$var($shorts, sarray, nullptr)
		$var($ints, iarray, nullptr)
		switch (type) {
		case $DataBuffer::TYPE_BYTE:
			{
				$assign(barray, $cast($bytes, obj));
				element |= $sl((int32_t)(((int32_t)((int32_t)($nc(barray)->get(0)) & (uint32_t)255)) & (uint32_t)this->bitMask), shift);
				data->setElem(index, element);
				break;
			}
		case $DataBuffer::TYPE_USHORT:
			{
				$assign(sarray, $cast($shorts, obj));
				element |= $sl((int32_t)(((int32_t)((int32_t)($nc(sarray)->get(0)) & (uint32_t)0x0000FFFF)) & (uint32_t)this->bitMask), shift);
				data->setElem(index, element);
				break;
			}
		case $DataBuffer::TYPE_INT:
			{
				$assign(iarray, $cast($ints, obj));
				element |= $sl((int32_t)($nc(iarray)->get(0) & (uint32_t)this->bitMask), shift);
				data->setElem(index, element);
				break;
			}
		}
	}
}

void MultiPixelPackedSampleModel::setPixel(int32_t x, int32_t y, $ints* iArray, $DataBuffer* data) {
	if ((x < 0) || (y < 0) || (x >= this->width) || (y >= this->height)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	int32_t bitnum = this->dataBitOffset + x * this->pixelBitStride;
	int32_t index = y * this->scanlineStride + ($div(bitnum, this->dataElementSize));
	int32_t shift = this->dataElementSize - ((int32_t)(bitnum & (uint32_t)(this->dataElementSize - 1))) - this->pixelBitStride;
	int32_t element = $nc(data)->getElem(index);
	element &= (uint32_t)~($sl(this->bitMask, shift));
	element |= $sl((int32_t)($nc(iArray)->get(0) & (uint32_t)this->bitMask), shift);
	data->setElem(index, element);
}

bool MultiPixelPackedSampleModel::equals(Object$* o) {
	if ((o == nullptr) || !($instanceOf(MultiPixelPackedSampleModel, o))) {
		return false;
	}
	$var(MultiPixelPackedSampleModel, that, $cast(MultiPixelPackedSampleModel, o));
	return this->width == $nc(that)->width && this->height == that->height && this->numBands == that->numBands && this->dataType == that->dataType && this->pixelBitStride == that->pixelBitStride && this->bitMask == that->bitMask && this->pixelsPerDataElement == that->pixelsPerDataElement && this->dataElementSize == that->dataElementSize && this->dataBitOffset == that->dataBitOffset && this->scanlineStride == that->scanlineStride;
}

int32_t MultiPixelPackedSampleModel::hashCode() {
	int32_t hash = 0;
	hash = this->width;
	hash <<= 8;
	hash ^= this->height;
	hash <<= 8;
	hash ^= this->numBands;
	hash <<= 8;
	hash ^= this->dataType;
	hash <<= 8;
	hash ^= this->pixelBitStride;
	hash <<= 8;
	hash ^= this->bitMask;
	hash <<= 8;
	hash ^= this->pixelsPerDataElement;
	hash <<= 8;
	hash ^= this->dataElementSize;
	hash <<= 8;
	hash ^= this->dataBitOffset;
	hash <<= 8;
	hash ^= this->scanlineStride;
	return hash;
}

MultiPixelPackedSampleModel::MultiPixelPackedSampleModel() {
}

$Class* MultiPixelPackedSampleModel::load$($String* name, bool initialize) {
	$loadClass(MultiPixelPackedSampleModel, name, initialize, &_MultiPixelPackedSampleModel_ClassInfo_, allocate$MultiPixelPackedSampleModel);
	return class$;
}

$Class* MultiPixelPackedSampleModel::class$ = nullptr;

		} // image
	} // awt
} // java