#include <sun/java2d/pipe/LCDTextRenderer.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/SunHints.h>
#include <sun/font/GlyphList.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/pipe/GlyphListLoopPipe.h>
#include <jcpp.h>

#undef INTVAL_TEXT_ANTIALIAS_LCD_HRGB

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunHints = ::sun::awt::SunHints;
using $GlyphList = ::sun::font::GlyphList;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $GlyphListLoopPipe = ::sun::java2d::pipe::GlyphListLoopPipe;

namespace sun {
	namespace java2d {
		namespace pipe {

$MethodInfo _LCDTextRenderer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LCDTextRenderer::*)()>(&LCDTextRenderer::init$))},
	{"drawGlyphList", "(Lsun/java2d/SunGraphics2D;Lsun/font/GlyphList;)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _LCDTextRenderer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.pipe.LCDTextRenderer",
	"sun.java2d.pipe.GlyphListLoopPipe",
	nullptr,
	nullptr,
	_LCDTextRenderer_MethodInfo_
};

$Object* allocate$LCDTextRenderer($Class* clazz) {
	return $of($alloc(LCDTextRenderer));
}

void LCDTextRenderer::init$() {
	$GlyphListLoopPipe::init$();
}

void LCDTextRenderer::drawGlyphList($SunGraphics2D* sg2d, $GlyphList* gl) {
	drawGlyphList(sg2d, gl, $SunHints::INTVAL_TEXT_ANTIALIAS_LCD_HRGB);
}

LCDTextRenderer::LCDTextRenderer() {
}

$Class* LCDTextRenderer::load$($String* name, bool initialize) {
	$loadClass(LCDTextRenderer, name, initialize, &_LCDTextRenderer_ClassInfo_, allocate$LCDTextRenderer);
	return class$;
}

$Class* LCDTextRenderer::class$ = nullptr;

		} // pipe
	} // java2d
} // sun