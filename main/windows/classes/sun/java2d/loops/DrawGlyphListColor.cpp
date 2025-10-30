#include <sun/java2d/loops/DrawGlyphListColor.h>

#include <sun/font/GlyphList.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/DrawGlyphListColor$General.h>
#include <sun/java2d/loops/DrawGlyphListColor$TraceDrawGlyphListColor.h>
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
using $DrawGlyphListColor$General = ::sun::java2d::loops::DrawGlyphListColor$General;
using $DrawGlyphListColor$TraceDrawGlyphListColor = ::sun::java2d::loops::DrawGlyphListColor$TraceDrawGlyphListColor;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $GraphicsPrimitiveMgr = ::sun::java2d::loops::GraphicsPrimitiveMgr;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _DrawGlyphListColor_FieldInfo_[] = {
	{"methodSignature", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DrawGlyphListColor, methodSignature)},
	{"primTypeID", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DrawGlyphListColor, primTypeID)},
	{}
};

$MethodInfo _DrawGlyphListColor_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PROTECTED, $method(static_cast<void(DrawGlyphListColor::*)($SurfaceType*,$CompositeType*,$SurfaceType*)>(&DrawGlyphListColor::init$))},
	{"DrawGlyphListColor", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;Lsun/font/GlyphList;II)V", nullptr, $PUBLIC},
	{"locate", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)Lsun/java2d/loops/DrawGlyphListColor;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DrawGlyphListColor*(*)($SurfaceType*,$CompositeType*,$SurfaceType*)>(&DrawGlyphListColor::locate))},
	{"makePrimitive", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC},
	{"traceWrap", "()Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DrawGlyphListColor_InnerClassesInfo_[] = {
	{"sun.java2d.loops.DrawGlyphListColor$TraceDrawGlyphListColor", "sun.java2d.loops.DrawGlyphListColor", "TraceDrawGlyphListColor", $PRIVATE | $STATIC},
	{"sun.java2d.loops.DrawGlyphListColor$General", "sun.java2d.loops.DrawGlyphListColor", "General", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DrawGlyphListColor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.loops.DrawGlyphListColor",
	"sun.java2d.loops.GraphicsPrimitive",
	nullptr,
	_DrawGlyphListColor_FieldInfo_,
	_DrawGlyphListColor_MethodInfo_,
	nullptr,
	nullptr,
	_DrawGlyphListColor_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.loops.DrawGlyphListColor$TraceDrawGlyphListColor,sun.java2d.loops.DrawGlyphListColor$General"
};

$Object* allocate$DrawGlyphListColor($Class* clazz) {
	return $of($alloc(DrawGlyphListColor));
}

$String* DrawGlyphListColor::methodSignature = nullptr;
int32_t DrawGlyphListColor::primTypeID = 0;

DrawGlyphListColor* DrawGlyphListColor::locate($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$init(DrawGlyphListColor);
	return $cast(DrawGlyphListColor, $GraphicsPrimitiveMgr::locate(DrawGlyphListColor::primTypeID, srctype, comptype, dsttype));
}

void DrawGlyphListColor::init$($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$GraphicsPrimitive::init$(DrawGlyphListColor::methodSignature, DrawGlyphListColor::primTypeID, srctype, comptype, dsttype);
}

void DrawGlyphListColor::DrawGlyphListColor$($SunGraphics2D* sg2d, $SurfaceData* dest, $GlyphList* srcData, int32_t fromGlyph, int32_t toGlyph) {
}

$GraphicsPrimitive* DrawGlyphListColor::makePrimitive($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	return $new($DrawGlyphListColor$General, srctype, comptype, dsttype);
}

$GraphicsPrimitive* DrawGlyphListColor::traceWrap() {
	return $new($DrawGlyphListColor$TraceDrawGlyphListColor, this);
}

void clinit$DrawGlyphListColor($Class* class$) {
	$assignStatic(DrawGlyphListColor::methodSignature, "DrawGlyphListColor(...)"_s->toString());
	DrawGlyphListColor::primTypeID = $GraphicsPrimitive::makePrimTypeID();
	{
		$GraphicsPrimitiveMgr::registerGeneral($$new(DrawGlyphListColor, nullptr, nullptr, nullptr));
	}
}

DrawGlyphListColor::DrawGlyphListColor() {
}

$Class* DrawGlyphListColor::load$($String* name, bool initialize) {
	$loadClass(DrawGlyphListColor, name, initialize, &_DrawGlyphListColor_ClassInfo_, clinit$DrawGlyphListColor, allocate$DrawGlyphListColor);
	return class$;
}

$Class* DrawGlyphListColor::class$ = nullptr;

		} // loops
	} // java2d
} // sun