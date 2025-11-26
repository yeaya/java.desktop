#include <sun/java2d/xr/GrowablePointArray.h>

#include <sun/java2d/xr/GrowableIntArray.h>
#include <jcpp.h>

#undef POINT_SIZE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GrowableIntArray = ::sun::java2d::xr::GrowableIntArray;

namespace sun {
	namespace java2d {
		namespace xr {

$FieldInfo _GrowablePointArray_FieldInfo_[] = {
	{"POINT_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GrowablePointArray, POINT_SIZE)},
	{}
};

$MethodInfo _GrowablePointArray_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(GrowablePointArray::*)(int32_t)>(&GrowablePointArray::init$))},
	{"getX", "(I)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(GrowablePointArray::*)(int32_t)>(&GrowablePointArray::getX))},
	{"getY", "(I)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(GrowablePointArray::*)(int32_t)>(&GrowablePointArray::getY))},
	{"setX", "(II)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(GrowablePointArray::*)(int32_t,int32_t)>(&GrowablePointArray::setX))},
	{"setY", "(II)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(GrowablePointArray::*)(int32_t,int32_t)>(&GrowablePointArray::setY))},
	{}
};

$ClassInfo _GrowablePointArray_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.xr.GrowablePointArray",
	"sun.java2d.xr.GrowableIntArray",
	nullptr,
	_GrowablePointArray_FieldInfo_,
	_GrowablePointArray_MethodInfo_
};

$Object* allocate$GrowablePointArray($Class* clazz) {
	return $of($alloc(GrowablePointArray));
}

void GrowablePointArray::init$(int32_t initialSize) {
	$GrowableIntArray::init$(GrowablePointArray::POINT_SIZE, initialSize);
}

int32_t GrowablePointArray::getX(int32_t index) {
	return $nc(this->array)->get(getCellIndex(index));
}

int32_t GrowablePointArray::getY(int32_t index) {
	return $nc(this->array)->get(getCellIndex(index) + 1);
}

void GrowablePointArray::setX(int32_t index, int32_t x) {
	$nc(this->array)->set(getCellIndex(index), x);
}

void GrowablePointArray::setY(int32_t index, int32_t y) {
	$nc(this->array)->set(getCellIndex(index) + 1, y);
}

GrowablePointArray::GrowablePointArray() {
}

$Class* GrowablePointArray::load$($String* name, bool initialize) {
	$loadClass(GrowablePointArray, name, initialize, &_GrowablePointArray_ClassInfo_, allocate$GrowablePointArray);
	return class$;
}

$Class* GrowablePointArray::class$ = nullptr;

		} // xr
	} // java2d
} // sun