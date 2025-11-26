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
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/Math.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef TYPE_BYTE
#undef TYPE_DOUBLE
#undef TYPE_FLOAT
#undef TYPE_INT
#undef TYPE_SHORT
#undef TYPE_USHORT

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
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;

namespace java {
	namespace awt {
		namespace image {

$FieldInfo _ComponentSampleModel_FieldInfo_[] = {
	{"bandOffsets", "[I", nullptr, $PROTECTED, $field(ComponentSampleModel, bandOffsets)},
	{"bankIndices", "[I", nullptr, $PROTECTED, $field(ComponentSampleModel, bankIndices)},
	{"numBands", "I", nullptr, $PROTECTED, $field(ComponentSampleModel, numBands)},
	{"numBanks", "I", nullptr, $PROTECTED, $field(ComponentSampleModel, numBanks)},
	{"scanlineStride", "I", nullptr, $PROTECTED, $field(ComponentSampleModel, scanlineStride)},
	{"pixelStride", "I", nullptr, $PROTECTED, $field(ComponentSampleModel, pixelStride)},
	{}
};

$MethodInfo _ComponentSampleModel_MethodInfo_[] = {
	{"<init>", "(IIIII[I)V", nullptr, $PUBLIC, $method(static_cast<void(ComponentSampleModel::*)(int32_t,int32_t,int32_t,int32_t,int32_t,$ints*)>(&ComponentSampleModel::init$))},
	{"<init>", "(IIIII[I[I)V", nullptr, $PUBLIC, $method(static_cast<void(ComponentSampleModel::*)(int32_t,int32_t,int32_t,int32_t,int32_t,$ints*,$ints*)>(&ComponentSampleModel::init$))},
	{"createCompatibleSampleModel", "(II)Ljava/awt/image/SampleModel;", nullptr, $PUBLIC},
	{"createDataBuffer", "()Ljava/awt/image/DataBuffer;", nullptr, $PUBLIC},
	{"createSubsetSampleModel", "([I)Ljava/awt/image/SampleModel;", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getBandOffsets", "()[I", nullptr, $PUBLIC | $FINAL, $method(static_cast<$ints*(ComponentSampleModel::*)()>(&ComponentSampleModel::getBandOffsets))},
	{"getBankIndices", "()[I", nullptr, $PUBLIC | $FINAL, $method(static_cast<$ints*(ComponentSampleModel::*)()>(&ComponentSampleModel::getBankIndices))},
	{"getBufferSize", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(ComponentSampleModel::*)()>(&ComponentSampleModel::getBufferSize))},
	{"getDataElements", "(IILjava/lang/Object;Ljava/awt/image/DataBuffer;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getNumDataElements", "()I", nullptr, $PUBLIC | $FINAL},
	{"getOffset", "(II)I", nullptr, $PUBLIC},
	{"getOffset", "(III)I", nullptr, $PUBLIC},
	{"getPixel", "(II[ILjava/awt/image/DataBuffer;)[I", nullptr, $PUBLIC},
	{"getPixelStride", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(ComponentSampleModel::*)()>(&ComponentSampleModel::getPixelStride))},
	{"getPixels", "(IIII[ILjava/awt/image/DataBuffer;)[I", nullptr, $PUBLIC},
	{"getSample", "(IIILjava/awt/image/DataBuffer;)I", nullptr, $PUBLIC},
	{"getSampleDouble", "(IIILjava/awt/image/DataBuffer;)D", nullptr, $PUBLIC},
	{"getSampleFloat", "(IIILjava/awt/image/DataBuffer;)F", nullptr, $PUBLIC},
	{"getSampleSize", "()[I", nullptr, $PUBLIC | $FINAL},
	{"getSampleSize", "(I)I", nullptr, $PUBLIC | $FINAL},
	{"getSamples", "(IIIII[ILjava/awt/image/DataBuffer;)[I", nullptr, $PUBLIC},
	{"getScanlineStride", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(ComponentSampleModel::*)()>(&ComponentSampleModel::getScanlineStride))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"orderBands", "([II)[I", nullptr, 0},
	{"setDataElements", "(IILjava/lang/Object;Ljava/awt/image/DataBuffer;)V", nullptr, $PUBLIC},
	{"setPixel", "(II[ILjava/awt/image/DataBuffer;)V", nullptr, $PUBLIC},
	{"setPixels", "(IIII[ILjava/awt/image/DataBuffer;)V", nullptr, $PUBLIC},
	{"setSample", "(IIIILjava/awt/image/DataBuffer;)V", nullptr, $PUBLIC},
	{"setSample", "(IIIFLjava/awt/image/DataBuffer;)V", nullptr, $PUBLIC},
	{"setSample", "(IIIDLjava/awt/image/DataBuffer;)V", nullptr, $PUBLIC},
	{"setSamples", "(IIIII[ILjava/awt/image/DataBuffer;)V", nullptr, $PUBLIC},
	{"verify", "()V", nullptr, $PRIVATE, $method(static_cast<void(ComponentSampleModel::*)()>(&ComponentSampleModel::verify))},
	{}
};

$ClassInfo _ComponentSampleModel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.image.ComponentSampleModel",
	"java.awt.image.SampleModel",
	nullptr,
	_ComponentSampleModel_FieldInfo_,
	_ComponentSampleModel_MethodInfo_
};

$Object* allocate$ComponentSampleModel($Class* clazz) {
	return $of($alloc(ComponentSampleModel));
}

void ComponentSampleModel::init$(int32_t dataType, int32_t w, int32_t h, int32_t pixelStride, int32_t scanlineStride, $ints* bandOffsets) {
	$SampleModel::init$(dataType, w, h, $nc(bandOffsets)->length);
	this->numBands = 1;
	this->numBanks = 1;
	this->dataType = dataType;
	this->pixelStride = pixelStride;
	this->scanlineStride = scanlineStride;
	$set(this, bandOffsets, $cast($ints, $nc(bandOffsets)->clone()));
	this->numBands = $nc(this->bandOffsets)->length;
	if (pixelStride < 0) {
		$throwNew($IllegalArgumentException, "Pixel stride must be >= 0"_s);
	}
	if (scanlineStride < 0) {
		$throwNew($IllegalArgumentException, "Scanline stride must be >= 0"_s);
	}
	if ((dataType < $DataBuffer::TYPE_BYTE) || (dataType > $DataBuffer::TYPE_DOUBLE)) {
		$throwNew($IllegalArgumentException, "Unsupported dataType."_s);
	}
	$set(this, bankIndices, $new($ints, this->numBands));
	for (int32_t i = 0; i < this->numBands; ++i) {
		$nc(this->bankIndices)->set(i, 0);
	}
	verify();
}

void ComponentSampleModel::init$(int32_t dataType, int32_t w, int32_t h, int32_t pixelStride, int32_t scanlineStride, $ints* bankIndices, $ints* bandOffsets) {
	$useLocalCurrentObjectStackCache();
	$SampleModel::init$(dataType, w, h, $nc(bandOffsets)->length);
	this->numBands = 1;
	this->numBanks = 1;
	this->dataType = dataType;
	this->pixelStride = pixelStride;
	this->scanlineStride = scanlineStride;
	$set(this, bandOffsets, $cast($ints, $nc(bandOffsets)->clone()));
	$set(this, bankIndices, $cast($ints, $nc(bankIndices)->clone()));
	if ($nc(this->bandOffsets)->length != $nc(this->bankIndices)->length) {
		$throwNew($IllegalArgumentException, "Length of bandOffsets must equal length of bankIndices."_s);
	}
	if (pixelStride < 0) {
		$throwNew($IllegalArgumentException, "Pixel stride must be >= 0"_s);
	}
	if (scanlineStride < 0) {
		$throwNew($IllegalArgumentException, "Scanline stride must be >= 0"_s);
	}
	if ((dataType < $DataBuffer::TYPE_BYTE) || (dataType > $DataBuffer::TYPE_DOUBLE)) {
		$throwNew($IllegalArgumentException, "Unsupported dataType."_s);
	}
	int32_t maxBank = $nc(this->bankIndices)->get(0);
	if (maxBank < 0) {
		$throwNew($IllegalArgumentException, $$str({"Index of bank 0 is less than 0 ("_s, $$str(maxBank), ")"_s}));
	}
	for (int32_t i = 1; i < $nc(this->bankIndices)->length; ++i) {
		if ($nc(this->bankIndices)->get(i) > maxBank) {
			maxBank = $nc(this->bankIndices)->get(i);
		} else if ($nc(this->bankIndices)->get(i) < 0) {
			$throwNew($IllegalArgumentException, $$str({"Index of bank "_s, $$str(i), " is less than 0 ("_s, $$str(maxBank), ")"_s}));
		}
	}
	this->numBanks = maxBank + 1;
	this->numBands = $nc(this->bandOffsets)->length;
	verify();
}

void ComponentSampleModel::verify() {
	int32_t requiredSize = getBufferSize();
}

int32_t ComponentSampleModel::getBufferSize() {
	int32_t maxBandOff = $nc(this->bandOffsets)->get(0);
	for (int32_t i = 1; i < $nc(this->bandOffsets)->length; ++i) {
		maxBandOff = $Math::max(maxBandOff, $nc(this->bandOffsets)->get(i));
	}
	if (maxBandOff < 0 || maxBandOff > ($Integer::MAX_VALUE - 1)) {
		$throwNew($IllegalArgumentException, "Invalid band offset"_s);
	}
	if (this->pixelStride < 0 || this->pixelStride > ($div($Integer::MAX_VALUE, this->width))) {
		$throwNew($IllegalArgumentException, "Invalid pixel stride"_s);
	}
	if (this->scanlineStride < 0 || this->scanlineStride > ($div($Integer::MAX_VALUE, this->height))) {
		$throwNew($IllegalArgumentException, "Invalid scanline stride"_s);
	}
	int32_t size = maxBandOff + 1;
	int32_t val = this->pixelStride * (this->width - 1);
	if (val > ($Integer::MAX_VALUE - size)) {
		$throwNew($IllegalArgumentException, "Invalid pixel stride"_s);
	}
	size += val;
	val = this->scanlineStride * (this->height - 1);
	if (val > ($Integer::MAX_VALUE - size)) {
		$throwNew($IllegalArgumentException, "Invalid scan stride"_s);
	}
	size += val;
	return size;
}

$ints* ComponentSampleModel::orderBands($ints* orig, int32_t step) {
	$useLocalCurrentObjectStackCache();
	$var($ints, map, $new($ints, $nc(orig)->length));
	$var($ints, ret, $new($ints, orig->length));
	for (int32_t i = 0; i < map->length; ++i) {
		map->set(i, i);
	}
	for (int32_t i = 0; i < ret->length; ++i) {
		int32_t index = i;
		for (int32_t j = i + 1; j < ret->length; ++j) {
			if (orig->get(map->get(index)) > orig->get(map->get(j))) {
				index = j;
			}
		}
		ret->set(map->get(index), i * step);
		map->set(index, map->get(i));
	}
	return ret;
}

$SampleModel* ComponentSampleModel::createCompatibleSampleModel(int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($SampleModel, ret, nullptr);
	int64_t size = 0;
	int32_t minBandOff = $nc(this->bandOffsets)->get(0);
	int32_t maxBandOff = $nc(this->bandOffsets)->get(0);
	for (int32_t i = 1; i < $nc(this->bandOffsets)->length; ++i) {
		minBandOff = $Math::min(minBandOff, $nc(this->bandOffsets)->get(i));
		maxBandOff = $Math::max(maxBandOff, $nc(this->bandOffsets)->get(i));
	}
	maxBandOff -= minBandOff;
	int32_t bands = $nc(this->bandOffsets)->length;
	$var($ints, bandOff, nullptr);
	int32_t pStride = $Math::abs(this->pixelStride);
	int32_t lStride = $Math::abs(this->scanlineStride);
	int32_t bStride = $Math::abs(maxBandOff);
	if (pStride > lStride) {
		if (pStride > bStride) {
			if (lStride > bStride) {
				$assign(bandOff, $new($ints, $nc(this->bandOffsets)->length));
				for (int32_t i = 0; i < bands; ++i) {
					bandOff->set(i, $nc(this->bandOffsets)->get(i) - minBandOff);
				}
				lStride = bStride + 1;
				pStride = lStride * h;
			} else {
				$assign(bandOff, orderBands(this->bandOffsets, lStride * h));
				pStride = bands * lStride * h;
			}
		} else {
			pStride = lStride * h;
			$assign(bandOff, orderBands(this->bandOffsets, pStride * w));
		}
	} else if (pStride > bStride) {
		$assign(bandOff, $new($ints, $nc(this->bandOffsets)->length));
		for (int32_t i = 0; i < bands; ++i) {
			bandOff->set(i, $nc(this->bandOffsets)->get(i) - minBandOff);
		}
		pStride = bStride + 1;
		lStride = pStride * w;
	} else if (lStride > bStride) {
		$assign(bandOff, orderBands(this->bandOffsets, pStride * w));
		lStride = bands * pStride * w;
	} else {
		lStride = pStride * w;
		$assign(bandOff, orderBands(this->bandOffsets, lStride * h));
	}
	int32_t base = 0;
	if (this->scanlineStride < 0) {
		base += lStride * h;
		lStride *= -1;
	}
	if (this->pixelStride < 0) {
		base += pStride * w;
		pStride *= -1;
	}
	for (int32_t i = 0; i < bands; ++i) {
		(*$nc(bandOff))[i] += base;
	}
	return $new(ComponentSampleModel, this->dataType, w, h, pStride, lStride, this->bankIndices, bandOff);
}

$SampleModel* ComponentSampleModel::createSubsetSampleModel($ints* bands) {
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
	return $new(ComponentSampleModel, this->dataType, this->width, this->height, this->pixelStride, this->scanlineStride, newBankIndices, newBandOffsets);
}

$DataBuffer* ComponentSampleModel::createDataBuffer() {
	$var($DataBuffer, dataBuffer, nullptr);
	int32_t size = getBufferSize();
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
	}
	return dataBuffer;
}

