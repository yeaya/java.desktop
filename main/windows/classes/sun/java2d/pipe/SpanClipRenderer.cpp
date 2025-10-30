#include <sun/java2d/pipe/SpanClipRenderer.h>

#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/pipe/CompositePipe.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/pipe/RegionIterator.h>
#include <sun/java2d/pipe/ShapeSpanIterator.h>
#include <sun/java2d/pipe/SpanClipRenderer$SCRcontext.h>
#include <jcpp.h>

using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $CompositePipe = ::sun::java2d::pipe::CompositePipe;
using $Region = ::sun::java2d::pipe::Region;
using $RegionIterator = ::sun::java2d::pipe::RegionIterator;
using $ShapeSpanIterator = ::sun::java2d::pipe::ShapeSpanIterator;
using $SpanClipRenderer$SCRcontext = ::sun::java2d::pipe::SpanClipRenderer$SCRcontext;

namespace sun {
	namespace java2d {
		namespace pipe {

$FieldInfo _SpanClipRenderer_FieldInfo_[] = {
	{"outpipe", "Lsun/java2d/pipe/CompositePipe;", nullptr, 0, $field(SpanClipRenderer, outpipe)},
	{"RegionClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $STATIC, $staticField(SpanClipRenderer, RegionClass)},
	{"RegionIteratorClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $STATIC, $staticField(SpanClipRenderer, RegionIteratorClass)},
	{}
};

$MethodInfo _SpanClipRenderer_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/pipe/CompositePipe;)V", nullptr, $PUBLIC, $method(static_cast<void(SpanClipRenderer::*)($CompositePipe*)>(&SpanClipRenderer::init$))},
	{"endSequence", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"eraseTile", "(Lsun/java2d/pipe/RegionIterator;[BII[I)V", nullptr, $PUBLIC | $NATIVE},
	{"fillTile", "(Lsun/java2d/pipe/RegionIterator;[BII[I)V", nullptr, $PUBLIC | $NATIVE},
	{"initIDs", "(Ljava/lang/Class;Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;)V", $STATIC | $NATIVE, $method(static_cast<void(*)($Class*,$Class*)>(&SpanClipRenderer::initIDs))},
	{"needTile", "(Ljava/lang/Object;IIII)Z", nullptr, $PUBLIC},
	{"renderPathTile", "(Ljava/lang/Object;[BIIIIIILsun/java2d/pipe/ShapeSpanIterator;)V", nullptr, $PUBLIC},
	{"renderPathTile", "(Ljava/lang/Object;[BIIIIII)V", nullptr, $PUBLIC},
	{"skipTile", "(Ljava/lang/Object;II)V", nullptr, $PUBLIC},
	{"startSequence", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Shape;Ljava/awt/Rectangle;[I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_eraseTile 2
#define _METHOD_INDEX_fillTile 3
#define _METHOD_INDEX_initIDs 4

$InnerClassInfo _SpanClipRenderer_InnerClassesInfo_[] = {
	{"sun.java2d.pipe.SpanClipRenderer$SCRcontext", "sun.java2d.pipe.SpanClipRenderer", "SCRcontext", 0},
	{}
};

$ClassInfo _SpanClipRenderer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.pipe.SpanClipRenderer",
	"java.lang.Object",
	"sun.java2d.pipe.CompositePipe",
	_SpanClipRenderer_FieldInfo_,
	_SpanClipRenderer_MethodInfo_,
	nullptr,
	nullptr,
	_SpanClipRenderer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.pipe.SpanClipRenderer$SCRcontext"
};

$Object* allocate$SpanClipRenderer($Class* clazz) {
	return $of($alloc(SpanClipRenderer));
}

$Class* SpanClipRenderer::RegionClass = nullptr;
$Class* SpanClipRenderer::RegionIteratorClass = nullptr;

void SpanClipRenderer::initIDs($Class* rc, $Class* ric) {
	$init(SpanClipRenderer);
	$prepareNativeStatic(SpanClipRenderer, initIDs, void, $Class* rc, $Class* ric);
	$invokeNativeStatic(SpanClipRenderer, initIDs, rc, ric);
	$finishNativeStatic();
}

void SpanClipRenderer::init$($CompositePipe* pipe) {
	$set(this, outpipe, pipe);
}

$Object* SpanClipRenderer::startSequence($SunGraphics2D* sg, $Shape* s, $Rectangle* devR, $ints* abox) {
	$useLocalCurrentObjectStackCache();
	$var($RegionIterator, ri, $nc($nc(sg)->clipRegion)->getIterator());
	return $of($new($SpanClipRenderer$SCRcontext, this, ri, $($nc(this->outpipe)->startSequence(sg, s, devR, abox))));
}

bool SpanClipRenderer::needTile(Object$* ctx, int32_t x, int32_t y, int32_t w, int32_t h) {
	$var($SpanClipRenderer$SCRcontext, context, $cast($SpanClipRenderer$SCRcontext, ctx));
	return ($nc(this->outpipe)->needTile($nc(context)->outcontext, x, y, w, h));
}

void SpanClipRenderer::renderPathTile(Object$* ctx, $bytes* atile, int32_t offset, int32_t tsize, int32_t x, int32_t y, int32_t w, int32_t h, $ShapeSpanIterator* sr) {
	renderPathTile(ctx, atile, offset, tsize, x, y, w, h);
}

void SpanClipRenderer::renderPathTile(Object$* ctx, $bytes* atile$renamed, int32_t offset, int32_t tsize, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, atile, atile$renamed);
	$var($SpanClipRenderer$SCRcontext, context, $cast($SpanClipRenderer$SCRcontext, ctx));
	$var($RegionIterator, ri, $nc($nc(context)->iterator)->createCopy());
	$var($ints, band, context->band);
	$nc(band)->set(0, x);
	band->set(1, y);
	band->set(2, x + w);
	band->set(3, y + h);
	if (atile == nullptr) {
		int32_t size = w * h;
		$assign(atile, context->tile);
		if (atile != nullptr && atile->length < size) {
			$assign(atile, nullptr);
		}
		if (atile == nullptr) {
			$assign(atile, $new($bytes, size));
			$set(context, tile, atile);
		}
		offset = 0;
		tsize = w;
		fillTile(ri, atile, offset, tsize, band);
	} else {
		eraseTile(ri, atile, offset, tsize, band);
	}
	if (band->get(2) > band->get(0) && band->get(3) > band->get(1)) {
		offset += (band->get(1) - y) * tsize + (band->get(0) - x);
		$nc(this->outpipe)->renderPathTile(context->outcontext, atile, offset, tsize, band->get(0), band->get(1), band->get(2) - band->get(0), band->get(3) - band->get(1));
	}
}

void SpanClipRenderer::fillTile($RegionIterator* ri, $bytes* alpha, int32_t offset, int32_t tsize, $ints* band) {
	$prepareNative(SpanClipRenderer, fillTile, void, $RegionIterator* ri, $bytes* alpha, int32_t offset, int32_t tsize, $ints* band);
	$invokeNative(SpanClipRenderer, fillTile, ri, alpha, offset, tsize, band);
	$finishNative();
}

void SpanClipRenderer::eraseTile($RegionIterator* ri, $bytes* alpha, int32_t offset, int32_t tsize, $ints* band) {
	$prepareNative(SpanClipRenderer, eraseTile, void, $RegionIterator* ri, $bytes* alpha, int32_t offset, int32_t tsize, $ints* band);
	$invokeNative(SpanClipRenderer, eraseTile, ri, alpha, offset, tsize, band);
	$finishNative();
}

void SpanClipRenderer::skipTile(Object$* ctx, int32_t x, int32_t y) {
	$var($SpanClipRenderer$SCRcontext, context, $cast($SpanClipRenderer$SCRcontext, ctx));
	$nc(this->outpipe)->skipTile($nc(context)->outcontext, x, y);
}

void SpanClipRenderer::endSequence(Object$* ctx) {
	$var($SpanClipRenderer$SCRcontext, context, $cast($SpanClipRenderer$SCRcontext, ctx));
	$nc(this->outpipe)->endSequence($nc(context)->outcontext);
}

void clinit$SpanClipRenderer($Class* class$) {
	$load($Region);
	$assignStatic(SpanClipRenderer::RegionClass, $Region::class$);
	$load($RegionIterator);
	$assignStatic(SpanClipRenderer::RegionIteratorClass, $RegionIterator::class$);
	{
		SpanClipRenderer::initIDs(SpanClipRenderer::RegionClass, SpanClipRenderer::RegionIteratorClass);
	}
}

SpanClipRenderer::SpanClipRenderer() {
}

$Class* SpanClipRenderer::load$($String* name, bool initialize) {
	$loadClass(SpanClipRenderer, name, initialize, &_SpanClipRenderer_ClassInfo_, clinit$SpanClipRenderer, allocate$SpanClipRenderer);
	return class$;
}

$Class* SpanClipRenderer::class$ = nullptr;

		} // pipe
	} // java2d
} // sun