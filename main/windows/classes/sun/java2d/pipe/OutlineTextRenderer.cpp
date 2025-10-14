#include <sun/java2d/pipe/OutlineTextRenderer.h>

#include <java/awt/Font.h>
#include <java/awt/Shape.h>
#include <java/awt/font/FontRenderContext.h>
#include <java/awt/font/GlyphVector.h>
#include <java/awt/font/TextLayout.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/SunHints.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/loops/FontInfo.h>
#include <jcpp.h>

#undef INTVAL_ANTIALIAS_OFF
#undef INTVAL_ANTIALIAS_ON
#undef INTVAL_TEXT_ANTIALIAS_OFF
#undef THRESHHOLD

using $Font = ::java::awt::Font;
using $Shape = ::java::awt::Shape;
using $FontRenderContext = ::java::awt::font::FontRenderContext;
using $GlyphVector = ::java::awt::font::GlyphVector;
using $TextLayout = ::java::awt::font::TextLayout;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunHints = ::sun::awt::SunHints;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $FontInfo = ::sun::java2d::loops::FontInfo;
using $TextPipe = ::sun::java2d::pipe::TextPipe;

namespace sun {
	namespace java2d {
		namespace pipe {

$FieldInfo _OutlineTextRenderer_FieldInfo_[] = {
	{"THRESHHOLD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OutlineTextRenderer, THRESHHOLD)},
	{}
};

$MethodInfo _OutlineTextRenderer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(OutlineTextRenderer::*)()>(&OutlineTextRenderer::init$))},
	{"drawChars", "(Lsun/java2d/SunGraphics2D;[CIIII)V", nullptr, $PUBLIC},
	{"drawGlyphVector", "(Lsun/java2d/SunGraphics2D;Ljava/awt/font/GlyphVector;FF)V", nullptr, $PUBLIC},
	{"drawString", "(Lsun/java2d/SunGraphics2D;Ljava/lang/String;DD)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _OutlineTextRenderer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.pipe.OutlineTextRenderer",
	"java.lang.Object",
	"sun.java2d.pipe.TextPipe",
	_OutlineTextRenderer_FieldInfo_,
	_OutlineTextRenderer_MethodInfo_
};

$Object* allocate$OutlineTextRenderer($Class* clazz) {
	return $of($alloc(OutlineTextRenderer));
}

void OutlineTextRenderer::init$() {
}

void OutlineTextRenderer::drawChars($SunGraphics2D* g2d, $chars* data, int32_t offset, int32_t length, int32_t x, int32_t y) {
	$var($String, s, $new($String, data, offset, length));
	drawString(g2d, s, (double)x, (double)y);
}

void OutlineTextRenderer::drawString($SunGraphics2D* g2d, $String* str, double x, double y) {
	if (""_s->equals(str)) {
		return;
	}
	$var($String, var$0, str);
	$var($Font, var$1, $nc(g2d)->getFont());
	$var($TextLayout, tl, $new($TextLayout, var$0, var$1, $(g2d->getFontRenderContext())));
	$var($Shape, s, tl->getOutline($($AffineTransform::getTranslateInstance(x, y))));
	int32_t textAAHint = $nc($($nc(g2d)->getFontInfo()))->aaHint;
	int32_t prevaaHint = -1;
	if (textAAHint != $SunHints::INTVAL_TEXT_ANTIALIAS_OFF && g2d->antialiasHint != $SunHints::INTVAL_ANTIALIAS_ON) {
		prevaaHint = g2d->antialiasHint;
		g2d->antialiasHint = $SunHints::INTVAL_ANTIALIAS_ON;
		g2d->validatePipe();
	} else if (textAAHint == $SunHints::INTVAL_TEXT_ANTIALIAS_OFF && g2d->antialiasHint != $SunHints::INTVAL_ANTIALIAS_OFF) {
		prevaaHint = g2d->antialiasHint;
		g2d->antialiasHint = $SunHints::INTVAL_ANTIALIAS_OFF;
		g2d->validatePipe();
	}
	g2d->fill(s);
	if (prevaaHint != -1) {
		g2d->antialiasHint = prevaaHint;
		g2d->validatePipe();
	}
}

void OutlineTextRenderer::drawGlyphVector($SunGraphics2D* g2d, $GlyphVector* gv, float x, float y) {
	$var($Shape, s, $nc(gv)->getOutline(x, y));
	int32_t prevaaHint = -1;
	$var($FontRenderContext, frc, gv->getFontRenderContext());
	bool aa = $nc(frc)->isAntiAliased();
	if (aa) {
		if ($nc($($nc(g2d)->getGVFontInfo($(gv->getFont()), frc)))->aaHint == $SunHints::INTVAL_TEXT_ANTIALIAS_OFF) {
			aa = false;
		}
	}
	if (aa && $nc(g2d)->antialiasHint != $SunHints::INTVAL_ANTIALIAS_ON) {
		prevaaHint = g2d->antialiasHint;
		g2d->antialiasHint = $SunHints::INTVAL_ANTIALIAS_ON;
		g2d->validatePipe();
	} else if (!aa && g2d->antialiasHint != $SunHints::INTVAL_ANTIALIAS_OFF) {
		prevaaHint = g2d->antialiasHint;
		g2d->antialiasHint = $SunHints::INTVAL_ANTIALIAS_OFF;
		g2d->validatePipe();
	}
	g2d->fill(s);
	if (prevaaHint != -1) {
		g2d->antialiasHint = prevaaHint;
		g2d->validatePipe();
	}
}

OutlineTextRenderer::OutlineTextRenderer() {
}

$Class* OutlineTextRenderer::load$($String* name, bool initialize) {
	$loadClass(OutlineTextRenderer, name, initialize, &_OutlineTextRenderer_ClassInfo_, allocate$OutlineTextRenderer);
	return class$;
}

$Class* OutlineTextRenderer::class$ = nullptr;

		} // pipe
	} // java2d
} // sun