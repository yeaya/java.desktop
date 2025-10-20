#include <java/awt/image/DataBufferShort.h>

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
#undef TYPE_SHORT
#undef UNTRACKABLE

using $shortArray2 = $Array<int16_t, 2>;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StateTrackable$State = ::sun::java2d::StateTrackable$State;
using $StateTrackableDelegate = ::sun::java2d::StateTrackableDelegate;

namespace java {
	namespace awt {
		namespace image {

$FieldInfo _DataBufferShort_FieldInfo_[] = {
	{"data", "[S", nullptr, 0, $field(DataBufferShort, data)},
	{"bankdata", "[[S", nullptr, 0, $field(DataBufferShort, bankdata)},
	{}
};

$MethodInfo _DataBufferShort_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(DataBufferShort::*)(int32_t)>(&DataBufferShort::init$))},
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(DataBufferShort::*)(int32_t,int32_t)>(&DataBufferShort::init$))},
	{"<init>", "([SI)V", nullptr, $PUBLIC, $method(static_cast<void(DataBufferShort::*)($shorts*,int32_t)>(&DataBufferShort::init$))},
	{"<init>", "([SII)V", nullptr, $PUBLIC, $method(static_cast<void(DataBufferShort::*)($shorts*,int32_t,int32_t)>(&DataBufferShort::init$))},
	{"<init>", "([[SI)V", nullptr, $PUBLIC, $method(static_cast<void(DataBufferShort::*)($shortArray2*,int32_t)>(&DataBufferShort::init$))},
	{"<init>", "([[SI[I)V", nullptr, $PUBLIC, $method(static_cast<void(DataBufferShort::*)($shortArray2*,int32_t,$ints*)>(&DataBufferShort::init$))},
	{"getBankData", "()[[S", nullptr, $PUBLIC, $method(static_cast<$shortArray2*(DataBufferShort::*)()>(&DataBufferShort::getBankData))},
	{"getData", "()[S", nullptr, $PUBLIC, $method(static_cast<$shorts*(DataBufferShort::*)()>(&DataBufferShort::getData))},
	{"getData", "(I)[S", nullptr, $PUBLIC, $method(static_cast<$shorts*(DataBufferShort::*)(int32_t)>(&DataBufferShort::getData))},
	{"getElem", "(I)I", nullptr, $PUBLIC},
	{"getElem", "(II)I", nullptr, $PUBLIC},
	{"setElem", "(II)V", nullptr, $PUBLIC},
	{"setElem", "(III)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DataBufferShort_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.awt.image.DataBufferShort",
	"java.awt.image.DataBuffer",
	nullptr,
	_DataBufferShort_FieldInfo_,
	_DataBufferShort_MethodInfo_
};

$Object* allocate$DataBufferShort($Class* clazz) {
	return $of($alloc(DataBufferShort));
}

void DataBufferShort::init$(int32_t size) {
	$init($StateTrackable$State);
	$DataBuffer::init$($StateTrackable$State::STABLE, $DataBuffer::TYPE_SHORT, size);
	$set(this, data, $new($shorts, size));
	$set(this, bankdata, $new($shortArray2, 1));
	$nc(this->bankdata)->set(0, this->data);
}

void DataBufferShort::init$(int32_t size, int32_t numBanks) {
	$useLocalCurrentObjectStackCache();
	$init($StateTrackable$State);
	$DataBuffer::init$($StateTrackable$State::STABLE, $DataBuffer::TYPE_SHORT, size, numBanks);
	$set(this, bankdata, $new($shortArray2, numBanks));
	for (int32_t i = 0; i < numBanks; ++i) {
		$nc(this->bankdata)->set(i, $$new($shorts, size));
	}
	$set(this, data, $nc(this->bankdata)->get(0));
}

void DataBufferShort::init$($shorts* dataArray, int32_t size) {
	$init($StateTrackable$State);
	$DataBuffer::init$($StateTrackable$State::UNTRACKABLE, $DataBuffer::TYPE_SHORT, size);
	$set(this, data, dataArray);
	$set(this, bankdata, $new($shortArray2, 1));
	$nc(this->bankdata)->set(0, this->data);
}

void DataBufferShort::init$($shorts* dataArray, int32_t size, int32_t offset) {
	$init($StateTrackable$State);
	$DataBuffer::init$($StateTrackable$State::UNTRACKABLE, $DataBuffer::TYPE_SHORT, size, 1, offset);
	$set(this, data, dataArray);
	$set(this, bankdata, $new($shortArray2, 1));
	$nc(this->bankdata)->set(0, this->data);
}

void DataBufferShort::init$($shortArray2* dataArray, int32_t size) {
	$init($StateTrackable$State);
	$DataBuffer::init$($StateTrackable$State::UNTRACKABLE, $DataBuffer::TYPE_SHORT, size, $nc(dataArray)->length);
	$set(this, bankdata, $cast($shortArray2, $nc(dataArray)->clone()));
	$set(this, data, $nc(this->bankdata)->get(0));
}

void DataBufferShort::init$($shortArray2* dataArray, int32_t size, $ints* offsets) {
	$init($StateTrackable$State);
	$DataBuffer::init$($StateTrackable$State::UNTRACKABLE, $DataBuffer::TYPE_SHORT, size, $nc(dataArray)->length, offsets);
	$set(this, bankdata, $cast($shortArray2, $nc(dataArray)->clone()));
	$set(this, data, $nc(this->bankdata)->get(0));
}

$shorts* DataBufferShort::getData() {
	$nc(this->theTrackable)->setUntrackable();
	return this->data;
}

$shorts* DataBufferShort::getData(int32_t bank) {
	$nc(this->theTrackable)->setUntrackable();
	return $nc(this->bankdata)->get(bank);
}

$shortArray2* DataBufferShort::getBankData() {
	$nc(this->theTrackable)->setUntrackable();
	return $cast($shortArray2, $nc(this->bankdata)->clone());
}

int32_t DataBufferShort::getElem(int32_t i) {
	return (int32_t)($nc(this->data)->get(i + this->offset));
}

int32_t DataBufferShort::getElem(int32_t bank, int32_t i) {
	return (int32_t)($nc($nc(this->bankdata)->get(bank))->get(i + $nc(this->offsets)->get(bank)));
}

void DataBufferShort::setElem(int32_t i, int32_t val) {
	$nc(this->data)->set(i + this->offset, (int16_t)val);
	$nc(this->theTrackable)->markDirty();
}

void DataBufferShort::setElem(int32_t bank, int32_t i, int32_t val) {
	$nc($nc(this->bankdata)->get(bank))->set(i + $nc(this->offsets)->get(bank), (int16_t)val);
	$nc(this->theTrackable)->markDirty();
}

DataBufferShort::DataBufferShort() {
}

$Class* DataBufferShort::load$($String* name, bool initialize) {
	$loadClass(DataBufferShort, name, initialize, &_DataBufferShort_ClassInfo_, allocate$DataBufferShort);
	return class$;
}

$Class* DataBufferShort::class$ = nullptr;

		} // image
	} // awt
} // java