#include <sun/java2d/pipe/GlyphListPipe.h>

#include <java/awt/Font.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/font/FontRenderContext.h>
#include <java/awt/font/GlyphVector.h>
#include <java/awt/font/TextLayout.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/font/GlyphList.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/FontInfo.h>
#include <sun/java2d/pipe/OutlineTextRenderer.h>
#include <sun/java2d/pipe/TextPipe.h>
#include <jcpp.h>

#undef THRESHHOLD
#undef TRANSFORM_TRANSLATESCALE

using $Font = ::java::awt::Font;
using $Graphics2D = ::java::awt::Graphics2D;
using $FontRenderContext = ::java::awt::font::FontRenderContext;
using $GlyphVector = ::java::awt::font::GlyphVector;
using $TextLayout = ::java::awt::font::TextLayout;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GlyphList = ::sun::font::GlyphList;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $FontInfo = ::sun::java2d::loops::FontInfo;
using $OutlineTextRenderer = ::sun::java2d::pipe::OutlineTextRenderer;
using $TextPipe = ::sun::java2d::pipe::TextPipe;

namespace sun {
	namespace java2d {
		namespace pipe {

$MethodInfo _GlyphListPipe_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GlyphListPipe::*)()>(&GlyphListPipe::init$))},
	{"drawChars", "(Lsun/java2d/SunGraphics2D;[CIIII)V", nullptr, $PUBLIC},
	{"drawGlyphList", "(Lsun/java2d/SunGraphics2D;Lsun/font/GlyphList;)V", nullptr, $PROTECTED | $ABSTRACT},
	{"drawGlyphList", "(Lsun/java2d/SunGraphics2D;Lsun/font/GlyphList;I)V", nullptr, $PROTECTED},
	{"drawGlyphVector", "(Lsun/java2d/SunGraphics2D;Ljava/awt/font/GlyphVector;FF)V", nullptr, $PUBLIC},
	{"drawString", "(Lsun/java2d/SunGraphics2D;Ljava/lang/String;DD)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _GlyphListPipe_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.java2d.pipe.GlyphListPipe",
	"java.lang.Object",
	"sun.java2d.pipe.TextPipe",
	nullptr,
	_GlyphListPipe_MethodInfo_
};

$Object* allocate$GlyphListPipe($Class* clazz) {
	return $of($alloc(GlyphListPipe));
}

void GlyphListPipe::init$() {
}

void GlyphListPipe::drawString($SunGraphics2D* sg2d, $String* s, double x, double y) {
	$useLocalCurrentObjectStackCache();
	$var($FontInfo, info, $nc(sg2d)->getFontInfo());
	if ($nc(info)->nonInvertibleTx) {
		return;
	}
	if ($nc(info)->pixelHeight > $OutlineTextRenderer::THRESHHOLD) {
		$init($SurfaceData);
		$nc($SurfaceData::outlineTextRenderer)->drawString(sg2d, s, x, y);
		return;
	}
	float devx = 0.0;
	float devy = 0.0;
	if (sg2d->transformState >= $SunGraphics2D::TRANSFORM_TRANSLATESCALE) {
		$var($doubles, origin, $new($doubles, {
			x + $nc(info)->originX,
			y + info->originY
		}));
		$nc(sg2d->transform$)->transform(origin, 0, origin, 0, 1);
		devx = (float)origin->get(0);
		devy = (float)origin->get(1);
	} else {
		devx = (float)(x + $nc(info)->originX + sg2d->transX);
		devy = (float)(y + info->originY + sg2d->transY);
	}
	$var($GlyphList, gl, $GlyphList::getInstance());
	if ($nc(gl)->setFromString(info, s, devx, devy)) {
		drawGlyphList(sg2d, gl);
		gl->dispose();
	} else {
		gl->dispose();
		$var($String, var$0, s);
		$var($Font, var$1, sg2d->getFont());
		$var($TextLayout, tl, $new($TextLayout, var$0, var$1, $(sg2d->getFontRenderContext())));
		tl->draw(sg2d, (float)x, (float)y);
	}
}

