#include <sun/java2d/pipe/PixelToShapeConverter.h>

#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/Arc2D$Float.h>
#include <java/awt/geom/Arc2D.h>
#include <java/awt/geom/Ellipse2D$Float.h>
#include <java/awt/geom/Ellipse2D.h>
#include <java/awt/geom/GeneralPath.h>
#include <java/awt/geom/Line2D$Float.h>
#include <java/awt/geom/Line2D.h>
#include <java/awt/geom/Path2D$Float.h>
#include <java/awt/geom/Path2D.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/awt/geom/RoundRectangle2D$Float.h>
#include <java/awt/geom/RoundRectangle2D.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/pipe/PixelDrawPipe.h>
#include <sun/java2d/pipe/ShapeDrawPipe.h>
#include <jcpp.h>

#undef OPEN
#undef PIE
#undef WIND_EVEN_ODD

using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $Arc2D = ::java::awt::geom::Arc2D;
using $Arc2D$Float = ::java::awt::geom::Arc2D$Float;
using $Ellipse2D = ::java::awt::geom::Ellipse2D;
using $Ellipse2D$Float = ::java::awt::geom::Ellipse2D$Float;
using $GeneralPath = ::java::awt::geom::GeneralPath;
using $Line2D = ::java::awt::geom::Line2D;
using $Line2D$Float = ::java::awt::geom::Line2D$Float;
using $Path2D = ::java::awt::geom::Path2D;
using $Path2D$Float = ::java::awt::geom::Path2D$Float;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $RoundRectangle2D = ::java::awt::geom::RoundRectangle2D;
using $RoundRectangle2D$Float = ::java::awt::geom::RoundRectangle2D$Float;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $PixelDrawPipe = ::sun::java2d::pipe::PixelDrawPipe;
using $PixelFillPipe = ::sun::java2d::pipe::PixelFillPipe;
using $ShapeDrawPipe = ::sun::java2d::pipe::ShapeDrawPipe;

