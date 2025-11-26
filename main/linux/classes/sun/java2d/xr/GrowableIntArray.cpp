#include <sun/java2d/xr/GrowableIntArray.h>

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

$FieldInfo _GrowableIntArray_FieldInfo_[] = {
	{"array", "[I", nullptr, 0, $field(GrowableIntArray, array)},
	{"size", "I", nullptr, 0, $field(GrowableIntArray, size)},
	{"cellSize", "I", nullptr, 0, $field(GrowableIntArray, cellSize)},
	{}
};

$MethodInfo _GrowableIntArray_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(GrowableIntArray::*)(int32_t,int32_t)>(&GrowableIntArray::init$))},
	{"addInt", "(I)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(GrowableIntArray::*)(int32_t)>(&GrowableIntArray::addInt))},
	{"clear", "()V", nullptr, $PUBLIC},
	{"getArray", "()[I", nullptr, $PUBLIC},
	{"getCellIndex", "(I)I", nullptr, $PROTECTED | $FINAL, $method(static_cast<int32_t(GrowableIntArray::*)(int32_t)>(&GrowableIntArray::getCellIndex))},
	{"getInt", "(I)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(GrowableIntArray::*)(int32_t)>(&GrowableIntArray::getInt))},
	{"getNextCellIndex", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(GrowableIntArray::*)()>(&GrowableIntArray::getNextCellIndex))},
	{"getNextIndex", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(GrowableIntArray::*)()>(&GrowableIntArray::getNextIndex))},
	{"getSize", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(GrowableIntArray::*)()>(&GrowableIntArray::getSize))},
	{"getSizedArray", "()[I", nullptr, $PUBLIC},
	{"growArray", "()V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _GrowableIntArray_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.xr.GrowableIntArray",
	"java.lang.Object",
	nullptr,
	_GrowableIntArray_FieldInfo_,
	_GrowableIntArray_MethodInfo_
};

$Object* allocate$GrowableIntArray($Class* clazz) {
	return $of($alloc(GrowableIntArray));
}

void GrowableIntArray::init$(int32_t cellSize, int32_t initialSize) {
	$set(this, array, $new($ints, initialSize));
	this->size = 0;
	this->cellSize = cellSize;
}

int32_t GrowableIntArray::getNextCellIndex() {
	int32_t oldSize = this->size;
	this->size += this->cellSize;
	if (this->size >= $nc(this->array)->length) {
		growArray();
	}
	return oldSize;
}

$ints* GrowableIntArray::getArray() {
	return this->array;
}

$ints* GrowableIntArray::getSizedArray() {
	return $Arrays::copyOf(this->array, getSize());
}

int32_t GrowableIntArray::getNextIndex() {
	return $div(getNextCellIndex(), this->cellSize);
}

int32_t GrowableIntArray::getCellIndex(int32_t cellIndex) {
	return this->cellSize * cellIndex;
}

int32_t GrowableIntArray::getInt(int32_t cellIndex) {
	return $nc(this->array)->get(cellIndex);
}

void GrowableIntArray::addInt(int32_t i) {
	int32_t nextIndex = getNextIndex();
	$nc(this->array)->set(nextIndex, i);
}

int32_t GrowableIntArray::getSize() {
	return $div(this->size, this->cellSize);
}

void GrowableIntArray::clear() {
	this->size = 0;
}

void GrowableIntArray::growArray() {
	int32_t newSize = $Math::max($nc(this->array)->length * 2, 10);
	$var($ints, oldArray, this->array);
	$set(this, array, $new($ints, newSize));
	$System::arraycopy(oldArray, 0, this->array, 0, $nc(oldArray)->length);
}

GrowableIntArray::GrowableIntArray() {
}

$Class* GrowableIntArray::load$($String* name, bool initialize) {
	$loadClass(GrowableIntArray, name, initialize, &_GrowableIntArray_ClassInfo_, allocate$GrowableIntArray);
	return class$;
}

$Class* GrowableIntArray::class$ = nullptr;

		} // xr
	} // java2d
} // sun