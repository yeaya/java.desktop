#include <java/awt/image/DataBufferUShort.h>

#include <java/awt/image/DataBuffer.h>
#include <sun/java2d/StateTrackable$State.h>
#include <sun/java2d/StateTrackableDelegate.h>
#include <jcpp.h>

#undef STABLE
#undef TYPE_USHORT
#undef UNTRACKABLE

using $shortArray2 = $Array<int16_t, 2>;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $StateTrackable$State = ::sun::java2d::StateTrackable$State;
using $StateTrackableDelegate = ::sun::java2d::StateTrackableDelegate;

namespace java {
	namespace awt {
		namespace image {

$FieldInfo _DataBufferUShort_FieldInfo_[] = {
	{"data", "[S", nullptr, 0, $field(DataBufferUShort, data)},
	{"bankdata", "[[S", nullptr, 0, $field(DataBufferUShort, bankdata)},
	{}
};

$MethodInfo _DataBufferUShort_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(DataBufferUShort::*)(int32_t)>(&DataBufferUShort::init$))},
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(DataBufferUShort::*)(int32_t,int32_t)>(&DataBufferUShort::init$))},
	{"<init>", "([SI)V", nullptr, $PUBLIC, $method(static_cast<void(DataBufferUShort::*)($shorts*,int32_t)>(&DataBufferUShort::init$))},
	{"<init>", "([SII)V", nullptr, $PUBLIC, $method(static_cast<void(DataBufferUShort::*)($shorts*,int32_t,int32_t)>(&DataBufferUShort::init$))},
	{"<init>", "([[SI)V", nullptr, $PUBLIC, $method(static_cast<void(DataBufferUShort::*)($shortArray2*,int32_t)>(&DataBufferUShort::init$))},
	{"<init>", "([[SI[I)V", nullptr, $PUBLIC, $method(static_cast<void(DataBufferUShort::*)($shortArray2*,int32_t,$ints*)>(&DataBufferUShort::init$))},
	{"getBankData", "()[[S", nullptr, $PUBLIC, $method(static_cast<$shortArray2*(DataBufferUShort::*)()>(&DataBufferUShort::getBankData))},
	{"getData", "()[S", nullptr, $PUBLIC, $method(static_cast<$shorts*(DataBufferUShort::*)()>(&DataBufferUShort::getData))},
	{"getData", "(I)[S", nullptr, $PUBLIC, $method(static_cast<$shorts*(DataBufferUShort::*)(int32_t)>(&DataBufferUShort::getData))},
	{"getElem", "(I)I", nullptr, $PUBLIC},
	{"getElem", "(II)I", nullptr, $PUBLIC},
	{"setElem", "(II)V", nullptr, $PUBLIC},
	{"setElem", "(III)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DataBufferUShort_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.awt.image.DataBufferUShort",
	"java.awt.image.DataBuffer",
	nullptr,
	_DataBufferUShort_FieldInfo_,
	_DataBufferUShort_MethodInfo_
};

$Object* allocate$DataBufferUShort($Class* clazz) {
	return $of($alloc(DataBufferUShort));
}

void DataBufferUShort::init$(int32_t size) {
	$init($StateTrackable$State);
	$DataBuffer::init$($StateTrackable$State::STABLE, $DataBuffer::TYPE_USHORT, size);
	$set(this, data, $new($shorts, size));
	$set(this, bankdata, $new($shortArray2, 1));
	$nc(this->bankdata)->set(0, this->data);
}

void DataBufferUShort::init$(int32_t size, int32_t numBanks) {
	$useLocalCurrentObjectStackCache();
	$init($StateTrackable$State);
	$DataBuffer::init$($StateTrackable$State::STABLE, $DataBuffer::TYPE_USHORT, size, numBanks);
	$set(this, bankdata, $new($shortArray2, numBanks));
	for (int32_t i = 0; i < numBanks; ++i) {
		$nc(this->bankdata)->set(i, $$new($shorts, size));
	}
	$set(this, data, $nc(this->bankdata)->get(0));
}

void DataBufferUShort::init$($shorts* dataArray, int32_t size) {
	$init($StateTrackable$State);
	$DataBuffer::init$($StateTrackable$State::UNTRACKABLE, $DataBuffer::TYPE_USHORT, size);
	if (dataArray == nullptr) {
		$throwNew($NullPointerException, "dataArray is null"_s);
	}
	$set(this, data, dataArray);
	$set(this, bankdata, $new($shortArray2, 1));
	$nc(this->bankdata)->set(0, this->data);
}

