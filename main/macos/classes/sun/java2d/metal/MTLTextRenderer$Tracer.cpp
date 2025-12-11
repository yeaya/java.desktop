#include <sun/java2d/metal/MTLTextRenderer$Tracer.h>

#include <sun/font/GlyphList.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/metal/MTLTextRenderer.h>
#include <sun/java2d/pipe/BufferedTextPipe.h>
#include <sun/java2d/pipe/RenderQueue.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GlyphList = ::sun::font::GlyphList;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $MTLTextRenderer = ::sun::java2d::metal::MTLTextRenderer;

namespace sun {
	namespace java2d {
		namespace metal {

$MethodInfo _MTLTextRenderer$Tracer_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/metal/MTLTextRenderer;)V", nullptr, 0, $method(static_cast<void(MTLTextRenderer$Tracer::*)($MTLTextRenderer*)>(&MTLTextRenderer$Tracer::init$))},
	{"drawGlyphList", "(Lsun/java2d/SunGraphics2D;Lsun/font/GlyphList;)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _MTLTextRenderer$Tracer_InnerClassesInfo_[] = {
	{"sun.java2d.metal.MTLTextRenderer$Tracer", "sun.java2d.metal.MTLTextRenderer", "Tracer", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MTLTextRenderer$Tracer_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.metal.MTLTextRenderer$Tracer",
	"sun.java2d.metal.MTLTextRenderer",
	nullptr,
	nullptr,
	_MTLTextRenderer$Tracer_MethodInfo_,
	nullptr,
	nullptr,
	_MTLTextRenderer$Tracer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.metal.MTLTextRenderer"
};

$Object* allocate$MTLTextRenderer$Tracer($Class* clazz) {
	return $of($alloc(MTLTextRenderer$Tracer));
}

void MTLTextRenderer$Tracer::init$($MTLTextRenderer* mtltr) {
	$MTLTextRenderer::init$($($MTLTextRenderer::access$000(mtltr)));
}

void MTLTextRenderer$Tracer::drawGlyphList($SunGraphics2D* sg2d, $GlyphList* gl) {
	$GraphicsPrimitive::tracePrimitive("MTLDrawGlyphs"_s);
	$MTLTextRenderer::drawGlyphList(sg2d, gl);
}

MTLTextRenderer$Tracer::MTLTextRenderer$Tracer() {
}

$Class* MTLTextRenderer$Tracer::load$($String* name, bool initialize) {
	$loadClass(MTLTextRenderer$Tracer, name, initialize, &_MTLTextRenderer$Tracer_ClassInfo_, allocate$MTLTextRenderer$Tracer);
	return class$;
}

$Class* MTLTextRenderer$Tracer::class$ = nullptr;

		} // metal
	} // java2d
} // sun