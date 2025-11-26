#include <sun/java2d/loops/FillRect$TraceFillRect.h>

#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/FillRect.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $FillRect = ::sun::java2d::loops::FillRect;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _FillRect$TraceFillRect_FieldInfo_[] = {
	{"target", "Lsun/java2d/loops/FillRect;", nullptr, 0, $field(FillRect$TraceFillRect, target)},
	{}
};

$MethodInfo _FillRect$TraceFillRect_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/FillRect;)V", nullptr, $PUBLIC, $method(static_cast<void(FillRect$TraceFillRect::*)($FillRect*)>(&FillRect$TraceFillRect::init$))},
	{"FillRect", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;IIII)V", nullptr, $PUBLIC},
	{"traceWrap", "()Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FillRect$TraceFillRect_InnerClassesInfo_[] = {
	{"sun.java2d.loops.FillRect$TraceFillRect", "sun.java2d.loops.FillRect", "TraceFillRect", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _FillRect$TraceFillRect_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.loops.FillRect$TraceFillRect",
	"sun.java2d.loops.FillRect",
	nullptr,
	_FillRect$TraceFillRect_FieldInfo_,
	_FillRect$TraceFillRect_MethodInfo_,
	nullptr,
	nullptr,
	_FillRect$TraceFillRect_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.loops.FillRect"
};

$Object* allocate$FillRect$TraceFillRect($Class* clazz) {
	return $of($alloc(FillRect$TraceFillRect));
}

void FillRect$TraceFillRect::init$($FillRect* target) {
	$useLocalCurrentObjectStackCache();
	$var($SurfaceType, var$0, $nc(target)->getSourceType());
	$var($CompositeType, var$1, target->getCompositeType());
	$FillRect::init$(var$0, var$1, $(target->getDestType()));
	$set(this, target, target);
}

$GraphicsPrimitive* FillRect$TraceFillRect::traceWrap() {
	return this;
}

void FillRect$TraceFillRect::FillRect$($SunGraphics2D* sg2d, $SurfaceData* dest, int32_t x, int32_t y, int32_t w, int32_t h) {
	tracePrimitive(this->target);
	$nc(this->target)->FillRect$(sg2d, dest, x, y, w, h);
}

FillRect$TraceFillRect::FillRect$TraceFillRect() {
}

$Class* FillRect$TraceFillRect::load$($String* name, bool initialize) {
	$loadClass(FillRect$TraceFillRect, name, initialize, &_FillRect$TraceFillRect_ClassInfo_, allocate$FillRect$TraceFillRect);
	return class$;
}

$Class* FillRect$TraceFillRect::class$ = nullptr;

		} // loops
	} // java2d
} // sun