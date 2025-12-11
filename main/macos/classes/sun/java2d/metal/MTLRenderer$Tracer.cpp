#include <sun/java2d/metal/MTLRenderer$Tracer.h>

#include <java/awt/geom/Path2D$Float.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/metal/MTLRenderer$Tracer$1.h>
#include <sun/java2d/metal/MTLRenderer.h>
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
using $MTLRenderer = ::sun::java2d::metal::MTLRenderer;
using $MTLRenderer$Tracer$1 = ::sun::java2d::metal::MTLRenderer$Tracer$1;
using $ParallelogramPipe = ::sun::java2d::pipe::ParallelogramPipe;
using $SpanIterator = ::sun::java2d::pipe::SpanIterator;

namespace sun {
	namespace java2d {
		namespace metal {

$FieldInfo _MTLRenderer$Tracer_FieldInfo_[] = {
	{"this$0", "Lsun/java2d/metal/MTLRenderer;", nullptr, $FINAL | $SYNTHETIC, $field(MTLRenderer$Tracer, this$0)},
	{"mtlr", "Lsun/java2d/metal/MTLRenderer;", nullptr, $PRIVATE, $field(MTLRenderer$Tracer, mtlr)},
	{}
};

$MethodInfo _MTLRenderer$Tracer_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/metal/MTLRenderer;Lsun/java2d/metal/MTLRenderer;)V", nullptr, 0, $method(static_cast<void(MTLRenderer$Tracer::*)($MTLRenderer*,$MTLRenderer*)>(&MTLRenderer$Tracer::init$))},
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

$InnerClassInfo _MTLRenderer$Tracer_InnerClassesInfo_[] = {
	{"sun.java2d.metal.MTLRenderer$Tracer", "sun.java2d.metal.MTLRenderer", "Tracer", $PRIVATE},
	{"sun.java2d.metal.MTLRenderer$Tracer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MTLRenderer$Tracer_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.metal.MTLRenderer$Tracer",
	"sun.java2d.metal.MTLRenderer",
	nullptr,
	_MTLRenderer$Tracer_FieldInfo_,
	_MTLRenderer$Tracer_MethodInfo_,
	nullptr,
	nullptr,
	_MTLRenderer$Tracer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.metal.MTLRenderer"
};

$Object* allocate$MTLRenderer$Tracer($Class* clazz) {
	return $of($alloc(MTLRenderer$Tracer));
}

void MTLRenderer$Tracer::init$($MTLRenderer* this$0, $MTLRenderer* mtlr) {
	$set(this, this$0, this$0);
	$MTLRenderer::init$($($MTLRenderer::access$000(mtlr)));
	$set(this, mtlr, mtlr);
}

$ParallelogramPipe* MTLRenderer$Tracer::getAAParallelogramPipe() {
	$var($ParallelogramPipe, realpipe, $nc(this->mtlr)->getAAParallelogramPipe());
	return $new($MTLRenderer$Tracer$1, this, realpipe);
}

void MTLRenderer$Tracer::validateContext($SunGraphics2D* sg2d) {
	$nc(this->mtlr)->validateContext(sg2d);
}

void MTLRenderer$Tracer::drawLine($SunGraphics2D* sg2d, int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
	$GraphicsPrimitive::tracePrimitive("MTLDrawLine"_s);
	$nc(this->mtlr)->drawLine(sg2d, x1, y1, x2, y2);
}

void MTLRenderer$Tracer::drawRect($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t w, int32_t h) {
	$GraphicsPrimitive::tracePrimitive("MTLDrawRect"_s);
	$nc(this->mtlr)->drawRect(sg2d, x, y, w, h);
}

void MTLRenderer$Tracer::drawPoly($SunGraphics2D* sg2d, $ints* xPoints, $ints* yPoints, int32_t nPoints, bool isClosed) {
	$GraphicsPrimitive::tracePrimitive("MTLDrawPoly"_s);
	$MTLRenderer::access$100(this->mtlr, sg2d, xPoints, yPoints, nPoints, isClosed);
}

void MTLRenderer$Tracer::fillRect($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t w, int32_t h) {
	$GraphicsPrimitive::tracePrimitive("MTLFillRect"_s);
	$nc(this->mtlr)->fillRect(sg2d, x, y, w, h);
}

void MTLRenderer$Tracer::drawPath($SunGraphics2D* sg2d, $Path2D$Float* p2df, int32_t transx, int32_t transy) {
	$GraphicsPrimitive::tracePrimitive("MTLDrawPath"_s);
	$MTLRenderer::access$200(this->mtlr, sg2d, p2df, transx, transy);
}

void MTLRenderer$Tracer::fillPath($SunGraphics2D* sg2d, $Path2D$Float* p2df, int32_t transx, int32_t transy) {
	$GraphicsPrimitive::tracePrimitive("MTLFillPath"_s);
	$MTLRenderer::access$300(this->mtlr, sg2d, p2df, transx, transy);
}

void MTLRenderer$Tracer::fillSpans($SunGraphics2D* sg2d, $SpanIterator* si, int32_t transx, int32_t transy) {
	$GraphicsPrimitive::tracePrimitive("MTLFillSpans"_s);
	$MTLRenderer::access$400(this->mtlr, sg2d, si, transx, transy);
}

void MTLRenderer$Tracer::fillParallelogram($SunGraphics2D* sg2d, double ux1, double uy1, double ux2, double uy2, double x, double y, double dx1, double dy1, double dx2, double dy2) {
	$GraphicsPrimitive::tracePrimitive("MTLFillParallelogram"_s);
	$nc(this->mtlr)->fillParallelogram(sg2d, ux1, uy1, ux2, uy2, x, y, dx1, dy1, dx2, dy2);
}

void MTLRenderer$Tracer::drawParallelogram($SunGraphics2D* sg2d, double ux1, double uy1, double ux2, double uy2, double x, double y, double dx1, double dy1, double dx2, double dy2, double lw1, double lw2) {
	$GraphicsPrimitive::tracePrimitive("MTLDrawParallelogram"_s);
	$nc(this->mtlr)->drawParallelogram(sg2d, ux1, uy1, ux2, uy2, x, y, dx1, dy1, dx2, dy2, lw1, lw2);
}

void MTLRenderer$Tracer::copyArea($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t w, int32_t h, int32_t dx, int32_t dy) {
	$GraphicsPrimitive::tracePrimitive("MTLCopyArea"_s);
	$nc(this->mtlr)->copyArea(sg2d, x, y, w, h, dx, dy);
}

MTLRenderer$Tracer::MTLRenderer$Tracer() {
}

$Class* MTLRenderer$Tracer::load$($String* name, bool initialize) {
	$loadClass(MTLRenderer$Tracer, name, initialize, &_MTLRenderer$Tracer_ClassInfo_, allocate$MTLRenderer$Tracer);
	return class$;
}

$Class* MTLRenderer$Tracer::class$ = nullptr;

		} // metal
	} // java2d
} // sun