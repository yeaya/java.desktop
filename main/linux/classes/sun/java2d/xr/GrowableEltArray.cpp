#include <sun/java2d/xr/GrowableEltArray.h>

#include <sun/java2d/xr/GrowableIntArray.h>
#include <jcpp.h>

#undef ELT_SIZE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GrowableIntArray = ::sun::java2d::xr::GrowableIntArray;

namespace sun {
	namespace java2d {
		namespace xr {

$FieldInfo _GrowableEltArray_FieldInfo_[] = {
	{"ELT_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GrowableEltArray, ELT_SIZE)},
	{"glyphs", "Lsun/java2d/xr/GrowableIntArray;", nullptr, 0, $field(GrowableEltArray, glyphs)},
	{}
};

$MethodInfo _GrowableEltArray_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(GrowableEltArray::*)(int32_t)>(&GrowableEltArray::init$))},
	{"clear", "()V", nullptr, $PUBLIC},
	{"getCharCnt", "(I)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(GrowableEltArray::*)(int32_t)>(&GrowableEltArray::getCharCnt))},
	{"getGlyphSet", "(I)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(GrowableEltArray::*)(int32_t)>(&GrowableEltArray::getGlyphSet))},
	{"getGlyphs", "()Lsun/java2d/xr/GrowableIntArray;", nullptr, $PUBLIC},
	{"getXOff", "(I)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(GrowableEltArray::*)(int32_t)>(&GrowableEltArray::getXOff))},
	{"getYOff", "(I)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(GrowableEltArray::*)(int32_t)>(&GrowableEltArray::getYOff))},
	{"setCharCnt", "(II)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(GrowableEltArray::*)(int32_t,int32_t)>(&GrowableEltArray::setCharCnt))},
	{"setGlyphSet", "(II)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(GrowableEltArray::*)(int32_t,int32_t)>(&GrowableEltArray::setGlyphSet))},
	{"setXOff", "(II)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(GrowableEltArray::*)(int32_t,int32_t)>(&GrowableEltArray::setXOff))},
	{"setYOff", "(II)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(GrowableEltArray::*)(int32_t,int32_t)>(&GrowableEltArray::setYOff))},
	{}
};

$ClassInfo _GrowableEltArray_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.xr.GrowableEltArray",
	"sun.java2d.xr.GrowableIntArray",
	nullptr,
	_GrowableEltArray_FieldInfo_,
	_GrowableEltArray_MethodInfo_
};

$Object* allocate$GrowableEltArray($Class* clazz) {
	return $of($alloc(GrowableEltArray));
}

void GrowableEltArray::init$(int32_t initialSize) {
	$GrowableIntArray::init$(GrowableEltArray::ELT_SIZE, initialSize);
	$set(this, glyphs, $new($GrowableIntArray, 1, initialSize * 8));
}

int32_t GrowableEltArray::getCharCnt(int32_t index) {
	return $nc(this->array)->get(getCellIndex(index) + 0);
}

void GrowableEltArray::setCharCnt(int32_t index, int32_t cnt) {
	$nc(this->array)->set(getCellIndex(index) + 0, cnt);
}

int32_t GrowableEltArray::getXOff(int32_t index) {
	return $nc(this->array)->get(getCellIndex(index) + 1);
}

void GrowableEltArray::setXOff(int32_t index, int32_t xOff) {
	$nc(this->array)->set(getCellIndex(index) + 1, xOff);
}

int32_t GrowableEltArray::getYOff(int32_t index) {
	return $nc(this->array)->get(getCellIndex(index) + 2);
}

void GrowableEltArray::setYOff(int32_t index, int32_t yOff) {
	$nc(this->array)->set(getCellIndex(index) + 2, yOff);
}

int32_t GrowableEltArray::getGlyphSet(int32_t index) {
	return $nc(this->array)->get(getCellIndex(index) + 3);
}

void GrowableEltArray::setGlyphSet(int32_t index, int32_t glyphSet) {
	$nc(this->array)->set(getCellIndex(index) + 3, glyphSet);
}

$GrowableIntArray* GrowableEltArray::getGlyphs() {
	return this->glyphs;
}

void GrowableEltArray::clear() {
	$nc(this->glyphs)->clear();
	$GrowableIntArray::clear();
}

GrowableEltArray::GrowableEltArray() {
}

$Class* GrowableEltArray::load$($String* name, bool initialize) {
	$loadClass(GrowableEltArray, name, initialize, &_GrowableEltArray_ClassInfo_, allocate$GrowableEltArray);
	return class$;
}

$Class* GrowableEltArray::class$ = nullptr;

		} // xr
	} // java2d
} // sun