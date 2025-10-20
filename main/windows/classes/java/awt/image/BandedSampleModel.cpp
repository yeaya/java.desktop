#include <java/awt/image/BandedSampleModel.h>

#include <java/awt/image/ComponentSampleModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DataBufferByte.h>
#include <java/awt/image/DataBufferDouble.h>
#include <java/awt/image/DataBufferFloat.h>
#include <java/awt/image/DataBufferInt.h>
#include <java/awt/image/DataBufferShort.h>
#include <java/awt/image/DataBufferUShort.h>
#include <java/awt/image/RasterFormatException.h>
#include <java/awt/image/SampleModel.h>
#include <java/lang/Array.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef TYPE_BYTE
#undef TYPE_DOUBLE
#undef TYPE_FLOAT
#undef TYPE_INT
#undef TYPE_SHORT
#undef TYPE_USHORT

using $ComponentSampleModel = ::java::awt::image::ComponentSampleModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $DataBufferByte = ::java::awt::image::DataBufferByte;
using $DataBufferDouble = ::java::awt::image::DataBufferDouble;
using $DataBufferFloat = ::java::awt::image::DataBufferFloat;
using $DataBufferInt = ::java::awt::image::DataBufferInt;
using $DataBufferShort = ::java::awt::image::DataBufferShort;
using $DataBufferUShort = ::java::awt::image::DataBufferUShort;
using $RasterFormatException = ::java::awt::image::RasterFormatException;
using $SampleModel = ::java::awt::image::SampleModel;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace image {

$MethodInfo _BandedSampleModel_MethodInfo_[] = {
	{"<init>", "(IIII)V", nullptr, $PUBLIC, $method(static_cast<void(BandedSampleModel::*)(int32_t,int32_t,int32_t,int32_t)>(&BandedSampleModel::init$))},
	{"<init>", "(IIII[I[I)V", nullptr, $PUBLIC, $method(static_cast<void(BandedSampleModel::*)(int32_t,int32_t,int32_t,int32_t,$ints*,$ints*)>(&BandedSampleModel::init$))},
	{"createCompatibleSampleModel", "(II)Ljava/awt/image/SampleModel;", nullptr, $PUBLIC},
	{"createDataBuffer", "()Ljava/awt/image/DataBuffer;", nullptr, $PUBLIC},
	{"createIndicesArray", "(I)[I", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ints*(*)(int32_t)>(&BandedSampleModel::createIndicesArray))},
	{"createOffsetArray", "(I)[I", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ints*(*)(int32_t)>(&BandedSampleModel::createOffsetArray))},
	{"createSubsetSampleModel", "([I)Ljava/awt/image/SampleModel;", nullptr, $PUBLIC},
	{"getDataElements", "(IILjava/lang/Object;Ljava/awt/image/DataBuffer;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getPixel", "(II[ILjava/awt/image/DataBuffer;)[I", nullptr, $PUBLIC},
	{"getPixels", "(IIII[ILjava/awt/image/DataBuffer;)[I", nullptr, $PUBLIC},
	{"getSample", "(IIILjava/awt/image/DataBuffer;)I", nullptr, $PUBLIC},
	{"getSampleDouble", "(IIILjava/awt/image/DataBuffer;)D", nullptr, $PUBLIC},
	{"getSampleFloat", "(IIILjava/awt/image/DataBuffer;)F", nullptr, $PUBLIC},
	{"getSamples", "(IIIII[ILjava/awt/image/DataBuffer;)[I", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"setDataElements", "(IILjava/lang/Object;Ljava/awt/image/DataBuffer;)V", nullptr, $PUBLIC},
	{"setPixel", "(II[ILjava/awt/image/DataBuffer;)V", nullptr, $PUBLIC},
	{"setPixels", "(IIII[ILjava/awt/image/DataBuffer;)V", nullptr, $PUBLIC},
	{"setSample", "(IIIILjava/awt/image/DataBuffer;)V", nullptr, $PUBLIC},
	{"setSample", "(IIIFLjava/awt/image/DataBuffer;)V", nullptr, $PUBLIC},
	{"setSample", "(IIIDLjava/awt/image/DataBuffer;)V", nullptr, $PUBLIC},
	{"setSamples", "(IIIII[ILjava/awt/image/DataBuffer;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _BandedSampleModel_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.awt.image.BandedSampleModel",
	"java.awt.image.ComponentSampleModel",
	nullptr,
	nullptr,
	_BandedSampleModel_MethodInfo_
};

