#include <sun/java2d/loops/DrawLine$TraceDrawLine.h>

#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/DrawLine.h>
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
using $DrawLine = ::sun::java2d::loops::DrawLine;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _DrawLine$TraceDrawLine_FieldInfo_[] = {
	{"target", "Lsun/java2d/loops/DrawLine;", nullptr, 0, $field(DrawLine$TraceDrawLine, target)},
	{}
};

$MethodInfo _DrawLine$TraceDrawLine_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/DrawLine;)V", nullptr, $PUBLIC, $method(static_cast<void(DrawLine$TraceDrawLine::*)($DrawLine*)>(&DrawLine$TraceDrawLine::init$))},
	{"DrawLine", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;IIII)V", nullptr, $PUBLIC},
	{"traceWrap", "()Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DrawLine$TraceDrawLine_InnerClassesInfo_[] = {
	{"sun.java2d.loops.DrawLine$TraceDrawLine", "sun.java2d.loops.DrawLine", "TraceDrawLine", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DrawLine$TraceDrawLine_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.loops.DrawLine$TraceDrawLine",
	"sun.java2d.loops.DrawLine",
	nullptr,
	_DrawLine$TraceDrawLine_FieldInfo_,
	_DrawLine$TraceDrawLine_MethodInfo_,
	nullptr,
	nullptr,
	_DrawLine$TraceDrawLine_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.loops.DrawLine"
};

$Object* allocate$DrawLine$TraceDrawLine($Class* clazz) {
	return $of($alloc(DrawLine$TraceDrawLine));
}

void DrawLine$TraceDrawLine::init$($DrawLine* target) {
	$useLocalCurrentObjectStackCache();
	$var($SurfaceType, var$0, $nc(target)->getSourceType());
	$var($CompositeType, var$1, target->getCompositeType());
	$DrawLine::init$(var$0, var$1, $(target->getDestType()));
	$set(this, target, target);
}

$GraphicsPrimitive* DrawLine$TraceDrawLine::traceWrap() {
	return this;
}

void DrawLine$TraceDrawLine::DrawLine$($SunGraphics2D* sg2d, $SurfaceData* dest, int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
	tracePrimitive(this->target);
	$nc(this->target)->DrawLine$(sg2d, dest, x1, y1, x2, y2);
}

DrawLine$TraceDrawLine::DrawLine$TraceDrawLine() {
}

$Class* DrawLine$TraceDrawLine::load$($String* name, bool initialize) {
	$loadClass(DrawLine$TraceDrawLine, name, initialize, &_DrawLine$TraceDrawLine_ClassInfo_, allocate$DrawLine$TraceDrawLine);
	return class$;
}

$Class* DrawLine$TraceDrawLine::class$ = nullptr;

		} // loops
	} // java2d
} // sun