#include <sun/java2d/loops/DrawPath.h>

#include <java/awt/geom/Path2D$Float.h>
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
#include <sun/java2d/loops/DrawPath$TraceDrawPath.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/GraphicsPrimitiveMgr.h>
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
using $DrawPath$TraceDrawPath = ::sun::java2d::loops::DrawPath$TraceDrawPath;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $GraphicsPrimitiveMgr = ::sun::java2d::loops::GraphicsPrimitiveMgr;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _DrawPath_FieldInfo_[] = {
	{"methodSignature", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DrawPath, methodSignature)},
	{"primTypeID", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DrawPath, primTypeID)},
	{}
};

$MethodInfo _DrawPath_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PROTECTED, $method(static_cast<void(DrawPath::*)($SurfaceType*,$CompositeType*,$SurfaceType*)>(&DrawPath::init$))},
	{"<init>", "(JLsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PUBLIC, $method(static_cast<void(DrawPath::*)(int64_t,$SurfaceType*,$CompositeType*,$SurfaceType*)>(&DrawPath::init$))},
	{"DrawPath", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;IILjava/awt/geom/Path2D$Float;)V", nullptr, $PUBLIC | $NATIVE},
	{"locate", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)Lsun/java2d/loops/DrawPath;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DrawPath*(*)($SurfaceType*,$CompositeType*,$SurfaceType*)>(&DrawPath::locate))},
	{"traceWrap", "()Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_DrawPath$ 2

$InnerClassInfo _DrawPath_InnerClassesInfo_[] = {
	{"sun.java2d.loops.DrawPath$TraceDrawPath", "sun.java2d.loops.DrawPath", "TraceDrawPath", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DrawPath_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.loops.DrawPath",
	"sun.java2d.loops.GraphicsPrimitive",
	nullptr,
	_DrawPath_FieldInfo_,
	_DrawPath_MethodInfo_,
	nullptr,
	nullptr,
	_DrawPath_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.loops.DrawPath$TraceDrawPath"
};

$Object* allocate$DrawPath($Class* clazz) {
	return $of($alloc(DrawPath));
}

$String* DrawPath::methodSignature = nullptr;
int32_t DrawPath::primTypeID = 0;

DrawPath* DrawPath::locate($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$init(DrawPath);
	return $cast(DrawPath, $GraphicsPrimitiveMgr::locate(DrawPath::primTypeID, srctype, comptype, dsttype));
}

void DrawPath::init$($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$GraphicsPrimitive::init$(DrawPath::methodSignature, DrawPath::primTypeID, srctype, comptype, dsttype);
}

void DrawPath::init$(int64_t pNativePrim, $SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$GraphicsPrimitive::init$(pNativePrim, DrawPath::methodSignature, DrawPath::primTypeID, srctype, comptype, dsttype);
}

void DrawPath::DrawPath$($SunGraphics2D* sg2d, $SurfaceData* sData, int32_t transX, int32_t transY, $Path2D$Float* p2df) {
	$prepareNative(DrawPath, DrawPath$, void, $SunGraphics2D* sg2d, $SurfaceData* sData, int32_t transX, int32_t transY, $Path2D$Float* p2df);
	$invokeNative(DrawPath, DrawPath$, sg2d, sData, transX, transY, p2df);
	$finishNative();
}

$GraphicsPrimitive* DrawPath::traceWrap() {
	return $new($DrawPath$TraceDrawPath, this);
}

void clinit$DrawPath($Class* class$) {
	$assignStatic(DrawPath::methodSignature, "DrawPath(...)"_s->toString());
	DrawPath::primTypeID = $GraphicsPrimitive::makePrimTypeID();
}

DrawPath::DrawPath() {
}

$Class* DrawPath::load$($String* name, bool initialize) {
	$loadClass(DrawPath, name, initialize, &_DrawPath_ClassInfo_, clinit$DrawPath, allocate$DrawPath);
	return class$;
}

$Class* DrawPath::class$ = nullptr;

		} // loops
	} // java2d
} // sun