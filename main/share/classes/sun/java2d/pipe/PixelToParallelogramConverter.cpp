#include <sun/java2d/pipe/PixelToParallelogramConverter.h>

#include <java/awt/BasicStroke.h>
#include <java/awt/Shape.h>
#include <java/awt/Stroke.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Line2D.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/lang/InternalError.h>
#include <java/lang/Math.h>
#include <sun/awt/SunHints.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/pipe/ParallelogramPipe.h>
#include <sun/java2d/pipe/PixelDrawPipe.h>
#include <sun/java2d/pipe/PixelToShapeConverter.h>
#include <sun/java2d/pipe/ShapeDrawPipe.h>
#include <jcpp.h>

#undef CAP_BUTT
#undef CAP_ROUND
#undef CAP_SQUARE
#undef INTVAL_STROKE_PURE
#undef JOIN_MITER
#undef STROKE_CUSTOM
#undef STROKE_THIN
#undef STROKE_THINDASHED
#undef TRANSFORM_ANY_TRANSLATE
#undef TRANSFORM_GENERIC
#undef TRANSFORM_INT_TRANSLATE
#undef TRANSFORM_ISIDENT
#undef TRANSFORM_TRANSLATESCALE

using $BasicStroke = ::java::awt::BasicStroke;
using $Shape = ::java::awt::Shape;
using $Stroke = ::java::awt::Stroke;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Line2D = ::java::awt::geom::Line2D;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InternalError = ::java::lang::InternalError;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunHints = ::sun::awt::SunHints;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $ParallelogramPipe = ::sun::java2d::pipe::ParallelogramPipe;
using $PixelDrawPipe = ::sun::java2d::pipe::PixelDrawPipe;
using $PixelToShapeConverter = ::sun::java2d::pipe::PixelToShapeConverter;
using $ShapeDrawPipe = ::sun::java2d::pipe::ShapeDrawPipe;