int32_t ComponentSampleModel::getOffset(int32_t x, int32_t y) {
	int32_t offset = y * this->scanlineStride + x * this->pixelStride + $nc(this->bandOffsets)->get(0);
	return offset;
}

int32_t ComponentSampleModel::getOffset(int32_t x, int32_t y, int32_t b) {
	int32_t offset = y * this->scanlineStride + x * this->pixelStride + $nc(this->bandOffsets)->get(b);
	return offset;
}

$ints* ComponentSampleModel::getSampleSize() {
	$var($ints, sampleSize, $new($ints, this->numBands));
	int32_t sizeInBits = getSampleSize(0);
	for (int32_t i = 0; i < this->numBands; ++i) {
		sampleSize->set(i, sizeInBits);
	}
	return sampleSize;
}

int32_t ComponentSampleModel::getSampleSize(int32_t band) {
	return $DataBuffer::getDataTypeSize(this->dataType);
}

$ints* ComponentSampleModel::getBankIndices() {
	return $cast($ints, $nc(this->bankIndices)->clone());
}

$ints* ComponentSampleModel::getBandOffsets() {
	return $cast($ints, $nc(this->bandOffsets)->clone());
}

int32_t ComponentSampleModel::getScanlineStride() {
	return this->scanlineStride;
}

