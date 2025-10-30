#include <sun/java2d/windows/GDIRenderer.h>

#include <java/awt/Composite.h>
#include <java/awt/Shape.h>
#include <java/awt/Stroke.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Path2D$Float.h>
#include <java/lang/ClassCastException.h>
#include <sun/java2d/InvalidPipeException.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/pipe/LoopPipe.h>
#include <sun/java2d/pipe/PixelDrawPipe.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/pipe/ShapeSpanIterator.h>
#include <sun/java2d/pipe/SpanIterator.h>
#include <sun/java2d/windows/GDIRenderer$Tracer.h>
#include <sun/java2d/windows/GDIWindowSurfaceData.h>
#include <jcpp.h>

#undef STROKE_CUSTOM
#undef STROKE_THIN
#undef TRANSFORM_INT_TRANSLATE

using $Composite = ::java::awt::Composite;
using $Shape = ::java::awt::Shape;
using $Stroke = ::java::awt::Stroke;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Path2D$Float = ::java::awt::geom::Path2D$Float;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidPipeException = ::sun::java2d::InvalidPipeException;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $LoopPipe = ::sun::java2d::pipe::LoopPipe;
using $PixelDrawPipe = ::sun::java2d::pipe::PixelDrawPipe;
using $PixelFillPipe = ::sun::java2d::pipe::PixelFillPipe;
using $Region = ::sun::java2d::pipe::Region;
using $ShapeDrawPipe = ::sun::java2d::pipe::ShapeDrawPipe;
using $ShapeSpanIterator = ::sun::java2d::pipe::ShapeSpanIterator;
using $SpanIterator = ::sun::java2d::pipe::SpanIterator;
using $GDIRenderer$Tracer = ::sun::java2d::windows::GDIRenderer$Tracer;
using $GDIWindowSurfaceData = ::sun::java2d::windows::GDIWindowSurfaceData;

namespace sun {
	namespace java2d {
		namespace windows {

$MethodInfo _GDIRenderer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GDIRenderer::*)()>(&GDIRenderer::init$))},
	{"devCopyArea", "(Lsun/java2d/windows/GDIWindowSurfaceData;IIIIII)V", nullptr, $PUBLIC | $NATIVE},
	{"doDrawArc", "(Lsun/java2d/windows/GDIWindowSurfaceData;Lsun/java2d/pipe/Region;Ljava/awt/Composite;IIIIIII)V", nullptr, $NATIVE},
	{"doDrawLine", "(Lsun/java2d/windows/GDIWindowSurfaceData;Lsun/java2d/pipe/Region;Ljava/awt/Composite;IIIII)V", nullptr, $NATIVE},
	{"doDrawOval", "(Lsun/java2d/windows/GDIWindowSurfaceData;Lsun/java2d/pipe/Region;Ljava/awt/Composite;IIIII)V", nullptr, $NATIVE},
	{"doDrawPoly", "(Lsun/java2d/windows/GDIWindowSurfaceData;Lsun/java2d/pipe/Region;Ljava/awt/Composite;III[I[IIZ)V", nullptr, $NATIVE},
	{"doDrawRect", "(Lsun/java2d/windows/GDIWindowSurfaceData;Lsun/java2d/pipe/Region;Ljava/awt/Composite;IIIII)V", nullptr, $NATIVE},
	{"doDrawRoundRect", "(Lsun/java2d/windows/GDIWindowSurfaceData;Lsun/java2d/pipe/Region;Ljava/awt/Composite;IIIIIII)V", nullptr, $NATIVE},
	{"doFillArc", "(Lsun/java2d/windows/GDIWindowSurfaceData;Lsun/java2d/pipe/Region;Ljava/awt/Composite;IIIIIII)V", nullptr, $NATIVE},
	{"doFillOval", "(Lsun/java2d/windows/GDIWindowSurfaceData;Lsun/java2d/pipe/Region;Ljava/awt/Composite;IIIII)V", nullptr, $NATIVE},
	{"doFillPoly", "(Lsun/java2d/windows/GDIWindowSurfaceData;Lsun/java2d/pipe/Region;Ljava/awt/Composite;III[I[II)V", nullptr, $NATIVE},
	{"doFillRect", "(Lsun/java2d/windows/GDIWindowSurfaceData;Lsun/java2d/pipe/Region;Ljava/awt/Composite;IIIII)V", nullptr, $NATIVE},
	{"doFillRoundRect", "(Lsun/java2d/windows/GDIWindowSurfaceData;Lsun/java2d/pipe/Region;Ljava/awt/Composite;IIIIIII)V", nullptr, $NATIVE},
	{"doFillSpans", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/pipe/SpanIterator;)V", nullptr, $PUBLIC},
	{"doShape", "(Lsun/java2d/windows/GDIWindowSurfaceData;Lsun/java2d/pipe/Region;Ljava/awt/Composite;IIILjava/awt/geom/Path2D$Float;Z)V", nullptr, $NATIVE},
	{"doShape", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Shape;Z)V", nullptr, 0},
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
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"traceWrap", "()Lsun/java2d/windows/GDIRenderer;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_devCopyArea 5
#define _METHOD_INDEX_doDrawArc 6
#define _METHOD_INDEX_doDrawLine 7
#define _METHOD_INDEX_doDrawOval 8
#define _METHOD_INDEX_doDrawPoly 9
#define _METHOD_INDEX_doDrawRect 10
#define _METHOD_INDEX_doDrawRoundRect 11
#define _METHOD_INDEX_doFillArc 12
#define _METHOD_INDEX_doFillOval 13
#define _METHOD_INDEX_doFillPoly 14
#define _METHOD_INDEX_doFillRect 15
#define _METHOD_INDEX_doFillRoundRect 16
#define _METHOD_INDEX_doShape 18

