#include <sun/java2d/x11/X11Renderer$X11TracingRenderer.h>

#include <java/awt/geom/Path2D$Float.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/pipe/SpanIterator.h>
#include <sun/java2d/x11/X11Renderer.h>
#include <jcpp.h>

using $Path2D$Float = ::java::awt::geom::Path2D$Float;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $SpanIterator = ::sun::java2d::pipe::SpanIterator;
using $X11Renderer = ::sun::java2d::x11::X11Renderer;

namespace sun {
	namespace java2d {
		namespace x11 {

$MethodInfo _X11Renderer$X11TracingRenderer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(X11Renderer$X11TracingRenderer::*)()>(&X11Renderer$X11TracingRenderer::init$))},
	{"XDoPath", "(Lsun/java2d/SunGraphics2D;JJIILjava/awt/geom/Path2D$Float;Z)V", nullptr, 0},
	{"XDrawArc", "(JJIIIIII)V", nullptr, 0},
	{"XDrawLine", "(JJIIII)V", nullptr, 0},
	{"XDrawOval", "(JJIIII)V", nullptr, 0},
	{"XDrawPoly", "(JJII[I[IIZ)V", nullptr, 0},
	{"XDrawRect", "(JJIIII)V", nullptr, 0},
	{"XDrawRoundRect", "(JJIIIIII)V", nullptr, 0},
	{"XFillArc", "(JJIIIIII)V", nullptr, 0},
	{"XFillOval", "(JJIIII)V", nullptr, 0},
	{"XFillPoly", "(JJII[I[II)V", nullptr, 0},
	{"XFillRect", "(JJIIII)V", nullptr, 0},
	{"XFillRoundRect", "(JJIIIIII)V", nullptr, 0},
	{"XFillSpans", "(JJLsun/java2d/pipe/SpanIterator;JII)V", nullptr, 0},
	{"devCopyArea", "(JJIIIIII)V", nullptr, 0},
	{}
};

