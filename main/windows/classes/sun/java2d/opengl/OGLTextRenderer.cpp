#include <sun/java2d/opengl/OGLTextRenderer.h>

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
#include <sun/java2d/opengl/OGLContext.h>
#include <sun/java2d/opengl/OGLSurfaceData.h>
#include <sun/java2d/opengl/OGLTextRenderer$Tracer.h>
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
using $OGLContext = ::sun::java2d::opengl::OGLContext;
using $OGLSurfaceData = ::sun::java2d::opengl::OGLSurfaceData;
using $OGLTextRenderer$Tracer = ::sun::java2d::opengl::OGLTextRenderer$Tracer;
using $BufferedContext = ::sun::java2d::pipe::BufferedContext;
using $BufferedTextPipe = ::sun::java2d::pipe::BufferedTextPipe;
using $Region = ::sun::java2d::pipe::Region;
using $RenderQueue = ::sun::java2d::pipe::RenderQueue;
using $AccelSurface = ::sun::java2d::pipe::hw::AccelSurface;

namespace sun {
	namespace java2d {
		namespace opengl {

$MethodInfo _OGLTextRenderer_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/pipe/RenderQueue;)V", nullptr, 0, $method(static_cast<void(OGLTextRenderer::*)($RenderQueue*)>(&OGLTextRenderer::init$))},
	{"access$000", "(Lsun/java2d/opengl/OGLTextRenderer;)Lsun/java2d/pipe/RenderQueue;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$RenderQueue*(*)(OGLTextRenderer*)>(&OGLTextRenderer::access$000))},
	{"drawGlyphList", "(IZZZIFF[J[F)V", nullptr, $PROTECTED | $NATIVE},
	{"traceWrap", "()Lsun/java2d/opengl/OGLTextRenderer;", nullptr, 0},
	{"validateContext", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Composite;)V", nullptr, $PROTECTED},
	{}
};

#define _METHOD_INDEX_drawGlyphList 2

$InnerClassInfo _OGLTextRenderer_InnerClassesInfo_[] = {
	{"sun.java2d.opengl.OGLTextRenderer$Tracer", "sun.java2d.opengl.OGLTextRenderer", "Tracer", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _OGLTextRenderer_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.opengl.OGLTextRenderer",
	"sun.java2d.pipe.BufferedTextPipe",
	nullptr,
	nullptr,
	_OGLTextRenderer_MethodInfo_,
	nullptr,
	nullptr,
	_OGLTextRenderer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.opengl.OGLTextRenderer$Tracer"
};

$Object* allocate$OGLTextRenderer($Class* clazz) {
	return $of($alloc(OGLTextRenderer));
}

$RenderQueue* OGLTextRenderer::access$000(OGLTextRenderer* x0) {
	$init(OGLTextRenderer);
	return $nc(x0)->rq;
}

void OGLTextRenderer::init$($RenderQueue* rq) {
	$BufferedTextPipe::init$(rq);
}

void OGLTextRenderer::drawGlyphList(int32_t numGlyphs, bool usePositions, bool subPixPos, bool rgbOrder, int32_t lcdContrast, float glOrigX, float glOrigY, $longs* images, $floats* positions) {
	$prepareNative(OGLTextRenderer, drawGlyphList, void, int32_t numGlyphs, bool usePositions, bool subPixPos, bool rgbOrder, int32_t lcdContrast, float glOrigX, float glOrigY, $longs* images, $floats* positions);
	$invokeNative(OGLTextRenderer, drawGlyphList, numGlyphs, usePositions, subPixPos, rgbOrder, lcdContrast, glOrigX, glOrigY, images, positions);
	$finishNative();
}

void OGLTextRenderer::validateContext($SunGraphics2D* sg2d, $Composite* comp) {
	$var($OGLSurfaceData, oglDst, $cast($OGLSurfaceData, $nc(sg2d)->surfaceData));
	$OGLContext::validateContext(oglDst, oglDst, $(sg2d->getCompClip()), comp, nullptr, sg2d->paint, sg2d, $OGLContext::NO_CONTEXT_FLAGS);
}

OGLTextRenderer* OGLTextRenderer::traceWrap() {
	return $new($OGLTextRenderer$Tracer, this);
}

OGLTextRenderer::OGLTextRenderer() {
}

$Class* OGLTextRenderer::load$($String* name, bool initialize) {
	$loadClass(OGLTextRenderer, name, initialize, &_OGLTextRenderer_ClassInfo_, allocate$OGLTextRenderer);
	return class$;
}

$Class* OGLTextRenderer::class$ = nullptr;

		} // opengl
	} // java2d
} // sun