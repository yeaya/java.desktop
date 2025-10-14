#include <sun/java2d/loops/DrawGlyphListAA$TraceDrawGlyphListAA.h>

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
#include <sun/java2d/loops/DrawGlyphListAA.h>
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
using $DrawGlyphListAA = ::sun::java2d::loops::DrawGlyphListAA;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _DrawGlyphListAA$TraceDrawGlyphListAA_FieldInfo_[] = {
	{"target", "Lsun/java2d/loops/DrawGlyphListAA;", nullptr, 0, $field(DrawGlyphListAA$TraceDrawGlyphListAA, target)},
	{}
};

$MethodInfo _DrawGlyphListAA$TraceDrawGlyphListAA_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/DrawGlyphListAA;)V", nullptr, $PUBLIC, $method(static_cast<void(DrawGlyphListAA$TraceDrawGlyphListAA::*)($DrawGlyphListAA*)>(&DrawGlyphListAA$TraceDrawGlyphListAA::init$))},
	{"DrawGlyphListAA", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;Lsun/font/GlyphList;II)V", nullptr, $PUBLIC},
	{"traceWrap", "()Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DrawGlyphListAA$TraceDrawGlyphListAA_InnerClassesInfo_[] = {
	{"sun.java2d.loops.DrawGlyphListAA$TraceDrawGlyphListAA", "sun.java2d.loops.DrawGlyphListAA", "TraceDrawGlyphListAA", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DrawGlyphListAA$TraceDrawGlyphListAA_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.loops.DrawGlyphListAA$TraceDrawGlyphListAA",
	"sun.java2d.loops.DrawGlyphListAA",
	nullptr,
	_DrawGlyphListAA$TraceDrawGlyphListAA_FieldInfo_,
	_DrawGlyphListAA$TraceDrawGlyphListAA_MethodInfo_,
	nullptr,
	nullptr,
	_DrawGlyphListAA$TraceDrawGlyphListAA_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.loops.DrawGlyphListAA"
};

$Object* allocate$DrawGlyphListAA$TraceDrawGlyphListAA($Class* clazz) {
	return $of($alloc(DrawGlyphListAA$TraceDrawGlyphListAA));
}

void DrawGlyphListAA$TraceDrawGlyphListAA::init$($DrawGlyphListAA* target) {
	$var($SurfaceType, var$0, $nc(target)->getSourceType());
	$var($CompositeType, var$1, target->getCompositeType());
	$DrawGlyphListAA::init$(var$0, var$1, $(target->getDestType()));
	$set(this, target, target);
}

$GraphicsPrimitive* DrawGlyphListAA$TraceDrawGlyphListAA::traceWrap() {
	return this;
}

void DrawGlyphListAA$TraceDrawGlyphListAA::DrawGlyphListAA$($SunGraphics2D* sg2d, $SurfaceData* dest, $GlyphList* glyphs, int32_t fromGlyph, int32_t toGlyph) {
	tracePrimitive(this->target);
	$nc(this->target)->DrawGlyphListAA$(sg2d, dest, glyphs, fromGlyph, toGlyph);
}

DrawGlyphListAA$TraceDrawGlyphListAA::DrawGlyphListAA$TraceDrawGlyphListAA() {
}

$Class* DrawGlyphListAA$TraceDrawGlyphListAA::load$($String* name, bool initialize) {
	$loadClass(DrawGlyphListAA$TraceDrawGlyphListAA, name, initialize, &_DrawGlyphListAA$TraceDrawGlyphListAA_ClassInfo_, allocate$DrawGlyphListAA$TraceDrawGlyphListAA);
	return class$;
}

$Class* DrawGlyphListAA$TraceDrawGlyphListAA::class$ = nullptr;

		} // loops
	} // java2d
} // sun