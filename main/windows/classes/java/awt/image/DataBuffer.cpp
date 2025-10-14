#include <java/awt/image/DataBuffer.h>

#include <java/awt/image/DataBuffer$1.h>
#include <java/lang/Array.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/image/SunWritableRaster$DataStealer.h>
#include <sun/awt/image/SunWritableRaster.h>
#include <sun/java2d/StateTrackable$State.h>
#include <sun/java2d/StateTrackableDelegate.h>
#include <jcpp.h>

#undef TYPE_BYTE
#undef TYPE_DOUBLE
#undef TYPE_FLOAT
#undef TYPE_INT
#undef TYPE_SHORT
#undef TYPE_UNDEFINED
#undef TYPE_USHORT
#undef UNTRACKABLE

using $DataBuffer$1 = ::java::awt::image::DataBuffer$1;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunWritableRaster = ::sun::awt::image::SunWritableRaster;
using $SunWritableRaster$DataStealer = ::sun::awt::image::SunWritableRaster$DataStealer;
using $StateTrackable$State = ::sun::java2d::StateTrackable$State;
using $StateTrackableDelegate = ::sun::java2d::StateTrackableDelegate;

namespace java {
	namespace awt {
		namespace image {

$FieldInfo _DataBuffer_FieldInfo_[] = {
	{"TYPE_BYTE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DataBuffer, TYPE_BYTE)},
	{"TYPE_USHORT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DataBuffer, TYPE_USHORT)},
	{"TYPE_SHORT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DataBuffer, TYPE_SHORT)},
	{"TYPE_INT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DataBuffer, TYPE_INT)},
	{"TYPE_FLOAT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DataBuffer, TYPE_FLOAT)},
	{"TYPE_DOUBLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DataBuffer, TYPE_DOUBLE)},
	{"TYPE_UNDEFINED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DataBuffer, TYPE_UNDEFINED)},
	{"dataType", "I", nullptr, $PROTECTED, $field(DataBuffer, dataType)},
	{"banks", "I", nullptr, $PROTECTED, $field(DataBuffer, banks)},
	{"offset", "I", nullptr, $PROTECTED, $field(DataBuffer, offset)},
	{"size", "I", nullptr, $PROTECTED, $field(DataBuffer, size)},
	{"offsets", "[I", nullptr, $PROTECTED, $field(DataBuffer, offsets)},
	{"theTrackable", "Lsun/java2d/StateTrackableDelegate;", nullptr, 0, $field(DataBuffer, theTrackable)},
	{"dataTypeSize", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DataBuffer, dataTypeSize)},
	{}
};

$MethodInfo _DataBuffer_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, $PROTECTED, $method(static_cast<void(DataBuffer::*)(int32_t,int32_t)>(&DataBuffer::init$))},
	{"<init>", "(Lsun/java2d/StateTrackable$State;II)V", nullptr, 0, $method(static_cast<void(DataBuffer::*)($StateTrackable$State*,int32_t,int32_t)>(&DataBuffer::init$))},
	{"<init>", "(III)V", nullptr, $PROTECTED, $method(static_cast<void(DataBuffer::*)(int32_t,int32_t,int32_t)>(&DataBuffer::init$))},
	{"<init>", "(Lsun/java2d/StateTrackable$State;III)V", nullptr, 0, $method(static_cast<void(DataBuffer::*)($StateTrackable$State*,int32_t,int32_t,int32_t)>(&DataBuffer::init$))},
	{"<init>", "(IIII)V", nullptr, $PROTECTED, $method(static_cast<void(DataBuffer::*)(int32_t,int32_t,int32_t,int32_t)>(&DataBuffer::init$))},
	{"<init>", "(Lsun/java2d/StateTrackable$State;IIII)V", nullptr, 0, $method(static_cast<void(DataBuffer::*)($StateTrackable$State*,int32_t,int32_t,int32_t,int32_t)>(&DataBuffer::init$))},
	{"<init>", "(III[I)V", nullptr, $PROTECTED, $method(static_cast<void(DataBuffer::*)(int32_t,int32_t,int32_t,$ints*)>(&DataBuffer::init$))},
	{"<init>", "(Lsun/java2d/StateTrackable$State;III[I)V", nullptr, 0, $method(static_cast<void(DataBuffer::*)($StateTrackable$State*,int32_t,int32_t,int32_t,$ints*)>(&DataBuffer::init$))},
	{"getDataType", "()I", nullptr, $PUBLIC},
	{"getDataTypeSize", "(I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&DataBuffer::getDataTypeSize))},
	{"getElem", "(I)I", nullptr, $PUBLIC},
	{"getElem", "(II)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getElemDouble", "(I)D", nullptr, $PUBLIC},
	{"getElemDouble", "(II)D", nullptr, $PUBLIC},
	{"getElemFloat", "(I)F", nullptr, $PUBLIC},
	{"getElemFloat", "(II)F", nullptr, $PUBLIC},
	{"getNumBanks", "()I", nullptr, $PUBLIC},
	{"getOffset", "()I", nullptr, $PUBLIC},
	{"getOffsets", "()[I", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC},
	{"setElem", "(II)V", nullptr, $PUBLIC},
	{"setElem", "(III)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setElemDouble", "(ID)V", nullptr, $PUBLIC},
	{"setElemDouble", "(IID)V", nullptr, $PUBLIC},
	{"setElemFloat", "(IF)V", nullptr, $PUBLIC},
	{"setElemFloat", "(IIF)V", nullptr, $PUBLIC},
	{"toIntArray", "(Ljava/lang/Object;)[I", nullptr, $STATIC, $method(static_cast<$ints*(*)(Object$*)>(&DataBuffer::toIntArray))},
	{}
};

$InnerClassInfo _DataBuffer_InnerClassesInfo_[] = {
	{"java.awt.image.DataBuffer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DataBuffer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.image.DataBuffer",
	"java.lang.Object",
	nullptr,
	_DataBuffer_FieldInfo_,
	_DataBuffer_MethodInfo_,
	nullptr,
	nullptr,
	_DataBuffer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.image.DataBuffer$1"
};

$Object* allocate$DataBuffer($Class* clazz) {
	return $of($alloc(DataBuffer));
}


$ints* DataBuffer::dataTypeSize = nullptr;

int32_t DataBuffer::getDataTypeSize(int32_t type) {
	$init(DataBuffer);
	if (type < DataBuffer::TYPE_BYTE || type > DataBuffer::TYPE_DOUBLE) {
		$throwNew($IllegalArgumentException, $$str({"Unknown data type "_s, $$str(type)}));
	}
	return $nc(DataBuffer::dataTypeSize)->get(type);
}

void DataBuffer::init$(int32_t dataType, int32_t size) {
	$init($StateTrackable$State);
	DataBuffer::init$($StateTrackable$State::UNTRACKABLE, dataType, size);
}

void DataBuffer::init$($StateTrackable$State* initialState, int32_t dataType, int32_t size) {
	$set(this, theTrackable, $StateTrackableDelegate::createInstance(initialState));
	this->dataType = dataType;
	this->banks = 1;
	this->size = size;
	this->offset = 0;
	$set(this, offsets, $new($ints, 1));
}

void DataBuffer::init$(int32_t dataType, int32_t size, int32_t numBanks) {
	$init($StateTrackable$State);
	DataBuffer::init$($StateTrackable$State::UNTRACKABLE, dataType, size, numBanks);
}

void DataBuffer::init$($StateTrackable$State* initialState, int32_t dataType, int32_t size, int32_t numBanks) {
	$set(this, theTrackable, $StateTrackableDelegate::createInstance(initialState));
	this->dataType = dataType;
	this->banks = numBanks;
	this->size = size;
	this->offset = 0;
	$set(this, offsets, $new($ints, this->banks));
}

void DataBuffer::init$(int32_t dataType, int32_t size, int32_t numBanks, int32_t offset) {
	$init($StateTrackable$State);
	DataBuffer::init$($StateTrackable$State::UNTRACKABLE, dataType, size, numBanks, offset);
}

void DataBuffer::init$($StateTrackable$State* initialState, int32_t dataType, int32_t size, int32_t numBanks, int32_t offset) {
	$set(this, theTrackable, $StateTrackableDelegate::createInstance(initialState));
	this->dataType = dataType;
	this->banks = numBanks;
	this->size = size;
	this->offset = offset;
	$set(this, offsets, $new($ints, numBanks));
	for (int32_t i = 0; i < numBanks; ++i) {
		$nc(this->offsets)->set(i, offset);
	}
}

void DataBuffer::init$(int32_t dataType, int32_t size, int32_t numBanks, $ints* offsets) {
	$init($StateTrackable$State);
	DataBuffer::init$($StateTrackable$State::UNTRACKABLE, dataType, size, numBanks, offsets);
}

void DataBuffer::init$($StateTrackable$State* initialState, int32_t dataType, int32_t size, int32_t numBanks, $ints* offsets) {
	if (numBanks != $nc(offsets)->length) {
		$throwNew($ArrayIndexOutOfBoundsException, "Number of banks does not match number of bank offsets"_s);
	}
	$set(this, theTrackable, $StateTrackableDelegate::createInstance(initialState));
	this->dataType = dataType;
	this->banks = numBanks;
	this->size = size;
	this->offset = $nc(offsets)->get(0);
	$set(this, offsets, $cast($ints, offsets->clone()));
}

int32_t DataBuffer::getDataType() {
	return this->dataType;
}

int32_t DataBuffer::getSize() {
	return this->size;
}

int32_t DataBuffer::getOffset() {
	return this->offset;
}

$ints* DataBuffer::getOffsets() {
	return $cast($ints, $nc(this->offsets)->clone());
}

int32_t DataBuffer::getNumBanks() {
	return this->banks;
}

int32_t DataBuffer::getElem(int32_t i) {
	return getElem(0, i);
}

void DataBuffer::setElem(int32_t i, int32_t val) {
	setElem(0, i, val);
}

float DataBuffer::getElemFloat(int32_t i) {
	return (float)getElem(i);
}

float DataBuffer::getElemFloat(int32_t bank, int32_t i) {
	return (float)getElem(bank, i);
}

void DataBuffer::setElemFloat(int32_t i, float val) {
	setElem(i, $cast(int32_t, val));
}

void DataBuffer::setElemFloat(int32_t bank, int32_t i, float val) {
	setElem(bank, i, $cast(int32_t, val));
}

double DataBuffer::getElemDouble(int32_t i) {
	return (double)getElem(i);
}

double DataBuffer::getElemDouble(int32_t bank, int32_t i) {
	return (double)getElem(bank, i);
}

void DataBuffer::setElemDouble(int32_t i, double val) {
	setElem(i, $cast(int32_t, val));
}

void DataBuffer::setElemDouble(int32_t bank, int32_t i, double val) {
	setElem(bank, i, $cast(int32_t, val));
}

$ints* DataBuffer::toIntArray(Object$* obj) {
	$init(DataBuffer);
	if ($instanceOf($ints, obj)) {
		return $cast($ints, obj);
	} else if (obj == nullptr) {
		return nullptr;
	} else if ($instanceOf($shorts, obj)) {
		$var($shorts, sdata, $cast($shorts, obj));
		$var($ints, idata, $new($ints, $nc(sdata)->length));
		for (int32_t i = 0; i < sdata->length; ++i) {
			idata->set(i, (int32_t)((int32_t)sdata->get(i) & (uint32_t)0x0000FFFF));
		}
		return idata;
	} else if ($instanceOf($bytes, obj)) {
		$var($bytes, bdata, $cast($bytes, obj));
		$var($ints, idata, $new($ints, $nc(bdata)->length));
		for (int32_t i = 0; i < bdata->length; ++i) {
			idata->set(i, (int32_t)(255 & (uint32_t)(int32_t)bdata->get(i)));
		}
		return idata;
	}
	return nullptr;
}

void clinit$DataBuffer($Class* class$) {
	$assignStatic(DataBuffer::dataTypeSize, $new($ints, {
		8,
		16,
		16,
		32,
		32,
		64
	}));
	{
		$SunWritableRaster::setDataStealer($$new($DataBuffer$1));
	}
}

DataBuffer::DataBuffer() {
}

$Class* DataBuffer::load$($String* name, bool initialize) {
	$loadClass(DataBuffer, name, initialize, &_DataBuffer_ClassInfo_, clinit$DataBuffer, allocate$DataBuffer);
	return class$;
}

$Class* DataBuffer::class$ = nullptr;

		} // image
	} // awt
} // java