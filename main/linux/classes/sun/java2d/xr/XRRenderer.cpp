#include <sun/java2d/xr/XRRenderer.h>

#include <java/awt/Composite.h>
#include <java/awt/Paint.h>
#include <java/awt/Polygon.h>
#include <java/awt/Shape.h>
#include <java/awt/Stroke.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Arc2D$Float.h>
#include <java/awt/geom/Arc2D.h>
#include <java/awt/geom/Ellipse2D$Float.h>
#include <java/awt/geom/Ellipse2D.h>
#include <java/awt/geom/Path2D$Float.h>
#include <java/awt/geom/Path2D.h>
#include <java/awt/geom/PathIterator.h>
#include <java/awt/geom/Rectangle2D$Float.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/awt/geom/RoundRectangle2D$Float.h>
#include <java/awt/geom/RoundRectangle2D.h>
#include <java/lang/ClassCastException.h>
#include <sun/awt/SunToolkit.h>
#include <sun/java2d/InvalidPipeException.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/ProcessPath$DrawHandler.h>
#include <sun/java2d/loops/ProcessPath.h>
#include <sun/java2d/pipe/LoopPipe.h>
#include <sun/java2d/pipe/PixelDrawPipe.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/pipe/ShapeSpanIterator.h>
#include <sun/java2d/pipe/SpanIterator.h>
#include <sun/java2d/xr/GrowableRectArray.h>
#include <sun/java2d/xr/MaskTile.h>
#include <sun/java2d/xr/MaskTileManager.h>
#include <sun/java2d/xr/XRCompositeManager.h>
#include <sun/java2d/xr/XRDrawLine.h>
#include <sun/java2d/xr/XRRenderer$XRDrawHandler.h>
#include <sun/java2d/xr/XRSurfaceData.h>
#include <sun/java2d/xr/XRUtils.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef MIN_VALUE
#undef OPEN
#undef PIE
#undef STROKE_CUSTOM
#undef STROKE_THIN
#undef TRANSFORM_INT_TRANSLATE

using $Polygon = ::java::awt::Polygon;
using $Shape = ::java::awt::Shape;
using $Stroke = ::java::awt::Stroke;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Arc2D = ::java::awt::geom::Arc2D;
using $Arc2D$Float = ::java::awt::geom::Arc2D$Float;
using $Ellipse2D = ::java::awt::geom::Ellipse2D;
using $Ellipse2D$Float = ::java::awt::geom::Ellipse2D$Float;
using $Path2D = ::java::awt::geom::Path2D;
using $Path2D$Float = ::java::awt::geom::Path2D$Float;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $RoundRectangle2D = ::java::awt::geom::RoundRectangle2D;
using $RoundRectangle2D$Float = ::java::awt::geom::RoundRectangle2D$Float;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $SunToolkit = ::sun::awt::SunToolkit;
using $InvalidPipeException = ::sun::java2d::InvalidPipeException;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $ProcessPath = ::sun::java2d::loops::ProcessPath;
using $ProcessPath$DrawHandler = ::sun::java2d::loops::ProcessPath$DrawHandler;
using $LoopPipe = ::sun::java2d::pipe::LoopPipe;
using $PixelDrawPipe = ::sun::java2d::pipe::PixelDrawPipe;
using $Region = ::sun::java2d::pipe::Region;
using $ShapeSpanIterator = ::sun::java2d::pipe::ShapeSpanIterator;
using $SpanIterator = ::sun::java2d::pipe::SpanIterator;
using $GrowableRectArray = ::sun::java2d::xr::GrowableRectArray;
using $MaskTile = ::sun::java2d::xr::MaskTile;
using $MaskTileManager = ::sun::java2d::xr::MaskTileManager;
using $XRCompositeManager = ::sun::java2d::xr::XRCompositeManager;
using $XRDrawLine = ::sun::java2d::xr::XRDrawLine;
using $XRRenderer$XRDrawHandler = ::sun::java2d::xr::XRRenderer$XRDrawHandler;
using $XRSurfaceData = ::sun::java2d::xr::XRSurfaceData;
using $XRUtils = ::sun::java2d::xr::XRUtils;

