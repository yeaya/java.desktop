#include <sun/java2d/pipe/BufferedRenderPipe.h>

#include <java/awt/Polygon.h>
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
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/Runnable.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/loops/ProcessPath$DrawHandler.h>
#include <sun/java2d/loops/ProcessPath.h>
#include <sun/java2d/pipe/BufferedRenderPipe$1.h>
#include <sun/java2d/pipe/BufferedRenderPipe$AAParallelogramPipe.h>
#include <sun/java2d/pipe/BufferedRenderPipe$BufferedDrawHandler.h>
#include <sun/java2d/pipe/LoopPipe.h>
#include <sun/java2d/pipe/ParallelogramPipe.h>
#include <sun/java2d/pipe/PixelDrawPipe.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/pipe/RenderBuffer.h>
#include <sun/java2d/pipe/RenderQueue.h>
#include <sun/java2d/pipe/ShapeSpanIterator.h>
#include <sun/java2d/pipe/SpanIterator.h>
#include <jcpp.h>

#undef BYTES_PER_POLY_POINT
#undef BYTES_PER_SCANLINE
#undef BYTES_PER_SPAN
#undef OPEN
#undef PIE
#undef STROKE_CUSTOM
#undef STROKE_THIN
#undef TRANSFORM_INT_TRANSLATE
#undef TRANSFORM_TRANSLATESCALE

using $Polygon = ::java::awt::Polygon;
using $Shape = ::java::awt::Shape;
using $Stroke = ::java::awt::Stroke;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Arc2D = ::java::awt::geom::Arc2D;
using $Arc2D$Float = ::java::awt::geom::Arc2D$Float;
using $Ellipse2D = ::java::awt::geom::Ellipse2D;
using $Ellipse2D$Float = ::java::awt::geom::Ellipse2D$Float;
using $Path2D$Float = ::java::awt::geom::Path2D$Float;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $RoundRectangle2D = ::java::awt::geom::RoundRectangle2D;
using $RoundRectangle2D$Float = ::java::awt::geom::RoundRectangle2D$Float;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $ProcessPath = ::sun::java2d::loops::ProcessPath;
using $ProcessPath$DrawHandler = ::sun::java2d::loops::ProcessPath$DrawHandler;
using $BufferedRenderPipe$1 = ::sun::java2d::pipe::BufferedRenderPipe$1;
using $BufferedRenderPipe$AAParallelogramPipe = ::sun::java2d::pipe::BufferedRenderPipe$AAParallelogramPipe;
using $BufferedRenderPipe$BufferedDrawHandler = ::sun::java2d::pipe::BufferedRenderPipe$BufferedDrawHandler;
using $LoopPipe = ::sun::java2d::pipe::LoopPipe;
using $ParallelogramPipe = ::sun::java2d::pipe::ParallelogramPipe;
using $PixelDrawPipe = ::sun::java2d::pipe::PixelDrawPipe;
using $Region = ::sun::java2d::pipe::Region;
using $RenderBuffer = ::sun::java2d::pipe::RenderBuffer;
using $RenderQueue = ::sun::java2d::pipe::RenderQueue;
using $ShapeSpanIterator = ::sun::java2d::pipe::ShapeSpanIterator;
using $SpanIterator = ::sun::java2d::pipe::SpanIterator;

