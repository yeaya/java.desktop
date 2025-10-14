#include <sun/java2d/loops/DrawLine.h>

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
#include <sun/java2d/loops/DrawLine$TraceDrawLine.h>
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
using $DrawLine$TraceDrawLine = ::sun::java2d::loops::DrawLine$TraceDrawLine;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $GraphicsPrimitiveMgr = ::sun::java2d::loops::GraphicsPrimitiveMgr;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _DrawLine_FieldInfo_[] = {
	{"methodSignature", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DrawLine, methodSignature)},
	{"primTypeID", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DrawLine, primTypeID)},
	{}
};

$MethodInfo _DrawLine_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PROTECTED, $method(static_cast<void(DrawLine::*)($SurfaceType*,$CompositeType*,$SurfaceType*)>(&DrawLine::init$))},
	{"<init>", "(JLsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PUBLIC, $method(static_cast<void(DrawLine::*)(int64_t,$SurfaceType*,$CompositeType*,$SurfaceType*)>(&DrawLine::init$))},
	{"DrawLine", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;IIII)V", nullptr, $PUBLIC | $NATIVE},
	{"locate", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)Lsun/java2d/loops/DrawLine;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DrawLine*(*)($SurfaceType*,$CompositeType*,$SurfaceType*)>(&DrawLine::locate))},
	{"traceWrap", "()Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_DrawLine$ 2

$InnerClassInfo _DrawLine_InnerClassesInfo_[] = {
	{"sun.java2d.loops.DrawLine$TraceDrawLine", "sun.java2d.loops.DrawLine", "TraceDrawLine", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DrawLine_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.loops.DrawLine",
	"sun.java2d.loops.GraphicsPrimitive",
	nullptr,
	_DrawLine_FieldInfo_,
	_DrawLine_MethodInfo_,
	nullptr,
	nullptr,
	_DrawLine_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.loops.DrawLine$TraceDrawLine"
};

$Object* allocate$DrawLine($Class* clazz) {
	return $of($alloc(DrawLine));
}

$String* DrawLine::methodSignature = nullptr;
int32_t DrawLine::primTypeID = 0;

DrawLine* DrawLine::locate($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$init(DrawLine);
	return $cast(DrawLine, $GraphicsPrimitiveMgr::locate(DrawLine::primTypeID, srctype, comptype, dsttype));
}

void DrawLine::init$($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$GraphicsPrimitive::init$(DrawLine::methodSignature, DrawLine::primTypeID, srctype, comptype, dsttype);
}

void DrawLine::init$(int64_t pNativePrim, $SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$GraphicsPrimitive::init$(pNativePrim, DrawLine::methodSignature, DrawLine::primTypeID, srctype, comptype, dsttype);
}

void DrawLine::DrawLine$($SunGraphics2D* sg2d, $SurfaceData* dest, int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
	$prepareNative(DrawLine, DrawLine$, void, $SunGraphics2D* sg2d, $SurfaceData* dest, int32_t x1, int32_t y1, int32_t x2, int32_t y2);
	$invokeNative(DrawLine, DrawLine$, sg2d, dest, x1, y1, x2, y2);
	$finishNative();
}

$GraphicsPrimitive* DrawLine::traceWrap() {
	return $new($DrawLine$TraceDrawLine, this);
}

void clinit$DrawLine($Class* class$) {
	$assignStatic(DrawLine::methodSignature, "DrawLine(...)"_s->toString());
	DrawLine::primTypeID = $GraphicsPrimitive::makePrimTypeID();
}

DrawLine::DrawLine() {
}

$Class* DrawLine::load$($String* name, bool initialize) {
	$loadClass(DrawLine, name, initialize, &_DrawLine_ClassInfo_, clinit$DrawLine, allocate$DrawLine);
	return class$;
}

$Class* DrawLine::class$ = nullptr;

		} // loops
	} // java2d
} // sun