#include <sun/java2d/loops/DrawGlyphListLCD.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/font/GlyphList.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/DrawGlyphListLCD$TraceDrawGlyphListLCD.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/GraphicsPrimitiveMgr.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GlyphList = ::sun::font::GlyphList;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $DrawGlyphListLCD$TraceDrawGlyphListLCD = ::sun::java2d::loops::DrawGlyphListLCD$TraceDrawGlyphListLCD;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $GraphicsPrimitiveMgr = ::sun::java2d::loops::GraphicsPrimitiveMgr;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _DrawGlyphListLCD_FieldInfo_[] = {
	{"methodSignature", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DrawGlyphListLCD, methodSignature)},
	{"primTypeID", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DrawGlyphListLCD, primTypeID)},
	{}
};

$MethodInfo _DrawGlyphListLCD_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PROTECTED, $method(static_cast<void(DrawGlyphListLCD::*)($SurfaceType*,$CompositeType*,$SurfaceType*)>(&DrawGlyphListLCD::init$))},
	{"<init>", "(JLsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PUBLIC, $method(static_cast<void(DrawGlyphListLCD::*)(int64_t,$SurfaceType*,$CompositeType*,$SurfaceType*)>(&DrawGlyphListLCD::init$))},
	{"DrawGlyphListLCD", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;Lsun/font/GlyphList;II)V", nullptr, $PUBLIC | $NATIVE},
	{"locate", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)Lsun/java2d/loops/DrawGlyphListLCD;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DrawGlyphListLCD*(*)($SurfaceType*,$CompositeType*,$SurfaceType*)>(&DrawGlyphListLCD::locate))},
	{"traceWrap", "()Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_DrawGlyphListLCD$ 2

$InnerClassInfo _DrawGlyphListLCD_InnerClassesInfo_[] = {
	{"sun.java2d.loops.DrawGlyphListLCD$TraceDrawGlyphListLCD", "sun.java2d.loops.DrawGlyphListLCD", "TraceDrawGlyphListLCD", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DrawGlyphListLCD_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.loops.DrawGlyphListLCD",
	"sun.java2d.loops.GraphicsPrimitive",
	nullptr,
	_DrawGlyphListLCD_FieldInfo_,
	_DrawGlyphListLCD_MethodInfo_,
	nullptr,
	nullptr,
	_DrawGlyphListLCD_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.loops.DrawGlyphListLCD$TraceDrawGlyphListLCD"
};

$Object* allocate$DrawGlyphListLCD($Class* clazz) {
	return $of($alloc(DrawGlyphListLCD));
}

$String* DrawGlyphListLCD::methodSignature = nullptr;
int32_t DrawGlyphListLCD::primTypeID = 0;

DrawGlyphListLCD* DrawGlyphListLCD::locate($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$init(DrawGlyphListLCD);
	return $cast(DrawGlyphListLCD, $GraphicsPrimitiveMgr::locate(DrawGlyphListLCD::primTypeID, srctype, comptype, dsttype));
}

void DrawGlyphListLCD::init$($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$GraphicsPrimitive::init$(DrawGlyphListLCD::methodSignature, DrawGlyphListLCD::primTypeID, srctype, comptype, dsttype);
}

void DrawGlyphListLCD::init$(int64_t pNativePrim, $SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$GraphicsPrimitive::init$(pNativePrim, DrawGlyphListLCD::methodSignature, DrawGlyphListLCD::primTypeID, srctype, comptype, dsttype);
}

void DrawGlyphListLCD::DrawGlyphListLCD$($SunGraphics2D* sg2d, $SurfaceData* dest, $GlyphList* srcData, int32_t fromGlyph, int32_t toGlyph) {
	$prepareNative(DrawGlyphListLCD, DrawGlyphListLCD$, void, $SunGraphics2D* sg2d, $SurfaceData* dest, $GlyphList* srcData, int32_t fromGlyph, int32_t toGlyph);
	$invokeNative(DrawGlyphListLCD, DrawGlyphListLCD$, sg2d, dest, srcData, fromGlyph, toGlyph);
	$finishNative();
}

$GraphicsPrimitive* DrawGlyphListLCD::traceWrap() {
	return $new($DrawGlyphListLCD$TraceDrawGlyphListLCD, this);
}

void clinit$DrawGlyphListLCD($Class* class$) {
	$assignStatic(DrawGlyphListLCD::methodSignature, "DrawGlyphListLCD(...)"_s->toString());
	DrawGlyphListLCD::primTypeID = $GraphicsPrimitive::makePrimTypeID();
}

DrawGlyphListLCD::DrawGlyphListLCD() {
}

$Class* DrawGlyphListLCD::load$($String* name, bool initialize) {
	$loadClass(DrawGlyphListLCD, name, initialize, &_DrawGlyphListLCD_ClassInfo_, clinit$DrawGlyphListLCD, allocate$DrawGlyphListLCD);
	return class$;
}

$Class* DrawGlyphListLCD::class$ = nullptr;

		} // loops
	} // java2d
} // sun