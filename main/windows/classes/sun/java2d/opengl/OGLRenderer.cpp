#include <sun/java2d/opengl/OGLRenderer.h>

#include <java/awt/Composite.h>
#include <java/awt/Paint.h>
#include <java/awt/Transparency.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Path2D$Float.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/InvalidPipeException.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/opengl/OGLContext.h>
#include <sun/java2d/opengl/OGLRenderer$Tracer.h>
#include <sun/java2d/opengl/OGLSurfaceData.h>
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
using $OGLContext = ::sun::java2d::opengl::OGLContext;
using $OGLRenderer$Tracer = ::sun::java2d::opengl::OGLRenderer$Tracer;
using $OGLSurfaceData = ::sun::java2d::opengl::OGLSurfaceData;
using $BufferedContext = ::sun::java2d::pipe::BufferedContext;
using $BufferedRenderPipe = ::sun::java2d::pipe::BufferedRenderPipe;
using $Region = ::sun::java2d::pipe::Region;
using $RenderBuffer = ::sun::java2d::pipe::RenderBuffer;
using $RenderQueue = ::sun::java2d::pipe::RenderQueue;
using $SpanIterator = ::sun::java2d::pipe::SpanIterator;
using $AccelSurface = ::sun::java2d::pipe::hw::AccelSurface;

