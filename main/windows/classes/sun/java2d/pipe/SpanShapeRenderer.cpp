#include <sun/java2d/pipe/SpanShapeRenderer.h>

#include <java/awt/BasicStroke.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/Stroke.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/PathIterator.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/pipe/LoopPipe.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/pipe/ShapeSpanIterator.h>
#include <sun/java2d/pipe/SpanIterator.h>
#include <jcpp.h>

#undef NON_RECTILINEAR_TRANSFORM_MASK

using $BasicStroke = ::java::awt::BasicStroke;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $Stroke = ::java::awt::Stroke;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $PathIterator = ::java::awt::geom::PathIterator;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $LoopPipe = ::sun::java2d::pipe::LoopPipe;
using $Region = ::sun::java2d::pipe::Region;
using $ShapeDrawPipe = ::sun::java2d::pipe::ShapeDrawPipe;
using $ShapeSpanIterator = ::sun::java2d::pipe::ShapeSpanIterator;
using $SpanIterator = ::sun::java2d::pipe::SpanIterator;

namespace sun {
	namespace java2d {
		namespace pipe {

$FieldInfo _SpanShapeRenderer_FieldInfo_[] = {
	{"NON_RECTILINEAR_TRANSFORM_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SpanShapeRenderer, NON_RECTILINEAR_TRANSFORM_MASK)},
	{}
};

$MethodInfo _SpanShapeRenderer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SpanShapeRenderer::*)()>(&SpanShapeRenderer::init$))},
	{"draw", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"endSequence", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"fill", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"renderBox", "(Ljava/lang/Object;IIII)V", nullptr, $PUBLIC | $ABSTRACT},
	{"renderRect", "(Lsun/java2d/SunGraphics2D;Ljava/awt/geom/Rectangle2D;)V", nullptr, $PUBLIC},
	{"renderSpans", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/pipe/Region;Ljava/awt/Shape;Lsun/java2d/pipe/ShapeSpanIterator;)V", nullptr, $PUBLIC},
	{"spanClipLoop", "(Ljava/lang/Object;Lsun/java2d/pipe/SpanIterator;Lsun/java2d/pipe/Region;[I)V", nullptr, $PUBLIC},
	{"startSequence", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Shape;Ljava/awt/Rectangle;[I)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _SpanShapeRenderer_InnerClassesInfo_[] = {
	{"sun.java2d.pipe.SpanShapeRenderer$Simple", "sun.java2d.pipe.SpanShapeRenderer", "Simple", $PUBLIC | $STATIC},
	{"sun.java2d.pipe.SpanShapeRenderer$Composite", "sun.java2d.pipe.SpanShapeRenderer", "Composite", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _SpanShapeRenderer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.java2d.pipe.SpanShapeRenderer",
	"java.lang.Object",
	"sun.java2d.pipe.ShapeDrawPipe",
	_SpanShapeRenderer_FieldInfo_,
	_SpanShapeRenderer_MethodInfo_,
	nullptr,
	nullptr,
	_SpanShapeRenderer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.pipe.SpanShapeRenderer$Simple,sun.java2d.pipe.SpanShapeRenderer$Composite"
};

$Object* allocate$SpanShapeRenderer($Class* clazz) {
	return $of($alloc(SpanShapeRenderer));
}

void SpanShapeRenderer::init$() {
}

void SpanShapeRenderer::draw($SunGraphics2D* sg, $Shape* s) {
	if ($instanceOf($BasicStroke, $nc(sg)->stroke)) {
		$var($ShapeSpanIterator, sr, $LoopPipe::getStrokeSpans(sg, s));
		{
			$var($Throwable, var$0, nullptr);
			try {
				renderSpans(sg, $(sg->getCompClip()), s, sr);
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				$nc(sr)->dispose();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} else {
		fill(sg, $($nc(sg->stroke)->createStrokedShape(s)));
	}
}

void SpanShapeRenderer::fill($SunGraphics2D* sg, $Shape* s) {
	if ($instanceOf($Rectangle2D, s) && ((int32_t)($nc($nc(sg)->transform$)->getType() & (uint32_t)SpanShapeRenderer::NON_RECTILINEAR_TRANSFORM_MASK)) == 0) {
		renderRect(sg, $cast($Rectangle2D, s));
		return;
	}
	$var($Region, clipRegion, $nc(sg)->getCompClip());
	$var($ShapeSpanIterator, sr, $LoopPipe::getFillSSI(sg));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(sr)->setOutputArea(clipRegion);
			sr->appendPath($($nc(s)->getPathIterator(sg->transform$)));
			renderSpans(sg, clipRegion, s, sr);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(sr)->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void SpanShapeRenderer::renderRect($SunGraphics2D* sg, $Rectangle2D* r) {
	$var($doubles, corners, $new($doubles, {
		$nc(r)->getX(),
		r->getY(),
		r->getWidth(),
		r->getHeight()
	}));
	(*corners)[2] += corners->get(0);
	(*corners)[3] += corners->get(1);
	if (corners->get(2) <= corners->get(0) || corners->get(3) <= corners->get(1)) {
		return;
	}
	$nc($nc(sg)->transform$)->transform(corners, 0, corners, 0, 2);
	if (corners->get(2) < corners->get(0)) {
		double t = corners->get(2);
		corners->set(2, corners->get(0));
		corners->set(0, t);
	}
	if (corners->get(3) < corners->get(1)) {
		double t = corners->get(3);
		corners->set(3, corners->get(1));
		corners->set(1, t);
	}
	$var($ints, abox, $new($ints, {
		$cast(int32_t, corners->get(0)),
		$cast(int32_t, corners->get(1)),
		$cast(int32_t, corners->get(2)),
		$cast(int32_t, corners->get(3))
	}));
	$var($Rectangle, devR, $new($Rectangle, abox->get(0), abox->get(1), abox->get(2) - abox->get(0), abox->get(3) - abox->get(1)));
	$var($Region, clipRegion, sg->getCompClip());
	$nc(clipRegion)->clipBoxToBounds(abox);
	if (abox->get(0) >= abox->get(2) || abox->get(1) >= abox->get(3)) {
		return;
	}
	$var($Object, context, startSequence(sg, r, devR, abox));
	if (clipRegion->isRectangular()) {
		renderBox(context, abox->get(0), abox->get(1), abox->get(2) - abox->get(0), abox->get(3) - abox->get(1));
	} else {
		$var($SpanIterator, sr, clipRegion->getSpanIterator(abox));
		while ($nc(sr)->nextSpan(abox)) {
			renderBox(context, abox->get(0), abox->get(1), abox->get(2) - abox->get(0), abox->get(3) - abox->get(1));
		}
	}
	endSequence(context);
}

void SpanShapeRenderer::renderSpans($SunGraphics2D* sg, $Region* clipRegion, $Shape* s, $ShapeSpanIterator* sr) {
	$var($Object, context, nullptr);
	$var($ints, abox, $new($ints, 4));
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			$nc(sr)->getPathBox(abox);
			$var($Rectangle, devR, $new($Rectangle, abox->get(0), abox->get(1), abox->get(2) - abox->get(0), abox->get(3) - abox->get(1)));
			$nc(clipRegion)->clipBoxToBounds(abox);
			if (abox->get(0) >= abox->get(2) || abox->get(1) >= abox->get(3)) {
				return$1 = true;
				goto $finally;
			}
			sr->intersectClipBox(abox->get(0), abox->get(1), abox->get(2), abox->get(3));
			$assign(context, startSequence(sg, s, devR, abox));
			spanClipLoop(context, sr, clipRegion, abox);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			if (context != nullptr) {
				endSequence(context);
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
}

void SpanShapeRenderer::spanClipLoop(Object$* ctx, $SpanIterator* sr$renamed, $Region* r, $ints* abox) {
	$var($SpanIterator, sr, sr$renamed);
	if (!$nc(r)->isRectangular()) {
		$assign(sr, r->filter(sr));
	}
	while ($nc(sr)->nextSpan(abox)) {
		int32_t x = $nc(abox)->get(0);
		int32_t y = abox->get(1);
		renderBox(ctx, x, y, abox->get(2) - x, abox->get(3) - y);
	}
}

SpanShapeRenderer::SpanShapeRenderer() {
}

$Class* SpanShapeRenderer::load$($String* name, bool initialize) {
	$loadClass(SpanShapeRenderer, name, initialize, &_SpanShapeRenderer_ClassInfo_, allocate$SpanShapeRenderer);
	return class$;
}

$Class* SpanShapeRenderer::class$ = nullptr;

		} // pipe
	} // java2d
} // sun