void GlyphListPipe::drawChars($SunGraphics2D* sg2d, $chars* data, int32_t offset, int32_t length, int32_t ix, int32_t iy) {
	$useLocalCurrentObjectStackCache();
	$var($FontInfo, info, $nc(sg2d)->getFontInfo());
	if ($nc(info)->nonInvertibleTx) {
		return;
	}
	float x = 0.0;
	float y = 0.0;
	if ($nc(info)->pixelHeight > $OutlineTextRenderer::THRESHHOLD) {
		$init($SurfaceData);
		$nc($SurfaceData::outlineTextRenderer)->drawChars(sg2d, data, offset, length, ix, iy);
		return;
	}
	if (sg2d->transformState >= $SunGraphics2D::TRANSFORM_TRANSLATESCALE) {
		$var($doubles, origin, $new($doubles, {
			(double)(ix + $nc(info)->originX),
			(double)(iy + info->originY)
		}));
		$nc(sg2d->transform$)->transform(origin, 0, origin, 0, 1);
		x = (float)origin->get(0);
		y = (float)origin->get(1);
	} else {
		x = ix + $nc(info)->originX + sg2d->transX;
		y = iy + info->originY + sg2d->transY;
	}
	$var($GlyphList, gl, $GlyphList::getInstance());
	if ($nc(gl)->setFromChars(info, data, offset, length, x, y)) {
		drawGlyphList(sg2d, gl);
		gl->dispose();
	} else {
		gl->dispose();
		$var($String, var$0, $new($String, data, offset, length));
		$var($Font, var$1, sg2d->getFont());
		$var($TextLayout, tl, $new($TextLayout, var$0, var$1, $(sg2d->getFontRenderContext())));
		tl->draw(sg2d, (float)ix, (float)iy);
	}
}

void GlyphListPipe::drawGlyphVector($SunGraphics2D* sg2d, $GlyphVector* gv, float x, float y) {
	$useLocalCurrentObjectStackCache();
	$var($FontRenderContext, frc, $nc(gv)->getFontRenderContext());
	$var($FontInfo, info, $nc(sg2d)->getGVFontInfo($(gv->getFont()), frc));
	if ($nc(info)->nonInvertibleTx) {
		return;
	}
	if ($nc(info)->pixelHeight > $OutlineTextRenderer::THRESHHOLD) {
		$init($SurfaceData);
		$nc($SurfaceData::outlineTextRenderer)->drawGlyphVector(sg2d, gv, x, y);
		return;
	}
	if (sg2d->transformState >= $SunGraphics2D::TRANSFORM_TRANSLATESCALE) {
		$var($doubles, origin, $new($doubles, {
			(double)x,
			(double)y
		}));
		$nc(sg2d->transform$)->transform(origin, 0, origin, 0, 1);
		x = (float)origin->get(0);
		y = (float)origin->get(1);
	} else {
		x += sg2d->transX;
		y += sg2d->transY;
	}
	$var($GlyphList, gl, $GlyphList::getInstance());
	$nc(gl)->setFromGlyphVector(info, gv, x, y);
	drawGlyphList(sg2d, gl, $nc(info)->aaHint);
	gl->dispose();
}

void GlyphListPipe::drawGlyphList($SunGraphics2D* sg2d, $GlyphList* gl, int32_t aaHint) {
	drawGlyphList(sg2d, gl);
}

GlyphListPipe::GlyphListPipe() {
}

$Class* GlyphListPipe::load$($String* name, bool initialize) {
	$loadClass(GlyphListPipe, name, initialize, &_GlyphListPipe_ClassInfo_, allocate$GlyphListPipe);
	return class$;
}

$Class* GlyphListPipe::class$ = nullptr;

		} // pipe
	} // java2d
} // sun