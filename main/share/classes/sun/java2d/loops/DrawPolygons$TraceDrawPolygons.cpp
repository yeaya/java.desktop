#include <sun/java2d/loops/DrawPolygons$TraceDrawPolygons.h>

#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/DrawPolygons.h>
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
using $DrawPolygons = ::sun::java2d::loops::DrawPolygons;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _DrawPolygons$TraceDrawPolygons_FieldInfo_[] = {
	{"target", "Lsun/java2d/loops/DrawPolygons;", nullptr, 0, $field(DrawPolygons$TraceDrawPolygons, target)},
	{}
};

$MethodInfo _DrawPolygons$TraceDrawPolygons_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/DrawPolygons;)V", nullptr, $PUBLIC, $method(static_cast<void(DrawPolygons$TraceDrawPolygons::*)($DrawPolygons*)>(&DrawPolygons$TraceDrawPolygons::init$))},
	{"DrawPolygons", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;[I[I[IIIIZ)V", nullptr, $PUBLIC},
	{"traceWrap", "()Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DrawPolygons$TraceDrawPolygons_InnerClassesInfo_[] = {
	{"sun.java2d.loops.DrawPolygons$TraceDrawPolygons", "sun.java2d.loops.DrawPolygons", "TraceDrawPolygons", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DrawPolygons$TraceDrawPolygons_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.loops.DrawPolygons$TraceDrawPolygons",
	"sun.java2d.loops.DrawPolygons",
	nullptr,
	_DrawPolygons$TraceDrawPolygons_FieldInfo_,
	_DrawPolygons$TraceDrawPolygons_MethodInfo_,
	nullptr,
	nullptr,
	_DrawPolygons$TraceDrawPolygons_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.loops.DrawPolygons"
};

$Object* allocate$DrawPolygons$TraceDrawPolygons($Class* clazz) {
	return $of($alloc(DrawPolygons$TraceDrawPolygons));
}

void DrawPolygons$TraceDrawPolygons::init$($DrawPolygons* target) {
	$useLocalCurrentObjectStackCache();
	$var($SurfaceType, var$0, $nc(target)->getSourceType());
	$var($CompositeType, var$1, target->getCompositeType());
	$DrawPolygons::init$(var$0, var$1, $(target->getDestType()));
	$set(this, target, target);
}

$GraphicsPrimitive* DrawPolygons$TraceDrawPolygons::traceWrap() {
	return this;
}

void DrawPolygons$TraceDrawPolygons::DrawPolygons$($SunGraphics2D* sg2d, $SurfaceData* sData, $ints* xPoints, $ints* yPoints, $ints* nPoints, int32_t numPolys, int32_t transX, int32_t transY, bool close) {
	tracePrimitive(this->target);
	$nc(this->target)->DrawPolygons$(sg2d, sData, xPoints, yPoints, nPoints, numPolys, transX, transY, close);
}

DrawPolygons$TraceDrawPolygons::DrawPolygons$TraceDrawPolygons() {
}

$Class* DrawPolygons$TraceDrawPolygons::load$($String* name, bool initialize) {
	$loadClass(DrawPolygons$TraceDrawPolygons, name, initialize, &_DrawPolygons$TraceDrawPolygons_ClassInfo_, allocate$DrawPolygons$TraceDrawPolygons);
	return class$;
}

$Class* DrawPolygons$TraceDrawPolygons::class$ = nullptr;

		} // loops
	} // java2d
} // sun