namespace sun {
	namespace java2d {
		namespace opengl {

$MethodInfo _OGLRenderer_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/pipe/RenderQueue;)V", nullptr, 0, $method(static_cast<void(OGLRenderer::*)($RenderQueue*)>(&OGLRenderer::init$))},
	{"access$000", "(Lsun/java2d/opengl/OGLRenderer;)Lsun/java2d/pipe/RenderQueue;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$RenderQueue*(*)(OGLRenderer*)>(&OGLRenderer::access$000))},
	{"access$100", "(Lsun/java2d/opengl/OGLRenderer;Lsun/java2d/SunGraphics2D;[I[IIZ)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(OGLRenderer*,$SunGraphics2D*,$ints*,$ints*,int32_t,bool)>(&OGLRenderer::access$100))},
	{"access$200", "(Lsun/java2d/opengl/OGLRenderer;Lsun/java2d/SunGraphics2D;Ljava/awt/geom/Path2D$Float;II)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(OGLRenderer*,$SunGraphics2D*,$Path2D$Float*,int32_t,int32_t)>(&OGLRenderer::access$200))},
	{"access$300", "(Lsun/java2d/opengl/OGLRenderer;Lsun/java2d/SunGraphics2D;Ljava/awt/geom/Path2D$Float;II)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(OGLRenderer*,$SunGraphics2D*,$Path2D$Float*,int32_t,int32_t)>(&OGLRenderer::access$300))},
	{"access$400", "(Lsun/java2d/opengl/OGLRenderer;Lsun/java2d/SunGraphics2D;Lsun/java2d/pipe/SpanIterator;II)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(OGLRenderer*,$SunGraphics2D*,$SpanIterator*,int32_t,int32_t)>(&OGLRenderer::access$400))},
	{"copyArea", "(Lsun/java2d/SunGraphics2D;IIIIII)V", nullptr, 0},
	{"drawPoly", "([I[IIZII)V", nullptr, $PROTECTED | $NATIVE},
	{"traceWrap", "()Lsun/java2d/opengl/OGLRenderer;", nullptr, 0},
	{"validateContext", "(Lsun/java2d/SunGraphics2D;)V", nullptr, $PROTECTED},
	{"validateContextAA", "(Lsun/java2d/SunGraphics2D;)V", nullptr, $PROTECTED},
	{}
};

#define _METHOD_INDEX_drawPoly 7

$InnerClassInfo _OGLRenderer_InnerClassesInfo_[] = {
	{"sun.java2d.opengl.OGLRenderer$Tracer", "sun.java2d.opengl.OGLRenderer", "Tracer", $PRIVATE},
	{}
};

$ClassInfo _OGLRenderer_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.opengl.OGLRenderer",
	"sun.java2d.pipe.BufferedRenderPipe",
	nullptr,
	nullptr,
	_OGLRenderer_MethodInfo_,
	nullptr,
	nullptr,
	_OGLRenderer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.opengl.OGLRenderer$Tracer,sun.java2d.opengl.OGLRenderer$Tracer$1"
};

$Object* allocate$OGLRenderer($Class* clazz) {
	return $of($alloc(OGLRenderer));
}

void OGLRenderer::access$400(OGLRenderer* x0, $SunGraphics2D* x1, $SpanIterator* x2, int32_t x3, int32_t x4) {
	$init(OGLRenderer);
	$nc(x0)->fillSpans(x1, x2, x3, x4);
}

void OGLRenderer::access$300(OGLRenderer* x0, $SunGraphics2D* x1, $Path2D$Float* x2, int32_t x3, int32_t x4) {
	$init(OGLRenderer);
	$nc(x0)->fillPath(x1, x2, x3, x4);
}

void OGLRenderer::access$200(OGLRenderer* x0, $SunGraphics2D* x1, $Path2D$Float* x2, int32_t x3, int32_t x4) {
	$init(OGLRenderer);
	$nc(x0)->drawPath(x1, x2, x3, x4);
}

void OGLRenderer::access$100(OGLRenderer* x0, $SunGraphics2D* x1, $ints* x2, $ints* x3, int32_t x4, bool x5) {
	$init(OGLRenderer);
	$nc(x0)->drawPoly(x1, x2, x3, x4, x5);
}

$RenderQueue* OGLRenderer::access$000(OGLRenderer* x0) {
	$init(OGLRenderer);
	return $nc(x0)->rq;
}

void OGLRenderer::init$($RenderQueue* rq) {
	$BufferedRenderPipe::init$(rq);
}

void OGLRenderer::validateContext($SunGraphics2D* sg2d) {
	int32_t ctxflags = $nc($nc(sg2d)->paint)->getTransparency() == $Transparency::OPAQUE ? $OGLContext::SRC_IS_OPAQUE : $OGLContext::NO_CONTEXT_FLAGS;
	$var($OGLSurfaceData, dstData, nullptr);
	try {
		$assign(dstData, $cast($OGLSurfaceData, $nc(sg2d)->surfaceData));
	} catch ($ClassCastException&) {
		$var($ClassCastException, e, $catch());
		$throwNew($InvalidPipeException, $$str({"wrong surface data type: "_s, $nc(sg2d)->surfaceData}));
	}
	$OGLContext::validateContext(dstData, dstData, $($nc(sg2d)->getCompClip()), sg2d->composite, nullptr, sg2d->paint, sg2d, ctxflags);
}

void OGLRenderer::validateContextAA($SunGraphics2D* sg2d) {
	int32_t ctxflags = $OGLContext::NO_CONTEXT_FLAGS;
	$var($OGLSurfaceData, dstData, nullptr);
	try {
		$assign(dstData, $cast($OGLSurfaceData, $nc(sg2d)->surfaceData));
	} catch ($ClassCastException&) {
		$var($ClassCastException, e, $catch());
		$throwNew($InvalidPipeException, $$str({"wrong surface data type: "_s, $nc(sg2d)->surfaceData}));
	}
	$OGLContext::validateContext(dstData, dstData, $($nc(sg2d)->getCompClip()), sg2d->composite, nullptr, sg2d->paint, sg2d, ctxflags);
}

void OGLRenderer::copyArea($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t w, int32_t h, int32_t dx, int32_t dy) {
	$nc(this->rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			int32_t ctxflags = $nc($nc(sg2d)->surfaceData)->getTransparency() == $Transparency::OPAQUE ? $OGLContext::SRC_IS_OPAQUE : $OGLContext::NO_CONTEXT_FLAGS;
			$var($OGLSurfaceData, dstData, nullptr);
			try {
				$assign(dstData, $cast($OGLSurfaceData, $nc(sg2d)->surfaceData));
			} catch ($ClassCastException&) {
				$var($ClassCastException, e, $catch());
				$throwNew($InvalidPipeException, $$str({"wrong surface data type: "_s, $nc(sg2d)->surfaceData}));
			}
			$OGLContext::validateContext(dstData, dstData, $($nc(sg2d)->getCompClip()), sg2d->composite, nullptr, nullptr, nullptr, ctxflags);
			$nc(this->rq)->ensureCapacity(28);
			$nc(this->buf)->putInt(30);
			$nc($($nc($($nc($($nc(this->buf)->putInt(x)))->putInt(y)))->putInt(w)))->putInt(h);
			$nc($($nc(this->buf)->putInt(dx)))->putInt(dy);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(this->rq)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void OGLRenderer::drawPoly($ints* xPoints, $ints* yPoints, int32_t nPoints, bool isClosed, int32_t transX, int32_t transY) {
	$prepareNative(OGLRenderer, drawPoly, void, $ints* xPoints, $ints* yPoints, int32_t nPoints, bool isClosed, int32_t transX, int32_t transY);
	$invokeNative(OGLRenderer, drawPoly, xPoints, yPoints, nPoints, isClosed, transX, transY);
	$finishNative();
}

OGLRenderer* OGLRenderer::traceWrap() {
	return $new($OGLRenderer$Tracer, this, this);
}

OGLRenderer::OGLRenderer() {
}

$Class* OGLRenderer::load$($String* name, bool initialize) {
	$loadClass(OGLRenderer, name, initialize, &_OGLRenderer_ClassInfo_, allocate$OGLRenderer);
	return class$;
}

$Class* OGLRenderer::class$ = nullptr;

		} // opengl
	} // java2d
} // sun