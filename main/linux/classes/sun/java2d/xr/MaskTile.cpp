#include <sun/java2d/xr/MaskTile.h>

#include <sun/java2d/xr/DirtyRegion.h>
#include <sun/java2d/xr/GrowableRectArray.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DirtyRegion = ::sun::java2d::xr::DirtyRegion;
using $GrowableRectArray = ::sun::java2d::xr::GrowableRectArray;

namespace sun {
	namespace java2d {
		namespace xr {

$FieldInfo _MaskTile_FieldInfo_[] = {
	{"rects", "Lsun/java2d/xr/GrowableRectArray;", nullptr, 0, $field(MaskTile, rects)},
	{"dirtyArea", "Lsun/java2d/xr/DirtyRegion;", nullptr, 0, $field(MaskTile, dirtyArea)},
	{}
};

$MethodInfo _MaskTile_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MaskTile::*)()>(&MaskTile::init$))},
	{"calculateDirtyAreas", "()V", nullptr, $PUBLIC},
	{"getDirtyArea", "()Lsun/java2d/xr/DirtyRegion;", nullptr, $PUBLIC},
	{"getRects", "()Lsun/java2d/xr/GrowableRectArray;", nullptr, $PUBLIC},
	{"reset", "()V", nullptr, $PUBLIC},
	{"translate", "(II)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MaskTile_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.xr.MaskTile",
	"java.lang.Object",
	nullptr,
	_MaskTile_FieldInfo_,
	_MaskTile_MethodInfo_
};

$Object* allocate$MaskTile($Class* clazz) {
	return $of($alloc(MaskTile));
}

void MaskTile::init$() {
	$set(this, rects, $new($GrowableRectArray, 128));
	$set(this, dirtyArea, $new($DirtyRegion));
}

void MaskTile::calculateDirtyAreas() {
	for (int32_t i = 0; i < $nc(this->rects)->getSize(); ++i) {
		int32_t x = $nc(this->rects)->getX(i);
		int32_t y = $nc(this->rects)->getY(i);
		int32_t var$0 = x;
		int32_t var$1 = y;
		int32_t var$2 = x + $nc(this->rects)->getWidth(i);
		$nc(this->dirtyArea)->growDirtyRegion(var$0, var$1, var$2, y + $nc(this->rects)->getHeight(i));
	}
}

void MaskTile::reset() {
	$nc(this->rects)->clear();
	$nc(this->dirtyArea)->clear();
}

void MaskTile::translate(int32_t x, int32_t y) {
	if ($nc(this->rects)->getSize() > 0) {
		$nc(this->dirtyArea)->translate(x, y);
	}
	$nc(this->rects)->translateRects(x, y);
}

$GrowableRectArray* MaskTile::getRects() {
	return this->rects;
}

$DirtyRegion* MaskTile::getDirtyArea() {
	return this->dirtyArea;
}

MaskTile::MaskTile() {
}

$Class* MaskTile::load$($String* name, bool initialize) {
	$loadClass(MaskTile, name, initialize, &_MaskTile_ClassInfo_, allocate$MaskTile);
	return class$;
}

$Class* MaskTile::class$ = nullptr;

		} // xr
	} // java2d
} // sun