namespace sun {
	namespace java2d {
		namespace xr {

$FieldInfo _XRRenderer_FieldInfo_[] = {
	{"drawHandler", "Lsun/java2d/xr/XRRenderer$XRDrawHandler;", nullptr, 0, $field(XRRenderer, drawHandler)},
	{"tileManager", "Lsun/java2d/xr/MaskTileManager;", nullptr, 0, $field(XRRenderer, tileManager)},
	{"lineGen", "Lsun/java2d/xr/XRDrawLine;", nullptr, 0, $field(XRRenderer, lineGen)},
	{"rectBuffer", "Lsun/java2d/xr/GrowableRectArray;", nullptr, 0, $field(XRRenderer, rectBuffer)},
	{}
};

$MethodInfo _XRRenderer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/java2d/xr/MaskTileManager;)V", nullptr, $PUBLIC, $method(static_cast<void(XRRenderer::*)($MaskTileManager*)>(&XRRenderer::init$))},
	{"draw", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"drawArc", "(Lsun/java2d/SunGraphics2D;IIIIII)V", nullptr, $PUBLIC},
	{"drawLine", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC},
	{"drawOval", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC},
	{"drawPath", "(Lsun/java2d/SunGraphics2D;Ljava/awt/geom/Path2D$Float;II)V", nullptr, $PROTECTED},
	{"drawPolygon", "(Lsun/java2d/SunGraphics2D;[I[II)V", nullptr, $PUBLIC},
	{"drawPolyline", "(Lsun/java2d/SunGraphics2D;[I[II)V", nullptr, $PUBLIC},
	{"drawRect", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC},
	{"drawRoundRect", "(Lsun/java2d/SunGraphics2D;IIIIII)V", nullptr, $PUBLIC},
	{"fill", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"fillArc", "(Lsun/java2d/SunGraphics2D;IIIIII)V", nullptr, $PUBLIC},
	{"fillOval", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC},
	{"fillPath", "(Lsun/java2d/SunGraphics2D;Ljava/awt/geom/Path2D$Float;II)V", nullptr, $PROTECTED},
	{"fillPolygon", "(Lsun/java2d/SunGraphics2D;[I[II)V", nullptr, $PUBLIC},
	{"fillRect", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC},
	{"fillRoundRect", "(Lsun/java2d/SunGraphics2D;IIIIII)V", nullptr, $PUBLIC},
	{"fillSpans", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/pipe/SpanIterator;II)V", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"validateSurface", "(Lsun/java2d/SunGraphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(XRRenderer::*)($SunGraphics2D*)>(&XRRenderer::validateSurface))},
	{}
};

$InnerClassInfo _XRRenderer_InnerClassesInfo_[] = {
	{"sun.java2d.xr.XRRenderer$XRDrawHandler", "sun.java2d.xr.XRRenderer", "XRDrawHandler", $PRIVATE},
	{}
};

$ClassInfo _XRRenderer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.xr.XRRenderer",
	"java.lang.Object",
	"sun.java2d.pipe.PixelDrawPipe,sun.java2d.pipe.PixelFillPipe,sun.java2d.pipe.ShapeDrawPipe",
	_XRRenderer_FieldInfo_,
	_XRRenderer_MethodInfo_,
	nullptr,
	nullptr,
	_XRRenderer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.xr.XRRenderer$XRDrawHandler"
};

$Object* allocate$XRRenderer($Class* clazz) {
	return $of($alloc(XRRenderer));
}

int32_t XRRenderer::hashCode() {
	 return this->$PixelDrawPipe::hashCode();
}

bool XRRenderer::equals(Object$* arg0) {
	 return this->$PixelDrawPipe::equals(arg0);
}

$Object* XRRenderer::clone() {
	 return this->$PixelDrawPipe::clone();
}

$String* XRRenderer::toString() {
	 return this->$PixelDrawPipe::toString();
}

void XRRenderer::finalize() {
	this->$PixelDrawPipe::finalize();
}

void XRRenderer::init$($MaskTileManager* tileManager) {
	$set(this, tileManager, tileManager);
	$set(this, rectBuffer, $nc($($nc(tileManager)->getMainTile()))->getRects());
	$set(this, drawHandler, $new($XRRenderer$XRDrawHandler, this));
	$set(this, lineGen, $new($XRDrawLine));
}

void XRRenderer::validateSurface($SunGraphics2D* sg2d) {
	$useLocalCurrentObjectStackCache();
	$var($XRSurfaceData, xrsd, nullptr);
	try {
		$assign(xrsd, $cast($XRSurfaceData, $nc(sg2d)->surfaceData));
	} catch ($ClassCastException& e) {
		$throwNew($InvalidPipeException, $$str({"wrong surface data type: "_s, $nc(sg2d)->surfaceData}));
	}
	$nc(xrsd)->validateAsDestination(sg2d, $($nc(sg2d)->getCompClip()));
	$nc(xrsd->maskBuffer)->validateCompositeState($nc(sg2d)->composite, sg2d->transform$, sg2d->paint, sg2d);
}

