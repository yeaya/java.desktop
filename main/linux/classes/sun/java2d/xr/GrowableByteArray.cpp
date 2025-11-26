#include <sun/java2d/xr/GrowableByteArray.h>

#include <java/lang/Math.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;

namespace sun {
	namespace java2d {
		namespace xr {

$FieldInfo _GrowableByteArray_FieldInfo_[] = {
	{"array", "[B", nullptr, 0, $field(GrowableByteArray, array)},
	{"size", "I", nullptr, 0, $field(GrowableByteArray, size)},
	{"cellSize", "I", nullptr, 0, $field(GrowableByteArray, cellSize)},
	{}
};

$MethodInfo _GrowableByteArray_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(GrowableByteArray::*)(int32_t,int32_t)>(&GrowableByteArray::init$))},
	{"addByte", "(B)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(GrowableByteArray::*)(int8_t)>(&GrowableByteArray::addByte))},
	{"clear", "()V", nullptr, $PUBLIC},
	{"getArray", "()[B", nullptr, $PUBLIC},
	{"getByte", "(I)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(GrowableByteArray::*)(int32_t)>(&GrowableByteArray::getByte))},
	{"getCellIndex", "(I)I", nullptr, $PROTECTED | $FINAL, $method(static_cast<int32_t(GrowableByteArray::*)(int32_t)>(&GrowableByteArray::getCellIndex))},
	{"getNextCellIndex", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(GrowableByteArray::*)()>(&GrowableByteArray::getNextCellIndex))},
	{"getNextIndex", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(GrowableByteArray::*)()>(&GrowableByteArray::getNextIndex))},
	{"getSize", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(GrowableByteArray::*)()>(&GrowableByteArray::getSize))},
	{"getSizedArray", "()[B", nullptr, $PUBLIC},
	{"growArray", "()V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _GrowableByteArray_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.xr.GrowableByteArray",
	"java.lang.Object",
	nullptr,
	_GrowableByteArray_FieldInfo_,
	_GrowableByteArray_MethodInfo_
};

$Object* allocate$GrowableByteArray($Class* clazz) {
	return $of($alloc(GrowableByteArray));
}

void GrowableByteArray::init$(int32_t cellSize, int32_t initialSize) {
	$set(this, array, $new($bytes, initialSize));
	this->size = 0;
	this->cellSize = cellSize;
}

int32_t GrowableByteArray::getNextCellIndex() {
	int32_t oldSize = this->size;
	this->size += this->cellSize;
	if (this->size >= $nc(this->array)->length) {
		growArray();
	}
	return oldSize;
}

$bytes* GrowableByteArray::getArray() {
	return this->array;
}

$bytes* GrowableByteArray::getSizedArray() {
	return $Arrays::copyOf(this->array, getSize());
}

int32_t GrowableByteArray::getByte(int32_t index) {
	return $nc(this->array)->get(getCellIndex(index));
}

int32_t GrowableByteArray::getNextIndex() {
	return $div(getNextCellIndex(), this->cellSize);
}

int32_t GrowableByteArray::getCellIndex(int32_t cellIndex) {
	return this->cellSize * cellIndex;
}

void GrowableByteArray::addByte(int8_t i) {
	int32_t nextIndex = getNextIndex();
	$nc(this->array)->set(nextIndex, i);
}

int32_t GrowableByteArray::getSize() {
	return $div(this->size, this->cellSize);
}

void GrowableByteArray::clear() {
	this->size = 0;
}

void GrowableByteArray::growArray() {
	int32_t newSize = $Math::max($nc(this->array)->length * 2, 10);
	$var($bytes, oldArray, this->array);
	$set(this, array, $new($bytes, newSize));
	$System::arraycopy(oldArray, 0, this->array, 0, $nc(oldArray)->length);
}

GrowableByteArray::GrowableByteArray() {
}

$Class* GrowableByteArray::load$($String* name, bool initialize) {
	$loadClass(GrowableByteArray, name, initialize, &_GrowableByteArray_ClassInfo_, allocate$GrowableByteArray);
	return class$;
}

$Class* GrowableByteArray::class$ = nullptr;

		} // xr
	} // java2d
} // sun