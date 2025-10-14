#include <java/awt/image/DataBufferFloat.h>

#include <java/awt/image/DataBuffer.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/StateTrackable$State.h>
#include <sun/java2d/StateTrackableDelegate.h>
#include <jcpp.h>

#undef STABLE
#undef TYPE_FLOAT
#undef UNTRACKABLE

using $floatArray2 = $Array<float, 2>;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StateTrackable$State = ::sun::java2d::StateTrackable$State;
using $StateTrackableDelegate = ::sun::java2d::StateTrackableDelegate;

namespace java {
	namespace awt {
		namespace image {

$FieldInfo _DataBufferFloat_FieldInfo_[] = {
	{"bankdata", "[[F", nullptr, 0, $field(DataBufferFloat, bankdata)},
	{"data", "[F", nullptr, 0, $field(DataBufferFloat, data)},
	{}
};

$MethodInfo _DataBufferFloat_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(DataBufferFloat::*)(int32_t)>(&DataBufferFloat::init$))},
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(DataBufferFloat::*)(int32_t,int32_t)>(&DataBufferFloat::init$))},
	{"<init>", "([FI)V", nullptr, $PUBLIC, $method(static_cast<void(DataBufferFloat::*)($floats*,int32_t)>(&DataBufferFloat::init$))},
	{"<init>", "([FII)V", nullptr, $PUBLIC, $method(static_cast<void(DataBufferFloat::*)($floats*,int32_t,int32_t)>(&DataBufferFloat::init$))},
	{"<init>", "([[FI)V", nullptr, $PUBLIC, $method(static_cast<void(DataBufferFloat::*)($floatArray2*,int32_t)>(&DataBufferFloat::init$))},
	{"<init>", "([[FI[I)V", nullptr, $PUBLIC, $method(static_cast<void(DataBufferFloat::*)($floatArray2*,int32_t,$ints*)>(&DataBufferFloat::init$))},
	{"getBankData", "()[[F", nullptr, $PUBLIC, $method(static_cast<$floatArray2*(DataBufferFloat::*)()>(&DataBufferFloat::getBankData))},
	{"getData", "()[F", nullptr, $PUBLIC, $method(static_cast<$floats*(DataBufferFloat::*)()>(&DataBufferFloat::getData))},
	{"getData", "(I)[F", nullptr, $PUBLIC, $method(static_cast<$floats*(DataBufferFloat::*)(int32_t)>(&DataBufferFloat::getData))},
	{"getElem", "(I)I", nullptr, $PUBLIC},
	{"getElem", "(II)I", nullptr, $PUBLIC},
	{"getElemDouble", "(I)D", nullptr, $PUBLIC},
	{"getElemDouble", "(II)D", nullptr, $PUBLIC},
	{"getElemFloat", "(I)F", nullptr, $PUBLIC},
	{"getElemFloat", "(II)F", nullptr, $PUBLIC},
	{"setElem", "(II)V", nullptr, $PUBLIC},
	{"setElem", "(III)V", nullptr, $PUBLIC},
	{"setElemDouble", "(ID)V", nullptr, $PUBLIC},
	{"setElemDouble", "(IID)V", nullptr, $PUBLIC},
	{"setElemFloat", "(IF)V", nullptr, $PUBLIC},
	{"setElemFloat", "(IIF)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DataBufferFloat_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.awt.image.DataBufferFloat",
	"java.awt.image.DataBuffer",
	nullptr,
	_DataBufferFloat_FieldInfo_,
	_DataBufferFloat_MethodInfo_
};

$Object* allocate$DataBufferFloat($Class* clazz) {
	return $of($alloc(DataBufferFloat));
}

void DataBufferFloat::init$(int32_t size) {
	$init($StateTrackable$State);
	$DataBuffer::init$($StateTrackable$State::STABLE, $DataBuffer::TYPE_FLOAT, size);
	$set(this, data, $new($floats, size));
	$set(this, bankdata, $new($floatArray2, 1));
	$nc(this->bankdata)->set(0, this->data);
}

void DataBufferFloat::init$(int32_t size, int32_t numBanks) {
	$init($StateTrackable$State);
	$DataBuffer::init$($StateTrackable$State::STABLE, $DataBuffer::TYPE_FLOAT, size, numBanks);
	$set(this, bankdata, $new($floatArray2, numBanks));
	for (int32_t i = 0; i < numBanks; ++i) {
		$nc(this->bankdata)->set(i, $$new($floats, size));
	}
	$set(this, data, $nc(this->bankdata)->get(0));
}

void DataBufferFloat::init$($floats* dataArray, int32_t size) {
	$init($StateTrackable$State);
	$DataBuffer::init$($StateTrackable$State::UNTRACKABLE, $DataBuffer::TYPE_FLOAT, size);
	$set(this, data, dataArray);
	$set(this, bankdata, $new($floatArray2, 1));
	$nc(this->bankdata)->set(0, this->data);
}

