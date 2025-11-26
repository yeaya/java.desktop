#include <sun/java2d/pipe/LoopPipe.h>

#include <java/awt/BasicStroke.h>
#include <java/awt/Shape.h>
#include <java/awt/Stroke.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Arc2D$Float.h>
#include <java/awt/geom/Arc2D.h>
#include <java/awt/geom/Ellipse2D$Float.h>
#include <java/awt/geom/Ellipse2D.h>
#include <java/awt/geom/Path2D$Float.h>
#include <java/awt/geom/PathIterator.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/awt/geom/RoundRectangle2D$Float.h>
#include <java/awt/geom/RoundRectangle2D.h>
#include <java/lang/InternalError.h>
#include <sun/awt/SunHints.h>
#include <sun/awt/geom/PathConsumer2D.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/DrawLine.h>
#include <sun/java2d/loops/DrawParallelogram.h>
#include <sun/java2d/loops/DrawPath.h>
#include <sun/java2d/loops/DrawPolygons.h>
#include <sun/java2d/loops/DrawRect.h>
#include <sun/java2d/loops/FillParallelogram.h>
#include <sun/java2d/loops/FillPath.h>
#include <sun/java2d/loops/FillRect.h>
#include <sun/java2d/loops/FillSpans.h>
#include <sun/java2d/loops/RenderLoops.h>
#include <sun/java2d/pipe/PixelDrawPipe.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/pipe/RenderingEngine.h>
#include <sun/java2d/pipe/ShapeDrawPipe.h>
#include <sun/java2d/pipe/ShapeSpanIterator.h>
#include <sun/java2d/pipe/SpanIterator.h>
#include <jcpp.h>

#undef CLIP_SHAPE
#undef INTVAL_STROKE_PURE
#undef OPEN
#undef PIE
#undef STROKE_CUSTOM
#undef STROKE_THIN
#undef STROKE_THINDASHED
#undef TRANSFORM_INT_TRANSLATE
#undef TRANSFORM_ISIDENT
#undef WIND_NON_ZERO

using $BasicStroke = ::java::awt::BasicStroke;
using $Shape = ::java::awt::Shape;
using $Stroke = ::java::awt::Stroke;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Arc2D = ::java::awt::geom::Arc2D;
using $Arc2D$Float = ::java::awt::geom::Arc2D$Float;
using $Ellipse2D = ::java::awt::geom::Ellipse2D;
using $Ellipse2D$Float = ::java::awt::geom::Ellipse2D$Float;
using $Path2D$Float = ::java::awt::geom::Path2D$Float;
using $PathIterator = ::java::awt::geom::PathIterator;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $RoundRectangle2D = ::java::awt::geom::RoundRectangle2D;
using $RoundRectangle2D$Float = ::java::awt::geom::RoundRectangle2D$Float;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunHints = ::sun::awt::SunHints;
using $PathConsumer2D = ::sun::awt::geom::PathConsumer2D;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $DrawLine = ::sun::java2d::loops::DrawLine;
using $DrawParallelogram = ::sun::java2d::loops::DrawParallelogram;
using $DrawPath = ::sun::java2d::loops::DrawPath;
using $DrawPolygons = ::sun::java2d::loops::DrawPolygons;
using $DrawRect = ::sun::java2d::loops::DrawRect;
using $FillParallelogram = ::sun::java2d::loops::FillParallelogram;
using $FillPath = ::sun::java2d::loops::FillPath;
using $FillRect = ::sun::java2d::loops::FillRect;
using $FillSpans = ::sun::java2d::loops::FillSpans;
using $RenderLoops = ::sun::java2d::loops::RenderLoops;
using $LoopBasedPipe = ::sun::java2d::pipe::LoopBasedPipe;
using $ParallelogramPipe = ::sun::java2d::pipe::ParallelogramPipe;
using $PixelDrawPipe = ::sun::java2d::pipe::PixelDrawPipe;
using $PixelFillPipe = ::sun::java2d::pipe::PixelFillPipe;
using $Region = ::sun::java2d::pipe::Region;
using $RenderingEngine = ::sun::java2d::pipe::RenderingEngine;
using $ShapeDrawPipe = ::sun::java2d::pipe::ShapeDrawPipe;
using $ShapeSpanIterator = ::sun::java2d::pipe::ShapeSpanIterator;
using $SpanIterator = ::sun::java2d::pipe::SpanIterator;

