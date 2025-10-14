#include <sun/java2d/opengl/OGLRenderer$Tracer.h>

#include <java/awt/geom/Path2D$Float.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/opengl/OGLRenderer$Tracer$1.h>
#include <sun/java2d/opengl/OGLRenderer.h>
#include <sun/java2d/pipe/BufferedRenderPipe.h>
#include <sun/java2d/pipe/ParallelogramPipe.h>
#include <sun/java2d/pipe/RenderQueue.h>
#include <sun/java2d/pipe/SpanIterator.h>
#include <jcpp.h>

using $Path2D$Float = ::java::awt::geom::Path2D$Float;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $OGLRenderer = ::sun::java2d::opengl::OGLRenderer;
using $OGLRenderer$Tracer$1 = ::sun::java2d::opengl::OGLRenderer$Tracer$1;
using $BufferedRenderPipe = ::sun::java2d::pipe::BufferedRenderPipe;
using $ParallelogramPipe = ::sun::java2d::pipe::ParallelogramPipe;
using $RenderQueue = ::sun::java2d::pipe::RenderQueue;
using $SpanIterator = ::sun::java2d::pipe::SpanIterator;

namespace sun {
	namespace java2d {
		namespace opengl {

$FieldInfo _OGLRenderer$Tracer_FieldInfo_[] = {
	{"this$0", "Lsun/java2d/opengl/OGLRenderer;", nullptr, $FINAL | $SYNTHETIC, $field(OGLRenderer$Tracer, this$0)},
	{"oglr", "Lsun/java2d/opengl/OGLRenderer;", nullptr, $PRIVATE, $field(OGLRenderer$Tracer, oglr)},
	{}
};

$MethodInfo _OGLRenderer$Tracer_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/opengl/OGLRenderer;Lsun/java2d/opengl/OGLRenderer;)V", nullptr, 0, $method(static_cast<void(OGLRenderer$Tracer::*)($OGLRenderer*,$OGLRenderer*)>(&OGLRenderer$Tracer::init$))},
	{"copyArea", "(Lsun/java2d/SunGraphics2D;IIIIII)V", nullptr, $PUBLIC},
	{"drawLine", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC},
	{"drawParallelogram", "(Lsun/java2d/SunGraphics2D;DDDDDDDDDDDD)V", nullptr, $PUBLIC},
	{"drawPath", "(Lsun/java2d/SunGraphics2D;Ljava/awt/geom/Path2D$Float;II)V", nullptr, $PROTECTED},
	{"drawPoly", "(Lsun/java2d/SunGraphics2D;[I[IIZ)V", nullptr, $PROTECTED},
	{"drawRect", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC},
	{"fillParallelogram", "(Lsun/java2d/SunGraphics2D;DDDDDDDDDD)V", nullptr, $PUBLIC},
	{"fillPath", "(Lsun/java2d/SunGraphics2D;Ljava/awt/geom/Path2D$Float;II)V", nullptr, $PROTECTED},
	{"fillRect", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC},
	{"fillSpans", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/pipe/SpanIterator;II)V", nullptr, $PROTECTED},
	{"getAAParallelogramPipe", "()Lsun/java2d/pipe/ParallelogramPipe;", nullptr, $PUBLIC},
	{"validateContext", "(Lsun/java2d/SunGraphics2D;)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _OGLRenderer$Tracer_InnerClassesInfo_[] = {
	{"sun.java2d.opengl.OGLRenderer$Tracer", "sun.java2d.opengl.OGLRenderer", "Tracer", $PRIVATE},
	{"sun.java2d.opengl.OGLRenderer$Tracer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _OGLRenderer$Tracer_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.opengl.OGLRenderer$Tracer",
	"sun.java2d.opengl.OGLRenderer",
	nullptr,
	_OGLRenderer$Tracer_FieldInfo_,
	_OGLRenderer$Tracer_MethodInfo_,
	nullptr,
	nullptr,
	_OGLRenderer$Tracer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.opengl.OGLRenderer"
};

$Object* allocate$OGLRenderer$Tracer($Class* clazz) {
	return $of($alloc(OGLRenderer$Tracer));
}

void OGLRenderer$Tracer::init$($OGLRenderer* this$0, $OGLRenderer* oglr) {
	$set(this, this$0, this$0);
	$OGLRenderer::init$($($OGLRenderer::access$000(oglr)));
	$set(this, oglr, oglr);
}

$ParallelogramPipe* OGLRenderer$Tracer::getAAParallelogramPipe() {
	$var($ParallelogramPipe, realpipe, $nc(this->oglr)->getAAParallelogramPipe());
	return $new($OGLRenderer$Tracer$1, this, realpipe);
}

void OGLRenderer$Tracer::validateContext($SunGraphics2D* sg2d) {
	$nc(this->oglr)->validateContext(sg2d);
}

void OGLRenderer$Tracer::drawLine($SunGraphics2D* sg2d, int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
	$GraphicsPrimitive::tracePrimitive("OGLDrawLine"_s);
	$nc(this->oglr)->drawLine(sg2d, x1, y1, x2, y2);
}

void OGLRenderer$Tracer::drawRect($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t w, int32_t h) {
	$GraphicsPrimitive::tracePrimitive("OGLDrawRect"_s);
	$nc(this->oglr)->drawRect(sg2d, x, y, w, h);
}

void OGLRenderer$Tracer::drawPoly($SunGraphics2D* sg2d, $ints* xPoints, $ints* yPoints, int32_t nPoints, bool isClosed) {
	$GraphicsPrimitive::tracePrimitive("OGLDrawPoly"_s);
	$OGLRenderer::access$100(this->oglr, sg2d, xPoints, yPoints, nPoints, isClosed);
}

void OGLRenderer$Tracer::fillRect($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t w, int32_t h) {
	$GraphicsPrimitive::tracePrimitive("OGLFillRect"_s);
	$nc(this->oglr)->fillRect(sg2d, x, y, w, h);
}

void OGLRenderer$Tracer::drawPath($SunGraphics2D* sg2d, $Path2D$Float* p2df, int32_t transx, int32_t transy) {
	$GraphicsPrimitive::tracePrimitive("OGLDrawPath"_s);
	$OGLRenderer::access$200(this->oglr, sg2d, p2df, transx, transy);
}

void OGLRenderer$Tracer::fillPath($SunGraphics2D* sg2d, $Path2D$Float* p2df, int32_t transx, int32_t transy) {
	$GraphicsPrimitive::tracePrimitive("OGLFillPath"_s);
	$OGLRenderer::access$300(this->oglr, sg2d, p2df, transx, transy);
}

void OGLRenderer$Tracer::fillSpans($SunGraphics2D* sg2d, $SpanIterator* si, int32_t transx, int32_t transy) {
	$GraphicsPrimitive::tracePrimitive("OGLFillSpans"_s);
	$OGLRenderer::access$400(this->oglr, sg2d, si, transx, transy);
}

void OGLRenderer$Tracer::fillParallelogram($SunGraphics2D* sg2d, double ux1, double uy1, double ux2, double uy2, double x, double y, double dx1, double dy1, double dx2, double dy2) {
	$GraphicsPrimitive::tracePrimitive("OGLFillParallelogram"_s);
	$nc(this->oglr)->fillParallelogram(sg2d, ux1, uy1, ux2, uy2, x, y, dx1, dy1, dx2, dy2);
}

void OGLRenderer$Tracer::drawParallelogram($SunGraphics2D* sg2d, double ux1, double uy1, double ux2, double uy2, double x, double y, double dx1, double dy1, double dx2, double dy2, double lw1, double lw2) {
	$GraphicsPrimitive::tracePrimitive("OGLDrawParallelogram"_s);
	$nc(this->oglr)->drawParallelogram(sg2d, ux1, uy1, ux2, uy2, x, y, dx1, dy1, dx2, dy2, lw1, lw2);
}

void OGLRenderer$Tracer::copyArea($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t w, int32_t h, int32_t dx, int32_t dy) {
	$GraphicsPrimitive::tracePrimitive("OGLCopyArea"_s);
	$nc(this->oglr)->copyArea(sg2d, x, y, w, h, dx, dy);
}

OGLRenderer$Tracer::OGLRenderer$Tracer() {
}

$Class* OGLRenderer$Tracer::load$($String* name, bool initialize) {
	$loadClass(OGLRenderer$Tracer, name, initialize, &_OGLRenderer$Tracer_ClassInfo_, allocate$OGLRenderer$Tracer);
	return class$;
}

$Class* OGLRenderer$Tracer::class$ = nullptr;

		} // opengl
	} // java2d
} // sun