void XRRenderer::drawLine($SunGraphics2D* sg2d, int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
	$useLocalCurrentObjectStackCache();
	$var($Region, compClip, $nc(sg2d)->getCompClip());
	int32_t transX1 = $Region::clipAdd(x1, sg2d->transX);
	int32_t transY1 = $Region::clipAdd(y1, sg2d->transY);
	int32_t transX2 = $Region::clipAdd(x2, sg2d->transX);
	int32_t transY2 = $Region::clipAdd(y2, sg2d->transY);
	$SunToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			validateSurface(sg2d);
			$var($GrowableRectArray, var$1, this->rectBuffer);
			int32_t var$2 = transX1;
			int32_t var$3 = transY1;
			int32_t var$4 = transX2;
			int32_t var$5 = transY2;
			int32_t var$6 = $nc(compClip)->getLoX();
			int32_t var$7 = compClip->getLoY();
			int32_t var$8 = compClip->getHiX();
			$nc(this->lineGen)->rasterizeLine(var$1, var$2, var$3, var$4, var$5, var$6, var$7, var$8, compClip->getHiY(), true, true);
			$nc(this->tileManager)->fillMask($cast($XRSurfaceData, sg2d->surfaceData));
		} catch ($Throwable& var$9) {
			$assign(var$0, var$9);
		} /*finally*/ {
			$SunToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void XRRenderer::drawRect($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height) {
	draw(sg2d, $$new($Rectangle2D$Float, (float)x, (float)y, (float)width, (float)height));
}

void XRRenderer::drawPolyline($SunGraphics2D* sg2d, $ints* xpoints, $ints* ypoints, int32_t npoints) {
	$var($Path2D$Float, p2d, $new($Path2D$Float));
	if (npoints > 1) {
		p2d->moveTo((float)$nc(xpoints)->get(0), (float)$nc(ypoints)->get(0));
		for (int32_t i = 1; i < npoints; ++i) {
			p2d->lineTo((float)$nc(xpoints)->get(i), (float)$nc(ypoints)->get(i));
		}
	}
	draw(sg2d, p2d);
}

void XRRenderer::drawPolygon($SunGraphics2D* sg2d, $ints* xpoints, $ints* ypoints, int32_t npoints) {
	draw(sg2d, $$new($Polygon, xpoints, ypoints, npoints));
}

void XRRenderer::fillRect($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height) {
	x = $Region::clipAdd(x, $nc(sg2d)->transX);
	y = $Region::clipAdd(y, $nc(sg2d)->transY);
	if (x > $Short::MAX_VALUE || y > $Short::MAX_VALUE) {
		return;
	}
	int32_t x2 = $Region::dimAdd(x, width);
	int32_t y2 = $Region::dimAdd(y, height);
	if (x2 < $Short::MIN_VALUE || y2 < $Short::MIN_VALUE) {
		return;
	}
	x = $XRUtils::clampToShort(x);
	y = $XRUtils::clampToShort(y);
	width = $XRUtils::clampToUShort(x2 - x);
	height = $XRUtils::clampToUShort(y2 - y);
	if (width == 0 || height == 0) {
		return;
	}
	$SunToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			validateSurface(sg2d);
			$nc(this->rectBuffer)->pushRectValues(x, y, width, height);
			$nc(this->tileManager)->fillMask($cast($XRSurfaceData, $nc(sg2d)->surfaceData));
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

void XRRenderer::fillPolygon($SunGraphics2D* sg2d, $ints* xpoints, $ints* ypoints, int32_t npoints) {
	fill(sg2d, $$new($Polygon, xpoints, ypoints, npoints));
}

void XRRenderer::drawRoundRect($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) {
	draw(sg2d, $$new($RoundRectangle2D$Float, (float)x, (float)y, (float)width, (float)height, (float)arcWidth, (float)arcHeight));
}

void XRRenderer::fillRoundRect($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) {
	fill(sg2d, $$new($RoundRectangle2D$Float, (float)x, (float)y, (float)width, (float)height, (float)arcWidth, (float)arcHeight));
}

void XRRenderer::drawOval($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height) {
	draw(sg2d, $$new($Ellipse2D$Float, (float)x, (float)y, (float)width, (float)height));
}

void XRRenderer::fillOval($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height) {
	fill(sg2d, $$new($Ellipse2D$Float, (float)x, (float)y, (float)width, (float)height));
}

void XRRenderer::drawArc($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) {
	draw(sg2d, $$new($Arc2D$Float, (float)x, (float)y, (float)width, (float)height, (float)startAngle, (float)arcAngle, $Arc2D::OPEN));
}

void XRRenderer::fillArc($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) {
	fill(sg2d, $$new($Arc2D$Float, (float)x, (float)y, (float)width, (float)height, (float)startAngle, (float)arcAngle, $Arc2D::PIE));
}

void XRRenderer::drawPath($SunGraphics2D* sg2d, $Path2D$Float* p2df, int32_t transx, int32_t transy) {
	$SunToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			validateSurface(sg2d);
			$nc(this->drawHandler)->validate(sg2d);
			$ProcessPath::drawPath(this->drawHandler, p2df, transx, transy);
			$nc(this->tileManager)->fillMask(($cast($XRSurfaceData, $nc(sg2d)->surfaceData)));
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

void XRRenderer::fillPath($SunGraphics2D* sg2d, $Path2D$Float* p2df, int32_t transx, int32_t transy) {
	$SunToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			validateSurface(sg2d);
			$nc(this->drawHandler)->validate(sg2d);
			$ProcessPath::fillPath(this->drawHandler, p2df, transx, transy);
			$nc(this->tileManager)->fillMask(($cast($XRSurfaceData, $nc(sg2d)->surfaceData)));
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

void XRRenderer::fillSpans($SunGraphics2D* sg2d, $SpanIterator* si, int32_t transx, int32_t transy) {
	$useLocalCurrentObjectStackCache();
	$SunToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			validateSurface(sg2d);
			$var($ints, spanBox, $new($ints, 4));
			while ($nc(si)->nextSpan(spanBox)) {
				$nc(this->rectBuffer)->pushRectValues(spanBox->get(0) + transx, spanBox->get(1) + transy, spanBox->get(2) - spanBox->get(0), spanBox->get(3) - spanBox->get(1));
			}
			$nc(this->tileManager)->fillMask(($cast($XRSurfaceData, $nc(sg2d)->surfaceData)));
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

void XRRenderer::draw($SunGraphics2D* sg2d, $Shape* s) {
	$useLocalCurrentObjectStackCache();
	if ($nc(sg2d)->strokeState == $SunGraphics2D::STROKE_THIN) {
		$var($Path2D$Float, p2df, nullptr);
		int32_t transx = 0;
		int32_t transy = 0;
		if (sg2d->transformState <= $SunGraphics2D::TRANSFORM_INT_TRANSLATE) {
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
		drawPath(sg2d, p2df, transx, transy);
	} else if (sg2d->strokeState < $SunGraphics2D::STROKE_CUSTOM) {
		$var($ShapeSpanIterator, si, $LoopPipe::getStrokeSpans(sg2d, s));
		{
			$var($Throwable, var$0, nullptr);
			try {
				fillSpans(sg2d, si, 0, 0);
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
		fill(sg2d, $($nc(sg2d->stroke)->createStrokedShape(s)));
	}
}

void XRRenderer::fill($SunGraphics2D* sg2d, $Shape* s) {
	$useLocalCurrentObjectStackCache();
	int32_t transx = 0;
	int32_t transy = 0;
	if ($nc(sg2d)->strokeState == $SunGraphics2D::STROKE_THIN) {
		$var($Path2D$Float, p2df, nullptr);
		if (sg2d->transformState <= $SunGraphics2D::TRANSFORM_INT_TRANSLATE) {
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
		fillPath(sg2d, p2df, transx, transy);
		return;
	}
	$var($AffineTransform, at, nullptr);
	if ($nc(sg2d)->transformState <= $SunGraphics2D::TRANSFORM_INT_TRANSLATE) {
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
			fillSpans(sg2d, ssi, transx, transy);
		} catch ($Throwable& var$4) {
			$assign(var$0, var$4);
		} /*finally*/ {
			$nc(ssi)->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

XRRenderer::XRRenderer() {
}

$Class* XRRenderer::load$($String* name, bool initialize) {
	$loadClass(XRRenderer, name, initialize, &_XRRenderer_ClassInfo_, allocate$XRRenderer);
	return class$;
}

$Class* XRRenderer::class$ = nullptr;

		} // xr
	} // java2d
} // sun