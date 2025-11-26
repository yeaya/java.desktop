#include <sun/java2d/pipe/AAShapePipe.h>

#include <java/awt/BasicStroke.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/Stroke.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/lang/Math.h>
#include <sun/awt/SunHints.h>
#include <sun/java2d/ReentrantContext.h>
#include <sun/java2d/ReentrantContextProvider.h>
#include <sun/java2d/ReentrantContextProviderTL.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/pipe/AAShapePipe$1.h>
#include <sun/java2d/pipe/AAShapePipe$TileState.h>
#include <sun/java2d/pipe/AATileGenerator.h>
#include <sun/java2d/pipe/CompositePipe.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/pipe/RenderingEngine.h>
#include <sun/java2d/pipe/ShapeDrawPipe.h>
#include <jcpp.h>

#undef INTVAL_STROKE_PURE
#undef RDR_ENGINE
#undef REF_HARD
#undef STROKE_THINDASHED
#undef TILE_STATE_PROVIDER

using $BasicStroke = ::java::awt::BasicStroke;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $Stroke = ::java::awt::Stroke;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunHints = ::sun::awt::SunHints;
using $ReentrantContext = ::sun::java2d::ReentrantContext;
using $ReentrantContextProvider = ::sun::java2d::ReentrantContextProvider;
using $ReentrantContextProviderTL = ::sun::java2d::ReentrantContextProviderTL;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $AAShapePipe$1 = ::sun::java2d::pipe::AAShapePipe$1;
using $AAShapePipe$TileState = ::sun::java2d::pipe::AAShapePipe$TileState;
using $AATileGenerator = ::sun::java2d::pipe::AATileGenerator;
using $CompositePipe = ::sun::java2d::pipe::CompositePipe;
using $ParallelogramPipe = ::sun::java2d::pipe::ParallelogramPipe;
using $Region = ::sun::java2d::pipe::Region;
using $RenderingEngine = ::sun::java2d::pipe::RenderingEngine;
using $ShapeDrawPipe = ::sun::java2d::pipe::ShapeDrawPipe;