namespace sun {
	namespace java2d {
		namespace pipe {

$FieldInfo _LoopPipe_FieldInfo_[] = {
	{"RenderEngine", "Lsun/java2d/pipe/RenderingEngine;", nullptr, $STATIC | $FINAL, $staticField(LoopPipe, RenderEngine)},
	{}
};

$MethodInfo _LoopPipe_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LoopPipe::*)()>(&LoopPipe::init$))},
	{"draw", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"drawArc", "(Lsun/java2d/SunGraphics2D;IIIIII)V", nullptr, $PUBLIC},
	{"drawLine", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC},
	{"drawOval", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC},
	{"drawParallelogram", "(Lsun/java2d/SunGraphics2D;DDDDDDDDDDDD)V", nullptr, $PUBLIC},
	{"drawPolygon", "(Lsun/java2d/SunGraphics2D;[I[II)V", nullptr, $PUBLIC},
	{"drawPolyline", "(Lsun/java2d/SunGraphics2D;[I[II)V", nullptr, $PUBLIC},
	{"drawRect", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC},
	{"drawRoundRect", "(Lsun/java2d/SunGraphics2D;IIIIII)V", nullptr, $PUBLIC},
	{"fill", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"fillArc", "(Lsun/java2d/SunGraphics2D;IIIIII)V", nullptr, $PUBLIC},
	{"fillOval", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC},
	{"fillParallelogram", "(Lsun/java2d/SunGraphics2D;DDDDDDDDDD)V", nullptr, $PUBLIC},
	{"fillPolygon", "(Lsun/java2d/SunGraphics2D;[I[II)V", nullptr, $PUBLIC},
	{"fillRect", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC},
	{"fillRoundRect", "(Lsun/java2d/SunGraphics2D;IIIIII)V", nullptr, $PUBLIC},
	{"fillSpans", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/pipe/SpanIterator;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($SunGraphics2D*,$SpanIterator*)>(&LoopPipe::fillSpans))},
	{"getFillSSI", "(Lsun/java2d/SunGraphics2D;)Lsun/java2d/pipe/ShapeSpanIterator;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ShapeSpanIterator*(*)($SunGraphics2D*)>(&LoopPipe::getFillSSI))},
	{"getStrokeSpans", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Shape;)Lsun/java2d/pipe/ShapeSpanIterator;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ShapeSpanIterator*(*)($SunGraphics2D*,$Shape*)>(&LoopPipe::getStrokeSpans))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _LoopPipe_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.pipe.LoopPipe",
	"java.lang.Object",
	"sun.java2d.pipe.PixelDrawPipe,sun.java2d.pipe.PixelFillPipe,sun.java2d.pipe.ParallelogramPipe,sun.java2d.pipe.ShapeDrawPipe,sun.java2d.pipe.LoopBasedPipe",
	_LoopPipe_FieldInfo_,
	_LoopPipe_MethodInfo_
};

$Object* allocate$LoopPipe($Class* clazz) {
	return $of($alloc(LoopPipe));
}

int32_t LoopPipe::hashCode() {
	 return this->$PixelDrawPipe::hashCode();
}

bool LoopPipe::equals(Object$* arg0) {
	 return this->$PixelDrawPipe::equals(arg0);
}

$Object* LoopPipe::clone() {
	 return this->$PixelDrawPipe::clone();
}

$String* LoopPipe::toString() {
	 return this->$PixelDrawPipe::toString();
}

void LoopPipe::finalize() {
	this->$PixelDrawPipe::finalize();
}

$RenderingEngine* LoopPipe::RenderEngine = nullptr;

void LoopPipe::init$() {
}

void LoopPipe::drawLine($SunGraphics2D* sg2d, int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
	int32_t tX = $nc(sg2d)->transX;
	int32_t tY = sg2d->transY;
	$nc($nc(sg2d->loops)->drawLineLoop)->DrawLine$(sg2d, $(sg2d->getSurfaceData()), x1 + tX, y1 + tY, x2 + tX, y2 + tY);
}

void LoopPipe::drawRect($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height) {
	$nc($nc($nc(sg2d)->loops)->drawRectLoop)->DrawRect$(sg2d, $(sg2d->getSurfaceData()), x + sg2d->transX, y + sg2d->transY, width, height);
}

void LoopPipe::drawRoundRect($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) {
	$nc($nc(sg2d)->shapepipe)->draw(sg2d, $$new($RoundRectangle2D$Float, (float)x, (float)y, (float)width, (float)height, (float)arcWidth, (float)arcHeight));
}

void LoopPipe::drawOval($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height) {
	$nc($nc(sg2d)->shapepipe)->draw(sg2d, $$new($Ellipse2D$Float, (float)x, (float)y, (float)width, (float)height));
}

