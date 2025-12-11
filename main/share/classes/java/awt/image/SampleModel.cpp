#include <java/awt/image/SampleModel.h>

#include <java/awt/image/ColorModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef TYPE_BYTE
#undef TYPE_DOUBLE
#undef TYPE_FLOAT
#undef TYPE_INT
#undef TYPE_SHORT
#undef TYPE_UNDEFINED
#undef TYPE_USHORT

using $ColorModel = ::java::awt::image::ColorModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace image {

$FieldInfo _SampleModel_FieldInfo_[] = {
	{"width", "I", nullptr, $PROTECTED, $field(SampleModel, width)},
	{"height", "I", nullptr, $PROTECTED, $field(SampleModel, height)},
	{"numBands", "I", nullptr, $PROTECTED, $field(SampleModel, numBands)},
	{"dataType", "I", nullptr, $PROTECTED, $field(SampleModel, dataType)},
	{}
};

$MethodInfo _SampleModel_MethodInfo_[] = {
	{"<init>", "(IIII)V", nullptr, $PUBLIC, $method(static_cast<void(SampleModel::*)(int32_t,int32_t,int32_t,int32_t)>(&SampleModel::init$))},
	{"createCompatibleSampleModel", "(II)Ljava/awt/image/SampleModel;", nullptr, $PUBLIC | $ABSTRACT},
	{"createDataBuffer", "()Ljava/awt/image/DataBuffer;", nullptr, $PUBLIC | $ABSTRACT},
	{"createSubsetSampleModel", "([I)Ljava/awt/image/SampleModel;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDataElements", "(IILjava/lang/Object;Ljava/awt/image/DataBuffer;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDataElements", "(IIIILjava/lang/Object;Ljava/awt/image/DataBuffer;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getDataType", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(SampleModel::*)()>(&SampleModel::getDataType))},
	{"getHeight", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(SampleModel::*)()>(&SampleModel::getHeight))},
	{"getNumBands", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(SampleModel::*)()>(&SampleModel::getNumBands))},
	{"getNumDataElements", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getPixel", "(II[ILjava/awt/image/DataBuffer;)[I", nullptr, $PUBLIC},
	{"getPixel", "(II[FLjava/awt/image/DataBuffer;)[F", nullptr, $PUBLIC},
	{"getPixel", "(II[DLjava/awt/image/DataBuffer;)[D", nullptr, $PUBLIC},
	{"getPixels", "(IIII[ILjava/awt/image/DataBuffer;)[I", nullptr, $PUBLIC},
	{"getPixels", "(IIII[FLjava/awt/image/DataBuffer;)[F", nullptr, $PUBLIC},
	{"getPixels", "(IIII[DLjava/awt/image/DataBuffer;)[D", nullptr, $PUBLIC},
	{"getSample", "(IIILjava/awt/image/DataBuffer;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getSampleDouble", "(IIILjava/awt/image/DataBuffer;)D", nullptr, $PUBLIC},
	{"getSampleFloat", "(IIILjava/awt/image/DataBuffer;)F", nullptr, $PUBLIC},
	{"getSampleSize", "()[I", nullptr, $PUBLIC | $ABSTRACT},
	{"getSampleSize", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getSamples", "(IIIII[ILjava/awt/image/DataBuffer;)[I", nullptr, $PUBLIC},
	{"getSamples", "(IIIII[FLjava/awt/image/DataBuffer;)[F", nullptr, $PUBLIC},
	{"getSamples", "(IIIII[DLjava/awt/image/DataBuffer;)[D", nullptr, $PUBLIC},
	{"getTransferType", "()I", nullptr, $PUBLIC},
	{"getWidth", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(SampleModel::*)()>(&SampleModel::getWidth))},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&SampleModel::initIDs))},
	{"setDataElements", "(IILjava/lang/Object;Ljava/awt/image/DataBuffer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setDataElements", "(IIIILjava/lang/Object;Ljava/awt/image/DataBuffer;)V", nullptr, $PUBLIC},
	{"setPixel", "(II[ILjava/awt/image/DataBuffer;)V", nullptr, $PUBLIC},
	{"setPixel", "(II[FLjava/awt/image/DataBuffer;)V", nullptr, $PUBLIC},
	{"setPixel", "(II[DLjava/awt/image/DataBuffer;)V", nullptr, $PUBLIC},
	{"setPixels", "(IIII[ILjava/awt/image/DataBuffer;)V", nullptr, $PUBLIC},
	{"setPixels", "(IIII[FLjava/awt/image/DataBuffer;)V", nullptr, $PUBLIC},
	{"setPixels", "(IIII[DLjava/awt/image/DataBuffer;)V", nullptr, $PUBLIC},
	{"setSample", "(IIIILjava/awt/image/DataBuffer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setSample", "(IIIFLjava/awt/image/DataBuffer;)V", nullptr, $PUBLIC},
	{"setSample", "(IIIDLjava/awt/image/DataBuffer;)V", nullptr, $PUBLIC},
	{"setSamples", "(IIIII[ILjava/awt/image/DataBuffer;)V", nullptr, $PUBLIC},
	{"setSamples", "(IIIII[FLjava/awt/image/DataBuffer;)V", nullptr, $PUBLIC},
	{"setSamples", "(IIIII[DLjava/awt/image/DataBuffer;)V", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_initIDs 26

$ClassInfo _SampleModel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.image.SampleModel",
	"java.lang.Object",
	nullptr,
	_SampleModel_FieldInfo_,
	_SampleModel_MethodInfo_
};

$Object* allocate$SampleModel($Class* clazz) {
	return $of($alloc(SampleModel));
}

void SampleModel::initIDs() {
	$init(SampleModel);
	$prepareNativeStatic(SampleModel, initIDs, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void SampleModel::init$(int32_t dataType, int32_t w, int32_t h, int32_t numBands) {
	$useLocalCurrentObjectStackCache();
	int64_t size = (int64_t)w * h;
	if (w <= 0 || h <= 0) {
		$throwNew($IllegalArgumentException, $$str({"Width ("_s, $$str(w), ") and height ("_s, $$str(h), ") must be > 0"_s}));
	}
	if (size > $Integer::MAX_VALUE) {
		$throwNew($IllegalArgumentException, $$str({"Dimensions (width="_s, $$str(w), " height="_s, $$str(h), ") are too large"_s}));
	}
	if (dataType < $DataBuffer::TYPE_BYTE || (dataType > $DataBuffer::TYPE_DOUBLE && dataType != $DataBuffer::TYPE_UNDEFINED)) {
		$throwNew($IllegalArgumentException, $$str({"Unsupported dataType: "_s, $$str(dataType)}));
	}
	if (numBands <= 0) {
		$throwNew($IllegalArgumentException, "Number of bands must be > 0"_s);
	}
	this->dataType = dataType;
	this->width = w;
	this->height = h;
	this->numBands = numBands;
}

int32_t SampleModel::getWidth() {
	return this->width;
}

int32_t SampleModel::getHeight() {
	return this->height;
}

int32_t SampleModel::getNumBands() {
	return this->numBands;
}

int32_t SampleModel::getDataType() {
	return this->dataType;
}

int32_t SampleModel::getTransferType() {
	return this->dataType;
}

$ints* SampleModel::getPixel(int32_t x, int32_t y, $ints* iArray, $DataBuffer* data) {
	$var($ints, pixels, nullptr);
	if (iArray != nullptr) {
		$assign(pixels, iArray);
	} else {
		$assign(pixels, $new($ints, this->numBands));
	}
	for (int32_t i = 0; i < this->numBands; ++i) {
		$nc(pixels)->set(i, getSample(x, y, i, data));
	}
	return pixels;
}

$Object* SampleModel::getDataElements(int32_t x, int32_t y, int32_t w, int32_t h, Object$* obj$renamed, $DataBuffer* data) {
	$useLocalCurrentObjectStackCache();
	$var($Object, obj, obj$renamed);
	int32_t type = getTransferType();
	int32_t numDataElems = getNumDataElements();
	int32_t cnt = 0;
	$var($Object, o, nullptr);
	int32_t x1 = x + w;
	int32_t y1 = y + h;
	if (x < 0 || x >= this->width || w > this->width || x1 < 0 || x1 > this->width || y < 0 || y >= this->height || h > this->height || y1 < 0 || y1 > this->height) {
		$throwNew($ArrayIndexOutOfBoundsException, "Invalid coordinates."_s);
	}
	{
		$var($bytes, btemp, nullptr)
		$var($bytes, bdata, nullptr)
		$var($shorts, sdata, nullptr)
		$var($shorts, stemp, nullptr)
		$var($ints, idata, nullptr)
		$var($ints, itemp, nullptr)
		$var($floats, fdata, nullptr)
		$var($floats, ftemp, nullptr)
		$var($doubles, ddata, nullptr)
		$var($doubles, dtemp, nullptr)
		switch (type) {
		case $DataBuffer::TYPE_BYTE:
			{
				if (obj == nullptr) {
					$assign(bdata, $new($bytes, numDataElems * w * h));
				} else {
					$assign(bdata, $cast($bytes, obj));
				}
				for (int32_t i = y; i < y1; ++i) {
					for (int32_t j = x; j < x1; ++j) {
						$assign(o, getDataElements(j, i, o, data));
						$assign(btemp, $cast($bytes, o));
						for (int32_t k = 0; k < numDataElems; ++k) {
							$nc(bdata)->set(cnt++, $nc(btemp)->get(k));
						}
					}
				}
				$assign(obj, $of(bdata));
				break;
			}
		case $DataBuffer::TYPE_USHORT:
			{}
		case $DataBuffer::TYPE_SHORT:
			{
				if (obj == nullptr) {
					$assign(sdata, $new($shorts, numDataElems * w * h));
				} else {
					$assign(sdata, $cast($shorts, obj));
				}
				for (int32_t i = y; i < y1; ++i) {
					for (int32_t j = x; j < x1; ++j) {
						$assign(o, getDataElements(j, i, o, data));
						$assign(stemp, $cast($shorts, o));
						for (int32_t k = 0; k < numDataElems; ++k) {
							$nc(sdata)->set(cnt++, $nc(stemp)->get(k));
						}
					}
				}
				$assign(obj, $of(sdata));
				break;
			}
		case $DataBuffer::TYPE_INT:
			{
				if (obj == nullptr) {
					$assign(idata, $new($ints, numDataElems * w * h));
				} else {
					$assign(idata, $cast($ints, obj));
				}
				for (int32_t i = y; i < y1; ++i) {
					for (int32_t j = x; j < x1; ++j) {
						$assign(o, getDataElements(j, i, o, data));
						$assign(itemp, $cast($ints, o));
						for (int32_t k = 0; k < numDataElems; ++k) {
							$nc(idata)->set(cnt++, $nc(itemp)->get(k));
						}
					}
				}
				$assign(obj, $of(idata));
				break;
			}
		case $DataBuffer::TYPE_FLOAT:
			{
				if (obj == nullptr) {
					$assign(fdata, $new($floats, numDataElems * w * h));
				} else {
					$assign(fdata, $cast($floats, obj));
				}
				for (int32_t i = y; i < y1; ++i) {
					for (int32_t j = x; j < x1; ++j) {
						$assign(o, getDataElements(j, i, o, data));
						$assign(ftemp, $cast($floats, o));
						for (int32_t k = 0; k < numDataElems; ++k) {
							$nc(fdata)->set(cnt++, $nc(ftemp)->get(k));
						}
					}
				}
				$assign(obj, $of(fdata));
				break;
			}
		case $DataBuffer::TYPE_DOUBLE:
			{
				if (obj == nullptr) {
					$assign(ddata, $new($doubles, numDataElems * w * h));
				} else {
					$assign(ddata, $cast($doubles, obj));
				}
				for (int32_t i = y; i < y1; ++i) {
					for (int32_t j = x; j < x1; ++j) {
						$assign(o, getDataElements(j, i, o, data));
						$assign(dtemp, $cast($doubles, o));
						for (int32_t k = 0; k < numDataElems; ++k) {
							$nc(ddata)->set(cnt++, $nc(dtemp)->get(k));
						}
					}
				}
				$assign(obj, $of(ddata));
				break;
			}
		}
	}
	return $of(obj);
}

void SampleModel::setDataElements(int32_t x, int32_t y, int32_t w, int32_t h, Object$* obj, $DataBuffer* data) {
	$useLocalCurrentObjectStackCache();
	int32_t cnt = 0;
	$var($Object, o, nullptr);
	int32_t type = getTransferType();
	int32_t numDataElems = getNumDataElements();
	int32_t x1 = x + w;
	int32_t y1 = y + h;
	if (x < 0 || x >= this->width || w > this->width || x1 < 0 || x1 > this->width || y < 0 || y >= this->height || h > this->height || y1 < 0 || y1 > this->height) {
		$throwNew($ArrayIndexOutOfBoundsException, "Invalid coordinates."_s);
	}
	{
		$var($bytes, barray, nullptr)
		$var($bytes, btemp, nullptr)
		$var($shorts, sarray, nullptr)
		$var($shorts, stemp, nullptr)
		$var($ints, iArray, nullptr)
		$var($ints, itemp, nullptr)
		$var($floats, fArray, nullptr)
		$var($floats, ftemp, nullptr)
		$var($doubles, dArray, nullptr)
		$var($doubles, dtemp, nullptr)
		switch (type) {
		case $DataBuffer::TYPE_BYTE:
			{
				$assign(barray, $cast($bytes, obj));
				$assign(btemp, $new($bytes, numDataElems));
				for (int32_t i = y; i < y1; ++i) {
					for (int32_t j = x; j < x1; ++j) {
						for (int32_t k = 0; k < numDataElems; ++k) {
							$nc(btemp)->set(k, $nc(barray)->get(cnt++));
						}
						setDataElements(j, i, btemp, data);
					}
				}
				break;
			}
		case $DataBuffer::TYPE_USHORT:
			{}
		case $DataBuffer::TYPE_SHORT:
			{
				$assign(sarray, $cast($shorts, obj));
				$assign(stemp, $new($shorts, numDataElems));
				for (int32_t i = y; i < y1; ++i) {
					for (int32_t j = x; j < x1; ++j) {
						for (int32_t k = 0; k < numDataElems; ++k) {
							$nc(stemp)->set(k, $nc(sarray)->get(cnt++));
						}
						setDataElements(j, i, stemp, data);
					}
				}
				break;
			}
		case $DataBuffer::TYPE_INT:
			{
				$assign(iArray, $cast($ints, obj));
				$assign(itemp, $new($ints, numDataElems));
				for (int32_t i = y; i < y1; ++i) {
					for (int32_t j = x; j < x1; ++j) {
						for (int32_t k = 0; k < numDataElems; ++k) {
							$nc(itemp)->set(k, $nc(iArray)->get(cnt++));
						}
						setDataElements(j, i, itemp, data);
					}
				}
				break;
			}
		case $DataBuffer::TYPE_FLOAT:
			{
				$assign(fArray, $cast($floats, obj));
				$assign(ftemp, $new($floats, numDataElems));
				for (int32_t i = y; i < y1; ++i) {
					for (int32_t j = x; j < x1; ++j) {
						for (int32_t k = 0; k < numDataElems; ++k) {
							$nc(ftemp)->set(k, $nc(fArray)->get(cnt++));
						}
						setDataElements(j, i, ftemp, data);
					}
				}
				break;
			}
		case $DataBuffer::TYPE_DOUBLE:
			{
				$assign(dArray, $cast($doubles, obj));
				$assign(dtemp, $new($doubles, numDataElems));
				for (int32_t i = y; i < y1; ++i) {
					for (int32_t j = x; j < x1; ++j) {
						for (int32_t k = 0; k < numDataElems; ++k) {
							$nc(dtemp)->set(k, $nc(dArray)->get(cnt++));
						}
						setDataElements(j, i, dtemp, data);
					}
				}
				break;
			}
		}
	}
}

$floats* SampleModel::getPixel(int32_t x, int32_t y, $floats* fArray, $DataBuffer* data) {
	$var($floats, pixels, nullptr);
	if (fArray != nullptr) {
		$assign(pixels, fArray);
	} else {
		$assign(pixels, $new($floats, this->numBands));
	}
	for (int32_t i = 0; i < this->numBands; ++i) {
		$nc(pixels)->set(i, getSampleFloat(x, y, i, data));
	}
	return pixels;
}

$doubles* SampleModel::getPixel(int32_t x, int32_t y, $doubles* dArray, $DataBuffer* data) {
	$var($doubles, pixels, nullptr);
	if (dArray != nullptr) {
		$assign(pixels, dArray);
	} else {
		$assign(pixels, $new($doubles, this->numBands));
	}
	for (int32_t i = 0; i < this->numBands; ++i) {
		$nc(pixels)->set(i, getSampleDouble(x, y, i, data));
	}
	return pixels;
}

$ints* SampleModel::getPixels(int32_t x, int32_t y, int32_t w, int32_t h, $ints* iArray, $DataBuffer* data) {
	$var($ints, pixels, nullptr);
	int32_t Offset = 0;
	int32_t x1 = x + w;
	int32_t y1 = y + h;
	if (x < 0 || x >= this->width || w > this->width || x1 < 0 || x1 > this->width || y < 0 || y >= this->height || h > this->height || y1 < 0 || y1 > this->height) {
		$throwNew($ArrayIndexOutOfBoundsException, "Invalid coordinates."_s);
	}
	if (iArray != nullptr) {
		$assign(pixels, iArray);
	} else {
		$assign(pixels, $new($ints, this->numBands * w * h));
	}
	for (int32_t i = y; i < y1; ++i) {
		for (int32_t j = x; j < x1; ++j) {
			for (int32_t k = 0; k < this->numBands; ++k) {
				$nc(pixels)->set(Offset++, getSample(j, i, k, data));
			}
		}
	}
	return pixels;
}

$floats* SampleModel::getPixels(int32_t x, int32_t y, int32_t w, int32_t h, $floats* fArray, $DataBuffer* data) {
	$var($floats, pixels, nullptr);
	int32_t Offset = 0;
	int32_t x1 = x + w;
	int32_t y1 = y + h;
	if (x < 0 || x >= this->width || w > this->width || x1 < 0 || x1 > this->width || y < 0 || y >= this->height || h > this->height || y1 < 0 || y1 > this->height) {
		$throwNew($ArrayIndexOutOfBoundsException, "Invalid coordinates."_s);
	}
	if (fArray != nullptr) {
		$assign(pixels, fArray);
	} else {
		$assign(pixels, $new($floats, this->numBands * w * h));
	}
	for (int32_t i = y; i < y1; ++i) {
		for (int32_t j = x; j < x1; ++j) {
			for (int32_t k = 0; k < this->numBands; ++k) {
				$nc(pixels)->set(Offset++, getSampleFloat(j, i, k, data));
			}
		}
	}
	return pixels;
}

$doubles* SampleModel::getPixels(int32_t x, int32_t y, int32_t w, int32_t h, $doubles* dArray, $DataBuffer* data) {
	$var($doubles, pixels, nullptr);
	int32_t Offset = 0;
	int32_t x1 = x + w;
	int32_t y1 = y + h;
	if (x < 0 || x >= this->width || w > this->width || x1 < 0 || x1 > this->width || y < 0 || y >= this->height || h > this->height || y1 < 0 || y1 > this->height) {
		$throwNew($ArrayIndexOutOfBoundsException, "Invalid coordinates."_s);
	}
	if (dArray != nullptr) {
		$assign(pixels, dArray);
	} else {
		$assign(pixels, $new($doubles, this->numBands * w * h));
	}
	for (int32_t i = y; i < y1; ++i) {
		for (int32_t j = x; j < x1; ++j) {
			for (int32_t k = 0; k < this->numBands; ++k) {
				$nc(pixels)->set(Offset++, getSampleDouble(j, i, k, data));
			}
		}
	}
	return pixels;
}

float SampleModel::getSampleFloat(int32_t x, int32_t y, int32_t b, $DataBuffer* data) {
	float sample = 0.0;
	sample = (float)getSample(x, y, b, data);
	return sample;
}

double SampleModel::getSampleDouble(int32_t x, int32_t y, int32_t b, $DataBuffer* data) {
	double sample = 0.0;
	sample = (double)getSample(x, y, b, data);
	return sample;
}

$ints* SampleModel::getSamples(int32_t x, int32_t y, int32_t w, int32_t h, int32_t b, $ints* iArray, $DataBuffer* data) {
	$var($ints, pixels, nullptr);
	int32_t Offset = 0;
	int32_t x1 = x + w;
	int32_t y1 = y + h;
	if (x < 0 || x1 < x || x1 > this->width || y < 0 || y1 < y || y1 > this->height) {
		$throwNew($ArrayIndexOutOfBoundsException, "Invalid coordinates."_s);
	}
	if (iArray != nullptr) {
		$assign(pixels, iArray);
	} else {
		$assign(pixels, $new($ints, w * h));
	}
	for (int32_t i = y; i < y1; ++i) {
		for (int32_t j = x; j < x1; ++j) {
			$nc(pixels)->set(Offset++, getSample(j, i, b, data));
		}
	}
	return pixels;
}

$floats* SampleModel::getSamples(int32_t x, int32_t y, int32_t w, int32_t h, int32_t b, $floats* fArray, $DataBuffer* data) {
	$var($floats, pixels, nullptr);
	int32_t Offset = 0;
	int32_t x1 = x + w;
	int32_t y1 = y + h;
	if (x < 0 || x1 < x || x1 > this->width || y < 0 || y1 < y || y1 > this->height) {
		$throwNew($ArrayIndexOutOfBoundsException, "Invalid coordinates"_s);
	}
	if (fArray != nullptr) {
		$assign(pixels, fArray);
	} else {
		$assign(pixels, $new($floats, w * h));
	}
	for (int32_t i = y; i < y1; ++i) {
		for (int32_t j = x; j < x1; ++j) {
			$nc(pixels)->set(Offset++, getSampleFloat(j, i, b, data));
		}
	}
	return pixels;
}

$doubles* SampleModel::getSamples(int32_t x, int32_t y, int32_t w, int32_t h, int32_t b, $doubles* dArray, $DataBuffer* data) {
	$var($doubles, pixels, nullptr);
	int32_t Offset = 0;
	int32_t x1 = x + w;
	int32_t y1 = y + h;
	if (x < 0 || x1 < x || x1 > this->width || y < 0 || y1 < y || y1 > this->height) {
		$throwNew($ArrayIndexOutOfBoundsException, "Invalid coordinates"_s);
	}
	if (dArray != nullptr) {
		$assign(pixels, dArray);
	} else {
		$assign(pixels, $new($doubles, w * h));
	}
	for (int32_t i = y; i < y1; ++i) {
		for (int32_t j = x; j < x1; ++j) {
			$nc(pixels)->set(Offset++, getSampleDouble(j, i, b, data));
		}
	}
	return pixels;
}

void SampleModel::setPixel(int32_t x, int32_t y, $ints* iArray, $DataBuffer* data) {
	for (int32_t i = 0; i < this->numBands; ++i) {
		setSample(x, y, i, $nc(iArray)->get(i), data);
	}
}

void SampleModel::setPixel(int32_t x, int32_t y, $floats* fArray, $DataBuffer* data) {
	for (int32_t i = 0; i < this->numBands; ++i) {
		setSample(x, y, i, $nc(fArray)->get(i), data);
	}
}

void SampleModel::setPixel(int32_t x, int32_t y, $doubles* dArray, $DataBuffer* data) {
	for (int32_t i = 0; i < this->numBands; ++i) {
		setSample(x, y, i, $nc(dArray)->get(i), data);
	}
}

void SampleModel::setPixels(int32_t x, int32_t y, int32_t w, int32_t h, $ints* iArray, $DataBuffer* data) {
	int32_t Offset = 0;
	int32_t x1 = x + w;
	int32_t y1 = y + h;
	if (x < 0 || x >= this->width || w > this->width || x1 < 0 || x1 > this->width || y < 0 || y >= this->height || h > this->height || y1 < 0 || y1 > this->height) {
		$throwNew($ArrayIndexOutOfBoundsException, "Invalid coordinates."_s);
	}
	for (int32_t i = y; i < y1; ++i) {
		for (int32_t j = x; j < x1; ++j) {
			for (int32_t k = 0; k < this->numBands; ++k) {
				setSample(j, i, k, $nc(iArray)->get(Offset++), data);
			}
		}
	}
}

void SampleModel::setPixels(int32_t x, int32_t y, int32_t w, int32_t h, $floats* fArray, $DataBuffer* data) {
	int32_t Offset = 0;
	int32_t x1 = x + w;
	int32_t y1 = y + h;
	if (x < 0 || x >= this->width || w > this->width || x1 < 0 || x1 > this->width || y < 0 || y >= this->height || h > this->height || y1 < 0 || y1 > this->height) {
		$throwNew($ArrayIndexOutOfBoundsException, "Invalid coordinates."_s);
	}
	for (int32_t i = y; i < y1; ++i) {
		for (int32_t j = x; j < x1; ++j) {
			for (int32_t k = 0; k < this->numBands; ++k) {
				setSample(j, i, k, $nc(fArray)->get(Offset++), data);
			}
		}
	}
}

void SampleModel::setPixels(int32_t x, int32_t y, int32_t w, int32_t h, $doubles* dArray, $DataBuffer* data) {
	int32_t Offset = 0;
	int32_t x1 = x + w;
	int32_t y1 = y + h;
	if (x < 0 || x >= this->width || w > this->width || x1 < 0 || x1 > this->width || y < 0 || y >= this->height || h > this->height || y1 < 0 || y1 > this->height) {
		$throwNew($ArrayIndexOutOfBoundsException, "Invalid coordinates."_s);
	}
	for (int32_t i = y; i < y1; ++i) {
		for (int32_t j = x; j < x1; ++j) {
			for (int32_t k = 0; k < this->numBands; ++k) {
				setSample(j, i, k, $nc(dArray)->get(Offset++), data);
			}
		}
	}
}

void SampleModel::setSample(int32_t x, int32_t y, int32_t b, float s, $DataBuffer* data) {
	int32_t sample = $cast(int32_t, s);
	setSample(x, y, b, sample, data);
}

void SampleModel::setSample(int32_t x, int32_t y, int32_t b, double s, $DataBuffer* data) {
	int32_t sample = $cast(int32_t, s);
	setSample(x, y, b, sample, data);
}

void SampleModel::setSamples(int32_t x, int32_t y, int32_t w, int32_t h, int32_t b, $ints* iArray, $DataBuffer* data) {
	int32_t Offset = 0;
	int32_t x1 = x + w;
	int32_t y1 = y + h;
	if (x < 0 || x >= this->width || w > this->width || x1 < 0 || x1 > this->width || y < 0 || y >= this->height || h > this->height || y1 < 0 || y1 > this->height) {
		$throwNew($ArrayIndexOutOfBoundsException, "Invalid coordinates."_s);
	}
	for (int32_t i = y; i < y1; ++i) {
		for (int32_t j = x; j < x1; ++j) {
			setSample(j, i, b, $nc(iArray)->get(Offset++), data);
		}
	}
}

void SampleModel::setSamples(int32_t x, int32_t y, int32_t w, int32_t h, int32_t b, $floats* fArray, $DataBuffer* data) {
	int32_t Offset = 0;
	int32_t x1 = x + w;
	int32_t y1 = y + h;
	if (x < 0 || x >= this->width || w > this->width || x1 < 0 || x1 > this->width || y < 0 || y >= this->height || h > this->height || y1 < 0 || y1 > this->height) {
		$throwNew($ArrayIndexOutOfBoundsException, "Invalid coordinates."_s);
	}
	for (int32_t i = y; i < y1; ++i) {
		for (int32_t j = x; j < x1; ++j) {
			setSample(j, i, b, $nc(fArray)->get(Offset++), data);
		}
	}
}

void SampleModel::setSamples(int32_t x, int32_t y, int32_t w, int32_t h, int32_t b, $doubles* dArray, $DataBuffer* data) {
	int32_t Offset = 0;
	int32_t x1 = x + w;
	int32_t y1 = y + h;
	if (x < 0 || x >= this->width || w > this->width || x1 < 0 || x1 > this->width || y < 0 || y >= this->height || h > this->height || y1 < 0 || y1 > this->height) {
		$throwNew($ArrayIndexOutOfBoundsException, "Invalid coordinates."_s);
	}
	for (int32_t i = y; i < y1; ++i) {
		for (int32_t j = x; j < x1; ++j) {
			setSample(j, i, b, $nc(dArray)->get(Offset++), data);
		}
	}
}

void clinit$SampleModel($Class* class$) {
	{
		$ColorModel::loadLibraries();
		SampleModel::initIDs();
	}
}

SampleModel::SampleModel() {
}

$Class* SampleModel::load$($String* name, bool initialize) {
	$loadClass(SampleModel, name, initialize, &_SampleModel_ClassInfo_, clinit$SampleModel, allocate$SampleModel);
	return class$;
}

$Class* SampleModel::class$ = nullptr;

		} // image
	} // awt
} // java