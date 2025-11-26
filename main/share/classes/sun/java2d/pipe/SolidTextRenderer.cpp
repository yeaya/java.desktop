#include <sun/java2d/pipe/SolidTextRenderer.h>

#include <sun/awt/SunHints.h>
#include <sun/font/GlyphList.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/pipe/GlyphListLoopPipe.h>
#include <jcpp.h>

#undef INTVAL_TEXT_ANTIALIAS_OFF

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunHints = ::sun::awt::SunHints;
using $GlyphList = ::sun::font::GlyphList;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $GlyphListLoopPipe = ::sun::java2d::pipe::GlyphListLoopPipe;

namespace sun {
	namespace java2d {
		namespace pipe {

$MethodInfo _SolidTextRenderer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SolidTextRenderer::*)()>(&SolidTextRenderer::init$))},
	{"drawGlyphList", "(Lsun/java2d/SunGraphics2D;Lsun/font/GlyphList;)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _SolidTextRenderer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.pipe.SolidTextRenderer",
	"sun.java2d.pipe.GlyphListLoopPipe",
	nullptr,
	nullptr,
	_SolidTextRenderer_MethodInfo_
};

$Object* allocate$SolidTextRenderer($Class* clazz) {
	return $of($alloc(SolidTextRenderer));
}

void SolidTextRenderer::init$() {
	$GlyphListLoopPipe::init$();
}

void SolidTextRenderer::drawGlyphList($SunGraphics2D* sg2d, $GlyphList* gl) {
	drawGlyphList(sg2d, gl, $SunHints::INTVAL_TEXT_ANTIALIAS_OFF);
}

SolidTextRenderer::SolidTextRenderer() {
}

$Class* SolidTextRenderer::load$($String* name, bool initialize) {
	$loadClass(SolidTextRenderer, name, initialize, &_SolidTextRenderer_ClassInfo_, allocate$SolidTextRenderer);
	return class$;
}

$Class* SolidTextRenderer::class$ = nullptr;

		} // pipe
	} // java2d
} // sun