void DataBufferFloat::init$($floats* dataArray, int32_t size, int32_t offset) {
	$init($StateTrackable$State);
	$DataBuffer::init$($StateTrackable$State::UNTRACKABLE, $DataBuffer::TYPE_FLOAT, size, 1, offset);
	$set(this, data, dataArray);
	$set(this, bankdata, $new($floatArray2, 1));
	$nc(this->bankdata)->set(0, this->data);
}

void DataBufferFloat::init$($floatArray2* dataArray, int32_t size) {
	$init($StateTrackable$State);
	$DataBuffer::init$($StateTrackable$State::UNTRACKABLE, $DataBuffer::TYPE_FLOAT, size, $nc(dataArray)->length);
	$set(this, bankdata, $cast($floatArray2, $nc(dataArray)->clone()));
	$set(this, data, $nc(this->bankdata)->get(0));
}

void DataBufferFloat::init$($floatArray2* dataArray, int32_t size, $ints* offsets) {
	$init($StateTrackable$State);
	$DataBuffer::init$($StateTrackable$State::UNTRACKABLE, $DataBuffer::TYPE_FLOAT, size, $nc(dataArray)->length, offsets);
	$set(this, bankdata, $cast($floatArray2, $nc(dataArray)->clone()));
	$set(this, data, $nc(this->bankdata)->get(0));
}

$floats* DataBufferFloat::getData() {
	$nc(this->theTrackable)->setUntrackable();
	return this->data;
}

$floats* DataBufferFloat::getData(int32_t bank) {
	$nc(this->theTrackable)->setUntrackable();
	return $nc(this->bankdata)->get(bank);
}

$floatArray2* DataBufferFloat::getBankData() {
	$nc(this->theTrackable)->setUntrackable();
	return $cast($floatArray2, $nc(this->bankdata)->clone());
}

int32_t DataBufferFloat::getElem(int32_t i) {
	return $cast(int32_t, ($nc(this->data)->get(i + this->offset)));
}

int32_t DataBufferFloat::getElem(int32_t bank, int32_t i) {
	return $cast(int32_t, ($nc($nc(this->bankdata)->get(bank))->get(i + $nc(this->offsets)->get(bank))));
}

void DataBufferFloat::setElem(int32_t i, int32_t val) {
	$nc(this->data)->set(i + this->offset, (float)val);
	$nc(this->theTrackable)->markDirty();
}

void DataBufferFloat::setElem(int32_t bank, int32_t i, int32_t val) {
	$nc($nc(this->bankdata)->get(bank))->set(i + $nc(this->offsets)->get(bank), (float)val);
	$nc(this->theTrackable)->markDirty();
}

float DataBufferFloat::getElemFloat(int32_t i) {
	return $nc(this->data)->get(i + this->offset);
}

float DataBufferFloat::getElemFloat(int32_t bank, int32_t i) {
	return $nc($nc(this->bankdata)->get(bank))->get(i + $nc(this->offsets)->get(bank));
}

void DataBufferFloat::setElemFloat(int32_t i, float val) {
	$nc(this->data)->set(i + this->offset, val);
	$nc(this->theTrackable)->markDirty();
}

void DataBufferFloat::setElemFloat(int32_t bank, int32_t i, float val) {
	$nc($nc(this->bankdata)->get(bank))->set(i + $nc(this->offsets)->get(bank), val);
	$nc(this->theTrackable)->markDirty();
}

double DataBufferFloat::getElemDouble(int32_t i) {
	return (double)$nc(this->data)->get(i + this->offset);
}

double DataBufferFloat::getElemDouble(int32_t bank, int32_t i) {
	return (double)$nc($nc(this->bankdata)->get(bank))->get(i + $nc(this->offsets)->get(bank));
}

void DataBufferFloat::setElemDouble(int32_t i, double val) {
	$nc(this->data)->set(i + this->offset, (float)val);
	$nc(this->theTrackable)->markDirty();
}

void DataBufferFloat::setElemDouble(int32_t bank, int32_t i, double val) {
	$nc($nc(this->bankdata)->get(bank))->set(i + $nc(this->offsets)->get(bank), (float)val);
	$nc(this->theTrackable)->markDirty();
}

DataBufferFloat::DataBufferFloat() {
}

$Class* DataBufferFloat::load$($String* name, bool initialize) {
	$loadClass(DataBufferFloat, name, initialize, &_DataBufferFloat_ClassInfo_, allocate$DataBufferFloat);
	return class$;
}

$Class* DataBufferFloat::class$ = nullptr;

		} // image
	} // awt
} // java