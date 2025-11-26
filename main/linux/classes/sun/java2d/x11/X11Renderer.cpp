#include <sun/java2d/x11/X11Renderer.h>

#include <java/awt/Composite.h>
#include <java/awt/Polygon.h>
#include <java/awt/Shape.h>
#include <java/awt/Stroke.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Path2D$Float.h>
#include <java/awt/geom/PathIterator.h>
#include <sun/awt/SunToolkit.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/pipe/LoopPipe.h>
#include <sun/java2d/pipe/PixelDrawPipe.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/pipe/ShapeSpanIterator.h>
#include <sun/java2d/pipe/SpanIterator.h>
#include <sun/java2d/x11/X11Renderer$X11TracingRenderer.h>
#include <sun/java2d/x11/X11SurfaceData.h>
#include <jcpp.h>

#undef STROKE_CUSTOM
#undef STROKE_THIN
#undef TRANSFORM_INT_TRANSLATE
#undef TRANSFORM_TRANSLATESCALE

using $Composite = ::java::awt::Composite;
using $Polygon = ::java::awt::Polygon;
using $Shape = ::java::awt::Shape;
using $Stroke = ::java::awt::Stroke;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Path2D$Float = ::java::awt::geom::Path2D$Float;
using $PathIterator = ::java::awt::geom::PathIterator;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunToolkit = ::sun::awt::SunToolkit;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $LoopPipe = ::sun::java2d::pipe::LoopPipe;
using $PixelDrawPipe = ::sun::java2d::pipe::PixelDrawPipe;
using $PixelFillPipe = ::sun::java2d::pipe::PixelFillPipe;
using $Region = ::sun::java2d::pipe::Region;
using $ShapeDrawPipe = ::sun::java2d::pipe::ShapeDrawPipe;
using $ShapeSpanIterator = ::sun::java2d::pipe::ShapeSpanIterator;
using $SpanIterator = ::sun::java2d::pipe::SpanIterator;
using $X11Renderer$X11TracingRenderer = ::sun::java2d::x11::X11Renderer$X11TracingRenderer;
using $X11SurfaceData = ::sun::java2d::x11::X11SurfaceData;

