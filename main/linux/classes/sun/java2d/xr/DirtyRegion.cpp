#include <sun/java2d/xr/DirtyRegion.h>

#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Math.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef MIN_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {
		namespace xr {

$FieldInfo _DirtyRegion_FieldInfo_[] = {
	{"x", "I", nullptr, 0, $field(DirtyRegion, x)},
	{"y", "I", nullptr, 0, $field(DirtyRegion, y)},
	{"x2", "I", nullptr, 0, $field(DirtyRegion, x2)},
	{"y2", "I", nullptr, 0, $field(DirtyRegion, y2)},
	{}
};

$MethodInfo _DirtyRegion_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DirtyRegion::*)()>(&DirtyRegion::init$))},
	{"clear", "()V", nullptr, $PUBLIC},
	{"cloneRegion", "()Lsun/java2d/xr/DirtyRegion;", nullptr, $PUBLIC},
	{"combineRegion", "(Lsun/java2d/xr/DirtyRegion;Lsun/java2d/xr/DirtyRegion;)Lsun/java2d/xr/DirtyRegion;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DirtyRegion*(*)(DirtyRegion*,DirtyRegion*)>(&DirtyRegion::combineRegion))},
	{"getHeight", "()I", nullptr, $PUBLIC},
	{"getWidth", "()I", nullptr, $PUBLIC},
	{"growDirtyRegion", "(IIII)V", nullptr, $PUBLIC},
	{"growDirtyRegionTileLimit", "(IIII)V", nullptr, $PUBLIC},
	{"setDirtyLineRegion", "(IIII)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"translate", "(II)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DirtyRegion_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.xr.DirtyRegion",
	"java.lang.Object",
	"java.lang.Cloneable",
	_DirtyRegion_FieldInfo_,
	_DirtyRegion_MethodInfo_
};

$Object* allocate$DirtyRegion($Class* clazz) {
	return $of($alloc(DirtyRegion));
}

void DirtyRegion::init$() {
	clear();
}

void DirtyRegion::clear() {
	this->x = $Integer::MAX_VALUE;
	this->y = $Integer::MAX_VALUE;
	this->x2 = $Integer::MIN_VALUE;
	this->y2 = $Integer::MIN_VALUE;
}

void DirtyRegion::growDirtyRegion(int32_t x, int32_t y, int32_t x2, int32_t y2) {
	this->x = $Math::min(x, this->x);
	this->y = $Math::min(y, this->y);
	this->x2 = $Math::max(x2, this->x2);
	this->y2 = $Math::max(y2, this->y2);
}

int32_t DirtyRegion::getWidth() {
	return this->x2 - this->x;
}

int32_t DirtyRegion::getHeight() {
	return this->y2 - this->y;
}

void DirtyRegion::growDirtyRegionTileLimit(int32_t x, int32_t y, int32_t x2, int32_t y2) {
	if (x < this->x) {
		this->x = $Math::max(x, 0);
	}
	if (y < this->y) {
		this->y = $Math::max(y, 0);
	}
	if (x2 > this->x2) {
		this->x2 = $Math::min(x2, 256);
	}
	if (y2 > this->y2) {
		this->y2 = $Math::min(y2, 256);
	}
}

DirtyRegion* DirtyRegion::combineRegion(DirtyRegion* region1, DirtyRegion* region2) {
	$init(DirtyRegion);
	$var(DirtyRegion, region, $new(DirtyRegion));
	region->x = $Math::min($nc(region1)->x, $nc(region2)->x);
	region->y = $Math::min($nc(region1)->y, $nc(region2)->y);
	region->x2 = $Math::max($nc(region1)->x2, $nc(region2)->x2);
	region->y2 = $Math::max($nc(region1)->y2, $nc(region2)->y2);
	return region;
}

void DirtyRegion::setDirtyLineRegion(int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
	if (x1 < x2) {
		this->x = x1;
		this->x2 = x2;
	} else {
		this->x = x2;
		this->x2 = x1;
	}
	if (y1 < y2) {
		this->y = y1;
		this->y2 = y2;
	} else {
		this->y = y2;
		this->y2 = y1;
	}
}

void DirtyRegion::translate(int32_t x, int32_t y) {
	if (this->x != $Integer::MAX_VALUE) {
		this->x += x;
		this->x2 += x;
		this->y += y;
		this->y2 += y;
	}
}

$String* DirtyRegion::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({$($of(this)->getClass()->getName()), "(x: "_s, $$str(this->x), ", y:"_s, $$str(this->y), ", x2:"_s, $$str(this->x2), ", y2:"_s, $$str(this->y2), ")"_s});
}

DirtyRegion* DirtyRegion::cloneRegion() {
	try {
		return $cast(DirtyRegion, clone());
	} catch ($CloneNotSupportedException& ex) {
		ex->printStackTrace();
	}
	return nullptr;
}

DirtyRegion::DirtyRegion() {
}

$Class* DirtyRegion::load$($String* name, bool initialize) {
	$loadClass(DirtyRegion, name, initialize, &_DirtyRegion_ClassInfo_, allocate$DirtyRegion);
	return class$;
}

$Class* DirtyRegion::class$ = nullptr;

		} // xr
	} // java2d
} // sun