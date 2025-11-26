#include <sun/java2d/loops/DrawGlyphListAA.h>

#include <sun/font/GlyphList.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/DrawGlyphListAA$General.h>
#include <sun/java2d/loops/DrawGlyphListAA$TraceDrawGlyphListAA.h>
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
using $DrawGlyphListAA$General = ::sun::java2d::loops::DrawGlyphListAA$General;
using $DrawGlyphListAA$TraceDrawGlyphListAA = ::sun::java2d::loops::DrawGlyphListAA$TraceDrawGlyphListAA;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $GraphicsPrimitiveMgr = ::sun::java2d::loops::GraphicsPrimitiveMgr;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _DrawGlyphListAA_FieldInfo_[] = {
	{"methodSignature", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DrawGlyphListAA, methodSignature)},
	{"primTypeID", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DrawGlyphListAA, primTypeID)},
	{}
};

$MethodInfo _DrawGlyphListAA_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PROTECTED, $method(static_cast<void(DrawGlyphListAA::*)($SurfaceType*,$CompositeType*,$SurfaceType*)>(&DrawGlyphListAA::init$))},
	{"<init>", "(JLsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PUBLIC, $method(static_cast<void(DrawGlyphListAA::*)(int64_t,$SurfaceType*,$CompositeType*,$SurfaceType*)>(&DrawGlyphListAA::init$))},
	{"DrawGlyphListAA", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;Lsun/font/GlyphList;II)V", nullptr, $PUBLIC | $NATIVE},
	{"locate", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)Lsun/java2d/loops/DrawGlyphListAA;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DrawGlyphListAA*(*)($SurfaceType*,$CompositeType*,$SurfaceType*)>(&DrawGlyphListAA::locate))},
	{"makePrimitive", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PROTECTED},
	{"traceWrap", "()Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_DrawGlyphListAA$ 2

$InnerClassInfo _DrawGlyphListAA_InnerClassesInfo_[] = {
	{"sun.java2d.loops.DrawGlyphListAA$TraceDrawGlyphListAA", "sun.java2d.loops.DrawGlyphListAA", "TraceDrawGlyphListAA", $PRIVATE | $STATIC},
	{"sun.java2d.loops.DrawGlyphListAA$General", "sun.java2d.loops.DrawGlyphListAA", "General", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _DrawGlyphListAA_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.loops.DrawGlyphListAA",
	"sun.java2d.loops.GraphicsPrimitive",
	nullptr,
	_DrawGlyphListAA_FieldInfo_,
	_DrawGlyphListAA_MethodInfo_,
	nullptr,
	nullptr,
	_DrawGlyphListAA_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.loops.DrawGlyphListAA$TraceDrawGlyphListAA,sun.java2d.loops.DrawGlyphListAA$General"
};

$Object* allocate$DrawGlyphListAA($Class* clazz) {
	return $of($alloc(DrawGlyphListAA));
}

$String* DrawGlyphListAA::methodSignature = nullptr;
int32_t DrawGlyphListAA::primTypeID = 0;

DrawGlyphListAA* DrawGlyphListAA::locate($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$init(DrawGlyphListAA);
	return $cast(DrawGlyphListAA, $GraphicsPrimitiveMgr::locate(DrawGlyphListAA::primTypeID, srctype, comptype, dsttype));
}

void DrawGlyphListAA::init$($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$GraphicsPrimitive::init$(DrawGlyphListAA::methodSignature, DrawGlyphListAA::primTypeID, srctype, comptype, dsttype);
}

void DrawGlyphListAA::init$(int64_t pNativePrim, $SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$GraphicsPrimitive::init$(pNativePrim, DrawGlyphListAA::methodSignature, DrawGlyphListAA::primTypeID, srctype, comptype, dsttype);
}

void DrawGlyphListAA::DrawGlyphListAA$($SunGraphics2D* sg2d, $SurfaceData* dest, $GlyphList* srcData, int32_t fromGlyph, int32_t toGlyph) {
	$prepareNative(DrawGlyphListAA, DrawGlyphListAA$, void, $SunGraphics2D* sg2d, $SurfaceData* dest, $GlyphList* srcData, int32_t fromGlyph, int32_t toGlyph);
	$invokeNative(DrawGlyphListAA, DrawGlyphListAA$, sg2d, dest, srcData, fromGlyph, toGlyph);
	$finishNative();
}

$GraphicsPrimitive* DrawGlyphListAA::makePrimitive($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	return $new($DrawGlyphListAA$General, srctype, comptype, dsttype);
}

$GraphicsPrimitive* DrawGlyphListAA::traceWrap() {
	return $new($DrawGlyphListAA$TraceDrawGlyphListAA, this);
}

void clinit$DrawGlyphListAA($Class* class$) {
	$assignStatic(DrawGlyphListAA::methodSignature, "DrawGlyphListAA(...)"_s->toString());
	DrawGlyphListAA::primTypeID = $GraphicsPrimitive::makePrimTypeID();
	{
		$GraphicsPrimitiveMgr::registerGeneral($$new(DrawGlyphListAA, nullptr, nullptr, nullptr));
	}
}

DrawGlyphListAA::DrawGlyphListAA() {
}

$Class* DrawGlyphListAA::load$($String* name, bool initialize) {
	$loadClass(DrawGlyphListAA, name, initialize, &_DrawGlyphListAA_ClassInfo_, clinit$DrawGlyphListAA, allocate$DrawGlyphListAA);
	return class$;
}

$Class* DrawGlyphListAA::class$ = nullptr;

		} // loops
	} // java2d
} // sun