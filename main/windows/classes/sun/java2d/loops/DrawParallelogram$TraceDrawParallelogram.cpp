#include <sun/java2d/loops/DrawParallelogram$TraceDrawParallelogram.h>

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
#include <sun/java2d/loops/DrawParallelogram.h>
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
using $DrawParallelogram = ::sun::java2d::loops::DrawParallelogram;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _DrawParallelogram$TraceDrawParallelogram_FieldInfo_[] = {
	{"target", "Lsun/java2d/loops/DrawParallelogram;", nullptr, 0, $field(DrawParallelogram$TraceDrawParallelogram, target)},
	{}
};

$MethodInfo _DrawParallelogram$TraceDrawParallelogram_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/DrawParallelogram;)V", nullptr, $PUBLIC, $method(static_cast<void(DrawParallelogram$TraceDrawParallelogram::*)($DrawParallelogram*)>(&DrawParallelogram$TraceDrawParallelogram::init$))},
	{"DrawParallelogram", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;DDDDDDDD)V", nullptr, $PUBLIC},
	{"traceWrap", "()Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DrawParallelogram$TraceDrawParallelogram_InnerClassesInfo_[] = {
	{"sun.java2d.loops.DrawParallelogram$TraceDrawParallelogram", "sun.java2d.loops.DrawParallelogram", "TraceDrawParallelogram", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DrawParallelogram$TraceDrawParallelogram_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.loops.DrawParallelogram$TraceDrawParallelogram",
	"sun.java2d.loops.DrawParallelogram",
	nullptr,
	_DrawParallelogram$TraceDrawParallelogram_FieldInfo_,
	_DrawParallelogram$TraceDrawParallelogram_MethodInfo_,
	nullptr,
	nullptr,
	_DrawParallelogram$TraceDrawParallelogram_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.loops.DrawParallelogram"
};

$Object* allocate$DrawParallelogram$TraceDrawParallelogram($Class* clazz) {
	return $of($alloc(DrawParallelogram$TraceDrawParallelogram));
}

void DrawParallelogram$TraceDrawParallelogram::init$($DrawParallelogram* target) {
	$useLocalCurrentObjectStackCache();
	$var($SurfaceType, var$0, $nc(target)->getSourceType());
	$var($CompositeType, var$1, target->getCompositeType());
	$DrawParallelogram::init$(var$0, var$1, $(target->getDestType()));
	$set(this, target, target);
}

$GraphicsPrimitive* DrawParallelogram$TraceDrawParallelogram::traceWrap() {
	return this;
}

void DrawParallelogram$TraceDrawParallelogram::DrawParallelogram$($SunGraphics2D* sg2d, $SurfaceData* dest, double x, double y, double dx1, double dy1, double dx2, double dy2, double lw1, double lw2) {
	tracePrimitive(this->target);
	$nc(this->target)->DrawParallelogram$(sg2d, dest, x, y, dx1, dy1, dx2, dy2, lw1, lw2);
}

DrawParallelogram$TraceDrawParallelogram::DrawParallelogram$TraceDrawParallelogram() {
}

$Class* DrawParallelogram$TraceDrawParallelogram::load$($String* name, bool initialize) {
	$loadClass(DrawParallelogram$TraceDrawParallelogram, name, initialize, &_DrawParallelogram$TraceDrawParallelogram_ClassInfo_, allocate$DrawParallelogram$TraceDrawParallelogram);
	return class$;
}

$Class* DrawParallelogram$TraceDrawParallelogram::class$ = nullptr;

		} // loops
	} // java2d
} // sun