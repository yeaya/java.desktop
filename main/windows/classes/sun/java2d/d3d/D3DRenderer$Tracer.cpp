#include <sun/java2d/d3d/D3DRenderer$Tracer.h>

#include <java/awt/geom/Path2D$Float.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/d3d/D3DRenderer$Tracer$1.h>
#include <sun/java2d/d3d/D3DRenderer.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
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
using $D3DRenderer = ::sun::java2d::d3d::D3DRenderer;
using $D3DRenderer$Tracer$1 = ::sun::java2d::d3d::D3DRenderer$Tracer$1;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $BufferedRenderPipe = ::sun::java2d::pipe::BufferedRenderPipe;
using $ParallelogramPipe = ::sun::java2d::pipe::ParallelogramPipe;
using $RenderQueue = ::sun::java2d::pipe::RenderQueue;
using $SpanIterator = ::sun::java2d::pipe::SpanIterator;

namespace sun {
	namespace java2d {
		namespace d3d {

$FieldInfo _D3DRenderer$Tracer_FieldInfo_[] = {
	{"this$0", "Lsun/java2d/d3d/D3DRenderer;", nullptr, $FINAL | $SYNTHETIC, $field(D3DRenderer$Tracer, this$0)},
	{"d3dr", "Lsun/java2d/d3d/D3DRenderer;", nullptr, $PRIVATE, $field(D3DRenderer$Tracer, d3dr)},
	{}
};

$MethodInfo _D3DRenderer$Tracer_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/d3d/D3DRenderer;Lsun/java2d/d3d/D3DRenderer;)V", nullptr, 0, $method(static_cast<void(D3DRenderer$Tracer::*)($D3DRenderer*,$D3DRenderer*)>(&D3DRenderer$Tracer::init$))},
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

$InnerClassInfo _D3DRenderer$Tracer_InnerClassesInfo_[] = {
	{"sun.java2d.d3d.D3DRenderer$Tracer", "sun.java2d.d3d.D3DRenderer", "Tracer", $PRIVATE},
	{"sun.java2d.d3d.D3DRenderer$Tracer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _D3DRenderer$Tracer_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.d3d.D3DRenderer$Tracer",
	"sun.java2d.d3d.D3DRenderer",
	nullptr,
	_D3DRenderer$Tracer_FieldInfo_,
	_D3DRenderer$Tracer_MethodInfo_,
	nullptr,
	nullptr,
	_D3DRenderer$Tracer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.d3d.D3DRenderer"
};

$Object* allocate$D3DRenderer$Tracer($Class* clazz) {
	return $of($alloc(D3DRenderer$Tracer));
}

void D3DRenderer$Tracer::init$($D3DRenderer* this$0, $D3DRenderer* d3dr) {
	$set(this, this$0, this$0);
	$D3DRenderer::init$($($D3DRenderer::access$000(d3dr)));
	$set(this, d3dr, d3dr);
}

$ParallelogramPipe* D3DRenderer$Tracer::getAAParallelogramPipe() {
	$var($ParallelogramPipe, realpipe, $nc(this->d3dr)->getAAParallelogramPipe());
	return $new($D3DRenderer$Tracer$1, this, realpipe);
}

void D3DRenderer$Tracer::validateContext($SunGraphics2D* sg2d) {
	$nc(this->d3dr)->validateContext(sg2d);
}

void D3DRenderer$Tracer::drawLine($SunGraphics2D* sg2d, int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
	$GraphicsPrimitive::tracePrimitive("D3DDrawLine"_s);
	$nc(this->d3dr)->drawLine(sg2d, x1, y1, x2, y2);
}

void D3DRenderer$Tracer::drawRect($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t w, int32_t h) {
	$GraphicsPrimitive::tracePrimitive("D3DDrawRect"_s);
	$nc(this->d3dr)->drawRect(sg2d, x, y, w, h);
}

void D3DRenderer$Tracer::drawPoly($SunGraphics2D* sg2d, $ints* xPoints, $ints* yPoints, int32_t nPoints, bool isClosed) {
	$GraphicsPrimitive::tracePrimitive("D3DDrawPoly"_s);
	$D3DRenderer::access$100(this->d3dr, sg2d, xPoints, yPoints, nPoints, isClosed);
}

void D3DRenderer$Tracer::fillRect($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t w, int32_t h) {
	$GraphicsPrimitive::tracePrimitive("D3DFillRect"_s);
	$nc(this->d3dr)->fillRect(sg2d, x, y, w, h);
}

void D3DRenderer$Tracer::drawPath($SunGraphics2D* sg2d, $Path2D$Float* p2df, int32_t transx, int32_t transy) {
	$GraphicsPrimitive::tracePrimitive("D3DDrawPath"_s);
	$D3DRenderer::access$200(this->d3dr, sg2d, p2df, transx, transy);
}

void D3DRenderer$Tracer::fillPath($SunGraphics2D* sg2d, $Path2D$Float* p2df, int32_t transx, int32_t transy) {
	$GraphicsPrimitive::tracePrimitive("D3DFillPath"_s);
	$D3DRenderer::access$300(this->d3dr, sg2d, p2df, transx, transy);
}

void D3DRenderer$Tracer::fillSpans($SunGraphics2D* sg2d, $SpanIterator* si, int32_t transx, int32_t transy) {
	$GraphicsPrimitive::tracePrimitive("D3DFillSpans"_s);
	$D3DRenderer::access$400(this->d3dr, sg2d, si, transx, transy);
}

void D3DRenderer$Tracer::fillParallelogram($SunGraphics2D* sg2d, double ux1, double uy1, double ux2, double uy2, double x, double y, double dx1, double dy1, double dx2, double dy2) {
	$GraphicsPrimitive::tracePrimitive("D3DFillParallelogram"_s);
	$nc(this->d3dr)->fillParallelogram(sg2d, ux1, uy1, ux2, uy2, x, y, dx1, dy1, dx2, dy2);
}

void D3DRenderer$Tracer::drawParallelogram($SunGraphics2D* sg2d, double ux1, double uy1, double ux2, double uy2, double x, double y, double dx1, double dy1, double dx2, double dy2, double lw1, double lw2) {
	$GraphicsPrimitive::tracePrimitive("D3DDrawParallelogram"_s);
	$nc(this->d3dr)->drawParallelogram(sg2d, ux1, uy1, ux2, uy2, x, y, dx1, dy1, dx2, dy2, lw1, lw2);
}

void D3DRenderer$Tracer::copyArea($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t w, int32_t h, int32_t dx, int32_t dy) {
	$GraphicsPrimitive::tracePrimitive("D3DCopyArea"_s);
	$nc(this->d3dr)->copyArea(sg2d, x, y, w, h, dx, dy);
}

D3DRenderer$Tracer::D3DRenderer$Tracer() {
}

$Class* D3DRenderer$Tracer::load$($String* name, bool initialize) {
	$loadClass(D3DRenderer$Tracer, name, initialize, &_D3DRenderer$Tracer_ClassInfo_, allocate$D3DRenderer$Tracer);
	return class$;
}

$Class* D3DRenderer$Tracer::class$ = nullptr;

		} // d3d
	} // java2d
} // sun