void LoopPipe::drawArc($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) {
	$nc($nc(sg2d)->shapepipe)->draw(sg2d, $$new($Arc2D$Float, (float)x, (float)y, (float)width, (float)height, (float)startAngle, (float)arcAngle, $Arc2D::OPEN));
}

void LoopPipe::drawPolyline($SunGraphics2D* sg2d, $ints* xPoints, $ints* yPoints, int32_t nPoints) {
	$useLocalCurrentObjectStackCache();
	$var($ints, nPointsArray, $new($ints, {nPoints}));
	$nc($nc($nc(sg2d)->loops)->drawPolygonsLoop)->DrawPolygons$(sg2d, $(sg2d->getSurfaceData()), xPoints, yPoints, nPointsArray, 1, sg2d->transX, sg2d->transY, false);
}

void LoopPipe::drawPolygon($SunGraphics2D* sg2d, $ints* xPoints, $ints* yPoints, int32_t nPoints) {
	$useLocalCurrentObjectStackCache();
	$var($ints, nPointsArray, $new($ints, {nPoints}));
	$nc($nc($nc(sg2d)->loops)->drawPolygonsLoop)->DrawPolygons$(sg2d, $(sg2d->getSurfaceData()), xPoints, yPoints, nPointsArray, 1, sg2d->transX, sg2d->transY, true);
}

void LoopPipe::fillRect($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height) {
	$nc($nc($nc(sg2d)->loops)->fillRectLoop)->FillRect$(sg2d, $(sg2d->getSurfaceData()), x + sg2d->transX, y + sg2d->transY, width, height);
}

void LoopPipe::fillRoundRect($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) {
	$nc($nc(sg2d)->shapepipe)->fill(sg2d, $$new($RoundRectangle2D$Float, (float)x, (float)y, (float)width, (float)height, (float)arcWidth, (float)arcHeight));
}

void LoopPipe::fillOval($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height) {
	$nc($nc(sg2d)->shapepipe)->fill(sg2d, $$new($Ellipse2D$Float, (float)x, (float)y, (float)width, (float)height));
}

void LoopPipe::fillArc($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) {
	$nc($nc(sg2d)->shapepipe)->fill(sg2d, $$new($Arc2D$Float, (float)x, (float)y, (float)width, (float)height, (float)startAngle, (float)arcAngle, $Arc2D::PIE));
}

