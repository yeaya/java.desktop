#include <sun/java2d/loops/XorDrawGlyphListAAANY.h>

#include <sun/font/GlyphList.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/DrawGlyphListAA.h>
#include <sun/java2d/loops/GeneralRenderer.h>
#include <sun/java2d/loops/PixelWriter.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GlyphList = ::sun::font::GlyphList;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $DrawGlyphListAA = ::sun::java2d::loops::DrawGlyphListAA;
using $GeneralRenderer = ::sun::java2d::loops::GeneralRenderer;
using $PixelWriter = ::sun::java2d::loops::PixelWriter;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;

namespace sun {
	namespace java2d {
		namespace loops {

$MethodInfo _XorDrawGlyphListAAANY_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(XorDrawGlyphListAAANY::*)()>(&XorDrawGlyphListAAANY::init$))},
	{"DrawGlyphListAA", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;Lsun/font/GlyphList;II)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XorDrawGlyphListAAANY_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.loops.XorDrawGlyphListAAANY",
	"sun.java2d.loops.DrawGlyphListAA",
	nullptr,
	nullptr,
	_XorDrawGlyphListAAANY_MethodInfo_
};

$Object* allocate$XorDrawGlyphListAAANY($Class* clazz) {
	return $of($alloc(XorDrawGlyphListAAANY));
}

void XorDrawGlyphListAAANY::init$() {
	$init($SurfaceType);
	$init($CompositeType);
	$DrawGlyphListAA::init$($SurfaceType::AnyColor, $CompositeType::Xor, $SurfaceType::Any);
}

void XorDrawGlyphListAAANY::DrawGlyphListAA$($SunGraphics2D* sg2d, $SurfaceData* sData, $GlyphList* gl, int32_t fromGlyph, int32_t toGlyph) {
	$useLocalCurrentObjectStackCache();
	$var($PixelWriter, pw, $GeneralRenderer::createXorPixelWriter(sg2d, sData));
	$GeneralRenderer::doDrawGlyphList(sData, pw, gl, fromGlyph, toGlyph, $($nc(sg2d)->getCompClip()));
}

XorDrawGlyphListAAANY::XorDrawGlyphListAAANY() {
}

$Class* XorDrawGlyphListAAANY::load$($String* name, bool initialize) {
	$loadClass(XorDrawGlyphListAAANY, name, initialize, &_XorDrawGlyphListAAANY_ClassInfo_, allocate$XorDrawGlyphListAAANY);
	return class$;
}

$Class* XorDrawGlyphListAAANY::class$ = nullptr;

		} // loops
	} // java2d
} // sun