namespace sun {
	namespace java2d {
		namespace pipe {

$FieldInfo _PixelToShapeConverter_FieldInfo_[] = {
	{"outpipe", "Lsun/java2d/pipe/ShapeDrawPipe;", nullptr, 0, $field(PixelToShapeConverter, outpipe)},
	{}
};

$MethodInfo _PixelToShapeConverter_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/java2d/pipe/ShapeDrawPipe;)V", nullptr, $PUBLIC, $method(static_cast<void(PixelToShapeConverter::*)($ShapeDrawPipe*)>(&PixelToShapeConverter::init$))},
	{"drawArc", "(Lsun/java2d/SunGraphics2D;IIIIII)V", nullptr, $PUBLIC},
	{"drawLine", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC},
	{"drawOval", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC},
	{"drawPolygon", "(Lsun/java2d/SunGraphics2D;[I[II)V", nullptr, $PUBLIC},
	{"drawPolyline", "(Lsun/java2d/SunGraphics2D;[I[II)V", nullptr, $PUBLIC},
	{"drawRect", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC},
	{"drawRoundRect", "(Lsun/java2d/SunGraphics2D;IIIIII)V", nullptr, $PUBLIC},
	{"fillArc", "(Lsun/java2d/SunGraphics2D;IIIIII)V", nullptr, $PUBLIC},
	{"fillOval", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC},
	{"fillPolygon", "(Lsun/java2d/SunGraphics2D;[I[II)V", nullptr, $PUBLIC},
	{"fillRect", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC},
	{"fillRoundRect", "(Lsun/java2d/SunGraphics2D;IIIIII)V", nullptr, $PUBLIC},
	{"makePoly", "([I[IIZ)Ljava/awt/Shape;", nullptr, $PRIVATE, $method(static_cast<$Shape*(PixelToShapeConverter::*)($ints*,$ints*,int32_t,bool)>(&PixelToShapeConverter::makePoly))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PixelToShapeConverter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.pipe.PixelToShapeConverter",
	"java.lang.Object",
	"sun.java2d.pipe.PixelDrawPipe,sun.java2d.pipe.PixelFillPipe",
	_PixelToShapeConverter_FieldInfo_,
	_PixelToShapeConverter_MethodInfo_
};

$Object* allocate$PixelToShapeConverter($Class* clazz) {
	return $of($alloc(PixelToShapeConverter));
}

int32_t PixelToShapeConverter::hashCode() {
	 return this->$PixelDrawPipe::hashCode();
}

bool PixelToShapeConverter::equals(Object$* arg0) {
	 return this->$PixelDrawPipe::equals(arg0);
}

$Object* PixelToShapeConverter::clone() {
	 return this->$PixelDrawPipe::clone();
}

$String* PixelToShapeConverter::toString() {
	 return this->$PixelDrawPipe::toString();
}

void PixelToShapeConverter::finalize() {
	this->$PixelDrawPipe::finalize();
}

void PixelToShapeConverter::init$($ShapeDrawPipe* pipe) {
	$set(this, outpipe, pipe);
}

void PixelToShapeConverter::drawLine($SunGraphics2D* sg, int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
	$nc(this->outpipe)->draw(sg, $$new($Line2D$Float, (float)x1, (float)y1, (float)x2, (float)y2));
}

void PixelToShapeConverter::drawRect($SunGraphics2D* sg, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc(this->outpipe)->draw(sg, $$new($Rectangle, x, y, w, h));
}

void PixelToShapeConverter::fillRect($SunGraphics2D* sg, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc(this->outpipe)->fill(sg, $$new($Rectangle, x, y, w, h));
}

void PixelToShapeConverter::drawRoundRect($SunGraphics2D* sg, int32_t x, int32_t y, int32_t w, int32_t h, int32_t aW, int32_t aH) {
	$nc(this->outpipe)->draw(sg, $$new($RoundRectangle2D$Float, (float)x, (float)y, (float)w, (float)h, (float)aW, (float)aH));
}

void PixelToShapeConverter::fillRoundRect($SunGraphics2D* sg, int32_t x, int32_t y, int32_t w, int32_t h, int32_t aW, int32_t aH) {
	$nc(this->outpipe)->fill(sg, $$new($RoundRectangle2D$Float, (float)x, (float)y, (float)w, (float)h, (float)aW, (float)aH));
}

void PixelToShapeConverter::drawOval($SunGraphics2D* sg, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc(this->outpipe)->draw(sg, $$new($Ellipse2D$Float, (float)x, (float)y, (float)w, (float)h));
}

void PixelToShapeConverter::fillOval($SunGraphics2D* sg, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc(this->outpipe)->fill(sg, $$new($Ellipse2D$Float, (float)x, (float)y, (float)w, (float)h));
}

void PixelToShapeConverter::drawArc($SunGraphics2D* sg, int32_t x, int32_t y, int32_t w, int32_t h, int32_t start, int32_t extent) {
	$nc(this->outpipe)->draw(sg, $$new($Arc2D$Float, (float)x, (float)y, (float)w, (float)h, (float)start, (float)extent, $Arc2D::OPEN));
}

void PixelToShapeConverter::fillArc($SunGraphics2D* sg, int32_t x, int32_t y, int32_t w, int32_t h, int32_t start, int32_t extent) {
	$nc(this->outpipe)->fill(sg, $$new($Arc2D$Float, (float)x, (float)y, (float)w, (float)h, (float)start, (float)extent, $Arc2D::PIE));
}

$Shape* PixelToShapeConverter::makePoly($ints* xPoints, $ints* yPoints, int32_t nPoints, bool close) {
	$var($GeneralPath, gp, $new($GeneralPath, $GeneralPath::WIND_EVEN_ODD));
	if (nPoints > 0) {
		gp->moveTo((float)$nc(xPoints)->get(0), (float)$nc(yPoints)->get(0));
		for (int32_t i = 1; i < nPoints; ++i) {
			gp->lineTo((float)$nc(xPoints)->get(i), (float)$nc(yPoints)->get(i));
		}
		if (close) {
			gp->closePath();
		}
	}
	return gp;
}

void PixelToShapeConverter::drawPolyline($SunGraphics2D* sg, $ints* xPoints, $ints* yPoints, int32_t nPoints) {
	$nc(this->outpipe)->draw(sg, $(makePoly(xPoints, yPoints, nPoints, false)));
}

void PixelToShapeConverter::drawPolygon($SunGraphics2D* sg, $ints* xPoints, $ints* yPoints, int32_t nPoints) {
	$nc(this->outpipe)->draw(sg, $(makePoly(xPoints, yPoints, nPoints, true)));
}

void PixelToShapeConverter::fillPolygon($SunGraphics2D* sg, $ints* xPoints, $ints* yPoints, int32_t nPoints) {
	$nc(this->outpipe)->fill(sg, $(makePoly(xPoints, yPoints, nPoints, true)));
}

PixelToShapeConverter::PixelToShapeConverter() {
}

$Class* PixelToShapeConverter::load$($String* name, bool initialize) {
	$loadClass(PixelToShapeConverter, name, initialize, &_PixelToShapeConverter_ClassInfo_, allocate$PixelToShapeConverter);
	return class$;
}

$Class* PixelToShapeConverter::class$ = nullptr;

		} // pipe
	} // java2d
} // sun