namespace sun {
	namespace java2d {
		namespace x11 {

$MethodInfo _X11Renderer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(X11Renderer::*)()>(&X11Renderer::init$))},
	{"XDoPath", "(Lsun/java2d/SunGraphics2D;JJIILjava/awt/geom/Path2D$Float;Z)V", nullptr, $NATIVE},
	{"XDrawArc", "(JJIIIIII)V", nullptr, $NATIVE},
	{"XDrawLine", "(JJIIII)V", nullptr, $NATIVE},
	{"XDrawOval", "(JJIIII)V", nullptr, $NATIVE},
	{"XDrawPoly", "(JJII[I[IIZ)V", nullptr, $NATIVE},
	{"XDrawRect", "(JJIIII)V", nullptr, $NATIVE},
	{"XDrawRoundRect", "(JJIIIIII)V", nullptr, $NATIVE},
	{"XFillArc", "(JJIIIIII)V", nullptr, $NATIVE},
	{"XFillOval", "(JJIIII)V", nullptr, $NATIVE},
	{"XFillPoly", "(JJII[I[II)V", nullptr, $NATIVE},
	{"XFillRect", "(JJIIII)V", nullptr, $NATIVE},
	{"XFillRoundRect", "(JJIIIIII)V", nullptr, $NATIVE},
	{"XFillSpans", "(JJLsun/java2d/pipe/SpanIterator;JII)V", nullptr, $NATIVE},
	{"devCopyArea", "(JJIIIIII)V", nullptr, $NATIVE},
	{"doPath", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Shape;Z)V", nullptr, $PRIVATE, $method(static_cast<void(X11Renderer::*)($SunGraphics2D*,$Shape*,bool)>(&X11Renderer::doPath))},
	{"draw", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"drawArc", "(Lsun/java2d/SunGraphics2D;IIIIII)V", nullptr, $PUBLIC},
	{"drawLine", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC},
	{"drawOval", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC},
	{"drawPolygon", "(Lsun/java2d/SunGraphics2D;[I[II)V", nullptr, $PUBLIC},
	{"drawPolyline", "(Lsun/java2d/SunGraphics2D;[I[II)V", nullptr, $PUBLIC},
	{"drawRect", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC},
	{"drawRoundRect", "(Lsun/java2d/SunGraphics2D;IIIIII)V", nullptr, $PUBLIC},
	{"fill", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"fillArc", "(Lsun/java2d/SunGraphics2D;IIIIII)V", nullptr, $PUBLIC},
	{"fillOval", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC},
	{"fillPolygon", "(Lsun/java2d/SunGraphics2D;[I[II)V", nullptr, $PUBLIC},
	{"fillRect", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC},
	{"fillRoundRect", "(Lsun/java2d/SunGraphics2D;IIIIII)V", nullptr, $PUBLIC},
	{"getInstance", "()Lsun/java2d/x11/X11Renderer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<X11Renderer*(*)()>(&X11Renderer::getInstance))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"validate", "(Lsun/java2d/SunGraphics2D;)J", nullptr, $PRIVATE, $method(static_cast<int64_t(X11Renderer::*)($SunGraphics2D*)>(&X11Renderer::validate))},
	{}
};

#define _METHOD_INDEX_XDoPath 5
#define _METHOD_INDEX_XDrawArc 6
#define _METHOD_INDEX_XDrawLine 7
#define _METHOD_INDEX_XDrawOval 8
#define _METHOD_INDEX_XDrawPoly 9
#define _METHOD_INDEX_XDrawRect 10
#define _METHOD_INDEX_XDrawRoundRect 11
#define _METHOD_INDEX_XFillArc 12
#define _METHOD_INDEX_XFillOval 13
#define _METHOD_INDEX_XFillPoly 14
#define _METHOD_INDEX_XFillRect 15
#define _METHOD_INDEX_XFillRoundRect 16
#define _METHOD_INDEX_XFillSpans 17
#define _METHOD_INDEX_devCopyArea 18

$InnerClassInfo _X11Renderer_InnerClassesInfo_[] = {
	{"sun.java2d.x11.X11Renderer$X11TracingRenderer", "sun.java2d.x11.X11Renderer", "X11TracingRenderer", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _X11Renderer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.x11.X11Renderer",
	"java.lang.Object",
	"sun.java2d.pipe.PixelDrawPipe,sun.java2d.pipe.PixelFillPipe,sun.java2d.pipe.ShapeDrawPipe",
	nullptr,
	_X11Renderer_MethodInfo_,
	nullptr,
	nullptr,
	_X11Renderer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.x11.X11Renderer$X11TracingRenderer"
};

$Object* allocate$X11Renderer($Class* clazz) {
	return $of($alloc(X11Renderer));
}

int32_t X11Renderer::hashCode() {
	 return this->$PixelDrawPipe::hashCode();
}

bool X11Renderer::equals(Object$* arg0) {
	 return this->$PixelDrawPipe::equals(arg0);
}

$Object* X11Renderer::clone() {
	 return this->$PixelDrawPipe::clone();
}

$String* X11Renderer::toString() {
	 return this->$PixelDrawPipe::toString();
}

void X11Renderer::finalize() {
	this->$PixelDrawPipe::finalize();
}

void X11Renderer::init$() {
}

X11Renderer* X11Renderer::getInstance() {
	$init(X11Renderer);
	return ($GraphicsPrimitive::tracingEnabled() ? static_cast<X11Renderer*>($new($X11Renderer$X11TracingRenderer)) : $new(X11Renderer));
}

int64_t X11Renderer::validate($SunGraphics2D* sg2d) {
	$useLocalCurrentObjectStackCache();
	$var($X11SurfaceData, x11sd, $cast($X11SurfaceData, $nc(sg2d)->surfaceData));
	return $nc(x11sd)->getRenderGC($(sg2d->getCompClip()), sg2d->compositeState, sg2d->composite, sg2d->pixel);
}

void X11Renderer::XDrawLine(int64_t pXSData, int64_t xgc, int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
	$prepareNative(X11Renderer, XDrawLine, void, int64_t pXSData, int64_t xgc, int32_t x1, int32_t y1, int32_t x2, int32_t y2);
	$invokeNative(X11Renderer, XDrawLine, pXSData, xgc, x1, y1, x2, y2);
	$finishNative();
}

void X11Renderer::drawLine($SunGraphics2D* sg2d, int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
	$SunToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			int64_t xgc = validate(sg2d);
			int32_t transx = $nc(sg2d)->transX;
			int32_t transy = sg2d->transY;
			XDrawLine($nc(sg2d->surfaceData)->getNativeOps(), xgc, x1 + transx, y1 + transy, x2 + transx, y2 + transy);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$SunToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void X11Renderer::XDrawRect(int64_t pXSData, int64_t xgc, int32_t x, int32_t y, int32_t w, int32_t h) {
	$prepareNative(X11Renderer, XDrawRect, void, int64_t pXSData, int64_t xgc, int32_t x, int32_t y, int32_t w, int32_t h);
	$invokeNative(X11Renderer, XDrawRect, pXSData, xgc, x, y, w, h);
	$finishNative();
}

void X11Renderer::drawRect($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height) {
	$SunToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			int64_t xgc = validate(sg2d);
			XDrawRect($nc($nc(sg2d)->surfaceData)->getNativeOps(), xgc, x + sg2d->transX, y + sg2d->transY, width, height);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$SunToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void X11Renderer::XDrawRoundRect(int64_t pXSData, int64_t xgc, int32_t x, int32_t y, int32_t w, int32_t h, int32_t arcW, int32_t arcH) {
	$prepareNative(X11Renderer, XDrawRoundRect, void, int64_t pXSData, int64_t xgc, int32_t x, int32_t y, int32_t w, int32_t h, int32_t arcW, int32_t arcH);
	$invokeNative(X11Renderer, XDrawRoundRect, pXSData, xgc, x, y, w, h, arcW, arcH);
	$finishNative();
}

void X11Renderer::drawRoundRect($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) {
	$SunToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			int64_t xgc = validate(sg2d);
			XDrawRoundRect($nc($nc(sg2d)->surfaceData)->getNativeOps(), xgc, x + sg2d->transX, y + sg2d->transY, width, height, arcWidth, arcHeight);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$SunToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void X11Renderer::XDrawOval(int64_t pXSData, int64_t xgc, int32_t x, int32_t y, int32_t w, int32_t h) {
	$prepareNative(X11Renderer, XDrawOval, void, int64_t pXSData, int64_t xgc, int32_t x, int32_t y, int32_t w, int32_t h);
	$invokeNative(X11Renderer, XDrawOval, pXSData, xgc, x, y, w, h);
	$finishNative();
}

void X11Renderer::drawOval($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height) {
	$SunToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			int64_t xgc = validate(sg2d);
			XDrawOval($nc($nc(sg2d)->surfaceData)->getNativeOps(), xgc, x + sg2d->transX, y + sg2d->transY, width, height);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$SunToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void X11Renderer::XDrawArc(int64_t pXSData, int64_t xgc, int32_t x, int32_t y, int32_t w, int32_t h, int32_t angleStart, int32_t angleExtent) {
	$prepareNative(X11Renderer, XDrawArc, void, int64_t pXSData, int64_t xgc, int32_t x, int32_t y, int32_t w, int32_t h, int32_t angleStart, int32_t angleExtent);
	$invokeNative(X11Renderer, XDrawArc, pXSData, xgc, x, y, w, h, angleStart, angleExtent);
	$finishNative();
}

void X11Renderer::drawArc($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) {
	$SunToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			int64_t xgc = validate(sg2d);
			XDrawArc($nc($nc(sg2d)->surfaceData)->getNativeOps(), xgc, x + sg2d->transX, y + sg2d->transY, width, height, startAngle, arcAngle);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$SunToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void X11Renderer::XDrawPoly(int64_t pXSData, int64_t xgc, int32_t transx, int32_t transy, $ints* xpoints, $ints* ypoints, int32_t npoints, bool isclosed) {
	$prepareNative(X11Renderer, XDrawPoly, void, int64_t pXSData, int64_t xgc, int32_t transx, int32_t transy, $ints* xpoints, $ints* ypoints, int32_t npoints, bool isclosed);
	$invokeNative(X11Renderer, XDrawPoly, pXSData, xgc, transx, transy, xpoints, ypoints, npoints, isclosed);
	$finishNative();
}

void X11Renderer::drawPolyline($SunGraphics2D* sg2d, $ints* xpoints, $ints* ypoints, int32_t npoints) {
	$SunToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			int64_t xgc = validate(sg2d);
			XDrawPoly($nc($nc(sg2d)->surfaceData)->getNativeOps(), xgc, sg2d->transX, sg2d->transY, xpoints, ypoints, npoints, false);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$SunToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void X11Renderer::drawPolygon($SunGraphics2D* sg2d, $ints* xpoints, $ints* ypoints, int32_t npoints) {
	$SunToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			int64_t xgc = validate(sg2d);
			XDrawPoly($nc($nc(sg2d)->surfaceData)->getNativeOps(), xgc, sg2d->transX, sg2d->transY, xpoints, ypoints, npoints, true);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$SunToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void X11Renderer::XFillRect(int64_t pXSData, int64_t xgc, int32_t x, int32_t y, int32_t w, int32_t h) {
	$prepareNative(X11Renderer, XFillRect, void, int64_t pXSData, int64_t xgc, int32_t x, int32_t y, int32_t w, int32_t h);
	$invokeNative(X11Renderer, XFillRect, pXSData, xgc, x, y, w, h);
	$finishNative();
}

void X11Renderer::fillRect($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height) {
	$SunToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			int64_t xgc = validate(sg2d);
			XFillRect($nc($nc(sg2d)->surfaceData)->getNativeOps(), xgc, x + sg2d->transX, y + sg2d->transY, width, height);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$SunToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void X11Renderer::XFillRoundRect(int64_t pXSData, int64_t xgc, int32_t x, int32_t y, int32_t w, int32_t h, int32_t arcW, int32_t arcH) {
	$prepareNative(X11Renderer, XFillRoundRect, void, int64_t pXSData, int64_t xgc, int32_t x, int32_t y, int32_t w, int32_t h, int32_t arcW, int32_t arcH);
	$invokeNative(X11Renderer, XFillRoundRect, pXSData, xgc, x, y, w, h, arcW, arcH);
	$finishNative();
}

void X11Renderer::fillRoundRect($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) {
	$SunToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			int64_t xgc = validate(sg2d);
			XFillRoundRect($nc($nc(sg2d)->surfaceData)->getNativeOps(), xgc, x + sg2d->transX, y + sg2d->transY, width, height, arcWidth, arcHeight);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$SunToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void X11Renderer::XFillOval(int64_t pXSData, int64_t xgc, int32_t x, int32_t y, int32_t w, int32_t h) {
	$prepareNative(X11Renderer, XFillOval, void, int64_t pXSData, int64_t xgc, int32_t x, int32_t y, int32_t w, int32_t h);
	$invokeNative(X11Renderer, XFillOval, pXSData, xgc, x, y, w, h);
	$finishNative();
}

void X11Renderer::fillOval($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height) {
	$SunToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			int64_t xgc = validate(sg2d);
			XFillOval($nc($nc(sg2d)->surfaceData)->getNativeOps(), xgc, x + sg2d->transX, y + sg2d->transY, width, height);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$SunToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void X11Renderer::XFillArc(int64_t pXSData, int64_t xgc, int32_t x, int32_t y, int32_t w, int32_t h, int32_t angleStart, int32_t angleExtent) {
	$prepareNative(X11Renderer, XFillArc, void, int64_t pXSData, int64_t xgc, int32_t x, int32_t y, int32_t w, int32_t h, int32_t angleStart, int32_t angleExtent);
	$invokeNative(X11Renderer, XFillArc, pXSData, xgc, x, y, w, h, angleStart, angleExtent);
	$finishNative();
}

void X11Renderer::fillArc($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) {
	$SunToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			int64_t xgc = validate(sg2d);
			XFillArc($nc($nc(sg2d)->surfaceData)->getNativeOps(), xgc, x + sg2d->transX, y + sg2d->transY, width, height, startAngle, arcAngle);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$SunToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void X11Renderer::XFillPoly(int64_t pXSData, int64_t xgc, int32_t transx, int32_t transy, $ints* xpoints, $ints* ypoints, int32_t npoints) {
	$prepareNative(X11Renderer, XFillPoly, void, int64_t pXSData, int64_t xgc, int32_t transx, int32_t transy, $ints* xpoints, $ints* ypoints, int32_t npoints);
	$invokeNative(X11Renderer, XFillPoly, pXSData, xgc, transx, transy, xpoints, ypoints, npoints);
	$finishNative();
}

void X11Renderer::fillPolygon($SunGraphics2D* sg2d, $ints* xpoints, $ints* ypoints, int32_t npoints) {
	$SunToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			int64_t xgc = validate(sg2d);
			XFillPoly($nc($nc(sg2d)->surfaceData)->getNativeOps(), xgc, sg2d->transX, sg2d->transY, xpoints, ypoints, npoints);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$SunToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void X11Renderer::XFillSpans(int64_t pXSData, int64_t xgc, $SpanIterator* si, int64_t iterator, int32_t transx, int32_t transy) {
	$prepareNative(X11Renderer, XFillSpans, void, int64_t pXSData, int64_t xgc, $SpanIterator* si, int64_t iterator, int32_t transx, int32_t transy);
	$invokeNative(X11Renderer, XFillSpans, pXSData, xgc, si, iterator, transx, transy);
	$finishNative();
}

void X11Renderer::XDoPath($SunGraphics2D* sg2d, int64_t pXSData, int64_t xgc, int32_t transX, int32_t transY, $Path2D$Float* p2df, bool isFill) {
	$prepareNative(X11Renderer, XDoPath, void, $SunGraphics2D* sg2d, int64_t pXSData, int64_t xgc, int32_t transX, int32_t transY, $Path2D$Float* p2df, bool isFill);
	$invokeNative(X11Renderer, XDoPath, sg2d, pXSData, xgc, transX, transY, p2df, isFill);
	$finishNative();
}

void X11Renderer::doPath($SunGraphics2D* sg2d, $Shape* s, bool isFill) {
	$useLocalCurrentObjectStackCache();
	$var($Path2D$Float, p2df, nullptr);
	int32_t transx = 0;
	int32_t transy = 0;
	if ($nc(sg2d)->transformState <= $SunGraphics2D::TRANSFORM_INT_TRANSLATE) {
		if ($instanceOf($Path2D$Float, s)) {
			$assign(p2df, $cast($Path2D$Float, s));
		} else {
			$assign(p2df, $new($Path2D$Float, s));
		}
		transx = sg2d->transX;
		transy = sg2d->transY;
	} else {
		$assign(p2df, $new($Path2D$Float, s, sg2d->transform$));
		transx = 0;
		transy = 0;
	}
	$SunToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			int64_t xgc = validate(sg2d);
			XDoPath(sg2d, $nc($nc(sg2d)->surfaceData)->getNativeOps(), xgc, transx, transy, p2df, isFill);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$SunToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void X11Renderer::draw($SunGraphics2D* sg2d, $Shape* s) {
	$useLocalCurrentObjectStackCache();
	if ($nc(sg2d)->strokeState == $SunGraphics2D::STROKE_THIN) {
		if ($instanceOf($Polygon, s) && sg2d->transformState < $SunGraphics2D::TRANSFORM_TRANSLATESCALE) {
			$var($Polygon, p, $cast($Polygon, s));
			drawPolygon(sg2d, $nc(p)->xpoints, p->ypoints, p->npoints);
			return;
		}
		doPath(sg2d, s, false);
	} else if (sg2d->strokeState < $SunGraphics2D::STROKE_CUSTOM) {
		$var($ShapeSpanIterator, si, $LoopPipe::getStrokeSpans(sg2d, s));
		{
			$var($Throwable, var$0, nullptr);
			try {
				$SunToolkit::awtLock();
				{
					$var($Throwable, var$1, nullptr);
					try {
						int64_t xgc = validate(sg2d);
						int64_t var$2 = $nc(sg2d->surfaceData)->getNativeOps();
						int64_t var$3 = xgc;
						$var($SpanIterator, var$4, static_cast<$SpanIterator*>(si));
						XFillSpans(var$2, var$3, var$4, $nc(si)->getNativeIterator(), 0, 0);
					} catch ($Throwable& var$5) {
						$assign(var$1, var$5);
					} /*finally*/ {
						$SunToolkit::awtUnlock();
					}
					if (var$1 != nullptr) {
						$throw(var$1);
					}
				}
			} catch ($Throwable& var$6) {
				$assign(var$0, var$6);
			} /*finally*/ {
				$nc(si)->dispose();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} else {
		fill(sg2d, $($nc(sg2d->stroke)->createStrokedShape(s)));
	}
}

void X11Renderer::fill($SunGraphics2D* sg2d, $Shape* s) {
	$useLocalCurrentObjectStackCache();
	if ($nc(sg2d)->strokeState == $SunGraphics2D::STROKE_THIN) {
		if ($instanceOf($Polygon, s) && sg2d->transformState < $SunGraphics2D::TRANSFORM_TRANSLATESCALE) {
			$var($Polygon, p, $cast($Polygon, s));
			fillPolygon(sg2d, $nc(p)->xpoints, p->ypoints, p->npoints);
			return;
		}
		doPath(sg2d, s, true);
		return;
	}
	$var($AffineTransform, at, nullptr);
	int32_t transx = 0;
	int32_t transy = 0;
	if ($nc(sg2d)->transformState < $SunGraphics2D::TRANSFORM_TRANSLATESCALE) {
		$assign(at, nullptr);
		transx = sg2d->transX;
		transy = sg2d->transY;
	} else {
		$assign(at, sg2d->transform$);
		transx = (transy = 0);
	}
	$var($ShapeSpanIterator, ssi, $LoopPipe::getFillSSI(sg2d));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($Region, clip, $nc(sg2d)->getCompClip());
			int32_t var$1 = $nc(clip)->getLoX() - transx;
			int32_t var$2 = clip->getLoY() - transy;
			int32_t var$3 = clip->getHiX() - transx;
			$nc(ssi)->setOutputAreaXYXY(var$1, var$2, var$3, clip->getHiY() - transy);
			ssi->appendPath($($nc(s)->getPathIterator(at)));
			$SunToolkit::awtLock();
			{
				$var($Throwable, var$4, nullptr);
				try {
					int64_t xgc = validate(sg2d);
					int64_t var$5 = $nc(sg2d->surfaceData)->getNativeOps();
					int64_t var$6 = xgc;
					$var($SpanIterator, var$7, static_cast<$SpanIterator*>(ssi));
					XFillSpans(var$5, var$6, var$7, ssi->getNativeIterator(), transx, transy);
				} catch ($Throwable& var$8) {
					$assign(var$4, var$8);
				} /*finally*/ {
					$SunToolkit::awtUnlock();
				}
				if (var$4 != nullptr) {
					$throw(var$4);
				}
			}
		} catch ($Throwable& var$9) {
			$assign(var$0, var$9);
		} /*finally*/ {
			$nc(ssi)->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void X11Renderer::devCopyArea(int64_t sdOps, int64_t xgc, int32_t srcx, int32_t srcy, int32_t dstx, int32_t dsty, int32_t w, int32_t h) {
	$prepareNative(X11Renderer, devCopyArea, void, int64_t sdOps, int64_t xgc, int32_t srcx, int32_t srcy, int32_t dstx, int32_t dsty, int32_t w, int32_t h);
	$invokeNative(X11Renderer, devCopyArea, sdOps, xgc, srcx, srcy, dstx, dsty, w, h);
	$finishNative();
}

X11Renderer::X11Renderer() {
}

$Class* X11Renderer::load$($String* name, bool initialize) {
	$loadClass(X11Renderer, name, initialize, &_X11Renderer_ClassInfo_, allocate$X11Renderer);
	return class$;
}

$Class* X11Renderer::class$ = nullptr;

		} // x11
	} // java2d
} // sun