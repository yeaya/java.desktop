#include <sun/java2d/d3d/D3DTextRenderer$Tracer.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/font/GlyphList.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/d3d/D3DTextRenderer.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/pipe/BufferedTextPipe.h>
#include <sun/java2d/pipe/RenderQueue.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GlyphList = ::sun::font::GlyphList;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $D3DTextRenderer = ::sun::java2d::d3d::D3DTextRenderer;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $BufferedTextPipe = ::sun::java2d::pipe::BufferedTextPipe;
using $RenderQueue = ::sun::java2d::pipe::RenderQueue;

namespace sun {
	namespace java2d {
		namespace d3d {

$MethodInfo _D3DTextRenderer$Tracer_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/d3d/D3DTextRenderer;)V", nullptr, 0, $method(static_cast<void(D3DTextRenderer$Tracer::*)($D3DTextRenderer*)>(&D3DTextRenderer$Tracer::init$))},
	{"drawGlyphList", "(Lsun/java2d/SunGraphics2D;Lsun/font/GlyphList;)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _D3DTextRenderer$Tracer_InnerClassesInfo_[] = {
	{"sun.java2d.d3d.D3DTextRenderer$Tracer", "sun.java2d.d3d.D3DTextRenderer", "Tracer", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _D3DTextRenderer$Tracer_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.d3d.D3DTextRenderer$Tracer",
	"sun.java2d.d3d.D3DTextRenderer",
	nullptr,
	nullptr,
	_D3DTextRenderer$Tracer_MethodInfo_,
	nullptr,
	nullptr,
	_D3DTextRenderer$Tracer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.d3d.D3DTextRenderer"
};

$Object* allocate$D3DTextRenderer$Tracer($Class* clazz) {
	return $of($alloc(D3DTextRenderer$Tracer));
}

void D3DTextRenderer$Tracer::init$($D3DTextRenderer* d3dtr) {
	$D3DTextRenderer::init$($($D3DTextRenderer::access$000(d3dtr)));
}

void D3DTextRenderer$Tracer::drawGlyphList($SunGraphics2D* sg2d, $GlyphList* gl) {
	$GraphicsPrimitive::tracePrimitive("D3DDrawGlyphs"_s);
	$D3DTextRenderer::drawGlyphList(sg2d, gl);
}

D3DTextRenderer$Tracer::D3DTextRenderer$Tracer() {
}

$Class* D3DTextRenderer$Tracer::load$($String* name, bool initialize) {
	$loadClass(D3DTextRenderer$Tracer, name, initialize, &_D3DTextRenderer$Tracer_ClassInfo_, allocate$D3DTextRenderer$Tracer);
	return class$;
}

$Class* D3DTextRenderer$Tracer::class$ = nullptr;

		} // d3d
	} // java2d
} // sun