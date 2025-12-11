#include <sun/java2d/loops/DrawParallelogram.h>

#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/DrawParallelogram$TraceDrawParallelogram.h>
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
using $DrawParallelogram$TraceDrawParallelogram = ::sun::java2d::loops::DrawParallelogram$TraceDrawParallelogram;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $GraphicsPrimitiveMgr = ::sun::java2d::loops::GraphicsPrimitiveMgr;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _DrawParallelogram_FieldInfo_[] = {
	{"methodSignature", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DrawParallelogram, methodSignature)},
	{"primTypeID", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DrawParallelogram, primTypeID)},
	{}
};

$MethodInfo _DrawParallelogram_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PROTECTED, $method(static_cast<void(DrawParallelogram::*)($SurfaceType*,$CompositeType*,$SurfaceType*)>(&DrawParallelogram::init$))},
	{"<init>", "(JLsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PUBLIC, $method(static_cast<void(DrawParallelogram::*)(int64_t,$SurfaceType*,$CompositeType*,$SurfaceType*)>(&DrawParallelogram::init$))},
	{"DrawParallelogram", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;DDDDDDDD)V", nullptr, $PUBLIC | $NATIVE},
	{"locate", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)Lsun/java2d/loops/DrawParallelogram;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DrawParallelogram*(*)($SurfaceType*,$CompositeType*,$SurfaceType*)>(&DrawParallelogram::locate))},
	{"traceWrap", "()Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_DrawParallelogram$ 2

$InnerClassInfo _DrawParallelogram_InnerClassesInfo_[] = {
	{"sun.java2d.loops.DrawParallelogram$TraceDrawParallelogram", "sun.java2d.loops.DrawParallelogram", "TraceDrawParallelogram", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DrawParallelogram_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.loops.DrawParallelogram",
	"sun.java2d.loops.GraphicsPrimitive",
	nullptr,
	_DrawParallelogram_FieldInfo_,
	_DrawParallelogram_MethodInfo_,
	nullptr,
	nullptr,
	_DrawParallelogram_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.loops.DrawParallelogram$TraceDrawParallelogram"
};

$Object* allocate$DrawParallelogram($Class* clazz) {
	return $of($alloc(DrawParallelogram));
}

$String* DrawParallelogram::methodSignature = nullptr;
int32_t DrawParallelogram::primTypeID = 0;

DrawParallelogram* DrawParallelogram::locate($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$init(DrawParallelogram);
	return $cast(DrawParallelogram, $GraphicsPrimitiveMgr::locate(DrawParallelogram::primTypeID, srctype, comptype, dsttype));
}

void DrawParallelogram::init$($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$GraphicsPrimitive::init$(DrawParallelogram::methodSignature, DrawParallelogram::primTypeID, srctype, comptype, dsttype);
}

void DrawParallelogram::init$(int64_t pNativePrim, $SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$GraphicsPrimitive::init$(pNativePrim, DrawParallelogram::methodSignature, DrawParallelogram::primTypeID, srctype, comptype, dsttype);
}

void DrawParallelogram::DrawParallelogram$($SunGraphics2D* sg, $SurfaceData* dest, double x, double y, double dx1, double dy1, double dx2, double dy2, double lw1, double lw2) {
	$prepareNative(DrawParallelogram, DrawParallelogram$, void, $SunGraphics2D* sg, $SurfaceData* dest, double x, double y, double dx1, double dy1, double dx2, double dy2, double lw1, double lw2);
	$invokeNative(sg, dest, x, y, dx1, dy1, dx2, dy2, lw1, lw2);
	$finishNative();
}

$GraphicsPrimitive* DrawParallelogram::traceWrap() {
	return $new($DrawParallelogram$TraceDrawParallelogram, this);
}

void clinit$DrawParallelogram($Class* class$) {
	$assignStatic(DrawParallelogram::methodSignature, "DrawParallelogram(...)"_s->toString());
	DrawParallelogram::primTypeID = $GraphicsPrimitive::makePrimTypeID();
}

DrawParallelogram::DrawParallelogram() {
}

$Class* DrawParallelogram::load$($String* name, bool initialize) {
	$loadClass(DrawParallelogram, name, initialize, &_DrawParallelogram_ClassInfo_, clinit$DrawParallelogram, allocate$DrawParallelogram);
	return class$;
}

$Class* DrawParallelogram::class$ = nullptr;

		} // loops
	} // java2d
} // sun