void LoopPipe::fillPolygon($SunGraphics2D* sg2d, $ints* xPoints, $ints* yPoints, int32_t nPoints) {
	$useLocalCurrentObjectStackCache();
	$var($ShapeSpanIterator, sr, getFillSSI(sg2d));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(sr)->setOutputArea($($nc(sg2d)->getCompClip()));
			sr->appendPoly(xPoints, yPoints, nPoints, $nc(sg2d)->transX, sg2d->transY);
			fillSpans(sg2d, sr);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(sr)->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void LoopPipe::draw($SunGraphics2D* sg2d, $Shape* s) {
	$useLocalCurrentObjectStackCache();
	if ($nc(sg2d)->strokeState == $SunGraphics2D::STROKE_THIN) {
		$var($Path2D$Float, p2df, nullptr);
		int32_t transX = 0;
		int32_t transY = 0;
		if (sg2d->transformState <= $SunGraphics2D::TRANSFORM_INT_TRANSLATE) {
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
		$nc($nc(sg2d->loops)->drawPathLoop)->DrawPath$(sg2d, $(sg2d->getSurfaceData()), transX, transY, p2df);
		return;
	}
	if ($nc(sg2d)->strokeState == $SunGraphics2D::STROKE_CUSTOM) {
		fill(sg2d, $($nc(sg2d->stroke)->createStrokedShape(s)));
		return;
	}
	$var($ShapeSpanIterator, sr, getStrokeSpans(sg2d, s));
	{
		$var($Throwable, var$0, nullptr);
		try {
			fillSpans(sg2d, sr);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(sr)->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$ShapeSpanIterator* LoopPipe::getFillSSI($SunGraphics2D* sg2d) {
	$init(LoopPipe);
	bool adjust = (($instanceOf($BasicStroke, $nc(sg2d)->stroke)) && sg2d->strokeHint != $SunHints::INTVAL_STROKE_PURE);
	return $new($ShapeSpanIterator, adjust);
}

$ShapeSpanIterator* LoopPipe::getStrokeSpans($SunGraphics2D* sg2d, $Shape* s) {
	$init(LoopPipe);
	$useLocalCurrentObjectStackCache();
	$var($ShapeSpanIterator, sr, $new($ShapeSpanIterator, false));
	try {
		$var($Region, clip, $nc(sg2d)->getCompClip());
		sr->setOutputArea(clip);
		sr->setRule($PathIterator::WIND_NON_ZERO);
		$var($BasicStroke, bs, $cast($BasicStroke, sg2d->stroke));
		bool thin = (sg2d->strokeState <= $SunGraphics2D::STROKE_THINDASHED);
		bool normalize = (sg2d->strokeHint != $SunHints::INTVAL_STROKE_PURE);
		$nc(LoopPipe::RenderEngine)->strokeTo(s, sg2d->transform$, clip, bs, thin, normalize, false, sr);
	} catch ($Throwable& t) {
		sr->dispose();
		$assign(sr, nullptr);
		$throwNew($InternalError, $$str({"Unable to Stroke shape ("_s, $(t->getMessage()), ")"_s}), t);
	}
	return sr;
}

void LoopPipe::fill($SunGraphics2D* sg2d, $Shape* s) {
	$useLocalCurrentObjectStackCache();
	if ($nc(sg2d)->strokeState == $SunGraphics2D::STROKE_THIN) {
		$var($Path2D$Float, p2df, nullptr);
		int32_t transX = 0;
		int32_t transY = 0;
		if (sg2d->transformState <= $SunGraphics2D::TRANSFORM_INT_TRANSLATE) {
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
		$nc($nc(sg2d->loops)->fillPathLoop)->FillPath$(sg2d, $(sg2d->getSurfaceData()), transX, transY, p2df);
		return;
	}
	$var($ShapeSpanIterator, sr, getFillSSI(sg2d));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(sr)->setOutputArea($($nc(sg2d)->getCompClip()));
			$var($AffineTransform, at, ($nc(sg2d)->transformState == $SunGraphics2D::TRANSFORM_ISIDENT) ? ($AffineTransform*)nullptr : $nc(sg2d)->transform$);
			sr->appendPath($($nc(s)->getPathIterator(at)));
			fillSpans(sg2d, sr);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(sr)->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void LoopPipe::fillSpans($SunGraphics2D* sg2d, $SpanIterator* si$renamed) {
	$init(LoopPipe);
	$useLocalCurrentObjectStackCache();
	$var($SpanIterator, si, si$renamed);
	if ($nc(sg2d)->clipState == $SunGraphics2D::CLIP_SHAPE) {
		$assign(si, $nc(sg2d->clipRegion)->filter(si));
	} else {
		$var($FillSpans, fs, $nc(sg2d->loops)->fillSpansLoop);
		if (fs != nullptr) {
			fs->FillSpans$(sg2d, $(sg2d->getSurfaceData()), si);
			return;
		}
	}
	$var($ints, spanbox, $new($ints, 4));
	$var($SurfaceData, sd, $nc(sg2d)->getSurfaceData());
	while ($nc(si)->nextSpan(spanbox)) {
		int32_t x = spanbox->get(0);
		int32_t y = spanbox->get(1);
		int32_t w = spanbox->get(2) - x;
		int32_t h = spanbox->get(3) - y;
		$nc($nc(sg2d->loops)->fillRectLoop)->FillRect$(sg2d, sd, x, y, w, h);
	}
}

void LoopPipe::fillParallelogram($SunGraphics2D* sg2d, double ux1, double uy1, double ux2, double uy2, double x, double y, double dx1, double dy1, double dx2, double dy2) {
	$useLocalCurrentObjectStackCache();
	$var($FillParallelogram, fp, $nc($nc(sg2d)->loops)->fillParallelogramLoop);
	$nc(fp)->FillParallelogram$(sg2d, $(sg2d->getSurfaceData()), x, y, dx1, dy1, dx2, dy2);
}

void LoopPipe::drawParallelogram($SunGraphics2D* sg2d, double ux1, double uy1, double ux2, double uy2, double x, double y, double dx1, double dy1, double dx2, double dy2, double lw1, double lw2) {
	$useLocalCurrentObjectStackCache();
	$var($DrawParallelogram, dp, $nc($nc(sg2d)->loops)->drawParallelogramLoop);
	$nc(dp)->DrawParallelogram$(sg2d, $(sg2d->getSurfaceData()), x, y, dx1, dy1, dx2, dy2, lw1, lw2);
}

void clinit$LoopPipe($Class* class$) {
	$assignStatic(LoopPipe::RenderEngine, $RenderingEngine::getInstance());
}

LoopPipe::LoopPipe() {
}

$Class* LoopPipe::load$($String* name, bool initialize) {
	$loadClass(LoopPipe, name, initialize, &_LoopPipe_ClassInfo_, clinit$LoopPipe, allocate$LoopPipe);
	return class$;
}

$Class* LoopPipe::class$ = nullptr;

		} // pipe
	} // java2d
} // sun