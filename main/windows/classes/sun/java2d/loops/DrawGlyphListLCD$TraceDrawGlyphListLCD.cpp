#include <sun/java2d/loops/DrawGlyphListLCD$TraceDrawGlyphListLCD.h>

#include <sun/font/GlyphList.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/DrawGlyphListLCD.h>
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
using $DrawGlyphListLCD = ::sun::java2d::loops::DrawGlyphListLCD;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _DrawGlyphListLCD$TraceDrawGlyphListLCD_FieldInfo_[] = {
	{"target", "Lsun/java2d/loops/DrawGlyphListLCD;", nullptr, 0, $field(DrawGlyphListLCD$TraceDrawGlyphListLCD, target)},
	{}
};

$MethodInfo _DrawGlyphListLCD$TraceDrawGlyphListLCD_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/DrawGlyphListLCD;)V", nullptr, $PUBLIC, $method(static_cast<void(DrawGlyphListLCD$TraceDrawGlyphListLCD::*)($DrawGlyphListLCD*)>(&DrawGlyphListLCD$TraceDrawGlyphListLCD::init$))},
	{"DrawGlyphListLCD", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;Lsun/font/GlyphList;II)V", nullptr, $PUBLIC},
	{"traceWrap", "()Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DrawGlyphListLCD$TraceDrawGlyphListLCD_InnerClassesInfo_[] = {
	{"sun.java2d.loops.DrawGlyphListLCD$TraceDrawGlyphListLCD", "sun.java2d.loops.DrawGlyphListLCD", "TraceDrawGlyphListLCD", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DrawGlyphListLCD$TraceDrawGlyphListLCD_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.loops.DrawGlyphListLCD$TraceDrawGlyphListLCD",
	"sun.java2d.loops.DrawGlyphListLCD",
	nullptr,
	_DrawGlyphListLCD$TraceDrawGlyphListLCD_FieldInfo_,
	_DrawGlyphListLCD$TraceDrawGlyphListLCD_MethodInfo_,
	nullptr,
	nullptr,
	_DrawGlyphListLCD$TraceDrawGlyphListLCD_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.loops.DrawGlyphListLCD"
};

$Object* allocate$DrawGlyphListLCD$TraceDrawGlyphListLCD($Class* clazz) {
	return $of($alloc(DrawGlyphListLCD$TraceDrawGlyphListLCD));
}

void DrawGlyphListLCD$TraceDrawGlyphListLCD::init$($DrawGlyphListLCD* target) {
	$useLocalCurrentObjectStackCache();
	$var($SurfaceType, var$0, $nc(target)->getSourceType());
	$var($CompositeType, var$1, target->getCompositeType());
	$DrawGlyphListLCD::init$(var$0, var$1, $(target->getDestType()));
	$set(this, target, target);
}

$GraphicsPrimitive* DrawGlyphListLCD$TraceDrawGlyphListLCD::traceWrap() {
	return this;
}

void DrawGlyphListLCD$TraceDrawGlyphListLCD::DrawGlyphListLCD$($SunGraphics2D* sg2d, $SurfaceData* dest, $GlyphList* glyphs, int32_t fromGlyph, int32_t toGlyph) {
	tracePrimitive(this->target);
	$nc(this->target)->DrawGlyphListLCD$(sg2d, dest, glyphs, fromGlyph, toGlyph);
}

DrawGlyphListLCD$TraceDrawGlyphListLCD::DrawGlyphListLCD$TraceDrawGlyphListLCD() {
}

$Class* DrawGlyphListLCD$TraceDrawGlyphListLCD::load$($String* name, bool initialize) {
	$loadClass(DrawGlyphListLCD$TraceDrawGlyphListLCD, name, initialize, &_DrawGlyphListLCD$TraceDrawGlyphListLCD_ClassInfo_, allocate$DrawGlyphListLCD$TraceDrawGlyphListLCD);
	return class$;
}

$Class* DrawGlyphListLCD$TraceDrawGlyphListLCD::class$ = nullptr;

		} // loops
	} // java2d
} // sun