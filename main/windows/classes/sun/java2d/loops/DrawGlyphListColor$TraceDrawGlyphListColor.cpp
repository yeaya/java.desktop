#include <sun/java2d/loops/DrawGlyphListColor$TraceDrawGlyphListColor.h>

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
#include <sun/java2d/loops/DrawGlyphListColor.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
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
using $DrawGlyphListColor = ::sun::java2d::loops::DrawGlyphListColor;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _DrawGlyphListColor$TraceDrawGlyphListColor_FieldInfo_[] = {
	{"target", "Lsun/java2d/loops/DrawGlyphListColor;", nullptr, 0, $field(DrawGlyphListColor$TraceDrawGlyphListColor, target)},
	{}
};

$MethodInfo _DrawGlyphListColor$TraceDrawGlyphListColor_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/DrawGlyphListColor;)V", nullptr, $PUBLIC, $method(static_cast<void(DrawGlyphListColor$TraceDrawGlyphListColor::*)($DrawGlyphListColor*)>(&DrawGlyphListColor$TraceDrawGlyphListColor::init$))},
	{"DrawGlyphListColor", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;Lsun/font/GlyphList;II)V", nullptr, $PUBLIC},
	{"traceWrap", "()Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DrawGlyphListColor$TraceDrawGlyphListColor_InnerClassesInfo_[] = {
	{"sun.java2d.loops.DrawGlyphListColor$TraceDrawGlyphListColor", "sun.java2d.loops.DrawGlyphListColor", "TraceDrawGlyphListColor", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DrawGlyphListColor$TraceDrawGlyphListColor_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.loops.DrawGlyphListColor$TraceDrawGlyphListColor",
	"sun.java2d.loops.DrawGlyphListColor",
	nullptr,
	_DrawGlyphListColor$TraceDrawGlyphListColor_FieldInfo_,
	_DrawGlyphListColor$TraceDrawGlyphListColor_MethodInfo_,
	nullptr,
	nullptr,
	_DrawGlyphListColor$TraceDrawGlyphListColor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.loops.DrawGlyphListColor"
};

$Object* allocate$DrawGlyphListColor$TraceDrawGlyphListColor($Class* clazz) {
	return $of($alloc(DrawGlyphListColor$TraceDrawGlyphListColor));
}

void DrawGlyphListColor$TraceDrawGlyphListColor::init$($DrawGlyphListColor* target) {
	$var($SurfaceType, var$0, $nc(target)->getSourceType());
	$var($CompositeType, var$1, target->getCompositeType());
	$DrawGlyphListColor::init$(var$0, var$1, $(target->getDestType()));
	$set(this, target, target);
}

$GraphicsPrimitive* DrawGlyphListColor$TraceDrawGlyphListColor::traceWrap() {
	return this;
}

void DrawGlyphListColor$TraceDrawGlyphListColor::DrawGlyphListColor$($SunGraphics2D* sg2d, $SurfaceData* dest, $GlyphList* glyphs, int32_t fromGlyph, int32_t toGlyph) {
	tracePrimitive(this->target);
	$nc(this->target)->DrawGlyphListColor$(sg2d, dest, glyphs, fromGlyph, toGlyph);
}

DrawGlyphListColor$TraceDrawGlyphListColor::DrawGlyphListColor$TraceDrawGlyphListColor() {
}

$Class* DrawGlyphListColor$TraceDrawGlyphListColor::load$($String* name, bool initialize) {
	$loadClass(DrawGlyphListColor$TraceDrawGlyphListColor, name, initialize, &_DrawGlyphListColor$TraceDrawGlyphListColor_ClassInfo_, allocate$DrawGlyphListColor$TraceDrawGlyphListColor);
	return class$;
}

$Class* DrawGlyphListColor$TraceDrawGlyphListColor::class$ = nullptr;

		} // loops
	} // java2d
} // sun