#include <sun/java2d/loops/DrawGlyphList$TraceDrawGlyphList.h>

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
#include <sun/java2d/loops/DrawGlyphList.h>
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
using $DrawGlyphList = ::sun::java2d::loops::DrawGlyphList;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _DrawGlyphList$TraceDrawGlyphList_FieldInfo_[] = {
	{"target", "Lsun/java2d/loops/DrawGlyphList;", nullptr, 0, $field(DrawGlyphList$TraceDrawGlyphList, target)},
	{}
};

$MethodInfo _DrawGlyphList$TraceDrawGlyphList_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/DrawGlyphList;)V", nullptr, $PUBLIC, $method(static_cast<void(DrawGlyphList$TraceDrawGlyphList::*)($DrawGlyphList*)>(&DrawGlyphList$TraceDrawGlyphList::init$))},
	{"DrawGlyphList", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;Lsun/font/GlyphList;II)V", nullptr, $PUBLIC},
	{"traceWrap", "()Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DrawGlyphList$TraceDrawGlyphList_InnerClassesInfo_[] = {
	{"sun.java2d.loops.DrawGlyphList$TraceDrawGlyphList", "sun.java2d.loops.DrawGlyphList", "TraceDrawGlyphList", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DrawGlyphList$TraceDrawGlyphList_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.loops.DrawGlyphList$TraceDrawGlyphList",
	"sun.java2d.loops.DrawGlyphList",
	nullptr,
	_DrawGlyphList$TraceDrawGlyphList_FieldInfo_,
	_DrawGlyphList$TraceDrawGlyphList_MethodInfo_,
	nullptr,
	nullptr,
	_DrawGlyphList$TraceDrawGlyphList_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.loops.DrawGlyphList"
};

$Object* allocate$DrawGlyphList$TraceDrawGlyphList($Class* clazz) {
	return $of($alloc(DrawGlyphList$TraceDrawGlyphList));
}

void DrawGlyphList$TraceDrawGlyphList::init$($DrawGlyphList* target) {
	$useLocalCurrentObjectStackCache();
	$var($SurfaceType, var$0, $nc(target)->getSourceType());
	$var($CompositeType, var$1, target->getCompositeType());
	$DrawGlyphList::init$(var$0, var$1, $(target->getDestType()));
	$set(this, target, target);
}

$GraphicsPrimitive* DrawGlyphList$TraceDrawGlyphList::traceWrap() {
	return this;
}

void DrawGlyphList$TraceDrawGlyphList::DrawGlyphList$($SunGraphics2D* sg2d, $SurfaceData* dest, $GlyphList* glyphs, int32_t fromGlyph, int32_t toGlyph) {
	tracePrimitive(this->target);
	$nc(this->target)->DrawGlyphList$(sg2d, dest, glyphs, fromGlyph, toGlyph);
}

DrawGlyphList$TraceDrawGlyphList::DrawGlyphList$TraceDrawGlyphList() {
}

$Class* DrawGlyphList$TraceDrawGlyphList::load$($String* name, bool initialize) {
	$loadClass(DrawGlyphList$TraceDrawGlyphList, name, initialize, &_DrawGlyphList$TraceDrawGlyphList_ClassInfo_, allocate$DrawGlyphList$TraceDrawGlyphList);
	return class$;
}

$Class* DrawGlyphList$TraceDrawGlyphList::class$ = nullptr;

		} // loops
	} // java2d
} // sun