#include <sun/java2d/loops/DrawRect$TraceDrawRect.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/DrawRect.h>
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
using $DrawRect = ::sun::java2d::loops::DrawRect;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _DrawRect$TraceDrawRect_FieldInfo_[] = {
	{"target", "Lsun/java2d/loops/DrawRect;", nullptr, 0, $field(DrawRect$TraceDrawRect, target)},
	{}
};

$MethodInfo _DrawRect$TraceDrawRect_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/DrawRect;)V", nullptr, $PUBLIC, $method(static_cast<void(DrawRect$TraceDrawRect::*)($DrawRect*)>(&DrawRect$TraceDrawRect::init$))},
	{"DrawRect", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;IIII)V", nullptr, $PUBLIC},
	{"traceWrap", "()Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DrawRect$TraceDrawRect_InnerClassesInfo_[] = {
	{"sun.java2d.loops.DrawRect$TraceDrawRect", "sun.java2d.loops.DrawRect", "TraceDrawRect", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DrawRect$TraceDrawRect_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.loops.DrawRect$TraceDrawRect",
	"sun.java2d.loops.DrawRect",
	nullptr,
	_DrawRect$TraceDrawRect_FieldInfo_,
	_DrawRect$TraceDrawRect_MethodInfo_,
	nullptr,
	nullptr,
	_DrawRect$TraceDrawRect_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.loops.DrawRect"
};

$Object* allocate$DrawRect$TraceDrawRect($Class* clazz) {
	return $of($alloc(DrawRect$TraceDrawRect));
}

void DrawRect$TraceDrawRect::init$($DrawRect* target) {
	$useLocalCurrentObjectStackCache();
	$var($SurfaceType, var$0, $nc(target)->getSourceType());
	$var($CompositeType, var$1, target->getCompositeType());
	$DrawRect::init$(var$0, var$1, $(target->getDestType()));
	$set(this, target, target);
}

$GraphicsPrimitive* DrawRect$TraceDrawRect::traceWrap() {
	return this;
}

void DrawRect$TraceDrawRect::DrawRect$($SunGraphics2D* sg2d, $SurfaceData* dest, int32_t x1, int32_t y1, int32_t w, int32_t h) {
	tracePrimitive(this->target);
	$nc(this->target)->DrawRect$(sg2d, dest, x1, y1, w, h);
}

DrawRect$TraceDrawRect::DrawRect$TraceDrawRect() {
}

$Class* DrawRect$TraceDrawRect::load$($String* name, bool initialize) {
	$loadClass(DrawRect$TraceDrawRect, name, initialize, &_DrawRect$TraceDrawRect_ClassInfo_, allocate$DrawRect$TraceDrawRect);
	return class$;
}

$Class* DrawRect$TraceDrawRect::class$ = nullptr;

		} // loops
	} // java2d
} // sun