namespace sun {
	namespace java2d {
		namespace pipe {

$FieldInfo _PixelToParallelogramConverter_FieldInfo_[] = {
	{"outrenderer", "Lsun/java2d/pipe/ParallelogramPipe;", nullptr, 0, $field(PixelToParallelogramConverter, outrenderer)},
	{"minPenSize", "D", nullptr, 0, $field(PixelToParallelogramConverter, minPenSize)},
	{"normPosition", "D", nullptr, 0, $field(PixelToParallelogramConverter, normPosition)},
	{"normRoundingBias", "D", nullptr, 0, $field(PixelToParallelogramConverter, normRoundingBias)},
	{"adjustfill", "Z", nullptr, 0, $field(PixelToParallelogramConverter, adjustfill)},
	{}
};

$MethodInfo _PixelToParallelogramConverter_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/java2d/pipe/ShapeDrawPipe;Lsun/java2d/pipe/ParallelogramPipe;DDZ)V", nullptr, $PUBLIC, $method(static_cast<void(PixelToParallelogramConverter::*)($ShapeDrawPipe*,$ParallelogramPipe*,double,double,bool)>(&PixelToParallelogramConverter::init$))},
	{"draw", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"drawGeneralLine", "(Lsun/java2d/SunGraphics2D;DDDD)Z", nullptr, $PUBLIC},
	{"drawLine", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC},
	{"drawRect", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC},
	{"drawRectangle", "(Lsun/java2d/SunGraphics2D;DDDDD)V", nullptr, $PUBLIC},
	{"fill", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"fillOuterParallelogram", "(Lsun/java2d/SunGraphics2D;DDDDDDDDDDDDDD)V", nullptr, $PUBLIC},
	{"fillRect", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC},
	{"fillRectangle", "(Lsun/java2d/SunGraphics2D;DDDD)V", nullptr, $PUBLIC},
	{"len", "(DD)D", nullptr, $STATIC, $method(static_cast<double(*)(double,double)>(&PixelToParallelogramConverter::len))},
	{"normalize", "(D)D", nullptr, 0},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PixelToParallelogramConverter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.pipe.PixelToParallelogramConverter",
	"sun.java2d.pipe.PixelToShapeConverter",
	"sun.java2d.pipe.ShapeDrawPipe",
	_PixelToParallelogramConverter_FieldInfo_,
	_PixelToParallelogramConverter_MethodInfo_
};

$Object* allocate$PixelToParallelogramConverter($Class* clazz) {
	return $of($alloc(PixelToParallelogramConverter));
}

int32_t PixelToParallelogramConverter::hashCode() {
	 return this->$PixelToShapeConverter::hashCode();
}

bool PixelToParallelogramConverter::equals(Object$* arg0) {
	 return this->$PixelToShapeConverter::equals(arg0);
}

$Object* PixelToParallelogramConverter::clone() {
	 return this->$PixelToShapeConverter::clone();
}

$String* PixelToParallelogramConverter::toString() {
	 return this->$PixelToShapeConverter::toString();
}

void PixelToParallelogramConverter::finalize() {
	this->$PixelToShapeConverter::finalize();
}

void PixelToParallelogramConverter::init$($ShapeDrawPipe* shapepipe, $ParallelogramPipe* pgrampipe, double minPenSize, double normPosition, bool adjustfill) {
	$PixelToShapeConverter::init$(shapepipe);
	$set(this, outrenderer, pgrampipe);
	this->minPenSize = minPenSize;
	this->normPosition = normPosition;
	this->normRoundingBias = 0.5 - normPosition;
	this->adjustfill = adjustfill;
}

void PixelToParallelogramConverter::drawLine($SunGraphics2D* sg2d, int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
	if (!drawGeneralLine(sg2d, (double)x1, (double)y1, (double)x2, (double)y2)) {
		$PixelToShapeConverter::drawLine(sg2d, x1, y1, x2, y2);
	}
}

void PixelToParallelogramConverter::drawRect($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t w, int32_t h) {
	if (w >= 0 && h >= 0) {
		if ($nc(sg2d)->strokeState < $SunGraphics2D::STROKE_CUSTOM) {
			$var($BasicStroke, bs, $cast($BasicStroke, sg2d->stroke));
			if (w > 0 && h > 0) {
				bool var$0 = $nc(bs)->getLineJoin() == $BasicStroke::JOIN_MITER;
				if (var$0 && bs->getDashArray() == nullptr) {
					double lw = bs->getLineWidth();
					drawRectangle(sg2d, (double)x, (double)y, (double)w, (double)h, lw);
					return;
				}
			} else {
				drawLine(sg2d, x, y, x + w, y + h);
				return;
			}
		}
		$PixelToShapeConverter::drawRect(sg2d, x, y, w, h);
	}
}

void PixelToParallelogramConverter::fillRect($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t w, int32_t h) {
	if (w > 0 && h > 0) {
		fillRectangle(sg2d, (double)x, (double)y, (double)w, (double)h);
	}
}

void PixelToParallelogramConverter::draw($SunGraphics2D* sg2d, $Shape* s) {
	$useLocalCurrentObjectStackCache();
	if ($nc(sg2d)->strokeState < $SunGraphics2D::STROKE_CUSTOM) {
		$var($BasicStroke, bs, $cast($BasicStroke, sg2d->stroke));
		if ($instanceOf($Rectangle2D, s)) {
			bool var$0 = $nc(bs)->getLineJoin() == $BasicStroke::JOIN_MITER;
			if (var$0 && bs->getDashArray() == nullptr) {
				$var($Rectangle2D, r2d, $cast($Rectangle2D, s));
				double w = $nc(r2d)->getWidth();
				double h = r2d->getHeight();
				double x = r2d->getX();
				double y = r2d->getY();
				if (w >= 0 && h >= 0) {
					double lw = bs->getLineWidth();
					drawRectangle(sg2d, x, y, w, h, lw);
				}
				return;
			}
		} else if ($instanceOf($Line2D, s)) {
			$var($Line2D, l2d, $cast($Line2D, s));
			$var($SunGraphics2D, var$1, sg2d);
			double var$2 = $nc(l2d)->getX1();
			double var$3 = l2d->getY1();
			double var$4 = l2d->getX2();
			if (drawGeneralLine(var$1, var$2, var$3, var$4, l2d->getY2())) {
				return;
			}
		}
	}
	$nc(this->outpipe)->draw(sg2d, s);
}

void PixelToParallelogramConverter::fill($SunGraphics2D* sg2d, $Shape* s) {
	if ($instanceOf($Rectangle2D, s)) {
		$var($Rectangle2D, r2d, $cast($Rectangle2D, s));
		double w = $nc(r2d)->getWidth();
		double h = r2d->getHeight();
		if (w > 0 && h > 0) {
			double x = r2d->getX();
			double y = r2d->getY();
			fillRectangle(sg2d, x, y, w, h);
		}
		return;
	}
	$nc(this->outpipe)->fill(sg2d, s);
}

double PixelToParallelogramConverter::len(double x, double y) {
	$init(PixelToParallelogramConverter);
	return ((x == 0) ? $Math::abs(y) : ((y == 0) ? $Math::abs(x) : $Math::sqrt(x * x + y * y)));
}

double PixelToParallelogramConverter::normalize(double v) {
	return $Math::floor(v + this->normRoundingBias) + this->normPosition;
}

bool PixelToParallelogramConverter::drawGeneralLine($SunGraphics2D* sg2d, double ux1, double uy1, double ux2, double uy2) {
	$useLocalCurrentObjectStackCache();
	if ($nc(sg2d)->strokeState == $SunGraphics2D::STROKE_CUSTOM || $nc(sg2d)->strokeState == $SunGraphics2D::STROKE_THINDASHED) {
		return false;
	}
	$var($BasicStroke, bs, $cast($BasicStroke, $nc(sg2d)->stroke));
	int32_t cap = $nc(bs)->getEndCap();
	if (cap == $BasicStroke::CAP_ROUND || bs->getDashArray() != nullptr) {
		return false;
	}
	double lw = bs->getLineWidth();
	double dx = ux2 - ux1;
	double dy = uy2 - uy1;
	double x1 = 0.0;
	double y1 = 0.0;
	double x2 = 0.0;
	double y2 = 0.0;
	switch (sg2d->transformState) {
	case $SunGraphics2D::TRANSFORM_GENERIC:
		{}
	case $SunGraphics2D::TRANSFORM_TRANSLATESCALE:
		{
			{
				$var($doubles, coords, $new($doubles, {
					ux1,
					uy1,
					ux2,
					uy2
				}));
				$nc(sg2d->transform$)->transform(coords, 0, coords, 0, 2);
				x1 = coords->get(0);
				y1 = coords->get(1);
				x2 = coords->get(2);
				y2 = coords->get(3);
			}
			break;
		}
	case $SunGraphics2D::TRANSFORM_ANY_TRANSLATE:
		{}
	case $SunGraphics2D::TRANSFORM_INT_TRANSLATE:
		{
			{
				double tx = $nc(sg2d->transform$)->getTranslateX();
				double ty = $nc(sg2d->transform$)->getTranslateY();
				x1 = ux1 + tx;
				y1 = uy1 + ty;
				x2 = ux2 + tx;
				y2 = uy2 + ty;
			}
			break;
		}
	case $SunGraphics2D::TRANSFORM_ISIDENT:
		{
			x1 = ux1;
			y1 = uy1;
			x2 = ux2;
			y2 = uy2;
			break;
		}
	default:
		{
			$throwNew($InternalError, "unknown TRANSFORM state..."_s);
		}
	}
	if (sg2d->strokeHint != $SunHints::INTVAL_STROKE_PURE) {
		if (sg2d->strokeState == $SunGraphics2D::STROKE_THIN && $instanceOf($PixelDrawPipe, this->outrenderer)) {
			int32_t ix1 = $cast(int32_t, $Math::floor(x1 - sg2d->transX));
			int32_t iy1 = $cast(int32_t, $Math::floor(y1 - sg2d->transY));
			int32_t ix2 = $cast(int32_t, $Math::floor(x2 - sg2d->transX));
			int32_t iy2 = $cast(int32_t, $Math::floor(y2 - sg2d->transY));
			$nc(($cast($PixelDrawPipe, this->outrenderer)))->drawLine(sg2d, ix1, iy1, ix2, iy2);
			return true;
		}
		x1 = normalize(x1);
		y1 = normalize(y1);
		x2 = normalize(x2);
		y2 = normalize(y2);
	}
	if (sg2d->transformState >= $SunGraphics2D::TRANSFORM_TRANSLATESCALE) {
		double len = PixelToParallelogramConverter::len(dx, dy);
		if (len == 0) {
			dx = (len = (double)1);
		}
		$var($doubles, unitvector, $new($doubles, {
			dy / len,
			-dx / len
		}));
		$nc(sg2d->transform$)->deltaTransform(unitvector, 0, unitvector, 0, 1);
		lw *= PixelToParallelogramConverter::len(unitvector->get(0), unitvector->get(1));
	}
	lw = $Math::max(lw, this->minPenSize);
	dx = x2 - x1;
	dy = y2 - y1;
	double len = PixelToParallelogramConverter::len(dx, dy);
	double udx = 0.0;
	double udy = 0.0;
	if (len == 0) {
		if (cap == $BasicStroke::CAP_BUTT) {
			return true;
		}
		udx = lw;
		udy = (double)0;
	} else {
		udx = lw * dx / len;
		udy = lw * dy / len;
	}
	double px = x1 + udy / 2.0;
	double py = y1 - udx / 2.0;
	if (cap == $BasicStroke::CAP_SQUARE) {
		px -= udx / 2.0;
		py -= udy / 2.0;
		dx += udx;
		dy += udy;
	}
	$nc(this->outrenderer)->fillParallelogram(sg2d, ux1, uy1, ux2, uy2, px, py, -udy, udx, dx, dy);
	return true;
}

void PixelToParallelogramConverter::fillRectangle($SunGraphics2D* sg2d, double rx, double ry, double rw, double rh) {
	double px = 0.0;
	double py = 0.0;
	double dx1 = 0.0;
	double dy1 = 0.0;
	double dx2 = 0.0;
	double dy2 = 0.0;
	$var($AffineTransform, txform, $nc(sg2d)->transform$);
	dx1 = $nc(txform)->getScaleX();
	dy1 = txform->getShearY();
	dx2 = txform->getShearX();
	dy2 = txform->getScaleY();
	px = rx * dx1 + ry * dx2 + txform->getTranslateX();
	py = rx * dy1 + ry * dy2 + txform->getTranslateY();
	dx1 *= rw;
	dy1 *= rw;
	dx2 *= rh;
	dy2 *= rh;
	if (this->adjustfill && sg2d->strokeState < $SunGraphics2D::STROKE_CUSTOM && sg2d->strokeHint != $SunHints::INTVAL_STROKE_PURE) {
		double newx = normalize(px);
		double newy = normalize(py);
		dx1 = normalize(px + dx1) - newx;
		dy1 = normalize(py + dy1) - newy;
		dx2 = normalize(px + dx2) - newx;
		dy2 = normalize(py + dy2) - newy;
		px = newx;
		py = newy;
	}
	$nc(this->outrenderer)->fillParallelogram(sg2d, rx, ry, rx + rw, ry + rh, px, py, dx1, dy1, dx2, dy2);
}

void PixelToParallelogramConverter::drawRectangle($SunGraphics2D* sg2d, double rx, double ry, double rw, double rh, double lw) {
	double px = 0.0;
	double py = 0.0;
	double dx1 = 0.0;
	double dy1 = 0.0;
	double dx2 = 0.0;
	double dy2 = 0.0;
	double lw1 = 0.0;
	double lw2 = 0.0;
	$var($AffineTransform, txform, $nc(sg2d)->transform$);
	dx1 = $nc(txform)->getScaleX();
	dy1 = txform->getShearY();
	dx2 = txform->getShearX();
	dy2 = txform->getScaleY();
	px = rx * dx1 + ry * dx2 + txform->getTranslateX();
	py = rx * dy1 + ry * dy2 + txform->getTranslateY();
	lw1 = len(dx1, dy1) * lw;
	lw2 = len(dx2, dy2) * lw;
	dx1 *= rw;
	dy1 *= rw;
	dx2 *= rh;
	dy2 *= rh;
	if (sg2d->strokeState < $SunGraphics2D::STROKE_CUSTOM && sg2d->strokeHint != $SunHints::INTVAL_STROKE_PURE) {
		double newx = normalize(px);
		double newy = normalize(py);
		dx1 = normalize(px + dx1) - newx;
		dy1 = normalize(py + dy1) - newy;
		dx2 = normalize(px + dx2) - newx;
		dy2 = normalize(py + dy2) - newy;
		px = newx;
		py = newy;
	}
	lw1 = $Math::max(lw1, this->minPenSize);
	lw2 = $Math::max(lw2, this->minPenSize);
	double len1 = len(dx1, dy1);
	double len2 = len(dx2, dy2);
	if (lw1 >= len1 || lw2 >= len2) {
		fillOuterParallelogram(sg2d, rx, ry, rx + rw, ry + rh, px, py, dx1, dy1, dx2, dy2, len1, len2, lw1, lw2);
	} else {
		$nc(this->outrenderer)->drawParallelogram(sg2d, rx, ry, rx + rw, ry + rh, px, py, dx1, dy1, dx2, dy2, lw1 / len1, lw2 / len2);
	}
}

void PixelToParallelogramConverter::fillOuterParallelogram($SunGraphics2D* sg2d, double ux1, double uy1, double ux2, double uy2, double px, double py, double dx1, double dy1, double dx2, double dy2, double len1, double len2, double lw1, double lw2) {
	double udx1 = dx1 / len1;
	double udy1 = dy1 / len1;
	double udx2 = dx2 / len2;
	double udy2 = dy2 / len2;
	if (len1 == 0) {
		if (len2 == 0) {
			udx2 = (double)0;
			udy2 = (double)1;
		}
		udx1 = udy2;
		udy1 = -udx2;
	} else if (len2 == 0) {
		udx2 = udy1;
		udy2 = -udx1;
	}
	udx1 *= lw1;
	udy1 *= lw1;
	udx2 *= lw2;
	udy2 *= lw2;
	px -= (udx1 + udx2) / 2;
	py -= (udy1 + udy2) / 2;
	dx1 += udx1;
	dy1 += udy1;
	dx2 += udx2;
	dy2 += udy2;
	$nc(this->outrenderer)->fillParallelogram(sg2d, ux1, uy1, ux2, uy2, px, py, dx1, dy1, dx2, dy2);
}

PixelToParallelogramConverter::PixelToParallelogramConverter() {
}

$Class* PixelToParallelogramConverter::load$($String* name, bool initialize) {
	$loadClass(PixelToParallelogramConverter, name, initialize, &_PixelToParallelogramConverter_ClassInfo_, allocate$PixelToParallelogramConverter);
	return class$;
}

$Class* PixelToParallelogramConverter::class$ = nullptr;

		} // pipe
	} // java2d
} // sun