void DataBufferUShort::init$($shorts* dataArray, int32_t size, int32_t offset) {
	$init($StateTrackable$State);
	$DataBuffer::init$($StateTrackable$State::UNTRACKABLE, $DataBuffer::TYPE_USHORT, size, 1, offset);
	if (dataArray == nullptr) {
		$throwNew($NullPointerException, "dataArray is null"_s);
	}
	if ((size + offset) > $nc(dataArray)->length) {
		$throwNew($IllegalArgumentException, "Length of dataArray is less  than size+offset."_s);
	}
	$set(this, data, dataArray);
	$set(this, bankdata, $new($shortArray2, 1));
	$nc(this->bankdata)->set(0, this->data);
}

void DataBufferUShort::init$($shortArray2* dataArray, int32_t size) {
	$useLocalCurrentObjectStackCache();
	$init($StateTrackable$State);
	$DataBuffer::init$($StateTrackable$State::UNTRACKABLE, $DataBuffer::TYPE_USHORT, size, $nc(dataArray)->length);
	if (dataArray == nullptr) {
		$throwNew($NullPointerException, "dataArray is null"_s);
	}
	for (int32_t i = 0; i < $nc(dataArray)->length; ++i) {
		if (dataArray->get(i) == nullptr) {
			$throwNew($NullPointerException, $$str({"dataArray["_s, $$str(i), "] is null"_s}));
		}
	}
	$set(this, bankdata, $cast($shortArray2, $nc(dataArray)->clone()));
	$set(this, data, $nc(this->bankdata)->get(0));
}

void DataBufferUShort::init$($shortArray2* dataArray, int32_t size, $ints* offsets) {
	$useLocalCurrentObjectStackCache();
	$init($StateTrackable$State);
	$DataBuffer::init$($StateTrackable$State::UNTRACKABLE, $DataBuffer::TYPE_USHORT, size, $nc(dataArray)->length, offsets);
	if (dataArray == nullptr) {
		$throwNew($NullPointerException, "dataArray is null"_s);
	}
	for (int32_t i = 0; i < $nc(dataArray)->length; ++i) {
		if (dataArray->get(i) == nullptr) {
			$throwNew($NullPointerException, $$str({"dataArray["_s, $$str(i), "] is null"_s}));
		}
		if ((size + $nc(offsets)->get(i)) > $nc(dataArray->get(i))->length) {
			$throwNew($IllegalArgumentException, $$str({"Length of dataArray["_s, $$str(i), "] is less than size+offsets["_s, $$str(i), "]."_s}));
		}
	}
	$set(this, bankdata, $cast($shortArray2, $nc(dataArray)->clone()));
	$set(this, data, $nc(this->bankdata)->get(0));
}

$shorts* DataBufferUShort::getData() {
	$nc(this->theTrackable)->setUntrackable();
	return this->data;
}

$shorts* DataBufferUShort::getData(int32_t bank) {
	$nc(this->theTrackable)->setUntrackable();
	return $nc(this->bankdata)->get(bank);
}

$shortArray2* DataBufferUShort::getBankData() {
	$nc(this->theTrackable)->setUntrackable();
	return $cast($shortArray2, $nc(this->bankdata)->clone());
}

int32_t DataBufferUShort::getElem(int32_t i) {
	return (int32_t)($nc(this->data)->get(i + this->offset) & (uint32_t)0x0000FFFF);
}

int32_t DataBufferUShort::getElem(int32_t bank, int32_t i) {
	return (int32_t)($nc($nc(this->bankdata)->get(bank))->get(i + $nc(this->offsets)->get(bank)) & (uint32_t)0x0000FFFF);
}

void DataBufferUShort::setElem(int32_t i, int32_t val) {
	$nc(this->data)->set(i + this->offset, (int16_t)((int32_t)(val & (uint32_t)0x0000FFFF)));
	$nc(this->theTrackable)->markDirty();
}

void DataBufferUShort::setElem(int32_t bank, int32_t i, int32_t val) {
	$nc($nc(this->bankdata)->get(bank))->set(i + $nc(this->offsets)->get(bank), (int16_t)((int32_t)(val & (uint32_t)0x0000FFFF)));
	$nc(this->theTrackable)->markDirty();
}

DataBufferUShort::DataBufferUShort() {
}

$Class* DataBufferUShort::load$($String* name, bool initialize) {
	$loadClass(DataBufferUShort, name, initialize, &_DataBufferUShort_ClassInfo_, allocate$DataBufferUShort);
	return class$;
}

$Class* DataBufferUShort::class$ = nullptr;

		} // image
	} // awt
} // java