namespace sun {
	namespace java2d {
		namespace pipe {

$FieldInfo _BufferedRenderPipe_FieldInfo_[] = {
	{"aapgrampipe", "Lsun/java2d/pipe/ParallelogramPipe;", nullptr, 0, $field(BufferedRenderPipe, aapgrampipe)},
	{"BYTES_PER_POLY_POINT", "I", nullptr, $STATIC | $FINAL, $constField(BufferedRenderPipe, BYTES_PER_POLY_POINT)},
	{"BYTES_PER_SCANLINE", "I", nullptr, $STATIC | $FINAL, $constField(BufferedRenderPipe, BYTES_PER_SCANLINE)},
	{"BYTES_PER_SPAN", "I", nullptr, $STATIC | $FINAL, $constField(BufferedRenderPipe, BYTES_PER_SPAN)},
	{"rq", "Lsun/java2d/pipe/RenderQueue;", nullptr, $PROTECTED, $field(BufferedRenderPipe, rq)},
	{"buf", "Lsun/java2d/pipe/RenderBuffer;", nullptr, $PROTECTED, $field(BufferedRenderPipe, buf)},
	{"drawHandler", "Lsun/java2d/pipe/BufferedRenderPipe$BufferedDrawHandler;", nullptr, $PRIVATE, $field(BufferedRenderPipe, drawHandler)},
	{}
};

$MethodInfo _BufferedRenderPipe_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/java2d/pipe/RenderQueue;)V", nullptr, $PUBLIC, $method(static_cast<void(BufferedRenderPipe::*)($RenderQueue*)>(&BufferedRenderPipe::init$))},
	{"draw", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"drawArc", "(Lsun/java2d/SunGraphics2D;IIIIII)V", nullptr, $PUBLIC},
	{"drawLine", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC},
	{"drawOval", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC},
	{"drawParallelogram", "(Lsun/java2d/SunGraphics2D;DDDDDDDDDDDD)V", nullptr, $PUBLIC},
	{"drawPath", "(Lsun/java2d/SunGraphics2D;Ljava/awt/geom/Path2D$Float;II)V", nullptr, $PROTECTED},
	{"drawPoly", "(Lsun/java2d/SunGraphics2D;[I[IIZ)V", nullptr, $PROTECTED},
	{"drawPoly", "([I[IIZII)V", nullptr, $PROTECTED | $ABSTRACT},
	{"drawPolygon", "(Lsun/java2d/SunGraphics2D;[I[II)V", nullptr, $PUBLIC},
	{"drawPolyline", "(Lsun/java2d/SunGraphics2D;[I[II)V", nullptr, $PUBLIC},
	{"drawRect", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC},
	{"drawRoundRect", "(Lsun/java2d/SunGraphics2D;IIIIII)V", nullptr, $PUBLIC},
	{"fill", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"fillArc", "(Lsun/java2d/SunGraphics2D;IIIIII)V", nullptr, $PUBLIC},
	{"fillOval", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC},
	{"fillParallelogram", "(Lsun/java2d/SunGraphics2D;DDDDDDDDDD)V", nullptr, $PUBLIC},
	{"fillPath", "(Lsun/java2d/SunGraphics2D;Ljava/awt/geom/Path2D$Float;II)V", nullptr, $PROTECTED},
	{"fillPolygon", "(Lsun/java2d/SunGraphics2D;[I[II)V", nullptr, $PUBLIC},
	{"fillRect", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC},
	{"fillRoundRect", "(Lsun/java2d/SunGraphics2D;IIIIII)V", nullptr, $PUBLIC},
	{"fillSpans", "(Lsun/java2d/pipe/RenderQueue;JIILsun/java2d/pipe/SpanIterator;JII)I", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int32_t(BufferedRenderPipe::*)($RenderQueue*,int64_t,int32_t,int32_t,$SpanIterator*,int64_t,int32_t,int32_t)>(&BufferedRenderPipe::fillSpans))},
	{"fillSpans", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/pipe/SpanIterator;II)V", nullptr, $PROTECTED},
	{"getAAParallelogramPipe", "()Lsun/java2d/pipe/ParallelogramPipe;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"validateContext", "(Lsun/java2d/SunGraphics2D;)V", nullptr, $PROTECTED | $ABSTRACT},
	{"validateContextAA", "(Lsun/java2d/SunGraphics2D;)V", nullptr, $PROTECTED | $ABSTRACT},
	{}
};

#define _METHOD_INDEX_fillSpans 25

$InnerClassInfo _BufferedRenderPipe_InnerClassesInfo_[] = {
	{"sun.java2d.pipe.BufferedRenderPipe$AAParallelogramPipe", "sun.java2d.pipe.BufferedRenderPipe", "AAParallelogramPipe", $PRIVATE},
	{"sun.java2d.pipe.BufferedRenderPipe$BufferedDrawHandler", "sun.java2d.pipe.BufferedRenderPipe", "BufferedDrawHandler", $PRIVATE},
	{"sun.java2d.pipe.BufferedRenderPipe$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BufferedRenderPipe_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.java2d.pipe.BufferedRenderPipe",
	"java.lang.Object",
	"sun.java2d.pipe.PixelDrawPipe,sun.java2d.pipe.PixelFillPipe,sun.java2d.pipe.ShapeDrawPipe,sun.java2d.pipe.ParallelogramPipe",
	_BufferedRenderPipe_FieldInfo_,
	_BufferedRenderPipe_MethodInfo_,
	nullptr,
	nullptr,
	_BufferedRenderPipe_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.pipe.BufferedRenderPipe$AAParallelogramPipe,sun.java2d.pipe.BufferedRenderPipe$BufferedDrawHandler,sun.java2d.pipe.BufferedRenderPipe$1"
};

$Object* allocate$BufferedRenderPipe($Class* clazz) {
	return $of($alloc(BufferedRenderPipe));
}

int32_t BufferedRenderPipe::hashCode() {
	 return this->$PixelDrawPipe::hashCode();
}

bool BufferedRenderPipe::equals(Object$* arg0) {
	 return this->$PixelDrawPipe::equals(arg0);
}

$Object* BufferedRenderPipe::clone() {
	 return this->$PixelDrawPipe::clone();
}

$String* BufferedRenderPipe::toString() {
	 return this->$PixelDrawPipe::toString();
}

void BufferedRenderPipe::finalize() {
	this->$PixelDrawPipe::finalize();
}

void BufferedRenderPipe::init$($RenderQueue* rq) {
	$set(this, aapgrampipe, $new($BufferedRenderPipe$AAParallelogramPipe, this));
	$set(this, rq, rq);
	$set(this, buf, $nc(rq)->getBuffer());
	$set(this, drawHandler, $new($BufferedRenderPipe$BufferedDrawHandler, this));
}

$ParallelogramPipe* BufferedRenderPipe::getAAParallelogramPipe() {
	return this->aapgrampipe;
}

void BufferedRenderPipe::drawLine($SunGraphics2D* sg2d, int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
	int32_t transx = $nc(sg2d)->transX;
	int32_t transy = sg2d->transY;
	$nc(this->rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			validateContext(sg2d);
			$nc(this->rq)->ensureCapacity(20);
			$nc(this->buf)->putInt(10);
			$nc(this->buf)->putInt(x1 + transx);
			$nc(this->buf)->putInt(y1 + transy);
			$nc(this->buf)->putInt(x2 + transx);
			$nc(this->buf)->putInt(y2 + transy);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->rq)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void BufferedRenderPipe::drawRect($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height) {
	$nc(this->rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			validateContext(sg2d);
			$nc(this->rq)->ensureCapacity(20);
			$nc(this->buf)->putInt(11);
			$nc(this->buf)->putInt(x + $nc(sg2d)->transX);
			$nc(this->buf)->putInt(y + $nc(sg2d)->transY);
			$nc(this->buf)->putInt(width);
			$nc(this->buf)->putInt(height);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->rq)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void BufferedRenderPipe::fillRect($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height) {
	$nc(this->rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			validateContext(sg2d);
			$nc(this->rq)->ensureCapacity(20);
			$nc(this->buf)->putInt(20);
			$nc(this->buf)->putInt(x + $nc(sg2d)->transX);
			$nc(this->buf)->putInt(y + $nc(sg2d)->transY);
			$nc(this->buf)->putInt(width);
			$nc(this->buf)->putInt(height);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->rq)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void BufferedRenderPipe::drawRoundRect($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) {
	draw(sg2d, $$new($RoundRectangle2D$Float, (float)x, (float)y, (float)width, (float)height, (float)arcWidth, (float)arcHeight));
}

void BufferedRenderPipe::fillRoundRect($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) {
	fill(sg2d, $$new($RoundRectangle2D$Float, (float)x, (float)y, (float)width, (float)height, (float)arcWidth, (float)arcHeight));
}

void BufferedRenderPipe::drawOval($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height) {
	draw(sg2d, $$new($Ellipse2D$Float, (float)x, (float)y, (float)width, (float)height));
}

void BufferedRenderPipe::fillOval($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height) {
	fill(sg2d, $$new($Ellipse2D$Float, (float)x, (float)y, (float)width, (float)height));
}

void BufferedRenderPipe::drawArc($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) {
	draw(sg2d, $$new($Arc2D$Float, (float)x, (float)y, (float)width, (float)height, (float)startAngle, (float)arcAngle, $Arc2D::OPEN));
}

void BufferedRenderPipe::fillArc($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) {
	fill(sg2d, $$new($Arc2D$Float, (float)x, (float)y, (float)width, (float)height, (float)startAngle, (float)arcAngle, $Arc2D::PIE));
}

void BufferedRenderPipe::drawPoly($SunGraphics2D* sg2d, $ints* xPoints, $ints* yPoints, int32_t nPoints, bool isClosed) {
	$useLocalCurrentObjectStackCache();
	if (xPoints == nullptr || yPoints == nullptr) {
		$throwNew($NullPointerException, "coordinate array"_s);
	}
	if ($nc(xPoints)->length < nPoints || $nc(yPoints)->length < nPoints) {
		$throwNew($ArrayIndexOutOfBoundsException, "coordinate array"_s);
	}
	if (nPoints < 2) {
		return;
	} else if (nPoints == 2 && !isClosed) {
		drawLine(sg2d, $nc(xPoints)->get(0), $nc(yPoints)->get(0), xPoints->get(1), yPoints->get(1));
		return;
	}
	$nc(this->rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			validateContext(sg2d);
			int32_t pointBytesRequired = nPoints * BufferedRenderPipe::BYTES_PER_POLY_POINT;
			int32_t totalBytesRequired = 20 + pointBytesRequired;
			if (totalBytesRequired <= $nc(this->buf)->capacity()) {
				if (totalBytesRequired > $nc(this->buf)->remaining()) {
					$nc(this->rq)->flushNow();
				}
				$nc(this->buf)->putInt(12);
				$nc(this->buf)->putInt(nPoints);
				$nc(this->buf)->putInt(isClosed ? 1 : 0);
				$nc(this->buf)->putInt($nc(sg2d)->transX);
				$nc(this->buf)->putInt($nc(sg2d)->transY);
				$nc(this->buf)->put(xPoints, 0, nPoints);
				$nc(this->buf)->put(yPoints, 0, nPoints);
			} else {
				$nc(this->rq)->flushAndInvokeNow($$new($BufferedRenderPipe$1, this, xPoints, yPoints, nPoints, isClosed, sg2d));
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->rq)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void BufferedRenderPipe::drawPolyline($SunGraphics2D* sg2d, $ints* xPoints, $ints* yPoints, int32_t nPoints) {
	drawPoly(sg2d, xPoints, yPoints, nPoints, false);
}

void BufferedRenderPipe::drawPolygon($SunGraphics2D* sg2d, $ints* xPoints, $ints* yPoints, int32_t nPoints) {
	drawPoly(sg2d, xPoints, yPoints, nPoints, true);
}

void BufferedRenderPipe::fillPolygon($SunGraphics2D* sg2d, $ints* xPoints, $ints* yPoints, int32_t nPoints) {
	fill(sg2d, $$new($Polygon, xPoints, yPoints, nPoints));
}

void BufferedRenderPipe::drawPath($SunGraphics2D* sg2d, $Path2D$Float* p2df, int32_t transx, int32_t transy) {
	$nc(this->rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			validateContext(sg2d);
			$nc(this->drawHandler)->validate(sg2d);
			$ProcessPath::drawPath(this->drawHandler, p2df, transx, transy);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->rq)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void BufferedRenderPipe::fillPath($SunGraphics2D* sg2d, $Path2D$Float* p2df, int32_t transx, int32_t transy) {
	$nc(this->rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			validateContext(sg2d);
			$nc(this->drawHandler)->validate(sg2d);
			$nc(this->drawHandler)->startFillPath();
			$ProcessPath::fillPath(this->drawHandler, p2df, transx, transy);
			$nc(this->drawHandler)->endFillPath();
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->rq)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

int32_t BufferedRenderPipe::fillSpans($RenderQueue* rq, int64_t buf, int32_t pos, int32_t limit, $SpanIterator* si, int64_t iterator, int32_t transx, int32_t transy) {
	int32_t $ret = 0;
	$prepareNative(BufferedRenderPipe, fillSpans, int32_t, $RenderQueue* rq, int64_t buf, int32_t pos, int32_t limit, $SpanIterator* si, int64_t iterator, int32_t transx, int32_t transy);
	$ret = $invokeNative(rq, buf, pos, limit, si, iterator, transx, transy);
	$finishNative();
	return $ret;
}

void BufferedRenderPipe::fillSpans($SunGraphics2D* sg2d, $SpanIterator* si, int32_t transx, int32_t transy) {
	$useLocalCurrentObjectStackCache();
	$nc(this->rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			validateContext(sg2d);
			$nc(this->rq)->ensureCapacity(24);
			$var($RenderQueue, var$1, this->rq);
			int64_t var$2 = $nc(this->buf)->getAddress();
			int32_t var$3 = $nc(this->buf)->position();
			int32_t var$4 = $nc(this->buf)->capacity();
			$var($SpanIterator, var$5, si);
			int32_t newpos = fillSpans(var$1, var$2, var$3, var$4, var$5, $nc(si)->getNativeIterator(), transx, transy);
			$nc(this->buf)->position(newpos);
		} catch ($Throwable& var$6) {
			$assign(var$0, var$6);
		} /*finally*/ {
			$nc(this->rq)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void BufferedRenderPipe::fillParallelogram($SunGraphics2D* sg2d, double ux1, double uy1, double ux2, double uy2, double x, double y, double dx1, double dy1, double dx2, double dy2) {
	$nc(this->rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			validateContext(sg2d);
			$nc(this->rq)->ensureCapacity(28);
			$nc(this->buf)->putInt(22);
			$nc(this->buf)->putFloat((float)x);
			$nc(this->buf)->putFloat((float)y);
			$nc(this->buf)->putFloat((float)dx1);
			$nc(this->buf)->putFloat((float)dy1);
			$nc(this->buf)->putFloat((float)dx2);
			$nc(this->buf)->putFloat((float)dy2);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->rq)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void BufferedRenderPipe::drawParallelogram($SunGraphics2D* sg2d, double ux1, double uy1, double ux2, double uy2, double x, double y, double dx1, double dy1, double dx2, double dy2, double lw1, double lw2) {
	$nc(this->rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			validateContext(sg2d);
			$nc(this->rq)->ensureCapacity(36);
			$nc(this->buf)->putInt(15);
			$nc(this->buf)->putFloat((float)x);
			$nc(this->buf)->putFloat((float)y);
			$nc(this->buf)->putFloat((float)dx1);
			$nc(this->buf)->putFloat((float)dy1);
			$nc(this->buf)->putFloat((float)dx2);
			$nc(this->buf)->putFloat((float)dy2);
			$nc(this->buf)->putFloat((float)lw1);
			$nc(this->buf)->putFloat((float)lw2);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->rq)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void BufferedRenderPipe::draw($SunGraphics2D* sg2d, $Shape* s) {
	$useLocalCurrentObjectStackCache();
	if ($nc(sg2d)->strokeState == $SunGraphics2D::STROKE_THIN) {
		if ($instanceOf($Polygon, s)) {
			if (sg2d->transformState < $SunGraphics2D::TRANSFORM_TRANSLATESCALE) {
				$var($Polygon, p, $cast($Polygon, s));
				drawPolygon(sg2d, $nc(p)->xpoints, p->ypoints, p->npoints);
				return;
			}
		}
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

void BufferedRenderPipe::fill($SunGraphics2D* sg2d, $Shape* s) {
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

BufferedRenderPipe::BufferedRenderPipe() {
}

$Class* BufferedRenderPipe::load$($String* name, bool initialize) {
	$loadClass(BufferedRenderPipe, name, initialize, &_BufferedRenderPipe_ClassInfo_, allocate$BufferedRenderPipe);
	return class$;
}

$Class* BufferedRenderPipe::class$ = nullptr;

		} // pipe
	} // java2d
} // sun