$Object* allocate$BandedSampleModel($Class* clazz) {
	return $of($alloc(BandedSampleModel));
}

void BandedSampleModel::init$(int32_t dataType, int32_t w, int32_t h, int32_t numBands) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = dataType;
	int32_t var$1 = w;
	int32_t var$2 = h;
	int32_t var$3 = w;
	$var($ints, var$4, BandedSampleModel::createIndicesArray(numBands));
	$ComponentSampleModel::init$(var$0, var$1, var$2, 1, var$3, var$4, $(BandedSampleModel::createOffsetArray(numBands)));
}

void BandedSampleModel::init$(int32_t dataType, int32_t w, int32_t h, int32_t scanlineStride, $ints* bankIndices, $ints* bandOffsets) {
	$ComponentSampleModel::init$(dataType, w, h, 1, scanlineStride, bankIndices, bandOffsets);
}

$SampleModel* BandedSampleModel::createCompatibleSampleModel(int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($ints, bandOffs, nullptr);
	if (this->numBanks == 1) {
		$assign(bandOffs, orderBands(this->bandOffsets, w * h));
	} else {
		$assign(bandOffs, $new($ints, $nc(this->bandOffsets)->length));
	}
	$var($SampleModel, sampleModel, $new(BandedSampleModel, this->dataType, w, h, w, this->bankIndices, bandOffs));
	return sampleModel;
}

$SampleModel* BandedSampleModel::createSubsetSampleModel($ints* bands) {
	$useLocalCurrentObjectStackCache();
	if ($nc(bands)->length > $nc(this->bankIndices)->length) {
		$throwNew($RasterFormatException, $$str({"There are only "_s, $$str($nc(this->bankIndices)->length), " bands"_s}));
	}
	$var($ints, newBankIndices, $new($ints, $nc(bands)->length));
	$var($ints, newBandOffsets, $new($ints, bands->length));
	for (int32_t i = 0; i < bands->length; ++i) {
		newBankIndices->set(i, $nc(this->bankIndices)->get(bands->get(i)));
		newBandOffsets->set(i, $nc(this->bandOffsets)->get(bands->get(i)));
	}
	return $new(BandedSampleModel, this->dataType, this->width, this->height, this->scanlineStride, newBankIndices, newBandOffsets);
}

$DataBuffer* BandedSampleModel::createDataBuffer() {
	$var($DataBuffer, dataBuffer, nullptr);
	int32_t size = this->scanlineStride * this->height;
	if (this->numBanks == 1) {
		int32_t sizePerBand = size;
		size += $nc(this->bandOffsets)->get(0);
		for (int32_t index = 1; index < $nc(this->bandOffsets)->length; ++index) {
			size += ($nc(this->bandOffsets)->get(index) - size) + sizePerBand;
		}
	} else {
		int32_t maxBandOffset = $nc(this->bandOffsets)->get(0);
		for (int32_t index = 1; index < $nc(this->bandOffsets)->length; ++index) {
			maxBandOffset = $Math::max(maxBandOffset, $nc(this->bandOffsets)->get(index));
		}
		size += maxBandOffset;
	}
	switch (this->dataType) {
	case $DataBuffer::TYPE_BYTE:
		{
			$assign(dataBuffer, $new($DataBufferByte, size, this->numBanks));
			break;
		}
	case $DataBuffer::TYPE_USHORT:
		{
			$assign(dataBuffer, $new($DataBufferUShort, size, this->numBanks));
			break;
		}
	case $DataBuffer::TYPE_SHORT:
		{
			$assign(dataBuffer, $new($DataBufferShort, size, this->numBanks));
			break;
		}
	case $DataBuffer::TYPE_INT:
		{
			$assign(dataBuffer, $new($DataBufferInt, size, this->numBanks));
			break;
		}
	case $DataBuffer::TYPE_FLOAT:
		{
			$assign(dataBuffer, $new($DataBufferFloat, size, this->numBanks));
			break;
		}
	case $DataBuffer::TYPE_DOUBLE:
		{
			$assign(dataBuffer, $new($DataBufferDouble, size, this->numBanks));
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException, "dataType is not one of the supported types."_s);
		}
	}
	return dataBuffer;
}

