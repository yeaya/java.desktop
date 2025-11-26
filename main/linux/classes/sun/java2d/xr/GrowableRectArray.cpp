#include <sun/java2d/xr/GrowableRectArray.h>

#include <sun/java2d/xr/GrowableIntArray.h>
#include <jcpp.h>

#undef RECT_SIZE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GrowableIntArray = ::sun::java2d::xr::GrowableIntArray;

namespace sun {
	namespace java2d {
		namespace xr {

$FieldInfo _GrowableRectArray_FieldInfo_[] = {
	{"RECT_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GrowableRectArray, RECT_SIZE)},
	{}
};

$MethodInfo _GrowableRectArray_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(GrowableRectArray::*)(int32_t)>(&GrowableRectArray::init$))},
	{"getHeight", "(I)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(GrowableRectArray::*)(int32_t)>(&GrowableRectArray::getHeight))},
	{"getWidth", "(I)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(GrowableRectArray::*)(int32_t)>(&GrowableRectArray::getWidth))},
	{"getX", "(I)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(GrowableRectArray::*)(int32_t)>(&GrowableRectArray::getX))},
	{"getY", "(I)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(GrowableRectArray::*)(int32_t)>(&GrowableRectArray::getY))},
	{"pushRectValues", "(IIII)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(GrowableRectArray::*)(int32_t,int32_t,int32_t,int32_t)>(&GrowableRectArray::pushRectValues))},
	{"setHeight", "(II)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(GrowableRectArray::*)(int32_t,int32_t)>(&GrowableRectArray::setHeight))},
	{"setWidth", "(II)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(GrowableRectArray::*)(int32_t,int32_t)>(&GrowableRectArray::setWidth))},
	{"setX", "(II)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(GrowableRectArray::*)(int32_t,int32_t)>(&GrowableRectArray::setX))},
	{"setY", "(II)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(GrowableRectArray::*)(int32_t,int32_t)>(&GrowableRectArray::setY))},
	{"translateRects", "(II)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(GrowableRectArray::*)(int32_t,int32_t)>(&GrowableRectArray::translateRects))},
	{}
};

$ClassInfo _GrowableRectArray_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.xr.GrowableRectArray",
	"sun.java2d.xr.GrowableIntArray",
	nullptr,
	_GrowableRectArray_FieldInfo_,
	_GrowableRectArray_MethodInfo_
};

$Object* allocate$GrowableRectArray($Class* clazz) {
	return $of($alloc(GrowableRectArray));
}

void GrowableRectArray::init$(int32_t initialSize) {
	$GrowableIntArray::init$(GrowableRectArray::RECT_SIZE, initialSize);
}

void GrowableRectArray::pushRectValues(int32_t x, int32_t y, int32_t width, int32_t height) {
	int32_t currSize = this->size;
	this->size += GrowableRectArray::RECT_SIZE;
	if (this->size >= $nc(this->array)->length) {
		growArray();
	}
	$nc(this->array)->set(currSize, x);
	$nc(this->array)->set(currSize + 1, y);
	$nc(this->array)->set(currSize + 2, width);
	$nc(this->array)->set(currSize + 3, height);
}

void GrowableRectArray::setX(int32_t index, int32_t x) {
	$nc(this->array)->set(getCellIndex(index), x);
}

void GrowableRectArray::setY(int32_t index, int32_t y) {
	$nc(this->array)->set(getCellIndex(index) + 1, y);
}

void GrowableRectArray::setWidth(int32_t index, int32_t width) {
	$nc(this->array)->set(getCellIndex(index) + 2, width);
}

void GrowableRectArray::setHeight(int32_t index, int32_t height) {
	$nc(this->array)->set(getCellIndex(index) + 3, height);
}

int32_t GrowableRectArray::getX(int32_t index) {
	return $nc(this->array)->get(getCellIndex(index));
}

int32_t GrowableRectArray::getY(int32_t index) {
	return $nc(this->array)->get(getCellIndex(index) + 1);
}

int32_t GrowableRectArray::getWidth(int32_t index) {
	return $nc(this->array)->get(getCellIndex(index) + 2);
}

int32_t GrowableRectArray::getHeight(int32_t index) {
	return $nc(this->array)->get(getCellIndex(index) + 3);
}

void GrowableRectArray::translateRects(int32_t x, int32_t y) {
	for (int32_t i = 0; i < getSize(); ++i) {
		setX(i, getX(i) + x);
		setY(i, getY(i) + y);
	}
}

GrowableRectArray::GrowableRectArray() {
}

$Class* GrowableRectArray::load$($String* name, bool initialize) {
	$loadClass(GrowableRectArray, name, initialize, &_GrowableRectArray_ClassInfo_, allocate$GrowableRectArray);
	return class$;
}

$Class* GrowableRectArray::class$ = nullptr;

		} // xr
	} // java2d
} // sun