$InnerClassInfo _X11Renderer$X11TracingRenderer_InnerClassesInfo_[] = {
	{"sun.java2d.x11.X11Renderer$X11TracingRenderer", "sun.java2d.x11.X11Renderer", "X11TracingRenderer", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _X11Renderer$X11TracingRenderer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.x11.X11Renderer$X11TracingRenderer",
	"sun.java2d.x11.X11Renderer",
	nullptr,
	nullptr,
	_X11Renderer$X11TracingRenderer_MethodInfo_,
	nullptr,
	nullptr,
	_X11Renderer$X11TracingRenderer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.x11.X11Renderer"
};

$Object* allocate$X11Renderer$X11TracingRenderer($Class* clazz) {
	return $of($alloc(X11Renderer$X11TracingRenderer));
}

void X11Renderer$X11TracingRenderer::init$() {
	$X11Renderer::init$();
}

void X11Renderer$X11TracingRenderer::XDrawLine(int64_t pXSData, int64_t xgc, int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
	$GraphicsPrimitive::tracePrimitive("X11DrawLine"_s);
	$X11Renderer::XDrawLine(pXSData, xgc, x1, y1, x2, y2);
}

void X11Renderer$X11TracingRenderer::XDrawRect(int64_t pXSData, int64_t xgc, int32_t x, int32_t y, int32_t w, int32_t h) {
	$GraphicsPrimitive::tracePrimitive("X11DrawRect"_s);
	$X11Renderer::XDrawRect(pXSData, xgc, x, y, w, h);
}

void X11Renderer$X11TracingRenderer::XDrawRoundRect(int64_t pXSData, int64_t xgc, int32_t x, int32_t y, int32_t w, int32_t h, int32_t arcW, int32_t arcH) {
	$GraphicsPrimitive::tracePrimitive("X11DrawRoundRect"_s);
	$X11Renderer::XDrawRoundRect(pXSData, xgc, x, y, w, h, arcW, arcH);
}

void X11Renderer$X11TracingRenderer::XDrawOval(int64_t pXSData, int64_t xgc, int32_t x, int32_t y, int32_t w, int32_t h) {
	$GraphicsPrimitive::tracePrimitive("X11DrawOval"_s);
	$X11Renderer::XDrawOval(pXSData, xgc, x, y, w, h);
}

void X11Renderer$X11TracingRenderer::XDrawArc(int64_t pXSData, int64_t xgc, int32_t x, int32_t y, int32_t w, int32_t h, int32_t angleStart, int32_t angleExtent) {
	$GraphicsPrimitive::tracePrimitive("X11DrawArc"_s);
	$X11Renderer::XDrawArc(pXSData, xgc, x, y, w, h, angleStart, angleExtent);
}

void X11Renderer$X11TracingRenderer::XDrawPoly(int64_t pXSData, int64_t xgc, int32_t transx, int32_t transy, $ints* xpoints, $ints* ypoints, int32_t npoints, bool isclosed) {
	$GraphicsPrimitive::tracePrimitive("X11DrawPoly"_s);
	$X11Renderer::XDrawPoly(pXSData, xgc, transx, transy, xpoints, ypoints, npoints, isclosed);
}

void X11Renderer$X11TracingRenderer::XDoPath($SunGraphics2D* sg2d, int64_t pXSData, int64_t xgc, int32_t transX, int32_t transY, $Path2D$Float* p2df, bool isFill) {
	$GraphicsPrimitive::tracePrimitive(isFill ? $of("X11FillPath"_s) : $of("X11DrawPath"_s));
	$X11Renderer::XDoPath(sg2d, pXSData, xgc, transX, transY, p2df, isFill);
}

void X11Renderer$X11TracingRenderer::XFillRect(int64_t pXSData, int64_t xgc, int32_t x, int32_t y, int32_t w, int32_t h) {
	$GraphicsPrimitive::tracePrimitive("X11FillRect"_s);
	$X11Renderer::XFillRect(pXSData, xgc, x, y, w, h);
}

void X11Renderer$X11TracingRenderer::XFillRoundRect(int64_t pXSData, int64_t xgc, int32_t x, int32_t y, int32_t w, int32_t h, int32_t arcW, int32_t arcH) {
	$GraphicsPrimitive::tracePrimitive("X11FillRoundRect"_s);
	$X11Renderer::XFillRoundRect(pXSData, xgc, x, y, w, h, arcW, arcH);
}

void X11Renderer$X11TracingRenderer::XFillOval(int64_t pXSData, int64_t xgc, int32_t x, int32_t y, int32_t w, int32_t h) {
	$GraphicsPrimitive::tracePrimitive("X11FillOval"_s);
	$X11Renderer::XFillOval(pXSData, xgc, x, y, w, h);
}

void X11Renderer$X11TracingRenderer::XFillArc(int64_t pXSData, int64_t xgc, int32_t x, int32_t y, int32_t w, int32_t h, int32_t angleStart, int32_t angleExtent) {
	$GraphicsPrimitive::tracePrimitive("X11FillArc"_s);
	$X11Renderer::XFillArc(pXSData, xgc, x, y, w, h, angleStart, angleExtent);
}

void X11Renderer$X11TracingRenderer::XFillPoly(int64_t pXSData, int64_t xgc, int32_t transx, int32_t transy, $ints* xpoints, $ints* ypoints, int32_t npoints) {
	$GraphicsPrimitive::tracePrimitive("X11FillPoly"_s);
	$X11Renderer::XFillPoly(pXSData, xgc, transx, transy, xpoints, ypoints, npoints);
}

void X11Renderer$X11TracingRenderer::XFillSpans(int64_t pXSData, int64_t xgc, $SpanIterator* si, int64_t iterator, int32_t transx, int32_t transy) {
	$GraphicsPrimitive::tracePrimitive("X11FillSpans"_s);
	$X11Renderer::XFillSpans(pXSData, xgc, si, iterator, transx, transy);
}

void X11Renderer$X11TracingRenderer::devCopyArea(int64_t sdOps, int64_t xgc, int32_t srcx, int32_t srcy, int32_t dstx, int32_t dsty, int32_t w, int32_t h) {
	$GraphicsPrimitive::tracePrimitive("X11CopyArea"_s);
	$X11Renderer::devCopyArea(sdOps, xgc, srcx, srcy, dstx, dsty, w, h);
}

X11Renderer$X11TracingRenderer::X11Renderer$X11TracingRenderer() {
}

$Class* X11Renderer$X11TracingRenderer::load$($String* name, bool initialize) {
	$loadClass(X11Renderer$X11TracingRenderer, name, initialize, &_X11Renderer$X11TracingRenderer_ClassInfo_, allocate$X11Renderer$X11TracingRenderer);
	return class$;
}

$Class* X11Renderer$X11TracingRenderer::class$ = nullptr;

		} // x11
	} // java2d
} // sun