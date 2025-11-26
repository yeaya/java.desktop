#include <sun/font/X11TextRenderer.h>

#include <java/awt/Composite.h>
#include <java/awt/Font.h>
#include <java/awt/font/FontRenderContext.h>
#include <java/awt/font/GlyphVector.h>
#include <sun/awt/SunHints.h>
#include <sun/awt/SunToolkit.h>
#include <sun/font/GlyphList.h>
#include <sun/font/X11TextRenderer$Tracer.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/FontInfo.h>
#include <sun/java2d/pipe/GlyphListPipe.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/pipe/TextPipe.h>
#include <sun/java2d/x11/X11SurfaceData.h>
#include <jcpp.h>

#undef COMP_ISCOPY
#undef INTVAL_TEXT_ANTIALIAS_LCD_HRGB
#undef INTVAL_TEXT_ANTIALIAS_LCD_VRGB
#undef INTVAL_TEXT_ANTIALIAS_OFF
#undef INTVAL_TEXT_ANTIALIAS_ON

using $Composite = ::java::awt::Composite;
using $Font = ::java::awt::Font;
using $FontRenderContext = ::java::awt::font::FontRenderContext;
using $GlyphVector = ::java::awt::font::GlyphVector;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunHints = ::sun::awt::SunHints;
using $SunToolkit = ::sun::awt::SunToolkit;
using $GlyphList = ::sun::font::GlyphList;
using $X11TextRenderer$Tracer = ::sun::font::X11TextRenderer$Tracer;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $FontInfo = ::sun::java2d::loops::FontInfo;
using $GlyphListPipe = ::sun::java2d::pipe::GlyphListPipe;
using $Region = ::sun::java2d::pipe::Region;
using $TextPipe = ::sun::java2d::pipe::TextPipe;
using $X11SurfaceData = ::sun::java2d::x11::X11SurfaceData;

namespace sun {
	namespace font {

$MethodInfo _X11TextRenderer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(X11TextRenderer::*)()>(&X11TextRenderer::init$))},
	{"doDrawGlyphList", "(JJLsun/java2d/pipe/Region;Lsun/font/GlyphList;)V", nullptr, $NATIVE},
	{"drawGlyphList", "(Lsun/java2d/SunGraphics2D;Lsun/font/GlyphList;)V", nullptr, $PROTECTED},
	{"drawGlyphVector", "(Lsun/java2d/SunGraphics2D;Ljava/awt/font/GlyphVector;FF)V", nullptr, $PUBLIC},
	{"traceWrap", "()Lsun/font/X11TextRenderer;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_doDrawGlyphList 1

$InnerClassInfo _X11TextRenderer_InnerClassesInfo_[] = {
	{"sun.font.X11TextRenderer$Tracer", "sun.font.X11TextRenderer", "Tracer", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _X11TextRenderer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.font.X11TextRenderer",
	"sun.java2d.pipe.GlyphListPipe",
	nullptr,
	nullptr,
	_X11TextRenderer_MethodInfo_,
	nullptr,
	nullptr,
	_X11TextRenderer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.font.X11TextRenderer$Tracer"
};

$Object* allocate$X11TextRenderer($Class* clazz) {
	return $of($alloc(X11TextRenderer));
}

void X11TextRenderer::init$() {
	$GlyphListPipe::init$();
}

void X11TextRenderer::drawGlyphVector($SunGraphics2D* sg2d, $GlyphVector* g, float x, float y) {
	$useLocalCurrentObjectStackCache();
	$var($FontRenderContext, frc, $nc(g)->getFontRenderContext());
	$var($FontInfo, info, $nc(sg2d)->getGVFontInfo($(g->getFont()), frc));
	switch ($nc(info)->aaHint) {
	case $SunHints::INTVAL_TEXT_ANTIALIAS_OFF:
		{
			$GlyphListPipe::drawGlyphVector(sg2d, g, x, y);
			return;
		}
	case $SunHints::INTVAL_TEXT_ANTIALIAS_ON:
		{
			$init($SurfaceData);
			$nc($SurfaceData::aaTextRenderer)->drawGlyphVector(sg2d, g, x, y);
			return;
		}
	case $SunHints::INTVAL_TEXT_ANTIALIAS_LCD_HRGB:
		{}
	case $SunHints::INTVAL_TEXT_ANTIALIAS_LCD_VRGB:
		{
			$init($SurfaceData);
			$nc($SurfaceData::lcdTextRenderer)->drawGlyphVector(sg2d, g, x, y);
			return;
		}
	default:
		{}
	}
}

void X11TextRenderer::doDrawGlyphList(int64_t dstData, int64_t xgc, $Region* clip, $GlyphList* gl) {
	$prepareNative(X11TextRenderer, doDrawGlyphList, void, int64_t dstData, int64_t xgc, $Region* clip, $GlyphList* gl);
	$invokeNative(X11TextRenderer, doDrawGlyphList, dstData, xgc, clip, gl);
	$finishNative();
}

void X11TextRenderer::drawGlyphList($SunGraphics2D* sg2d, $GlyphList* gl) {
	$useLocalCurrentObjectStackCache();
	$SunToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($X11SurfaceData, x11sd, $cast($X11SurfaceData, $nc(sg2d)->surfaceData));
			$var($Region, clip, sg2d->getCompClip());
			int64_t xgc = $nc(x11sd)->getRenderGC(clip, $SunGraphics2D::COMP_ISCOPY, nullptr, sg2d->pixel);
			$nc(gl)->startGlyphIteration();
			doDrawGlyphList(x11sd->getNativeOps(), xgc, clip, gl);
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

X11TextRenderer* X11TextRenderer::traceWrap() {
	return $new($X11TextRenderer$Tracer);
}

X11TextRenderer::X11TextRenderer() {
}

$Class* X11TextRenderer::load$($String* name, bool initialize) {
	$loadClass(X11TextRenderer, name, initialize, &_X11TextRenderer_ClassInfo_, allocate$X11TextRenderer);
	return class$;
}

$Class* X11TextRenderer::class$ = nullptr;

	} // font
} // sun