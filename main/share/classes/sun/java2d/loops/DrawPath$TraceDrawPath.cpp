#include <sun/java2d/loops/DrawPath$TraceDrawPath.h>

#include <java/awt/geom/Path2D$Float.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/DrawPath.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <jcpp.h>

using $Path2D$Float = ::java::awt::geom::Path2D$Float;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $DrawPath = ::sun::java2d::loops::DrawPath;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _DrawPath$TraceDrawPath_FieldInfo_[] = {
	{"target", "Lsun/java2d/loops/DrawPath;", nullptr, 0, $field(DrawPath$TraceDrawPath, target)},
	{}
};

$MethodInfo _DrawPath$TraceDrawPath_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/DrawPath;)V", nullptr, $PUBLIC, $method(static_cast<void(DrawPath$TraceDrawPath::*)($DrawPath*)>(&DrawPath$TraceDrawPath::init$))},
	{"DrawPath", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;IILjava/awt/geom/Path2D$Float;)V", nullptr, $PUBLIC},
	{"traceWrap", "()Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DrawPath$TraceDrawPath_InnerClassesInfo_[] = {
	{"sun.java2d.loops.DrawPath$TraceDrawPath", "sun.java2d.loops.DrawPath", "TraceDrawPath", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DrawPath$TraceDrawPath_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.loops.DrawPath$TraceDrawPath",
	"sun.java2d.loops.DrawPath",
	nullptr,
	_DrawPath$TraceDrawPath_FieldInfo_,
	_DrawPath$TraceDrawPath_MethodInfo_,
	nullptr,
	nullptr,
	_DrawPath$TraceDrawPath_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.loops.DrawPath"
};

$Object* allocate$DrawPath$TraceDrawPath($Class* clazz) {
	return $of($alloc(DrawPath$TraceDrawPath));
}

void DrawPath$TraceDrawPath::init$($DrawPath* target) {
	$useLocalCurrentObjectStackCache();
	$var($SurfaceType, var$0, $nc(target)->getSourceType());
	$var($CompositeType, var$1, target->getCompositeType());
	$DrawPath::init$(var$0, var$1, $(target->getDestType()));
	$set(this, target, target);
}

$GraphicsPrimitive* DrawPath$TraceDrawPath::traceWrap() {
	return this;
}

void DrawPath$TraceDrawPath::DrawPath$($SunGraphics2D* sg2d, $SurfaceData* sData, int32_t transX, int32_t transY, $Path2D$Float* p2df) {
	tracePrimitive(this->target);
	$nc(this->target)->DrawPath$(sg2d, sData, transX, transY, p2df);
}

DrawPath$TraceDrawPath::DrawPath$TraceDrawPath() {
}

$Class* DrawPath$TraceDrawPath::load$($String* name, bool initialize) {
	$loadClass(DrawPath$TraceDrawPath, name, initialize, &_DrawPath$TraceDrawPath_ClassInfo_, allocate$DrawPath$TraceDrawPath);
	return class$;
}

$Class* DrawPath$TraceDrawPath::class$ = nullptr;

		} // loops
	} // java2d
} // sun