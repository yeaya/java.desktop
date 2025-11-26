#include <sun/java2d/loops/FillRect$General.h>

#include <java/awt/Composite.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/FillRect.h>
#include <sun/java2d/loops/MaskFill.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <jcpp.h>

using $Composite = ::java::awt::Composite;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $FillRect = ::sun::java2d::loops::FillRect;
using $MaskFill = ::sun::java2d::loops::MaskFill;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _FillRect$General_FieldInfo_[] = {
	{"fillop", "Lsun/java2d/loops/MaskFill;", nullptr, $PUBLIC, $field(FillRect$General, fillop)},
	{}
};

$MethodInfo _FillRect$General_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PUBLIC, $method(static_cast<void(FillRect$General::*)($SurfaceType*,$CompositeType*,$SurfaceType*)>(&FillRect$General::init$))},
	{"FillRect", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;IIII)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FillRect$General_InnerClassesInfo_[] = {
	{"sun.java2d.loops.FillRect$General", "sun.java2d.loops.FillRect", "General", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _FillRect$General_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.loops.FillRect$General",
	"sun.java2d.loops.FillRect",
	nullptr,
	_FillRect$General_FieldInfo_,
	_FillRect$General_MethodInfo_,
	nullptr,
	nullptr,
	_FillRect$General_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.loops.FillRect"
};

$Object* allocate$FillRect$General($Class* clazz) {
	return $of($alloc(FillRect$General));
}

void FillRect$General::init$($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$FillRect::init$(srctype, comptype, dsttype);
	$set(this, fillop, $MaskFill::locate(srctype, comptype, dsttype));
}

void FillRect$General::FillRect$($SunGraphics2D* sg2d, $SurfaceData* dest, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc(this->fillop)->MaskFill$(sg2d, dest, $nc(sg2d)->composite, x, y, w, h, nullptr, 0, 0);
}

FillRect$General::FillRect$General() {
}

$Class* FillRect$General::load$($String* name, bool initialize) {
	$loadClass(FillRect$General, name, initialize, &_FillRect$General_ClassInfo_, allocate$FillRect$General);
	return class$;
}

$Class* FillRect$General::class$ = nullptr;

		} // loops
	} // java2d
} // sun