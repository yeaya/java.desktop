#include <sun/font/X11TextRenderer$Tracer.h>

#include <sun/font/GlyphList.h>
#include <sun/font/X11TextRenderer.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GlyphList = ::sun::font::GlyphList;
using $X11TextRenderer = ::sun::font::X11TextRenderer;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace font {

$MethodInfo _X11TextRenderer$Tracer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(X11TextRenderer$Tracer::*)()>(&X11TextRenderer$Tracer::init$))},
	{"doDrawGlyphList", "(JJLsun/java2d/pipe/Region;Lsun/font/GlyphList;)V", nullptr, 0},
	{}
};

$InnerClassInfo _X11TextRenderer$Tracer_InnerClassesInfo_[] = {
	{"sun.font.X11TextRenderer$Tracer", "sun.font.X11TextRenderer", "Tracer", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _X11TextRenderer$Tracer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.font.X11TextRenderer$Tracer",
	"sun.font.X11TextRenderer",
	nullptr,
	nullptr,
	_X11TextRenderer$Tracer_MethodInfo_,
	nullptr,
	nullptr,
	_X11TextRenderer$Tracer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.X11TextRenderer"
};

$Object* allocate$X11TextRenderer$Tracer($Class* clazz) {
	return $of($alloc(X11TextRenderer$Tracer));
}

void X11TextRenderer$Tracer::init$() {
	$X11TextRenderer::init$();
}

void X11TextRenderer$Tracer::doDrawGlyphList(int64_t dstData, int64_t xgc, $Region* clip, $GlyphList* gl) {
	$GraphicsPrimitive::tracePrimitive("X11DrawGlyphs"_s);
	$X11TextRenderer::doDrawGlyphList(dstData, xgc, clip, gl);
}

X11TextRenderer$Tracer::X11TextRenderer$Tracer() {
}

$Class* X11TextRenderer$Tracer::load$($String* name, bool initialize) {
	$loadClass(X11TextRenderer$Tracer, name, initialize, &_X11TextRenderer$Tracer_ClassInfo_, allocate$X11TextRenderer$Tracer);
	return class$;
}

$Class* X11TextRenderer$Tracer::class$ = nullptr;

	} // font
} // sun