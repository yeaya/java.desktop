#include <sun/java2d/loops/DrawPolygons.h>

#include <java/lang/Array.h>
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
#include <sun/java2d/loops/DrawPolygons$TraceDrawPolygons.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/GraphicsPrimitiveMgr.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $DrawPolygons$TraceDrawPolygons = ::sun::java2d::loops::DrawPolygons$TraceDrawPolygons;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $GraphicsPrimitiveMgr = ::sun::java2d::loops::GraphicsPrimitiveMgr;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _DrawPolygons_FieldInfo_[] = {
	{"methodSignature", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DrawPolygons, methodSignature)},
	{"primTypeID", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DrawPolygons, primTypeID)},
	{}
};

$MethodInfo _DrawPolygons_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PROTECTED, $method(static_cast<void(DrawPolygons::*)($SurfaceType*,$CompositeType*,$SurfaceType*)>(&DrawPolygons::init$))},
	{"<init>", "(JLsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PUBLIC, $method(static_cast<void(DrawPolygons::*)(int64_t,$SurfaceType*,$CompositeType*,$SurfaceType*)>(&DrawPolygons::init$))},
	{"DrawPolygons", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;[I[I[IIIIZ)V", nullptr, $PUBLIC | $NATIVE},
	{"locate", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)Lsun/java2d/loops/DrawPolygons;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DrawPolygons*(*)($SurfaceType*,$CompositeType*,$SurfaceType*)>(&DrawPolygons::locate))},
	{"traceWrap", "()Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_DrawPolygons$ 2

$InnerClassInfo _DrawPolygons_InnerClassesInfo_[] = {
	{"sun.java2d.loops.DrawPolygons$TraceDrawPolygons", "sun.java2d.loops.DrawPolygons", "TraceDrawPolygons", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DrawPolygons_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.loops.DrawPolygons",
	"sun.java2d.loops.GraphicsPrimitive",
	nullptr,
	_DrawPolygons_FieldInfo_,
	_DrawPolygons_MethodInfo_,
	nullptr,
	nullptr,
	_DrawPolygons_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.loops.DrawPolygons$TraceDrawPolygons"
};

$Object* allocate$DrawPolygons($Class* clazz) {
	return $of($alloc(DrawPolygons));
}

$String* DrawPolygons::methodSignature = nullptr;
int32_t DrawPolygons::primTypeID = 0;

DrawPolygons* DrawPolygons::locate($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$init(DrawPolygons);
	return $cast(DrawPolygons, $GraphicsPrimitiveMgr::locate(DrawPolygons::primTypeID, srctype, comptype, dsttype));
}

void DrawPolygons::init$($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$GraphicsPrimitive::init$(DrawPolygons::methodSignature, DrawPolygons::primTypeID, srctype, comptype, dsttype);
}

void DrawPolygons::init$(int64_t pNativePrim, $SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$GraphicsPrimitive::init$(pNativePrim, DrawPolygons::methodSignature, DrawPolygons::primTypeID, srctype, comptype, dsttype);
}

void DrawPolygons::DrawPolygons$($SunGraphics2D* sg2d, $SurfaceData* sData, $ints* xPoints, $ints* yPoints, $ints* nPoints, int32_t numPolys, int32_t transX, int32_t transY, bool close) {
	$prepareNative(DrawPolygons, DrawPolygons$, void, $SunGraphics2D* sg2d, $SurfaceData* sData, $ints* xPoints, $ints* yPoints, $ints* nPoints, int32_t numPolys, int32_t transX, int32_t transY, bool close);
	$invokeNative(DrawPolygons, DrawPolygons$, sg2d, sData, xPoints, yPoints, nPoints, numPolys, transX, transY, close);
	$finishNative();
}

$GraphicsPrimitive* DrawPolygons::traceWrap() {
	return $new($DrawPolygons$TraceDrawPolygons, this);
}

void clinit$DrawPolygons($Class* class$) {
	$assignStatic(DrawPolygons::methodSignature, "DrawPolygons(...)"_s->toString());
	DrawPolygons::primTypeID = $GraphicsPrimitive::makePrimTypeID();
}

DrawPolygons::DrawPolygons() {
}

$Class* DrawPolygons::load$($String* name, bool initialize) {
	$loadClass(DrawPolygons, name, initialize, &_DrawPolygons_ClassInfo_, clinit$DrawPolygons, allocate$DrawPolygons);
	return class$;
}

$Class* DrawPolygons::class$ = nullptr;

		} // loops
	} // java2d
} // sun