#include <sun/java2d/metal/MTLRenderer.h>

#include <java/awt/Composite.h>
#include <java/awt/Paint.h>
#include <java/awt/Transparency.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Path2D$Float.h>
#include <java/lang/ClassCastException.h>
#include <sun/java2d/InvalidPipeException.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/metal/MTLContext.h>
#include <sun/java2d/metal/MTLRenderer$Tracer.h>
#include <sun/java2d/metal/MTLSurfaceData.h>
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
using $MTLContext = ::sun::java2d::metal::MTLContext;
using $MTLRenderer$Tracer = ::sun::java2d::metal::MTLRenderer$Tracer;
using $MTLSurfaceData = ::sun::java2d::metal::MTLSurfaceData;
using $BufferedRenderPipe = ::sun::java2d::pipe::BufferedRenderPipe;
using $RenderBuffer = ::sun::java2d::pipe::RenderBuffer;
using $RenderQueue = ::sun::java2d::pipe::RenderQueue;
using $SpanIterator = ::sun::java2d::pipe::SpanIterator;
using $AccelSurface = ::sun::java2d::pipe::hw::AccelSurface;

namespace sun {
	namespace java2d {
		namespace metal {

$MethodInfo _MTLRenderer_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/pipe/RenderQueue;)V", nullptr, 0, $method(static_cast<void(MTLRenderer::*)($RenderQueue*)>(&MTLRenderer::init$))},
	{"access$000", "(Lsun/java2d/metal/MTLRenderer;)Lsun/java2d/pipe/RenderQueue;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$RenderQueue*(*)(MTLRenderer*)>(&MTLRenderer::access$000))},
	{"access$100", "(Lsun/java2d/metal/MTLRenderer;Lsun/java2d/SunGraphics2D;[I[IIZ)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(MTLRenderer*,$SunGraphics2D*,$ints*,$ints*,int32_t,bool)>(&MTLRenderer::access$100))},
	{"access$200", "(Lsun/java2d/metal/MTLRenderer;Lsun/java2d/SunGraphics2D;Ljava/awt/geom/Path2D$Float;II)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(MTLRenderer*,$SunGraphics2D*,$Path2D$Float*,int32_t,int32_t)>(&MTLRenderer::access$200))},
	{"access$300", "(Lsun/java2d/metal/MTLRenderer;Lsun/java2d/SunGraphics2D;Ljava/awt/geom/Path2D$Float;II)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(MTLRenderer*,$SunGraphics2D*,$Path2D$Float*,int32_t,int32_t)>(&MTLRenderer::access$300))},
	{"access$400", "(Lsun/java2d/metal/MTLRenderer;Lsun/java2d/SunGraphics2D;Lsun/java2d/pipe/SpanIterator;II)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(MTLRenderer*,$SunGraphics2D*,$SpanIterator*,int32_t,int32_t)>(&MTLRenderer::access$400))},
	{"copyArea", "(Lsun/java2d/SunGraphics2D;IIIIII)V", nullptr, 0},
	{"drawPoly", "([I[IIZII)V", nullptr, $PROTECTED | $NATIVE},
	{"traceWrap", "()Lsun/java2d/metal/MTLRenderer;", nullptr, 0},
	{"validateContext", "(Lsun/java2d/SunGraphics2D;)V", nullptr, $PROTECTED},
	{"validateContextAA", "(Lsun/java2d/SunGraphics2D;)V", nullptr, $PROTECTED},
	{}
};

#define _METHOD_INDEX_drawPoly 7

$InnerClassInfo _MTLRenderer_InnerClassesInfo_[] = {
	{"sun.java2d.metal.MTLRenderer$Tracer", "sun.java2d.metal.MTLRenderer", "Tracer", $PRIVATE},
	{}
};

$ClassInfo _MTLRenderer_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.metal.MTLRenderer",
	"sun.java2d.pipe.BufferedRenderPipe",
	nullptr,
	nullptr,
	_MTLRenderer_MethodInfo_,
	nullptr,
	nullptr,
	_MTLRenderer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.metal.MTLRenderer$Tracer,sun.java2d.metal.MTLRenderer$Tracer$1"
};

$Object* allocate$MTLRenderer($Class* clazz) {
	return $of($alloc(MTLRenderer));
}

void MTLRenderer::access$400(MTLRenderer* x0, $SunGraphics2D* x1, $SpanIterator* x2, int32_t x3, int32_t x4) {
	$init(MTLRenderer);
	$nc(x0)->fillSpans(x1, x2, x3, x4);
}

void MTLRenderer::access$300(MTLRenderer* x0, $SunGraphics2D* x1, $Path2D$Float* x2, int32_t x3, int32_t x4) {
	$init(MTLRenderer);
	$nc(x0)->fillPath(x1, x2, x3, x4);
}

void MTLRenderer::access$200(MTLRenderer* x0, $SunGraphics2D* x1, $Path2D$Float* x2, int32_t x3, int32_t x4) {
	$init(MTLRenderer);
	$nc(x0)->drawPath(x1, x2, x3, x4);
}

void MTLRenderer::access$100(MTLRenderer* x0, $SunGraphics2D* x1, $ints* x2, $ints* x3, int32_t x4, bool x5) {
	$init(MTLRenderer);
	$nc(x0)->drawPoly(x1, x2, x3, x4, x5);
}

$RenderQueue* MTLRenderer::access$000(MTLRenderer* x0) {
	$init(MTLRenderer);
	return $nc(x0)->rq;
}

void MTLRenderer::init$($RenderQueue* rq) {
	$BufferedRenderPipe::init$(rq);
}

void MTLRenderer::validateContext($SunGraphics2D* sg2d) {
	$useLocalCurrentObjectStackCache();
	int32_t ctxflags = $nc($nc(sg2d)->paint)->getTransparency() == $Transparency::OPAQUE ? $MTLContext::SRC_IS_OPAQUE : $MTLContext::NO_CONTEXT_FLAGS;
	$var($MTLSurfaceData, dstData, nullptr);
	try {
		$assign(dstData, $cast($MTLSurfaceData, $nc(sg2d)->surfaceData));
	} catch ($ClassCastException& e) {
		$throwNew($InvalidPipeException, $$str({"wrong surface data type: "_s, $nc(sg2d)->surfaceData}));
	}
	$MTLContext::validateContext(dstData, dstData, $($nc(sg2d)->getCompClip()), sg2d->composite, nullptr, sg2d->paint, sg2d, ctxflags);
}

void MTLRenderer::validateContextAA($SunGraphics2D* sg2d) {
	$useLocalCurrentObjectStackCache();
	int32_t ctxflags = $MTLContext::NO_CONTEXT_FLAGS;
	$var($MTLSurfaceData, dstData, nullptr);
	try {
		$assign(dstData, $cast($MTLSurfaceData, $nc(sg2d)->surfaceData));
	} catch ($ClassCastException& e) {
		$throwNew($InvalidPipeException, $$str({"wrong surface data type: "_s, $nc(sg2d)->surfaceData}));
	}
	$MTLContext::validateContext(dstData, dstData, $($nc(sg2d)->getCompClip()), sg2d->composite, nullptr, sg2d->paint, sg2d, ctxflags);
}

void MTLRenderer::copyArea($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t w, int32_t h, int32_t dx, int32_t dy) {
	$useLocalCurrentObjectStackCache();
	$nc(this->rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			int32_t ctxflags = $nc($nc(sg2d)->surfaceData)->getTransparency() == $Transparency::OPAQUE ? $MTLContext::SRC_IS_OPAQUE : $MTLContext::NO_CONTEXT_FLAGS;
			$var($MTLSurfaceData, dstData, nullptr);
			try {
				$assign(dstData, $cast($MTLSurfaceData, $nc(sg2d)->surfaceData));
			} catch ($ClassCastException& e) {
				$throwNew($InvalidPipeException, $$str({"wrong surface data type: "_s, $nc(sg2d)->surfaceData}));
			}
			$MTLContext::validateContext(dstData, dstData, $($nc(sg2d)->getCompClip()), sg2d->composite, nullptr, nullptr, nullptr, ctxflags);
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

void MTLRenderer::drawPoly($ints* xPoints, $ints* yPoints, int32_t nPoints, bool isClosed, int32_t transX, int32_t transY) {
	$prepareNative(MTLRenderer, drawPoly, void, $ints* xPoints, $ints* yPoints, int32_t nPoints, bool isClosed, int32_t transX, int32_t transY);
	$invokeNative(xPoints, yPoints, nPoints, isClosed, transX, transY);
	$finishNative();
}

MTLRenderer* MTLRenderer::traceWrap() {
	return $new($MTLRenderer$Tracer, this, this);
}

MTLRenderer::MTLRenderer() {
}

$Class* MTLRenderer::load$($String* name, bool initialize) {
	$loadClass(MTLRenderer, name, initialize, &_MTLRenderer_ClassInfo_, allocate$MTLRenderer);
	return class$;
}

$Class* MTLRenderer::class$ = nullptr;

		} // metal
	} // java2d
} // sun