int32_t ComponentSampleModel::getPixelStride() {
	return this->pixelStride;
}

int32_t ComponentSampleModel::getNumDataElements() {
	return getNumBands();
}

$Object* ComponentSampleModel::getDataElements(int32_t x, int32_t y, Object$* obj$renamed, $DataBuffer* data) {
	$useLocalCurrentObjectStackCache();
	$var($Object, obj, obj$renamed);
	if ((x < 0) || (y < 0) || (x >= this->width) || (y >= this->height)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	int32_t type = getTransferType();
	int32_t numDataElems = getNumDataElements();
	int32_t pixelOffset = y * this->scanlineStride + x * this->pixelStride;
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

$ints* ComponentSampleModel::getPixel(int32_t x, int32_t y, $ints* iArray, $DataBuffer* data) {
	if ((x < 0) || (y < 0) || (x >= this->width) || (y >= this->height)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	$var($ints, pixels, nullptr);
	if (iArray != nullptr) {
		$assign(pixels, iArray);
	} else {
		$assign(pixels, $new($ints, this->numBands));
	}
	int32_t pixelOffset = y * this->scanlineStride + x * this->pixelStride;
	for (int32_t i = 0; i < this->numBands; ++i) {
		$nc(pixels)->set(i, $nc(data)->getElem($nc(this->bankIndices)->get(i), pixelOffset + $nc(this->bandOffsets)->get(i)));
	}
	return pixels;
}

$ints* ComponentSampleModel::getPixels(int32_t x, int32_t y, int32_t w, int32_t h, $ints* iArray, $DataBuffer* data) {
	int32_t x1 = x + w;
	int32_t y1 = y + h;
	if (x < 0 || x >= this->width || w > this->width || x1 < 0 || x1 > this->width || y < 0 || y >= this->height || y > this->height || y1 < 0 || y1 > this->height) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	$var($ints, pixels, nullptr);
	if (iArray != nullptr) {
		$assign(pixels, iArray);
	} else {
		$assign(pixels, $new($ints, w * h * this->numBands));
	}
	int32_t lineOffset = y * this->scanlineStride + x * this->pixelStride;
	int32_t srcOffset = 0;
	for (int32_t i = 0; i < h; ++i) {
		int32_t pixelOffset = lineOffset;
		for (int32_t j = 0; j < w; ++j) {
			for (int32_t k = 0; k < this->numBands; ++k) {
				$nc(pixels)->set(srcOffset++, $nc(data)->getElem($nc(this->bankIndices)->get(k), pixelOffset + $nc(this->bandOffsets)->get(k)));
			}
			pixelOffset += this->pixelStride;
		}
		lineOffset += this->scanlineStride;
	}
	return pixels;
}

int32_t ComponentSampleModel::getSample(int32_t x, int32_t y, int32_t b, $DataBuffer* data) {
	if ((x < 0) || (y < 0) || (x >= this->width) || (y >= this->height)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	int32_t sample = $nc(data)->getElem($nc(this->bankIndices)->get(b), y * this->scanlineStride + x * this->pixelStride + $nc(this->bandOffsets)->get(b));
	return sample;
}

float ComponentSampleModel::getSampleFloat(int32_t x, int32_t y, int32_t b, $DataBuffer* data) {
	if ((x < 0) || (y < 0) || (x >= this->width) || (y >= this->height)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	float sample = $nc(data)->getElemFloat($nc(this->bankIndices)->get(b), y * this->scanlineStride + x * this->pixelStride + $nc(this->bandOffsets)->get(b));
	return sample;
}

double ComponentSampleModel::getSampleDouble(int32_t x, int32_t y, int32_t b, $DataBuffer* data) {
	if ((x < 0) || (y < 0) || (x >= this->width) || (y >= this->height)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	double sample = $nc(data)->getElemDouble($nc(this->bankIndices)->get(b), y * this->scanlineStride + x * this->pixelStride + $nc(this->bandOffsets)->get(b));
	return sample;
}

$ints* ComponentSampleModel::getSamples(int32_t x, int32_t y, int32_t w, int32_t h, int32_t b, $ints* iArray, $DataBuffer* data) {
	if ((x < 0) || (y < 0) || (x + w > this->width) || (y + h > this->height)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	$var($ints, samples, nullptr);
	if (iArray != nullptr) {
		$assign(samples, iArray);
	} else {
		$assign(samples, $new($ints, w * h));
	}
	int32_t lineOffset = y * this->scanlineStride + x * this->pixelStride + $nc(this->bandOffsets)->get(b);
	int32_t srcOffset = 0;
	for (int32_t i = 0; i < h; ++i) {
		int32_t sampleOffset = lineOffset;
		for (int32_t j = 0; j < w; ++j) {
			$nc(samples)->set(srcOffset++, $nc(data)->getElem($nc(this->bankIndices)->get(b), sampleOffset));
			sampleOffset += this->pixelStride;
		}
		lineOffset += this->scanlineStride;
	}
	return samples;
}

void ComponentSampleModel::setDataElements(int32_t x, int32_t y, Object$* obj, $DataBuffer* data) {
	$useLocalCurrentObjectStackCache();
	if ((x < 0) || (y < 0) || (x >= this->width) || (y >= this->height)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	int32_t type = getTransferType();
	int32_t numDataElems = getNumDataElements();
	int32_t pixelOffset = y * this->scanlineStride + x * this->pixelStride;
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
					$nc(data)->setElem($nc(this->bankIndices)->get(i), pixelOffset + $nc(this->bandOffsets)->get(i), (int32_t)(((int32_t)$nc(barray)->get(i)) & (uint32_t)255));
				}
				break;
			}
		case $DataBuffer::TYPE_USHORT:
			{}
		case $DataBuffer::TYPE_SHORT:
			{
				$assign(sarray, $cast($shorts, obj));
				for (int32_t i = 0; i < numDataElems; ++i) {
					$nc(data)->setElem($nc(this->bankIndices)->get(i), pixelOffset + $nc(this->bandOffsets)->get(i), (int32_t)(((int32_t)$nc(sarray)->get(i)) & (uint32_t)0x0000FFFF));
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

void ComponentSampleModel::setPixel(int32_t x, int32_t y, $ints* iArray, $DataBuffer* data) {
	if ((x < 0) || (y < 0) || (x >= this->width) || (y >= this->height)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	int32_t pixelOffset = y * this->scanlineStride + x * this->pixelStride;
	for (int32_t i = 0; i < this->numBands; ++i) {
		$nc(data)->setElem($nc(this->bankIndices)->get(i), pixelOffset + $nc(this->bandOffsets)->get(i), $nc(iArray)->get(i));
	}
}

void ComponentSampleModel::setPixels(int32_t x, int32_t y, int32_t w, int32_t h, $ints* iArray, $DataBuffer* data) {
	int32_t x1 = x + w;
	int32_t y1 = y + h;
	if (x < 0 || x >= this->width || w > this->width || x1 < 0 || x1 > this->width || y < 0 || y >= this->height || h > this->height || y1 < 0 || y1 > this->height) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	int32_t lineOffset = y * this->scanlineStride + x * this->pixelStride;
	int32_t srcOffset = 0;
	for (int32_t i = 0; i < h; ++i) {
		int32_t pixelOffset = lineOffset;
		for (int32_t j = 0; j < w; ++j) {
			for (int32_t k = 0; k < this->numBands; ++k) {
				$nc(data)->setElem($nc(this->bankIndices)->get(k), pixelOffset + $nc(this->bandOffsets)->get(k), $nc(iArray)->get(srcOffset++));
			}
			pixelOffset += this->pixelStride;
		}
		lineOffset += this->scanlineStride;
	}
}

void ComponentSampleModel::setSample(int32_t x, int32_t y, int32_t b, int32_t s, $DataBuffer* data) {
	if ((x < 0) || (y < 0) || (x >= this->width) || (y >= this->height)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	$nc(data)->setElem($nc(this->bankIndices)->get(b), y * this->scanlineStride + x * this->pixelStride + $nc(this->bandOffsets)->get(b), s);
}

void ComponentSampleModel::setSample(int32_t x, int32_t y, int32_t b, float s, $DataBuffer* data) {
	if ((x < 0) || (y < 0) || (x >= this->width) || (y >= this->height)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	$nc(data)->setElemFloat($nc(this->bankIndices)->get(b), y * this->scanlineStride + x * this->pixelStride + $nc(this->bandOffsets)->get(b), s);
}

void ComponentSampleModel::setSample(int32_t x, int32_t y, int32_t b, double s, $DataBuffer* data) {
	if ((x < 0) || (y < 0) || (x >= this->width) || (y >= this->height)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	$nc(data)->setElemDouble($nc(this->bankIndices)->get(b), y * this->scanlineStride + x * this->pixelStride + $nc(this->bandOffsets)->get(b), s);
}

void ComponentSampleModel::setSamples(int32_t x, int32_t y, int32_t w, int32_t h, int32_t b, $ints* iArray, $DataBuffer* data) {
	if ((x < 0) || (y < 0) || (x + w > this->width) || (y + h > this->height)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	int32_t lineOffset = y * this->scanlineStride + x * this->pixelStride + $nc(this->bandOffsets)->get(b);
	int32_t srcOffset = 0;
	for (int32_t i = 0; i < h; ++i) {
		int32_t sampleOffset = lineOffset;
		for (int32_t j = 0; j < w; ++j) {
			$nc(data)->setElem($nc(this->bankIndices)->get(b), sampleOffset, $nc(iArray)->get(srcOffset++));
			sampleOffset += this->pixelStride;
		}
		lineOffset += this->scanlineStride;
	}
}

bool ComponentSampleModel::equals(Object$* o) {
	if ((o == nullptr) || !($instanceOf(ComponentSampleModel, o))) {
		return false;
	}
	$var(ComponentSampleModel, that, $cast(ComponentSampleModel, o));
	bool var$0 = this->width == $nc(that)->width && this->height == that->height && this->numBands == that->numBands && this->dataType == that->dataType && $Arrays::equals(this->bandOffsets, that->bandOffsets);
	return var$0 && $Arrays::equals(this->bankIndices, that->bankIndices) && this->numBanks == that->numBanks && this->scanlineStride == that->scanlineStride && this->pixelStride == that->pixelStride;
}

int32_t ComponentSampleModel::hashCode() {
	int32_t hash = 0;
	hash = this->width;
	hash <<= 8;
	hash ^= this->height;
	hash <<= 8;
	hash ^= this->numBands;
	hash <<= 8;
	hash ^= this->dataType;
	hash <<= 8;
	for (int32_t i = 0; i < $nc(this->bandOffsets)->length; ++i) {
		hash ^= $nc(this->bandOffsets)->get(i);
		hash <<= 8;
	}
	for (int32_t i = 0; i < $nc(this->bankIndices)->length; ++i) {
		hash ^= $nc(this->bankIndices)->get(i);
		hash <<= 8;
	}
	hash ^= this->numBanks;
	hash <<= 8;
	hash ^= this->scanlineStride;
	hash <<= 8;
	hash ^= this->pixelStride;
	return hash;
}

ComponentSampleModel::ComponentSampleModel() {
}

$Class* ComponentSampleModel::load$($String* name, bool initialize) {
	$loadClass(ComponentSampleModel, name, initialize, &_ComponentSampleModel_ClassInfo_, allocate$ComponentSampleModel);
	return class$;
}

$Class* ComponentSampleModel::class$ = nullptr;

		} // image
	} // awt
} // java