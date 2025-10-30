#include <sun/java2d/d3d/D3DRenderer.h>

#include <java/awt/Composite.h>
#include <java/awt/Paint.h>
#include <java/awt/Transparency.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Path2D$Float.h>
#include <java/lang/ClassCastException.h>
#include <sun/java2d/InvalidPipeException.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/d3d/D3DContext.h>
#include <sun/java2d/d3d/D3DRenderer$Tracer.h>
#include <sun/java2d/d3d/D3DSurfaceData.h>
#include <sun/java2d/pipe/BufferedRenderPipe.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/pipe/RenderBuffer.h>
#include <sun/java2d/pipe/RenderQueue.h>
#include <sun/java2d/pipe/SpanIterator.h>
#include <sun/java2d/pipe/hw/AccelSurface.h>
#include <jcpp.h>

#undef NO_CONTEXT_FLAGS
#undef OPAQUE
#undef SRC_IS_OPAQUE

using $Composite = ::java::awt::Composite;
using $Paint = ::java::awt::Paint;
using $Transparency = ::java::awt::Transparency;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Path2D$Float = ::java::awt::geom::Path2D$Float;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidPipeException = ::sun::java2d::InvalidPipeException;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $D3DContext = ::sun::java2d::d3d::D3DContext;
using $D3DRenderer$Tracer = ::sun::java2d::d3d::D3DRenderer$Tracer;
using $D3DSurfaceData = ::sun::java2d::d3d::D3DSurfaceData;
using $BufferedContext = ::sun::java2d::pipe::BufferedContext;
using $BufferedRenderPipe = ::sun::java2d::pipe::BufferedRenderPipe;
using $Region = ::sun::java2d::pipe::Region;
using $RenderBuffer = ::sun::java2d::pipe::RenderBuffer;
using $RenderQueue = ::sun::java2d::pipe::RenderQueue;
using $SpanIterator = ::sun::java2d::pipe::SpanIterator;
using $AccelSurface = ::sun::java2d::pipe::hw::AccelSurface;

