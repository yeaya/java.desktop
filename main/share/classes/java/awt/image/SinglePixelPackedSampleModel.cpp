#include <java/awt/image/SinglePixelPackedSampleModel.h>

#include <java/awt/image/ColorModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DataBufferByte.h>
#include <java/awt/image/DataBufferInt.h>
#include <java/awt/image/DataBufferUShort.h>
#include <java/awt/image/RasterFormatException.h>
#include <java/awt/image/SampleModel.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

#undef TYPE_BYTE
#undef TYPE_INT
#undef TYPE_USHORT

using $ColorModel = ::java::awt::image::ColorModel;
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
using $Arrays = ::java::util::Arrays;

namespace java {
	namespace awt {
		namespace image {

$FieldInfo _SinglePixelPackedSampleModel_FieldInfo_[] = {
	{"bitMasks", "[I", nullptr, $PRIVATE, $field(SinglePixelPackedSampleModel, bitMasks)},
	{"bitOffsets", "[I", nullptr, $PRIVATE, $field(SinglePixelPackedSampleModel, bitOffsets)},
	{"bitSizes", "[I", nullptr, $PRIVATE, $field(SinglePixelPackedSampleModel, bitSizes)},
	{"maxBitSize", "I", nullptr, $PRIVATE, $field(SinglePixelPackedSampleModel, maxBitSize)},
	{"scanlineStride", "I", nullptr, $PRIVATE, $field(SinglePixelPackedSampleModel, scanlineStride)},
	{}
};

$MethodInfo _SinglePixelPackedSampleModel_MethodInfo_[] = {
	{"<init>", "(III[I)V", nullptr, $PUBLIC, $method(static_cast<void(SinglePixelPackedSampleModel::*)(int32_t,int32_t,int32_t,$ints*)>(&SinglePixelPackedSampleModel::init$))},
	{"<init>", "(IIII[I)V", nullptr, $PUBLIC, $method(static_cast<void(SinglePixelPackedSampleModel::*)(int32_t,int32_t,int32_t,int32_t,$ints*)>(&SinglePixelPackedSampleModel::init$))},
	{"createCompatibleSampleModel", "(II)Ljava/awt/image/SampleModel;", nullptr, $PUBLIC},
	{"createDataBuffer", "()Ljava/awt/image/DataBuffer;", nullptr, $PUBLIC},
	{"createSubsetSampleModel", "([I)Ljava/awt/image/SampleModel;", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getBitMasks", "()[I", nullptr, $PUBLIC},
	{"getBitOffsets", "()[I", nullptr, $PUBLIC},
	{"getBufferSize", "()J", nullptr, $PRIVATE, $method(static_cast<int64_t(SinglePixelPackedSampleModel::*)()>(&SinglePixelPackedSampleModel::getBufferSize))},
	{"getDataElements", "(IILjava/lang/Object;Ljava/awt/image/DataBuffer;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getNumDataElements", "()I", nullptr, $PUBLIC},
	{"getOffset", "(II)I", nullptr, $PUBLIC},
	{"getPixel", "(II[ILjava/awt/image/DataBuffer;)[I", nullptr, $PUBLIC},
	{"getPixels", "(IIII[ILjava/awt/image/DataBuffer;)[I", nullptr, $PUBLIC},
	{"getSample", "(IIILjava/awt/image/DataBuffer;)I", nullptr, $PUBLIC},
	{"getSampleSize", "()[I", nullptr, $PUBLIC},
	{"getSampleSize", "(I)I", nullptr, $PUBLIC},
	{"getSamples", "(IIIII[ILjava/awt/image/DataBuffer;)[I", nullptr, $PUBLIC},
	{"getScanlineStride", "()I", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&SinglePixelPackedSampleModel::initIDs))},
	{"setDataElements", "(IILjava/lang/Object;Ljava/awt/image/DataBuffer;)V", nullptr, $PUBLIC},
	{"setPixel", "(II[ILjava/awt/image/DataBuffer;)V", nullptr, $PUBLIC},
	{"setPixels", "(IIII[ILjava/awt/image/DataBuffer;)V", nullptr, $PUBLIC},
	{"setSample", "(IIIILjava/awt/image/DataBuffer;)V", nullptr, $PUBLIC},
	{"setSamples", "(IIIII[ILjava/awt/image/DataBuffer;)V", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_initIDs 20

$ClassInfo _SinglePixelPackedSampleModel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.image.SinglePixelPackedSampleModel",
	"java.awt.image.SampleModel",
	nullptr,
	_SinglePixelPackedSampleModel_FieldInfo_,
	_SinglePixelPackedSampleModel_MethodInfo_
};

$Object* allocate$SinglePixelPackedSampleModel($Class* clazz) {
	return $of($alloc(SinglePixelPackedSampleModel));
}

void SinglePixelPackedSampleModel::initIDs() {
	$init(SinglePixelPackedSampleModel);
	$prepareNativeStatic(SinglePixelPackedSampleModel, initIDs, void);
	$invokeNativeStatic(SinglePixelPackedSampleModel, initIDs);
	$finishNativeStatic();
}

void SinglePixelPackedSampleModel::init$(int32_t dataType, int32_t w, int32_t h, $ints* bitMasks) {
	$useLocalCurrentObjectStackCache();
	SinglePixelPackedSampleModel::init$(dataType, w, h, w, bitMasks);
	if (dataType != $DataBuffer::TYPE_BYTE && dataType != $DataBuffer::TYPE_USHORT && dataType != $DataBuffer::TYPE_INT) {
		$throwNew($IllegalArgumentException, $$str({"Unsupported data type "_s, $$str(dataType)}));
	}
}

void SinglePixelPackedSampleModel::init$(int32_t dataType, int32_t w, int32_t h, int32_t scanlineStride, $ints* bitMasks) {
	$useLocalCurrentObjectStackCache();
	$SampleModel::init$(dataType, w, h, $nc(bitMasks)->length);
	if (dataType != $DataBuffer::TYPE_BYTE && dataType != $DataBuffer::TYPE_USHORT && dataType != $DataBuffer::TYPE_INT) {
		$throwNew($IllegalArgumentException, $$str({"Unsupported data type "_s, $$str(dataType)}));
	}
	this->dataType = dataType;
	$set(this, bitMasks, $cast($ints, $nc(bitMasks)->clone()));
	this->scanlineStride = scanlineStride;
	$set(this, bitOffsets, $new($ints, this->numBands));
	$set(this, bitSizes, $new($ints, this->numBands));
	int32_t maxMask = (int32_t)(($sl((int64_t)1, $DataBuffer::getDataTypeSize(dataType))) - 1);
	this->maxBitSize = 0;
	for (int32_t i = 0; i < this->numBands; ++i) {
		int32_t bitOffset = 0;
		int32_t bitSize = 0;
		int32_t mask = 0;
		(*$nc(this->bitMasks))[i] &= (uint32_t)maxMask;
		mask = $nc(this->bitMasks)->get(i);
		if (mask != 0) {
			while (((int32_t)(mask & (uint32_t)1)) == 0) {
				mask = (int32_t)((uint32_t)mask >> 1);
				++bitOffset;
			}
			while (((int32_t)(mask & (uint32_t)1)) == 1) {
				mask = (int32_t)((uint32_t)mask >> 1);
				++bitSize;
			}
			if (mask != 0) {
				$throwNew($IllegalArgumentException, $$str({"Mask "_s, $$str(bitMasks->get(i)), " must be contiguous"_s}));
			}
		}
		$nc(this->bitOffsets)->set(i, bitOffset);
		$nc(this->bitSizes)->set(i, bitSize);
		if (bitSize > this->maxBitSize) {
			this->maxBitSize = bitSize;
		}
	}
}

int32_t SinglePixelPackedSampleModel::getNumDataElements() {
	return 1;
}

int64_t SinglePixelPackedSampleModel::getBufferSize() {
	int64_t size = this->scanlineStride * (this->height - 1) + this->width;
	return size;
}

$SampleModel* SinglePixelPackedSampleModel::createCompatibleSampleModel(int32_t w, int32_t h) {
	$var($SampleModel, sampleModel, $new(SinglePixelPackedSampleModel, this->dataType, w, h, this->bitMasks));
	return sampleModel;
}

$DataBuffer* SinglePixelPackedSampleModel::createDataBuffer() {
	$var($DataBuffer, dataBuffer, nullptr);
	int32_t size = (int32_t)getBufferSize();
	switch (this->dataType) {
	case $DataBuffer::TYPE_BYTE:
		{
			$assign(dataBuffer, $new($DataBufferByte, size));
			break;
		}
	case $DataBuffer::TYPE_USHORT:
		{
			$assign(dataBuffer, $new($DataBufferUShort, size));
			break;
		}
	case $DataBuffer::TYPE_INT:
		{
			$assign(dataBuffer, $new($DataBufferInt, size));
			break;
		}
	}
	return dataBuffer;
}

$ints* SinglePixelPackedSampleModel::getSampleSize() {
	return $cast($ints, $nc(this->bitSizes)->clone());
}

int32_t SinglePixelPackedSampleModel::getSampleSize(int32_t band) {
	return $nc(this->bitSizes)->get(band);
}

int32_t SinglePixelPackedSampleModel::getOffset(int32_t x, int32_t y) {
	int32_t offset = y * this->scanlineStride + x;
	return offset;
}

$ints* SinglePixelPackedSampleModel::getBitOffsets() {
	return $cast($ints, $nc(this->bitOffsets)->clone());
}

$ints* SinglePixelPackedSampleModel::getBitMasks() {
	return $cast($ints, $nc(this->bitMasks)->clone());
}

int32_t SinglePixelPackedSampleModel::getScanlineStride() {
	return this->scanlineStride;
}

$SampleModel* SinglePixelPackedSampleModel::createSubsetSampleModel($ints* bands) {
	$useLocalCurrentObjectStackCache();
	if ($nc(bands)->length > this->numBands) {
		$throwNew($RasterFormatException, $$str({"There are only "_s, $$str(this->numBands), " bands"_s}));
	}
	$var($ints, newBitMasks, $new($ints, $nc(bands)->length));
	for (int32_t i = 0; i < bands->length; ++i) {
		newBitMasks->set(i, $nc(this->bitMasks)->get(bands->get(i)));
	}
	return $new(SinglePixelPackedSampleModel, this->dataType, this->width, this->height, this->scanlineStride, newBitMasks);
}

$Object* SinglePixelPackedSampleModel::getDataElements(int32_t x, int32_t y, Object$* obj$renamed, $DataBuffer* data) {
	$useLocalCurrentObjectStackCache();
	$var($Object, obj, obj$renamed);
	if ((x < 0) || (y < 0) || (x >= this->width) || (y >= this->height)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	int32_t type = getTransferType();
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
				$nc(bdata)->set(0, (int8_t)$nc(data)->getElem(y * this->scanlineStride + x));
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
				$nc(sdata)->set(0, (int16_t)$nc(data)->getElem(y * this->scanlineStride + x));
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
				$nc(idata)->set(0, $nc(data)->getElem(y * this->scanlineStride + x));
				$assign(obj, $of(idata));
				break;
			}
		}
	}
	return $of(obj);
}

$ints* SinglePixelPackedSampleModel::getPixel(int32_t x, int32_t y, $ints* iArray, $DataBuffer* data) {
	if ((x < 0) || (y < 0) || (x >= this->width) || (y >= this->height)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	$var($ints, pixels, nullptr);
	if (iArray == nullptr) {
		$assign(pixels, $new($ints, this->numBands));
	} else {
		$assign(pixels, iArray);
	}
	int32_t value = $nc(data)->getElem(y * this->scanlineStride + x);
	for (int32_t i = 0; i < this->numBands; ++i) {
		$nc(pixels)->set(i, $usr((int32_t)(value & (uint32_t)$nc(this->bitMasks)->get(i)), $nc(this->bitOffsets)->get(i)));
	}
	return pixels;
}

$ints* SinglePixelPackedSampleModel::getPixels(int32_t x, int32_t y, int32_t w, int32_t h, $ints* iArray, $DataBuffer* data) {
	int32_t x1 = x + w;
	int32_t y1 = y + h;
	if (x < 0 || x >= this->width || w > this->width || x1 < 0 || x1 > this->width || y < 0 || y >= this->height || h > this->height || y1 < 0 || y1 > this->height) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	$var($ints, pixels, nullptr);
	if (iArray != nullptr) {
		$assign(pixels, iArray);
	} else {
		$assign(pixels, $new($ints, w * h * this->numBands));
	}
	int32_t lineOffset = y * this->scanlineStride + x;
	int32_t dstOffset = 0;
	for (int32_t i = 0; i < h; ++i) {
		for (int32_t j = 0; j < w; ++j) {
			int32_t value = $nc(data)->getElem(lineOffset + j);
			for (int32_t k = 0; k < this->numBands; ++k) {
				$nc(pixels)->set(dstOffset++, ($usr((int32_t)(value & (uint32_t)$nc(this->bitMasks)->get(k)), $nc(this->bitOffsets)->get(k))));
			}
		}
		lineOffset += this->scanlineStride;
	}
	return pixels;
}

int32_t SinglePixelPackedSampleModel::getSample(int32_t x, int32_t y, int32_t b, $DataBuffer* data) {
	if ((x < 0) || (y < 0) || (x >= this->width) || (y >= this->height)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	int32_t sample = $nc(data)->getElem(y * this->scanlineStride + x);
	return ($usr((int32_t)(sample & (uint32_t)$nc(this->bitMasks)->get(b)), $nc(this->bitOffsets)->get(b)));
}

$ints* SinglePixelPackedSampleModel::getSamples(int32_t x, int32_t y, int32_t w, int32_t h, int32_t b, $ints* iArray, $DataBuffer* data) {
	if ((x < 0) || (y < 0) || (x + w > this->width) || (y + h > this->height)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	$var($ints, samples, nullptr);
	if (iArray != nullptr) {
		$assign(samples, iArray);
	} else {
		$assign(samples, $new($ints, w * h));
	}
	int32_t lineOffset = y * this->scanlineStride + x;
	int32_t dstOffset = 0;
	for (int32_t i = 0; i < h; ++i) {
		for (int32_t j = 0; j < w; ++j) {
			int32_t value = $nc(data)->getElem(lineOffset + j);
			$nc(samples)->set(dstOffset++, ($usr((int32_t)(value & (uint32_t)$nc(this->bitMasks)->get(b)), $nc(this->bitOffsets)->get(b))));
		}
		lineOffset += this->scanlineStride;
	}
	return samples;
}

void SinglePixelPackedSampleModel::setDataElements(int32_t x, int32_t y, Object$* obj, $DataBuffer* data) {
	$useLocalCurrentObjectStackCache();
	if ((x < 0) || (y < 0) || (x >= this->width) || (y >= this->height)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	int32_t type = getTransferType();
	{
		$var($bytes, barray, nullptr)
		$var($shorts, sarray, nullptr)
		$var($ints, iarray, nullptr)
		switch (type) {
		case $DataBuffer::TYPE_BYTE:
			{
				$assign(barray, $cast($bytes, obj));
				$nc(data)->setElem(y * this->scanlineStride + x, (int32_t)(((int32_t)$nc(barray)->get(0)) & (uint32_t)255));
				break;
			}
		case $DataBuffer::TYPE_USHORT:
			{
				$assign(sarray, $cast($shorts, obj));
				$nc(data)->setElem(y * this->scanlineStride + x, (int32_t)(((int32_t)$nc(sarray)->get(0)) & (uint32_t)0x0000FFFF));
				break;
			}
		case $DataBuffer::TYPE_INT:
			{
				$assign(iarray, $cast($ints, obj));
				$nc(data)->setElem(y * this->scanlineStride + x, $nc(iarray)->get(0));
				break;
			}
		}
	}
}

void SinglePixelPackedSampleModel::setPixel(int32_t x, int32_t y, $ints* iArray, $DataBuffer* data) {
	if ((x < 0) || (y < 0) || (x >= this->width) || (y >= this->height)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	int32_t lineOffset = y * this->scanlineStride + x;
	int32_t value = $nc(data)->getElem(lineOffset);
	for (int32_t i = 0; i < this->numBands; ++i) {
		value &= (uint32_t)~$nc(this->bitMasks)->get(i);
		value |= ((int32_t)(($sl($nc(iArray)->get(i), $nc(this->bitOffsets)->get(i))) & (uint32_t)$nc(this->bitMasks)->get(i)));
	}
	data->setElem(lineOffset, value);
}

void SinglePixelPackedSampleModel::setPixels(int32_t x, int32_t y, int32_t w, int32_t h, $ints* iArray, $DataBuffer* data) {
	int32_t x1 = x + w;
	int32_t y1 = y + h;
	if (x < 0 || x >= this->width || w > this->width || x1 < 0 || x1 > this->width || y < 0 || y >= this->height || h > this->height || y1 < 0 || y1 > this->height) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	int32_t lineOffset = y * this->scanlineStride + x;
	int32_t srcOffset = 0;
	for (int32_t i = 0; i < h; ++i) {
		for (int32_t j = 0; j < w; ++j) {
			int32_t value = $nc(data)->getElem(lineOffset + j);
			for (int32_t k = 0; k < this->numBands; ++k) {
				value &= (uint32_t)~$nc(this->bitMasks)->get(k);
				int32_t srcValue = $nc(iArray)->get(srcOffset++);
				value |= ((int32_t)(($sl(srcValue, $nc(this->bitOffsets)->get(k))) & (uint32_t)$nc(this->bitMasks)->get(k)));
			}
			data->setElem(lineOffset + j, value);
		}
		lineOffset += this->scanlineStride;
	}
}

void SinglePixelPackedSampleModel::setSample(int32_t x, int32_t y, int32_t b, int32_t s, $DataBuffer* data) {
	if ((x < 0) || (y < 0) || (x >= this->width) || (y >= this->height)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	int32_t value = $nc(data)->getElem(y * this->scanlineStride + x);
	value &= (uint32_t)~$nc(this->bitMasks)->get(b);
	value |= (int32_t)(($sl(s, $nc(this->bitOffsets)->get(b))) & (uint32_t)$nc(this->bitMasks)->get(b));
	data->setElem(y * this->scanlineStride + x, value);
}

void SinglePixelPackedSampleModel::setSamples(int32_t x, int32_t y, int32_t w, int32_t h, int32_t b, $ints* iArray, $DataBuffer* data) {
	if ((x < 0) || (y < 0) || (x + w > this->width) || (y + h > this->height)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	int32_t lineOffset = y * this->scanlineStride + x;
	int32_t srcOffset = 0;
	for (int32_t i = 0; i < h; ++i) {
		for (int32_t j = 0; j < w; ++j) {
			int32_t value = $nc(data)->getElem(lineOffset + j);
			value &= (uint32_t)~$nc(this->bitMasks)->get(b);
			int32_t sample = $nc(iArray)->get(srcOffset++);
			value |= (int32_t)(($sl(sample, $nc(this->bitOffsets)->get(b))) & (uint32_t)$nc(this->bitMasks)->get(b));
			data->setElem(lineOffset + j, value);
		}
		lineOffset += this->scanlineStride;
	}
}

bool SinglePixelPackedSampleModel::equals(Object$* o) {
	if ((o == nullptr) || !($instanceOf(SinglePixelPackedSampleModel, o))) {
		return false;
	}
	$var(SinglePixelPackedSampleModel, that, $cast(SinglePixelPackedSampleModel, o));
	bool var$1 = this->width == $nc(that)->width && this->height == that->height && this->numBands == that->numBands && this->dataType == that->dataType && $Arrays::equals(this->bitMasks, that->bitMasks);
	bool var$0 = var$1 && $Arrays::equals(this->bitOffsets, that->bitOffsets);
	return var$0 && $Arrays::equals(this->bitSizes, that->bitSizes) && this->maxBitSize == that->maxBitSize && this->scanlineStride == that->scanlineStride;
}

int32_t SinglePixelPackedSampleModel::hashCode() {
	int32_t hash = 0;
	hash = this->width;
	hash <<= 8;
	hash ^= this->height;
	hash <<= 8;
	hash ^= this->numBands;
	hash <<= 8;
	hash ^= this->dataType;
	hash <<= 8;
	for (int32_t i = 0; i < $nc(this->bitMasks)->length; ++i) {
		hash ^= $nc(this->bitMasks)->get(i);
		hash <<= 8;
	}
	for (int32_t i = 0; i < $nc(this->bitOffsets)->length; ++i) {
		hash ^= $nc(this->bitOffsets)->get(i);
		hash <<= 8;
	}
	for (int32_t i = 0; i < $nc(this->bitSizes)->length; ++i) {
		hash ^= $nc(this->bitSizes)->get(i);
		hash <<= 8;
	}
	hash ^= this->maxBitSize;
	hash <<= 8;
	hash ^= this->scanlineStride;
	return hash;
}

void clinit$SinglePixelPackedSampleModel($Class* class$) {
	{
		$ColorModel::loadLibraries();
		SinglePixelPackedSampleModel::initIDs();
	}
}

SinglePixelPackedSampleModel::SinglePixelPackedSampleModel() {
}

$Class* SinglePixelPackedSampleModel::load$($String* name, bool initialize) {
	$loadClass(SinglePixelPackedSampleModel, name, initialize, &_SinglePixelPackedSampleModel_ClassInfo_, clinit$SinglePixelPackedSampleModel, allocate$SinglePixelPackedSampleModel);
	return class$;
}

$Class* SinglePixelPackedSampleModel::class$ = nullptr;

		} // image
	} // awt
} // java