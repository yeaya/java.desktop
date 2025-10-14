#include <sun/java2d/d3d/D3DTextRenderer.h>

#include <java/awt/Composite.h>
#include <java/awt/Paint.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/d3d/D3DContext.h>
#include <sun/java2d/d3d/D3DSurfaceData.h>
#include <sun/java2d/d3d/D3DTextRenderer$Tracer.h>
#include <sun/java2d/pipe/BufferedTextPipe.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/pipe/RenderQueue.h>
#include <sun/java2d/pipe/hw/AccelSurface.h>
#include <jcpp.h>

#undef NO_CONTEXT_FLAGS

using $Composite = ::java::awt::Composite;
using $Paint = ::java::awt::Paint;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $D3DContext = ::sun::java2d::d3d::D3DContext;
using $D3DSurfaceData = ::sun::java2d::d3d::D3DSurfaceData;
using $D3DTextRenderer$Tracer = ::sun::java2d::d3d::D3DTextRenderer$Tracer;
using $BufferedContext = ::sun::java2d::pipe::BufferedContext;
using $BufferedTextPipe = ::sun::java2d::pipe::BufferedTextPipe;
using $Region = ::sun::java2d::pipe::Region;
using $RenderQueue = ::sun::java2d::pipe::RenderQueue;
using $AccelSurface = ::sun::java2d::pipe::hw::AccelSurface;

namespace sun {
	namespace java2d {
		namespace d3d {

$MethodInfo _D3DTextRenderer_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/pipe/RenderQueue;)V", nullptr, 0, $method(static_cast<void(D3DTextRenderer::*)($RenderQueue*)>(&D3DTextRenderer::init$))},
	{"access$000", "(Lsun/java2d/d3d/D3DTextRenderer;)Lsun/java2d/pipe/RenderQueue;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$RenderQueue*(*)(D3DTextRenderer*)>(&D3DTextRenderer::access$000))},
	{"drawGlyphList", "(IZZZIFF[J[F)V", nullptr, $PROTECTED | $NATIVE},
	{"traceWrap", "()Lsun/java2d/d3d/D3DTextRenderer;", nullptr, 0},
	{"validateContext", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Composite;)V", nullptr, $PROTECTED},
	{}
};

#define _METHOD_INDEX_drawGlyphList 2

$InnerClassInfo _D3DTextRenderer_InnerClassesInfo_[] = {
	{"sun.java2d.d3d.D3DTextRenderer$Tracer", "sun.java2d.d3d.D3DTextRenderer", "Tracer", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _D3DTextRenderer_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.d3d.D3DTextRenderer",
	"sun.java2d.pipe.BufferedTextPipe",
	nullptr,
	nullptr,
	_D3DTextRenderer_MethodInfo_,
	nullptr,
	nullptr,
	_D3DTextRenderer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.d3d.D3DTextRenderer$Tracer"
};

$Object* allocate$D3DTextRenderer($Class* clazz) {
	return $of($alloc(D3DTextRenderer));
}

$RenderQueue* D3DTextRenderer::access$000(D3DTextRenderer* x0) {
	$init(D3DTextRenderer);
	return $nc(x0)->rq;
}

void D3DTextRenderer::init$($RenderQueue* rq) {
	$BufferedTextPipe::init$(rq);
}

void D3DTextRenderer::drawGlyphList(int32_t numGlyphs, bool usePositions, bool subPixPos, bool rgbOrder, int32_t lcdContrast, float glOrigX, float glOrigY, $longs* images, $floats* positions) {
	$prepareNative(D3DTextRenderer, drawGlyphList, void, int32_t numGlyphs, bool usePositions, bool subPixPos, bool rgbOrder, int32_t lcdContrast, float glOrigX, float glOrigY, $longs* images, $floats* positions);
	$invokeNative(D3DTextRenderer, drawGlyphList, numGlyphs, usePositions, subPixPos, rgbOrder, lcdContrast, glOrigX, glOrigY, images, positions);
	$finishNative();
}

void D3DTextRenderer::validateContext($SunGraphics2D* sg2d, $Composite* comp) {
	$var($D3DSurfaceData, d3dDst, $cast($D3DSurfaceData, $nc(sg2d)->surfaceData));
	$D3DContext::validateContext(d3dDst, d3dDst, $(sg2d->getCompClip()), comp, nullptr, sg2d->paint, sg2d, $D3DContext::NO_CONTEXT_FLAGS);
}

D3DTextRenderer* D3DTextRenderer::traceWrap() {
	return $new($D3DTextRenderer$Tracer, this);
}

D3DTextRenderer::D3DTextRenderer() {
}

$Class* D3DTextRenderer::load$($String* name, bool initialize) {
	$loadClass(D3DTextRenderer, name, initialize, &_D3DTextRenderer_ClassInfo_, allocate$D3DTextRenderer);
	return class$;
}

$Class* D3DTextRenderer::class$ = nullptr;

		} // d3d
	} // java2d
} // sun