#include <java/awt/image/DataBufferByte.h>

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
#undef TYPE_BYTE
#undef UNTRACKABLE

using $byteArray2 = $Array<int8_t, 2>;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StateTrackable$State = ::sun::java2d::StateTrackable$State;
using $StateTrackableDelegate = ::sun::java2d::StateTrackableDelegate;

namespace java {
	namespace awt {
		namespace image {

$FieldInfo _DataBufferByte_FieldInfo_[] = {
	{"data", "[B", nullptr, 0, $field(DataBufferByte, data)},
	{"bankdata", "[[B", nullptr, 0, $field(DataBufferByte, bankdata)},
	{}
};

$MethodInfo _DataBufferByte_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(DataBufferByte::*)(int32_t)>(&DataBufferByte::init$))},
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(DataBufferByte::*)(int32_t,int32_t)>(&DataBufferByte::init$))},
	{"<init>", "([BI)V", nullptr, $PUBLIC, $method(static_cast<void(DataBufferByte::*)($bytes*,int32_t)>(&DataBufferByte::init$))},
	{"<init>", "([BII)V", nullptr, $PUBLIC, $method(static_cast<void(DataBufferByte::*)($bytes*,int32_t,int32_t)>(&DataBufferByte::init$))},
	{"<init>", "([[BI)V", nullptr, $PUBLIC, $method(static_cast<void(DataBufferByte::*)($byteArray2*,int32_t)>(&DataBufferByte::init$))},
	{"<init>", "([[BI[I)V", nullptr, $PUBLIC, $method(static_cast<void(DataBufferByte::*)($byteArray2*,int32_t,$ints*)>(&DataBufferByte::init$))},
	{"getBankData", "()[[B", nullptr, $PUBLIC, $method(static_cast<$byteArray2*(DataBufferByte::*)()>(&DataBufferByte::getBankData))},
	{"getData", "()[B", nullptr, $PUBLIC, $method(static_cast<$bytes*(DataBufferByte::*)()>(&DataBufferByte::getData))},
	{"getData", "(I)[B", nullptr, $PUBLIC, $method(static_cast<$bytes*(DataBufferByte::*)(int32_t)>(&DataBufferByte::getData))},
	{"getElem", "(I)I", nullptr, $PUBLIC},
	{"getElem", "(II)I", nullptr, $PUBLIC},
	{"setElem", "(II)V", nullptr, $PUBLIC},
	{"setElem", "(III)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DataBufferByte_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.awt.image.DataBufferByte",
	"java.awt.image.DataBuffer",
	nullptr,
	_DataBufferByte_FieldInfo_,
	_DataBufferByte_MethodInfo_
};

$Object* allocate$DataBufferByte($Class* clazz) {
	return $of($alloc(DataBufferByte));
}

void DataBufferByte::init$(int32_t size) {
	$init($StateTrackable$State);
	$DataBuffer::init$($StateTrackable$State::STABLE, $DataBuffer::TYPE_BYTE, size);
	$set(this, data, $new($bytes, size));
	$set(this, bankdata, $new($byteArray2, 1));
	$nc(this->bankdata)->set(0, this->data);
}

void DataBufferByte::init$(int32_t size, int32_t numBanks) {
	$useLocalCurrentObjectStackCache();
	$init($StateTrackable$State);
	$DataBuffer::init$($StateTrackable$State::STABLE, $DataBuffer::TYPE_BYTE, size, numBanks);
	$set(this, bankdata, $new($byteArray2, numBanks));
	for (int32_t i = 0; i < numBanks; ++i) {
		$nc(this->bankdata)->set(i, $$new($bytes, size));
	}
	$set(this, data, $nc(this->bankdata)->get(0));
}

void DataBufferByte::init$($bytes* dataArray, int32_t size) {
	$init($StateTrackable$State);
	$DataBuffer::init$($StateTrackable$State::UNTRACKABLE, $DataBuffer::TYPE_BYTE, size);
	$set(this, data, dataArray);
	$set(this, bankdata, $new($byteArray2, 1));
	$nc(this->bankdata)->set(0, this->data);
}

void DataBufferByte::init$($bytes* dataArray, int32_t size, int32_t offset) {
	$init($StateTrackable$State);
	$DataBuffer::init$($StateTrackable$State::UNTRACKABLE, $DataBuffer::TYPE_BYTE, size, 1, offset);
	$set(this, data, dataArray);
	$set(this, bankdata, $new($byteArray2, 1));
	$nc(this->bankdata)->set(0, this->data);
}

void DataBufferByte::init$($byteArray2* dataArray, int32_t size) {
	$init($StateTrackable$State);
	$DataBuffer::init$($StateTrackable$State::UNTRACKABLE, $DataBuffer::TYPE_BYTE, size, $nc(dataArray)->length);
	$set(this, bankdata, $cast($byteArray2, $nc(dataArray)->clone()));
	$set(this, data, $nc(this->bankdata)->get(0));
}

void DataBufferByte::init$($byteArray2* dataArray, int32_t size, $ints* offsets) {
	$init($StateTrackable$State);
	$DataBuffer::init$($StateTrackable$State::UNTRACKABLE, $DataBuffer::TYPE_BYTE, size, $nc(dataArray)->length, offsets);
	$set(this, bankdata, $cast($byteArray2, $nc(dataArray)->clone()));
	$set(this, data, $nc(this->bankdata)->get(0));
}

$bytes* DataBufferByte::getData() {
	$nc(this->theTrackable)->setUntrackable();
	return this->data;
}

$bytes* DataBufferByte::getData(int32_t bank) {
	$nc(this->theTrackable)->setUntrackable();
	return $nc(this->bankdata)->get(bank);
}

$byteArray2* DataBufferByte::getBankData() {
	$nc(this->theTrackable)->setUntrackable();
	return $cast($byteArray2, $nc(this->bankdata)->clone());
}

int32_t DataBufferByte::getElem(int32_t i) {
	return (int32_t)((int32_t)($nc(this->data)->get(i + this->offset)) & (uint32_t)255);
}

int32_t DataBufferByte::getElem(int32_t bank, int32_t i) {
	return (int32_t)((int32_t)($nc($nc(this->bankdata)->get(bank))->get(i + $nc(this->offsets)->get(bank))) & (uint32_t)255);
}

void DataBufferByte::setElem(int32_t i, int32_t val) {
	$nc(this->data)->set(i + this->offset, (int8_t)val);
	$nc(this->theTrackable)->markDirty();
}

void DataBufferByte::setElem(int32_t bank, int32_t i, int32_t val) {
	$nc($nc(this->bankdata)->get(bank))->set(i + $nc(this->offsets)->get(bank), (int8_t)val);
	$nc(this->theTrackable)->markDirty();
}

DataBufferByte::DataBufferByte() {
}

$Class* DataBufferByte::load$($String* name, bool initialize) {
	$loadClass(DataBufferByte, name, initialize, &_DataBufferByte_ClassInfo_, allocate$DataBufferByte);
	return class$;
}

$Class* DataBufferByte::class$ = nullptr;

		} // image
	} // awt
} // java