$InnerClassInfo _GDIRenderer_InnerClassesInfo_[] = {
	{"sun.java2d.windows.GDIRenderer$Tracer", "sun.java2d.windows.GDIRenderer", "Tracer", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _GDIRenderer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.windows.GDIRenderer",
	"java.lang.Object",
	"sun.java2d.pipe.PixelDrawPipe,sun.java2d.pipe.PixelFillPipe,sun.java2d.pipe.ShapeDrawPipe",
	nullptr,
	_GDIRenderer_MethodInfo_,
	nullptr,
	nullptr,
	_GDIRenderer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.windows.GDIRenderer$Tracer"
};

$Object* allocate$GDIRenderer($Class* clazz) {
	return $of($alloc(GDIRenderer));
}

int32_t GDIRenderer::hashCode() {
	 return this->$PixelDrawPipe::hashCode();
}

bool GDIRenderer::equals(Object$* arg0) {
	 return this->$PixelDrawPipe::equals(arg0);
}

$Object* GDIRenderer::clone() {
	 return this->$PixelDrawPipe::clone();
}

$String* GDIRenderer::toString() {
	 return this->$PixelDrawPipe::toString();
}

void GDIRenderer::finalize() {
	this->$PixelDrawPipe::finalize();
}

void GDIRenderer::init$() {
}

void GDIRenderer::doDrawLine($GDIWindowSurfaceData* sData, $Region* clip, $Composite* comp, int32_t color, int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
	$prepareNative(GDIRenderer, doDrawLine, void, $GDIWindowSurfaceData* sData, $Region* clip, $Composite* comp, int32_t color, int32_t x1, int32_t y1, int32_t x2, int32_t y2);
	$invokeNative(GDIRenderer, doDrawLine, sData, clip, comp, color, x1, y1, x2, y2);
	$finishNative();
}

void GDIRenderer::drawLine($SunGraphics2D* sg2d, int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
	$useLocalCurrentObjectStackCache();
	int32_t transx = $nc(sg2d)->transX;
	int32_t transy = sg2d->transY;
	try {
		doDrawLine($cast($GDIWindowSurfaceData, sg2d->surfaceData), $(sg2d->getCompClip()), sg2d->composite, sg2d->eargb, x1 + transx, y1 + transy, x2 + transx, y2 + transy);
	} catch ($ClassCastException& e) {
		$throwNew($InvalidPipeException, $$str({"wrong surface data type: "_s, sg2d->surfaceData}));
	}
}

void GDIRenderer::doDrawRect($GDIWindowSurfaceData* sData, $Region* clip, $Composite* comp, int32_t color, int32_t x, int32_t y, int32_t w, int32_t h) {
	$prepareNative(GDIRenderer, doDrawRect, void, $GDIWindowSurfaceData* sData, $Region* clip, $Composite* comp, int32_t color, int32_t x, int32_t y, int32_t w, int32_t h);
	$invokeNative(GDIRenderer, doDrawRect, sData, clip, comp, color, x, y, w, h);
	$finishNative();
}

void GDIRenderer::drawRect($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	try {
		doDrawRect($cast($GDIWindowSurfaceData, $nc(sg2d)->surfaceData), $(sg2d->getCompClip()), sg2d->composite, sg2d->eargb, x + sg2d->transX, y + sg2d->transY, width, height);
	} catch ($ClassCastException& e) {
		$throwNew($InvalidPipeException, $$str({"wrong surface data type: "_s, $nc(sg2d)->surfaceData}));
	}
}

void GDIRenderer::doDrawRoundRect($GDIWindowSurfaceData* sData, $Region* clip, $Composite* comp, int32_t color, int32_t x, int32_t y, int32_t w, int32_t h, int32_t arcW, int32_t arcH) {
	$prepareNative(GDIRenderer, doDrawRoundRect, void, $GDIWindowSurfaceData* sData, $Region* clip, $Composite* comp, int32_t color, int32_t x, int32_t y, int32_t w, int32_t h, int32_t arcW, int32_t arcH);
	$invokeNative(GDIRenderer, doDrawRoundRect, sData, clip, comp, color, x, y, w, h, arcW, arcH);
	$finishNative();
}

void GDIRenderer::drawRoundRect($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) {
	$useLocalCurrentObjectStackCache();
	try {
		doDrawRoundRect($cast($GDIWindowSurfaceData, $nc(sg2d)->surfaceData), $(sg2d->getCompClip()), sg2d->composite, sg2d->eargb, x + sg2d->transX, y + sg2d->transY, width, height, arcWidth, arcHeight);
	} catch ($ClassCastException& e) {
		$throwNew($InvalidPipeException, $$str({"wrong surface data type: "_s, $nc(sg2d)->surfaceData}));
	}
}

void GDIRenderer::doDrawOval($GDIWindowSurfaceData* sData, $Region* clip, $Composite* comp, int32_t color, int32_t x, int32_t y, int32_t w, int32_t h) {
	$prepareNative(GDIRenderer, doDrawOval, void, $GDIWindowSurfaceData* sData, $Region* clip, $Composite* comp, int32_t color, int32_t x, int32_t y, int32_t w, int32_t h);
	$invokeNative(GDIRenderer, doDrawOval, sData, clip, comp, color, x, y, w, h);
	$finishNative();
}

void GDIRenderer::drawOval($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	try {
		doDrawOval($cast($GDIWindowSurfaceData, $nc(sg2d)->surfaceData), $(sg2d->getCompClip()), sg2d->composite, sg2d->eargb, x + sg2d->transX, y + sg2d->transY, width, height);
	} catch ($ClassCastException& e) {
		$throwNew($InvalidPipeException, $$str({"wrong surface data type: "_s, $nc(sg2d)->surfaceData}));
	}
}

void GDIRenderer::doDrawArc($GDIWindowSurfaceData* sData, $Region* clip, $Composite* comp, int32_t color, int32_t x, int32_t y, int32_t w, int32_t h, int32_t angleStart, int32_t angleExtent) {
	$prepareNative(GDIRenderer, doDrawArc, void, $GDIWindowSurfaceData* sData, $Region* clip, $Composite* comp, int32_t color, int32_t x, int32_t y, int32_t w, int32_t h, int32_t angleStart, int32_t angleExtent);
	$invokeNative(GDIRenderer, doDrawArc, sData, clip, comp, color, x, y, w, h, angleStart, angleExtent);
	$finishNative();
}

void GDIRenderer::drawArc($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) {
	$useLocalCurrentObjectStackCache();
	try {
		doDrawArc($cast($GDIWindowSurfaceData, $nc(sg2d)->surfaceData), $(sg2d->getCompClip()), sg2d->composite, sg2d->eargb, x + sg2d->transX, y + sg2d->transY, width, height, startAngle, arcAngle);
	} catch ($ClassCastException& e) {
		$throwNew($InvalidPipeException, $$str({"wrong surface data type: "_s, $nc(sg2d)->surfaceData}));
	}
}

void GDIRenderer::doDrawPoly($GDIWindowSurfaceData* sData, $Region* clip, $Composite* comp, int32_t color, int32_t transx, int32_t transy, $ints* xpoints, $ints* ypoints, int32_t npoints, bool isclosed) {
	$prepareNative(GDIRenderer, doDrawPoly, void, $GDIWindowSurfaceData* sData, $Region* clip, $Composite* comp, int32_t color, int32_t transx, int32_t transy, $ints* xpoints, $ints* ypoints, int32_t npoints, bool isclosed);
	$invokeNative(GDIRenderer, doDrawPoly, sData, clip, comp, color, transx, transy, xpoints, ypoints, npoints, isclosed);
	$finishNative();
}

void GDIRenderer::drawPolyline($SunGraphics2D* sg2d, $ints* xpoints, $ints* ypoints, int32_t npoints) {
	$useLocalCurrentObjectStackCache();
	try {
		doDrawPoly($cast($GDIWindowSurfaceData, $nc(sg2d)->surfaceData), $(sg2d->getCompClip()), sg2d->composite, sg2d->eargb, sg2d->transX, sg2d->transY, xpoints, ypoints, npoints, false);
	} catch ($ClassCastException& e) {
		$throwNew($InvalidPipeException, $$str({"wrong surface data type: "_s, $nc(sg2d)->surfaceData}));
	}
}

void GDIRenderer::drawPolygon($SunGraphics2D* sg2d, $ints* xpoints, $ints* ypoints, int32_t npoints) {
	$useLocalCurrentObjectStackCache();
	try {
		doDrawPoly($cast($GDIWindowSurfaceData, $nc(sg2d)->surfaceData), $(sg2d->getCompClip()), sg2d->composite, sg2d->eargb, sg2d->transX, sg2d->transY, xpoints, ypoints, npoints, true);
	} catch ($ClassCastException& e) {
		$throwNew($InvalidPipeException, $$str({"wrong surface data type: "_s, $nc(sg2d)->surfaceData}));
	}
}

void GDIRenderer::doFillRect($GDIWindowSurfaceData* sData, $Region* clip, $Composite* comp, int32_t color, int32_t x, int32_t y, int32_t w, int32_t h) {
	$prepareNative(GDIRenderer, doFillRect, void, $GDIWindowSurfaceData* sData, $Region* clip, $Composite* comp, int32_t color, int32_t x, int32_t y, int32_t w, int32_t h);
	$invokeNative(GDIRenderer, doFillRect, sData, clip, comp, color, x, y, w, h);
	$finishNative();
}

void GDIRenderer::fillRect($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	try {
		doFillRect($cast($GDIWindowSurfaceData, $nc(sg2d)->surfaceData), $(sg2d->getCompClip()), sg2d->composite, sg2d->eargb, x + sg2d->transX, y + sg2d->transY, width, height);
	} catch ($ClassCastException& e) {
		$throwNew($InvalidPipeException, $$str({"wrong surface data type: "_s, $nc(sg2d)->surfaceData}));
	}
}

void GDIRenderer::doFillRoundRect($GDIWindowSurfaceData* sData, $Region* clip, $Composite* comp, int32_t color, int32_t x, int32_t y, int32_t w, int32_t h, int32_t arcW, int32_t arcH) {
	$prepareNative(GDIRenderer, doFillRoundRect, void, $GDIWindowSurfaceData* sData, $Region* clip, $Composite* comp, int32_t color, int32_t x, int32_t y, int32_t w, int32_t h, int32_t arcW, int32_t arcH);
	$invokeNative(GDIRenderer, doFillRoundRect, sData, clip, comp, color, x, y, w, h, arcW, arcH);
	$finishNative();
}

void GDIRenderer::fillRoundRect($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) {
	$useLocalCurrentObjectStackCache();
	try {
		doFillRoundRect($cast($GDIWindowSurfaceData, $nc(sg2d)->surfaceData), $(sg2d->getCompClip()), sg2d->composite, sg2d->eargb, x + sg2d->transX, y + sg2d->transY, width, height, arcWidth, arcHeight);
	} catch ($ClassCastException& e) {
		$throwNew($InvalidPipeException, $$str({"wrong surface data type: "_s, $nc(sg2d)->surfaceData}));
	}
}

void GDIRenderer::doFillOval($GDIWindowSurfaceData* sData, $Region* clip, $Composite* comp, int32_t color, int32_t x, int32_t y, int32_t w, int32_t h) {
	$prepareNative(GDIRenderer, doFillOval, void, $GDIWindowSurfaceData* sData, $Region* clip, $Composite* comp, int32_t color, int32_t x, int32_t y, int32_t w, int32_t h);
	$invokeNative(GDIRenderer, doFillOval, sData, clip, comp, color, x, y, w, h);
	$finishNative();
}

void GDIRenderer::fillOval($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	try {
		doFillOval($cast($GDIWindowSurfaceData, $nc(sg2d)->surfaceData), $(sg2d->getCompClip()), sg2d->composite, sg2d->eargb, x + sg2d->transX, y + sg2d->transY, width, height);
	} catch ($ClassCastException& e) {
		$throwNew($InvalidPipeException, $$str({"wrong surface data type: "_s, $nc(sg2d)->surfaceData}));
	}
}

void GDIRenderer::doFillArc($GDIWindowSurfaceData* sData, $Region* clip, $Composite* comp, int32_t color, int32_t x, int32_t y, int32_t w, int32_t h, int32_t angleStart, int32_t angleExtent) {
	$prepareNative(GDIRenderer, doFillArc, void, $GDIWindowSurfaceData* sData, $Region* clip, $Composite* comp, int32_t color, int32_t x, int32_t y, int32_t w, int32_t h, int32_t angleStart, int32_t angleExtent);
	$invokeNative(GDIRenderer, doFillArc, sData, clip, comp, color, x, y, w, h, angleStart, angleExtent);
	$finishNative();
}

void GDIRenderer::fillArc($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) {
	$useLocalCurrentObjectStackCache();
	try {
		doFillArc($cast($GDIWindowSurfaceData, $nc(sg2d)->surfaceData), $(sg2d->getCompClip()), sg2d->composite, sg2d->eargb, x + sg2d->transX, y + sg2d->transY, width, height, startAngle, arcAngle);
	} catch ($ClassCastException& e) {
		$throwNew($InvalidPipeException, $$str({"wrong surface data type: "_s, $nc(sg2d)->surfaceData}));
	}
}

void GDIRenderer::doFillPoly($GDIWindowSurfaceData* sData, $Region* clip, $Composite* comp, int32_t color, int32_t transx, int32_t transy, $ints* xpoints, $ints* ypoints, int32_t npoints) {
	$prepareNative(GDIRenderer, doFillPoly, void, $GDIWindowSurfaceData* sData, $Region* clip, $Composite* comp, int32_t color, int32_t transx, int32_t transy, $ints* xpoints, $ints* ypoints, int32_t npoints);
	$invokeNative(GDIRenderer, doFillPoly, sData, clip, comp, color, transx, transy, xpoints, ypoints, npoints);
	$finishNative();
}

void GDIRenderer::fillPolygon($SunGraphics2D* sg2d, $ints* xpoints, $ints* ypoints, int32_t npoints) {
	$useLocalCurrentObjectStackCache();
	try {
		doFillPoly($cast($GDIWindowSurfaceData, $nc(sg2d)->surfaceData), $(sg2d->getCompClip()), sg2d->composite, sg2d->eargb, sg2d->transX, sg2d->transY, xpoints, ypoints, npoints);
	} catch ($ClassCastException& e) {
		$throwNew($InvalidPipeException, $$str({"wrong surface data type: "_s, $nc(sg2d)->surfaceData}));
	}
}

void GDIRenderer::doShape($GDIWindowSurfaceData* sData, $Region* clip, $Composite* comp, int32_t color, int32_t transX, int32_t transY, $Path2D$Float* p2df, bool isfill) {
	$prepareNative(GDIRenderer, doShape, void, $GDIWindowSurfaceData* sData, $Region* clip, $Composite* comp, int32_t color, int32_t transX, int32_t transY, $Path2D$Float* p2df, bool isfill);
	$invokeNative(GDIRenderer, doShape, sData, clip, comp, color, transX, transY, p2df, isfill);
	$finishNative();
}

void GDIRenderer::doShape($SunGraphics2D* sg2d, $Shape* s, bool isfill) {
	$useLocalCurrentObjectStackCache();
	$var($Path2D$Float, p2df, nullptr);
	int32_t transX = 0;
	int32_t transY = 0;
	if ($nc(sg2d)->transformState <= $SunGraphics2D::TRANSFORM_INT_TRANSLATE) {
		if ($instanceOf($Path2D$Float, s)) {
			$assign(p2df, $cast($Path2D$Float, s));
		} else {
			$assign(p2df, $new($Path2D$Float, s));
		}
		transX = sg2d->transX;
		transY = sg2d->transY;
	} else {
		$assign(p2df, $new($Path2D$Float, s, sg2d->transform$));
		transX = 0;
		transY = 0;
	}
	try {
		doShape($cast($GDIWindowSurfaceData, $nc(sg2d)->surfaceData), $(sg2d->getCompClip()), sg2d->composite, sg2d->eargb, transX, transY, p2df, isfill);
	} catch ($ClassCastException& e) {
		$throwNew($InvalidPipeException, $$str({"wrong surface data type: "_s, $nc(sg2d)->surfaceData}));
	}
}

void GDIRenderer::doFillSpans($SunGraphics2D* sg2d, $SpanIterator* si) {
	$useLocalCurrentObjectStackCache();
	$var($ints, box, $new($ints, 4));
	$var($GDIWindowSurfaceData, sd, nullptr);
	try {
		$assign(sd, $cast($GDIWindowSurfaceData, $nc(sg2d)->surfaceData));
	} catch ($ClassCastException& e) {
		$throwNew($InvalidPipeException, $$str({"wrong surface data type: "_s, $nc(sg2d)->surfaceData}));
	}
	$var($Region, clip, $nc(sg2d)->getCompClip());
	$var($Composite, comp, sg2d->composite);
	int32_t eargb = sg2d->eargb;
	while ($nc(si)->nextSpan(box)) {
		doFillRect(sd, clip, comp, eargb, box->get(0), box->get(1), box->get(2) - box->get(0), box->get(3) - box->get(1));
	}
}

void GDIRenderer::draw($SunGraphics2D* sg2d, $Shape* s) {
	$useLocalCurrentObjectStackCache();
	if ($nc(sg2d)->strokeState == $SunGraphics2D::STROKE_THIN) {
		doShape(sg2d, s, false);
	} else if (sg2d->strokeState < $SunGraphics2D::STROKE_CUSTOM) {
		$var($ShapeSpanIterator, si, $LoopPipe::getStrokeSpans(sg2d, s));
		{
			$var($Throwable, var$0, nullptr);
			try {
				doFillSpans(sg2d, si);
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$nc(si)->dispose();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} else {
		doShape(sg2d, $($nc(sg2d->stroke)->createStrokedShape(s)), true);
	}
}

void GDIRenderer::fill($SunGraphics2D* sg2d, $Shape* s) {
	doShape(sg2d, s, true);
}

void GDIRenderer::devCopyArea($GDIWindowSurfaceData* sData, int32_t srcx, int32_t srcy, int32_t dx, int32_t dy, int32_t w, int32_t h) {
	$prepareNative(GDIRenderer, devCopyArea, void, $GDIWindowSurfaceData* sData, int32_t srcx, int32_t srcy, int32_t dx, int32_t dy, int32_t w, int32_t h);
	$invokeNative(GDIRenderer, devCopyArea, sData, srcx, srcy, dx, dy, w, h);
	$finishNative();
}

GDIRenderer* GDIRenderer::traceWrap() {
	return $new($GDIRenderer$Tracer);
}

GDIRenderer::GDIRenderer() {
}

$Class* GDIRenderer::load$($String* name, bool initialize) {
	$loadClass(GDIRenderer, name, initialize, &_GDIRenderer_ClassInfo_, allocate$GDIRenderer);
	return class$;
}

$Class* GDIRenderer::class$ = nullptr;

		} // windows
	} // java2d
} // sun