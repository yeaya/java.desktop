#include <java/awt/image/DataBufferInt.h>

#include <java/awt/image/DataBuffer.h>
#include <sun/java2d/StateTrackable$State.h>
#include <sun/java2d/StateTrackableDelegate.h>
#include <jcpp.h>

#undef STABLE
#undef TYPE_INT
#undef UNTRACKABLE

using $intArray2 = $Array<int32_t, 2>;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StateTrackable$State = ::sun::java2d::StateTrackable$State;
using $StateTrackableDelegate = ::sun::java2d::StateTrackableDelegate;

namespace java {
	namespace awt {
		namespace image {

$FieldInfo _DataBufferInt_FieldInfo_[] = {
	{"data", "[I", nullptr, 0, $field(DataBufferInt, data)},
	{"bankdata", "[[I", nullptr, 0, $field(DataBufferInt, bankdata)},
	{}
};

$MethodInfo _DataBufferInt_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(DataBufferInt::*)(int32_t)>(&DataBufferInt::init$))},
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(DataBufferInt::*)(int32_t,int32_t)>(&DataBufferInt::init$))},
	{"<init>", "([II)V", nullptr, $PUBLIC, $method(static_cast<void(DataBufferInt::*)($ints*,int32_t)>(&DataBufferInt::init$))},
	{"<init>", "([III)V", nullptr, $PUBLIC, $method(static_cast<void(DataBufferInt::*)($ints*,int32_t,int32_t)>(&DataBufferInt::init$))},
	{"<init>", "([[II)V", nullptr, $PUBLIC, $method(static_cast<void(DataBufferInt::*)($intArray2*,int32_t)>(&DataBufferInt::init$))},
	{"<init>", "([[II[I)V", nullptr, $PUBLIC, $method(static_cast<void(DataBufferInt::*)($intArray2*,int32_t,$ints*)>(&DataBufferInt::init$))},
	{"getBankData", "()[[I", nullptr, $PUBLIC, $method(static_cast<$intArray2*(DataBufferInt::*)()>(&DataBufferInt::getBankData))},
	{"getData", "()[I", nullptr, $PUBLIC, $method(static_cast<$ints*(DataBufferInt::*)()>(&DataBufferInt::getData))},
	{"getData", "(I)[I", nullptr, $PUBLIC, $method(static_cast<$ints*(DataBufferInt::*)(int32_t)>(&DataBufferInt::getData))},
	{"getElem", "(I)I", nullptr, $PUBLIC},
	{"getElem", "(II)I", nullptr, $PUBLIC},
	{"setElem", "(II)V", nullptr, $PUBLIC},
	{"setElem", "(III)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DataBufferInt_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.awt.image.DataBufferInt",
	"java.awt.image.DataBuffer",
	nullptr,
	_DataBufferInt_FieldInfo_,
	_DataBufferInt_MethodInfo_
};

$Object* allocate$DataBufferInt($Class* clazz) {
	return $of($alloc(DataBufferInt));
}

void DataBufferInt::init$(int32_t size) {
	$init($StateTrackable$State);
	$DataBuffer::init$($StateTrackable$State::STABLE, $DataBuffer::TYPE_INT, size);
	$set(this, data, $new($ints, size));
	$set(this, bankdata, $new($intArray2, 1));
	$nc(this->bankdata)->set(0, this->data);
}

void DataBufferInt::init$(int32_t size, int32_t numBanks) {
	$useLocalCurrentObjectStackCache();
	$init($StateTrackable$State);
	$DataBuffer::init$($StateTrackable$State::STABLE, $DataBuffer::TYPE_INT, size, numBanks);
	$set(this, bankdata, $new($intArray2, numBanks));
	for (int32_t i = 0; i < numBanks; ++i) {
		$nc(this->bankdata)->set(i, $$new($ints, size));
	}
	$set(this, data, $nc(this->bankdata)->get(0));
}

void DataBufferInt::init$($ints* dataArray, int32_t size) {
	$init($StateTrackable$State);
	$DataBuffer::init$($StateTrackable$State::UNTRACKABLE, $DataBuffer::TYPE_INT, size);
	$set(this, data, dataArray);
	$set(this, bankdata, $new($intArray2, 1));
	$nc(this->bankdata)->set(0, this->data);
}

void DataBufferInt::init$($ints* dataArray, int32_t size, int32_t offset) {
	$init($StateTrackable$State);
	$DataBuffer::init$($StateTrackable$State::UNTRACKABLE, $DataBuffer::TYPE_INT, size, 1, offset);
	$set(this, data, dataArray);
	$set(this, bankdata, $new($intArray2, 1));
	$nc(this->bankdata)->set(0, this->data);
}

void DataBufferInt::init$($intArray2* dataArray, int32_t size) {
	$init($StateTrackable$State);
	$DataBuffer::init$($StateTrackable$State::UNTRACKABLE, $DataBuffer::TYPE_INT, size, $nc(dataArray)->length);
	$set(this, bankdata, $cast($intArray2, $nc(dataArray)->clone()));
	$set(this, data, $nc(this->bankdata)->get(0));
}

void DataBufferInt::init$($intArray2* dataArray, int32_t size, $ints* offsets) {
	$init($StateTrackable$State);
	$DataBuffer::init$($StateTrackable$State::UNTRACKABLE, $DataBuffer::TYPE_INT, size, $nc(dataArray)->length, offsets);
	$set(this, bankdata, $cast($intArray2, $nc(dataArray)->clone()));
	$set(this, data, $nc(this->bankdata)->get(0));
}

$ints* DataBufferInt::getData() {
	$nc(this->theTrackable)->setUntrackable();
	return this->data;
}

$ints* DataBufferInt::getData(int32_t bank) {
	$nc(this->theTrackable)->setUntrackable();
	return $nc(this->bankdata)->get(bank);
}

$intArray2* DataBufferInt::getBankData() {
	$nc(this->theTrackable)->setUntrackable();
	return $cast($intArray2, $nc(this->bankdata)->clone());
}

int32_t DataBufferInt::getElem(int32_t i) {
	return $nc(this->data)->get(i + this->offset);
}

int32_t DataBufferInt::getElem(int32_t bank, int32_t i) {
	return $nc($nc(this->bankdata)->get(bank))->get(i + $nc(this->offsets)->get(bank));
}

void DataBufferInt::setElem(int32_t i, int32_t val) {
	$nc(this->data)->set(i + this->offset, val);
	$nc(this->theTrackable)->markDirty();
}

void DataBufferInt::setElem(int32_t bank, int32_t i, int32_t val) {
	$nc($nc(this->bankdata)->get(bank))->set(i + $nc(this->offsets)->get(bank), val);
	$nc(this->theTrackable)->markDirty();
}

DataBufferInt::DataBufferInt() {
}

$Class* DataBufferInt::load$($String* name, bool initialize) {
	$loadClass(DataBufferInt, name, initialize, &_DataBufferInt_ClassInfo_, allocate$DataBufferInt);
	return class$;
}

$Class* DataBufferInt::class$ = nullptr;

		} // image
	} // awt
} // java