$Object* BandedSampleModel::getDataElements(int32_t x, int32_t y, Object$* obj$renamed, $DataBuffer* data) {
	$useLocalCurrentObjectStackCache();
	$var($Object, obj, obj$renamed);
	if ((x < 0) || (y < 0) || (x >= this->width) || (y >= this->height)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	int32_t type = getTransferType();
	int32_t numDataElems = getNumDataElements();
	int32_t pixelOffset = y * this->scanlineStride + x;
	{
		$var($bytes, bdata, nullptr)
		$var($shorts, sdata, nullptr)
		$var($ints, idata, nullptr)
		$var($floats, fdata, nullptr)
		$var($doubles, ddata, nullptr)
		switch (type) {
		case $DataBuffer::TYPE_BYTE:
			{
				if (obj == nullptr) {
					$assign(bdata, $new($bytes, numDataElems));
				} else {
					$assign(bdata, $cast($bytes, obj));
				}
				for (int32_t i = 0; i < numDataElems; ++i) {
					$nc(bdata)->set(i, (int8_t)$nc(data)->getElem($nc(this->bankIndices)->get(i), pixelOffset + $nc(this->bandOffsets)->get(i)));
				}
				$assign(obj, $of(bdata));
				break;
			}
		case $DataBuffer::TYPE_USHORT:
			{}
		case $DataBuffer::TYPE_SHORT:
			{
				if (obj == nullptr) {
					$assign(sdata, $new($shorts, numDataElems));
				} else {
					$assign(sdata, $cast($shorts, obj));
				}
				for (int32_t i = 0; i < numDataElems; ++i) {
					$nc(sdata)->set(i, (int16_t)$nc(data)->getElem($nc(this->bankIndices)->get(i), pixelOffset + $nc(this->bandOffsets)->get(i)));
				}
				$assign(obj, $of(sdata));
				break;
			}
		case $DataBuffer::TYPE_INT:
			{
				if (obj == nullptr) {
					$assign(idata, $new($ints, numDataElems));
				} else {
					$assign(idata, $cast($ints, obj));
				}
				for (int32_t i = 0; i < numDataElems; ++i) {
					$nc(idata)->set(i, $nc(data)->getElem($nc(this->bankIndices)->get(i), pixelOffset + $nc(this->bandOffsets)->get(i)));
				}
				$assign(obj, $of(idata));
				break;
			}
		case $DataBuffer::TYPE_FLOAT:
			{
				if (obj == nullptr) {
					$assign(fdata, $new($floats, numDataElems));
				} else {
					$assign(fdata, $cast($floats, obj));
				}
				for (int32_t i = 0; i < numDataElems; ++i) {
					$nc(fdata)->set(i, $nc(data)->getElemFloat($nc(this->bankIndices)->get(i), pixelOffset + $nc(this->bandOffsets)->get(i)));
				}
				$assign(obj, $of(fdata));
				break;
			}
		case $DataBuffer::TYPE_DOUBLE:
			{
				if (obj == nullptr) {
					$assign(ddata, $new($doubles, numDataElems));
				} else {
					$assign(ddata, $cast($doubles, obj));
				}
				for (int32_t i = 0; i < numDataElems; ++i) {
					$nc(ddata)->set(i, $nc(data)->getElemDouble($nc(this->bankIndices)->get(i), pixelOffset + $nc(this->bandOffsets)->get(i)));
				}
				$assign(obj, $of(ddata));
				break;
			}
		}
	}
	return $of(obj);
}

$ints* BandedSampleModel::getPixel(int32_t x, int32_t y, $ints* iArray, $DataBuffer* data) {
	if ((x < 0) || (y < 0) || (x >= this->width) || (y >= this->height)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	$var($ints, pixels, nullptr);
	if (iArray != nullptr) {
		$assign(pixels, iArray);
	} else {
		$assign(pixels, $new($ints, this->numBands));
	}
	int32_t pixelOffset = y * this->scanlineStride + x;
	for (int32_t i = 0; i < this->numBands; ++i) {
		$nc(pixels)->set(i, $nc(data)->getElem($nc(this->bankIndices)->get(i), pixelOffset + $nc(this->bandOffsets)->get(i)));
	}
	return pixels;
}

$ints* BandedSampleModel::getPixels(int32_t x, int32_t y, int32_t w, int32_t h, $ints* iArray, $DataBuffer* data) {
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
	for (int32_t k = 0; k < this->numBands; ++k) {
		int32_t lineOffset = y * this->scanlineStride + x + $nc(this->bandOffsets)->get(k);
		int32_t srcOffset = k;
		int32_t bank = $nc(this->bankIndices)->get(k);
		for (int32_t i = 0; i < h; ++i) {
			int32_t pixelOffset = lineOffset;
			for (int32_t j = 0; j < w; ++j) {
				$nc(pixels)->set(srcOffset, $nc(data)->getElem(bank, pixelOffset++));
				srcOffset += this->numBands;
			}
			lineOffset += this->scanlineStride;
		}
	}
	return pixels;
}

int32_t BandedSampleModel::getSample(int32_t x, int32_t y, int32_t b, $DataBuffer* data) {
	if ((x < 0) || (y < 0) || (x >= this->width) || (y >= this->height)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	int32_t sample = $nc(data)->getElem($nc(this->bankIndices)->get(b), y * this->scanlineStride + x + $nc(this->bandOffsets)->get(b));
	return sample;
}

float BandedSampleModel::getSampleFloat(int32_t x, int32_t y, int32_t b, $DataBuffer* data) {
	if ((x < 0) || (y < 0) || (x >= this->width) || (y >= this->height)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	float sample = $nc(data)->getElemFloat($nc(this->bankIndices)->get(b), y * this->scanlineStride + x + $nc(this->bandOffsets)->get(b));
	return sample;
}

double BandedSampleModel::getSampleDouble(int32_t x, int32_t y, int32_t b, $DataBuffer* data) {
	if ((x < 0) || (y < 0) || (x >= this->width) || (y >= this->height)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	double sample = $nc(data)->getElemDouble($nc(this->bankIndices)->get(b), y * this->scanlineStride + x + $nc(this->bandOffsets)->get(b));
	return sample;
}

$ints* BandedSampleModel::getSamples(int32_t x, int32_t y, int32_t w, int32_t h, int32_t b, $ints* iArray, $DataBuffer* data) {
	if ((x < 0) || (y < 0) || (x + w > this->width) || (y + h > this->height)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	$var($ints, samples, nullptr);
	if (iArray != nullptr) {
		$assign(samples, iArray);
	} else {
		$assign(samples, $new($ints, w * h));
	}
	int32_t lineOffset = y * this->scanlineStride + x + $nc(this->bandOffsets)->get(b);
	int32_t srcOffset = 0;
	int32_t bank = $nc(this->bankIndices)->get(b);
	for (int32_t i = 0; i < h; ++i) {
		int32_t sampleOffset = lineOffset;
		for (int32_t j = 0; j < w; ++j) {
			$nc(samples)->set(srcOffset++, $nc(data)->getElem(bank, sampleOffset++));
		}
		lineOffset += this->scanlineStride;
	}
	return samples;
}

void BandedSampleModel::setDataElements(int32_t x, int32_t y, Object$* obj, $DataBuffer* data) {
	$useLocalCurrentObjectStackCache();
	if ((x < 0) || (y < 0) || (x >= this->width) || (y >= this->height)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	int32_t type = getTransferType();
	int32_t numDataElems = getNumDataElements();
	int32_t pixelOffset = y * this->scanlineStride + x;
	{
		$var($bytes, barray, nullptr)
		$var($shorts, sarray, nullptr)
		$var($ints, iarray, nullptr)
		$var($floats, farray, nullptr)
		$var($doubles, darray, nullptr)
		switch (type) {
		case $DataBuffer::TYPE_BYTE:
			{
				$assign(barray, $cast($bytes, obj));
				for (int32_t i = 0; i < numDataElems; ++i) {
					$nc(data)->setElem($nc(this->bankIndices)->get(i), pixelOffset + $nc(this->bandOffsets)->get(i), (int32_t)($nc(barray)->get(i) & (uint32_t)255));
				}
				break;
			}
		case $DataBuffer::TYPE_USHORT:
			{}
		case $DataBuffer::TYPE_SHORT:
			{
				$assign(sarray, $cast($shorts, obj));
				for (int32_t i = 0; i < numDataElems; ++i) {
					$nc(data)->setElem($nc(this->bankIndices)->get(i), pixelOffset + $nc(this->bandOffsets)->get(i), (int32_t)($nc(sarray)->get(i) & (uint32_t)0x0000FFFF));
				}
				break;
			}
		case $DataBuffer::TYPE_INT:
			{
				$assign(iarray, $cast($ints, obj));
				for (int32_t i = 0; i < numDataElems; ++i) {
					$nc(data)->setElem($nc(this->bankIndices)->get(i), pixelOffset + $nc(this->bandOffsets)->get(i), $nc(iarray)->get(i));
				}
				break;
			}
		case $DataBuffer::TYPE_FLOAT:
			{
				$assign(farray, $cast($floats, obj));
				for (int32_t i = 0; i < numDataElems; ++i) {
					$nc(data)->setElemFloat($nc(this->bankIndices)->get(i), pixelOffset + $nc(this->bandOffsets)->get(i), $nc(farray)->get(i));
				}
				break;
			}
		case $DataBuffer::TYPE_DOUBLE:
			{
				$assign(darray, $cast($doubles, obj));
				for (int32_t i = 0; i < numDataElems; ++i) {
					$nc(data)->setElemDouble($nc(this->bankIndices)->get(i), pixelOffset + $nc(this->bandOffsets)->get(i), $nc(darray)->get(i));
				}
				break;
			}
		}
	}
}

void BandedSampleModel::setPixel(int32_t x, int32_t y, $ints* iArray, $DataBuffer* data) {
	if ((x < 0) || (y < 0) || (x >= this->width) || (y >= this->height)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	int32_t pixelOffset = y * this->scanlineStride + x;
	for (int32_t i = 0; i < this->numBands; ++i) {
		$nc(data)->setElem($nc(this->bankIndices)->get(i), pixelOffset + $nc(this->bandOffsets)->get(i), $nc(iArray)->get(i));
	}
}

void BandedSampleModel::setPixels(int32_t x, int32_t y, int32_t w, int32_t h, $ints* iArray, $DataBuffer* data) {
	int32_t x1 = x + w;
	int32_t y1 = y + h;
	if (x < 0 || x >= this->width || w > this->width || x1 < 0 || x1 > this->width || y < 0 || y >= this->height || h > this->height || y1 < 0 || y1 > this->height) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	for (int32_t k = 0; k < this->numBands; ++k) {
		int32_t lineOffset = y * this->scanlineStride + x + $nc(this->bandOffsets)->get(k);
		int32_t srcOffset = k;
		int32_t bank = $nc(this->bankIndices)->get(k);
		for (int32_t i = 0; i < h; ++i) {
			int32_t pixelOffset = lineOffset;
			for (int32_t j = 0; j < w; ++j) {
				$nc(data)->setElem(bank, pixelOffset++, $nc(iArray)->get(srcOffset));
				srcOffset += this->numBands;
			}
			lineOffset += this->scanlineStride;
		}
	}
}

void BandedSampleModel::setSample(int32_t x, int32_t y, int32_t b, int32_t s, $DataBuffer* data) {
	if ((x < 0) || (y < 0) || (x >= this->width) || (y >= this->height)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	$nc(data)->setElem($nc(this->bankIndices)->get(b), y * this->scanlineStride + x + $nc(this->bandOffsets)->get(b), s);
}

void BandedSampleModel::setSample(int32_t x, int32_t y, int32_t b, float s, $DataBuffer* data) {
	if ((x < 0) || (y < 0) || (x >= this->width) || (y >= this->height)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	$nc(data)->setElemFloat($nc(this->bankIndices)->get(b), y * this->scanlineStride + x + $nc(this->bandOffsets)->get(b), s);
}

void BandedSampleModel::setSample(int32_t x, int32_t y, int32_t b, double s, $DataBuffer* data) {
	if ((x < 0) || (y < 0) || (x >= this->width) || (y >= this->height)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	$nc(data)->setElemDouble($nc(this->bankIndices)->get(b), y * this->scanlineStride + x + $nc(this->bandOffsets)->get(b), s);
}

void BandedSampleModel::setSamples(int32_t x, int32_t y, int32_t w, int32_t h, int32_t b, $ints* iArray, $DataBuffer* data) {
	if ((x < 0) || (y < 0) || (x + w > this->width) || (y + h > this->height)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	int32_t lineOffset = y * this->scanlineStride + x + $nc(this->bandOffsets)->get(b);
	int32_t srcOffset = 0;
	int32_t bank = $nc(this->bankIndices)->get(b);
	for (int32_t i = 0; i < h; ++i) {
		int32_t sampleOffset = lineOffset;
		for (int32_t j = 0; j < w; ++j) {
			$nc(data)->setElem(bank, sampleOffset++, $nc(iArray)->get(srcOffset++));
		}
		lineOffset += this->scanlineStride;
	}
}

$ints* BandedSampleModel::createOffsetArray(int32_t numBands) {
	$init(BandedSampleModel);
	if (numBands <= 0) {
		$throwNew($IllegalArgumentException, "numBands must be > 0"_s);
	}
	$var($ints, bandOffsets, $new($ints, numBands));
	for (int32_t i = 0; i < numBands; ++i) {
		bandOffsets->set(i, 0);
	}
	return bandOffsets;
}

$ints* BandedSampleModel::createIndicesArray(int32_t numBands) {
	$init(BandedSampleModel);
	if (numBands <= 0) {
		$throwNew($IllegalArgumentException, "numBands must be > 0"_s);
	}
	$var($ints, bankIndices, $new($ints, numBands));
	for (int32_t i = 0; i < numBands; ++i) {
		bankIndices->set(i, i);
	}
	return bankIndices;
}

int32_t BandedSampleModel::hashCode() {
	return $ComponentSampleModel::hashCode() ^ 2;
}

BandedSampleModel::BandedSampleModel() {
}

$Class* BandedSampleModel::load$($String* name, bool initialize) {
	$loadClass(BandedSampleModel, name, initialize, &_BandedSampleModel_ClassInfo_, allocate$BandedSampleModel);
	return class$;
}

$Class* BandedSampleModel::class$ = nullptr;

		} // image
	} // awt
} // java