namespace sun {
	namespace java2d {
		namespace pipe {

$FieldInfo _AAShapePipe_FieldInfo_[] = {
	{"RDR_ENGINE", "Lsun/java2d/pipe/RenderingEngine;", nullptr, $STATIC | $FINAL, $staticField(AAShapePipe, RDR_ENGINE)},
	{"TILE_STATE_PROVIDER", "Lsun/java2d/ReentrantContextProvider;", "Lsun/java2d/ReentrantContextProvider<Lsun/java2d/pipe/AAShapePipe$TileState;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AAShapePipe, TILE_STATE_PROVIDER)},
	{"outpipe", "Lsun/java2d/pipe/CompositePipe;", nullptr, $FINAL, $field(AAShapePipe, outpipe)},
	{}
};

$MethodInfo _AAShapePipe_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/java2d/pipe/CompositePipe;)V", nullptr, $PUBLIC, $method(static_cast<void(AAShapePipe::*)($CompositePipe*)>(&AAShapePipe::init$))},
	{"draw", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"drawParallelogram", "(Lsun/java2d/SunGraphics2D;DDDDDDDDDDDD)V", nullptr, $PUBLIC},
	{"fill", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"fillParallelogram", "(Lsun/java2d/SunGraphics2D;DDDDDDDDDD)V", nullptr, $PUBLIC},
	{"renderPath", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Shape;Ljava/awt/BasicStroke;)V", nullptr, $PUBLIC, $method(static_cast<void(AAShapePipe::*)($SunGraphics2D*,$Shape*,$BasicStroke*)>(&AAShapePipe::renderPath))},
	{"renderTiles", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Shape;Lsun/java2d/pipe/AATileGenerator;[ILsun/java2d/pipe/AAShapePipe$TileState;)V", nullptr, $PUBLIC, $method(static_cast<void(AAShapePipe::*)($SunGraphics2D*,$Shape*,$AATileGenerator*,$ints*,$AAShapePipe$TileState*)>(&AAShapePipe::renderTiles))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AAShapePipe_InnerClassesInfo_[] = {
	{"sun.java2d.pipe.AAShapePipe$TileState", "sun.java2d.pipe.AAShapePipe", "TileState", $STATIC | $FINAL},
	{"sun.java2d.pipe.AAShapePipe$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AAShapePipe_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.java2d.pipe.AAShapePipe",
	"java.lang.Object",
	"sun.java2d.pipe.ShapeDrawPipe,sun.java2d.pipe.ParallelogramPipe",
	_AAShapePipe_FieldInfo_,
	_AAShapePipe_MethodInfo_,
	nullptr,
	nullptr,
	_AAShapePipe_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.pipe.AAShapePipe$TileState,sun.java2d.pipe.AAShapePipe$1"
};

$Object* allocate$AAShapePipe($Class* clazz) {
	return $of($alloc(AAShapePipe));
}

int32_t AAShapePipe::hashCode() {
	 return this->$ShapeDrawPipe::hashCode();
}

bool AAShapePipe::equals(Object$* arg0) {
	 return this->$ShapeDrawPipe::equals(arg0);
}

$Object* AAShapePipe::clone() {
	 return this->$ShapeDrawPipe::clone();
}

$String* AAShapePipe::toString() {
	 return this->$ShapeDrawPipe::toString();
}

void AAShapePipe::finalize() {
	this->$ShapeDrawPipe::finalize();
}

$RenderingEngine* AAShapePipe::RDR_ENGINE = nullptr;
$ReentrantContextProvider* AAShapePipe::TILE_STATE_PROVIDER = nullptr;

void AAShapePipe::init$($CompositePipe* pipe) {
	$set(this, outpipe, pipe);
}

void AAShapePipe::draw($SunGraphics2D* sg, $Shape* s$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Shape, s, s$renamed);
	$var($BasicStroke, bs, nullptr);
	if ($instanceOf($BasicStroke, $nc(sg)->stroke)) {
		$assign(bs, $cast($BasicStroke, sg->stroke));
	} else {
		$assign(s, $nc(sg->stroke)->createStrokedShape(s));
		$assign(bs, nullptr);
	}
	renderPath(sg, s, bs);
}

void AAShapePipe::fill($SunGraphics2D* sg, $Shape* s) {
	renderPath(sg, s, nullptr);
}

void AAShapePipe::fillParallelogram($SunGraphics2D* sg, double ux1, double uy1, double ux2, double uy2, double x, double y, double dx1, double dy1, double dx2, double dy2) {
	$useLocalCurrentObjectStackCache();
	$var($AAShapePipe$TileState, ts, $cast($AAShapePipe$TileState, $nc(AAShapePipe::TILE_STATE_PROVIDER)->acquire()));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($ints, abox, $nc(ts)->abox);
			$var($AATileGenerator, aatg, $nc(AAShapePipe::RDR_ENGINE)->getAATileGenerator(x, y, dx1, dy1, dx2, dy2, (double)0, (double)0, $($nc(sg)->getCompClip()), abox));
			if (aatg != nullptr) {
				renderTiles(sg, $(ts->computeBBox(ux1, uy1, ux2, uy2)), aatg, abox, ts);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(AAShapePipe::TILE_STATE_PROVIDER)->release(ts);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void AAShapePipe::drawParallelogram($SunGraphics2D* sg, double ux1, double uy1, double ux2, double uy2, double x, double y, double dx1, double dy1, double dx2, double dy2, double lw1, double lw2) {
	$useLocalCurrentObjectStackCache();
	$var($AAShapePipe$TileState, ts, $cast($AAShapePipe$TileState, $nc(AAShapePipe::TILE_STATE_PROVIDER)->acquire()));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($ints, abox, $nc(ts)->abox);
			$var($AATileGenerator, aatg, $nc(AAShapePipe::RDR_ENGINE)->getAATileGenerator(x, y, dx1, dy1, dx2, dy2, lw1, lw2, $($nc(sg)->getCompClip()), abox));
			if (aatg != nullptr) {
				renderTiles(sg, $(ts->computeBBox(ux1, uy1, ux2, uy2)), aatg, abox, ts);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(AAShapePipe::TILE_STATE_PROVIDER)->release(ts);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void AAShapePipe::renderPath($SunGraphics2D* sg, $Shape* s, $BasicStroke* bs) {
	$useLocalCurrentObjectStackCache();
	bool adjust = (bs != nullptr && $nc(sg)->strokeHint != $SunHints::INTVAL_STROKE_PURE);
	bool thin = (sg->strokeState <= $SunGraphics2D::STROKE_THINDASHED);
	$var($AAShapePipe$TileState, ts, $cast($AAShapePipe$TileState, $nc(AAShapePipe::TILE_STATE_PROVIDER)->acquire()));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($ints, abox, $nc(ts)->abox);
			$var($AATileGenerator, aatg, $nc(AAShapePipe::RDR_ENGINE)->getAATileGenerator(s, sg->transform$, $(sg->getCompClip()), bs, thin, adjust, abox));
			if (aatg != nullptr) {
				renderTiles(sg, s, aatg, abox, ts);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(AAShapePipe::TILE_STATE_PROVIDER)->release(ts);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void AAShapePipe::renderTiles($SunGraphics2D* sg, $Shape* s, $AATileGenerator* aatg, $ints* abox, $AAShapePipe$TileState* ts) {
	$useLocalCurrentObjectStackCache();
	$var($Object, context, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$assign(context, $nc(this->outpipe)->startSequence(sg, s, $($nc(ts)->computeDevBox(abox)), abox));
			int32_t x0 = $nc(abox)->get(0);
			int32_t y0 = abox->get(1);
			int32_t x1 = abox->get(2);
			int32_t y1 = abox->get(3);
			int32_t tw = $nc(aatg)->getTileWidth();
			int32_t th = aatg->getTileHeight();
			$var($bytes, alpha, $nc(ts)->getAlphaTile(tw * th));
			$var($bytes, atile, nullptr);
			for (int32_t y = y0; y < y1; y += th) {
				int32_t h = $Math::min(th, y1 - y);
				for (int32_t x = x0; x < x1; x += tw) {
					int32_t w = $Math::min(tw, x1 - x);
					int32_t a = aatg->getTypicalAlpha();
					if (a == 0 || !$nc(this->outpipe)->needTile(context, x, y, w, h)) {
						aatg->nextTile();
						$nc(this->outpipe)->skipTile(context, x, y);
						continue;
					}
					if (a == 255) {
						$assign(atile, nullptr);
						aatg->nextTile();
					} else {
						$assign(atile, alpha);
						aatg->getAlpha(alpha, 0, tw);
					}
					$nc(this->outpipe)->renderPathTile(context, atile, 0, tw, x, y, w, h);
				}
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(aatg)->dispose();
			if (context != nullptr) {
				$nc(this->outpipe)->endSequence(context);
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void clinit$AAShapePipe($Class* class$) {
	$assignStatic(AAShapePipe::RDR_ENGINE, $RenderingEngine::getInstance());
	$assignStatic(AAShapePipe::TILE_STATE_PROVIDER, $new($AAShapePipe$1, $ReentrantContextProvider::REF_HARD));
}

AAShapePipe::AAShapePipe() {
}

$Class* AAShapePipe::load$($String* name, bool initialize) {
	$loadClass(AAShapePipe, name, initialize, &_AAShapePipe_ClassInfo_, clinit$AAShapePipe, allocate$AAShapePipe);
	return class$;
}

$Class* AAShapePipe::class$ = nullptr;

		} // pipe
	} // java2d
} // sun