namespace sun {
	namespace java2d {
		namespace d3d {

$MethodInfo _D3DRenderer_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/pipe/RenderQueue;)V", nullptr, 0, $method(static_cast<void(D3DRenderer::*)($RenderQueue*)>(&D3DRenderer::init$))},
	{"access$000", "(Lsun/java2d/d3d/D3DRenderer;)Lsun/java2d/pipe/RenderQueue;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$RenderQueue*(*)(D3DRenderer*)>(&D3DRenderer::access$000))},
	{"access$100", "(Lsun/java2d/d3d/D3DRenderer;Lsun/java2d/SunGraphics2D;[I[IIZ)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(D3DRenderer*,$SunGraphics2D*,$ints*,$ints*,int32_t,bool)>(&D3DRenderer::access$100))},
	{"access$200", "(Lsun/java2d/d3d/D3DRenderer;Lsun/java2d/SunGraphics2D;Ljava/awt/geom/Path2D$Float;II)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(D3DRenderer*,$SunGraphics2D*,$Path2D$Float*,int32_t,int32_t)>(&D3DRenderer::access$200))},
	{"access$300", "(Lsun/java2d/d3d/D3DRenderer;Lsun/java2d/SunGraphics2D;Ljava/awt/geom/Path2D$Float;II)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(D3DRenderer*,$SunGraphics2D*,$Path2D$Float*,int32_t,int32_t)>(&D3DRenderer::access$300))},
	{"access$400", "(Lsun/java2d/d3d/D3DRenderer;Lsun/java2d/SunGraphics2D;Lsun/java2d/pipe/SpanIterator;II)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(D3DRenderer*,$SunGraphics2D*,$SpanIterator*,int32_t,int32_t)>(&D3DRenderer::access$400))},
	{"copyArea", "(Lsun/java2d/SunGraphics2D;IIIIII)V", nullptr, 0},
	{"drawPoly", "([I[IIZII)V", nullptr, $PROTECTED | $NATIVE},
	{"traceWrap", "()Lsun/java2d/d3d/D3DRenderer;", nullptr, 0},
	{"validateContext", "(Lsun/java2d/SunGraphics2D;)V", nullptr, $PROTECTED},
	{"validateContextAA", "(Lsun/java2d/SunGraphics2D;)V", nullptr, $PROTECTED},
	{}
};

#define _METHOD_INDEX_drawPoly 7

$InnerClassInfo _D3DRenderer_InnerClassesInfo_[] = {
	{"sun.java2d.d3d.D3DRenderer$Tracer", "sun.java2d.d3d.D3DRenderer", "Tracer", $PRIVATE},
	{}
};

$ClassInfo _D3DRenderer_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.d3d.D3DRenderer",
	"sun.java2d.pipe.BufferedRenderPipe",
	nullptr,
	nullptr,
	_D3DRenderer_MethodInfo_,
	nullptr,
	nullptr,
	_D3DRenderer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.d3d.D3DRenderer$Tracer,sun.java2d.d3d.D3DRenderer$Tracer$1"
};

$Object* allocate$D3DRenderer($Class* clazz) {
	return $of($alloc(D3DRenderer));
}

void D3DRenderer::access$400(D3DRenderer* x0, $SunGraphics2D* x1, $SpanIterator* x2, int32_t x3, int32_t x4) {
	$init(D3DRenderer);
	$nc(x0)->fillSpans(x1, x2, x3, x4);
}

void D3DRenderer::access$300(D3DRenderer* x0, $SunGraphics2D* x1, $Path2D$Float* x2, int32_t x3, int32_t x4) {
	$init(D3DRenderer);
	$nc(x0)->fillPath(x1, x2, x3, x4);
}

void D3DRenderer::access$200(D3DRenderer* x0, $SunGraphics2D* x1, $Path2D$Float* x2, int32_t x3, int32_t x4) {
	$init(D3DRenderer);
	$nc(x0)->drawPath(x1, x2, x3, x4);
}

void D3DRenderer::access$100(D3DRenderer* x0, $SunGraphics2D* x1, $ints* x2, $ints* x3, int32_t x4, bool x5) {
	$init(D3DRenderer);
	$nc(x0)->drawPoly(x1, x2, x3, x4, x5);
}

$RenderQueue* D3DRenderer::access$000(D3DRenderer* x0) {
	$init(D3DRenderer);
	return $nc(x0)->rq;
}

void D3DRenderer::init$($RenderQueue* rq) {
	$BufferedRenderPipe::init$(rq);
}

void D3DRenderer::validateContext($SunGraphics2D* sg2d) {
	$useLocalCurrentObjectStackCache();
	int32_t ctxflags = $nc($nc(sg2d)->paint)->getTransparency() == $Transparency::OPAQUE ? $D3DContext::SRC_IS_OPAQUE : $D3DContext::NO_CONTEXT_FLAGS;
	$var($D3DSurfaceData, dstData, nullptr);
	try {
		$assign(dstData, $cast($D3DSurfaceData, $nc(sg2d)->surfaceData));
	} catch ($ClassCastException& e) {
		$throwNew($InvalidPipeException, $$str({"wrong surface data type: "_s, $nc(sg2d)->surfaceData}));
	}
	$D3DContext::validateContext(dstData, dstData, $($nc(sg2d)->getCompClip()), sg2d->composite, nullptr, sg2d->paint, sg2d, ctxflags);
}

void D3DRenderer::validateContextAA($SunGraphics2D* sg2d) {
	$useLocalCurrentObjectStackCache();
	int32_t ctxflags = $D3DContext::NO_CONTEXT_FLAGS;
	$var($D3DSurfaceData, dstData, nullptr);
	try {
		$assign(dstData, $cast($D3DSurfaceData, $nc(sg2d)->surfaceData));
	} catch ($ClassCastException& e) {
		$throwNew($InvalidPipeException, $$str({"wrong surface data type: "_s, $nc(sg2d)->surfaceData}));
	}
	$D3DContext::validateContext(dstData, dstData, $($nc(sg2d)->getCompClip()), sg2d->composite, nullptr, sg2d->paint, sg2d, ctxflags);
}

void D3DRenderer::copyArea($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t w, int32_t h, int32_t dx, int32_t dy) {
	$useLocalCurrentObjectStackCache();
	$nc(this->rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			int32_t ctxflags = $nc($nc(sg2d)->surfaceData)->getTransparency() == $Transparency::OPAQUE ? $D3DContext::SRC_IS_OPAQUE : $D3DContext::NO_CONTEXT_FLAGS;
			$var($D3DSurfaceData, dstData, nullptr);
			try {
				$assign(dstData, $cast($D3DSurfaceData, $nc(sg2d)->surfaceData));
			} catch ($ClassCastException& e) {
				$throwNew($InvalidPipeException, $$str({"wrong surface data type: "_s, $nc(sg2d)->surfaceData}));
			}
			$D3DContext::validateContext(dstData, dstData, $($nc(sg2d)->getCompClip()), sg2d->composite, nullptr, nullptr, nullptr, ctxflags);
			$nc(this->rq)->ensureCapacity(28);
			$nc(this->buf)->putInt(30);
			$nc($($nc($($nc($($nc(this->buf)->putInt(x)))->putInt(y)))->putInt(w)))->putInt(h);
			$nc($($nc(this->buf)->putInt(dx)))->putInt(dy);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->rq)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void D3DRenderer::drawPoly($ints* xPoints, $ints* yPoints, int32_t nPoints, bool isClosed, int32_t transX, int32_t transY) {
	$prepareNative(D3DRenderer, drawPoly, void, $ints* xPoints, $ints* yPoints, int32_t nPoints, bool isClosed, int32_t transX, int32_t transY);
	$invokeNative(D3DRenderer, drawPoly, xPoints, yPoints, nPoints, isClosed, transX, transY);
	$finishNative();
}

D3DRenderer* D3DRenderer::traceWrap() {
	return $new($D3DRenderer$Tracer, this, this);
}

D3DRenderer::D3DRenderer() {
}

$Class* D3DRenderer::load$($String* name, bool initialize) {
	$loadClass(D3DRenderer, name, initialize, &_D3DRenderer_ClassInfo_, allocate$D3DRenderer);
	return class$;
}

$Class* D3DRenderer::class$ = nullptr;

		} // d3d
	} // java2d
} // sun