#include <sun/java2d/loops/XorDrawGlyphListANY.h>

#include <sun/font/GlyphList.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/DrawGlyphList.h>
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
using $DrawGlyphList = ::sun::java2d::loops::DrawGlyphList;
using $GeneralRenderer = ::sun::java2d::loops::GeneralRenderer;
using $PixelWriter = ::sun::java2d::loops::PixelWriter;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace loops {

$MethodInfo _XorDrawGlyphListANY_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(XorDrawGlyphListANY::*)()>(&XorDrawGlyphListANY::init$))},
	{"DrawGlyphList", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;Lsun/font/GlyphList;II)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XorDrawGlyphListANY_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.loops.XorDrawGlyphListANY",
	"sun.java2d.loops.DrawGlyphList",
	nullptr,
	nullptr,
	_XorDrawGlyphListANY_MethodInfo_
};

$Object* allocate$XorDrawGlyphListANY($Class* clazz) {
	return $of($alloc(XorDrawGlyphListANY));
}

void XorDrawGlyphListANY::init$() {
	$init($SurfaceType);
	$init($CompositeType);
	$DrawGlyphList::init$($SurfaceType::AnyColor, $CompositeType::Xor, $SurfaceType::Any);
}

void XorDrawGlyphListANY::DrawGlyphList$($SunGraphics2D* sg2d, $SurfaceData* sData, $GlyphList* gl, int32_t fromGlyph, int32_t toGlyph) {
	$useLocalCurrentObjectStackCache();
	$var($PixelWriter, pw, $GeneralRenderer::createXorPixelWriter(sg2d, sData));
	$GeneralRenderer::doDrawGlyphList(sData, pw, gl, fromGlyph, toGlyph, $($nc(sg2d)->getCompClip()));
}

XorDrawGlyphListANY::XorDrawGlyphListANY() {
}

$Class* XorDrawGlyphListANY::load$($String* name, bool initialize) {
	$loadClass(XorDrawGlyphListANY, name, initialize, &_XorDrawGlyphListANY_ClassInfo_, allocate$XorDrawGlyphListANY);
	return class$;
}

$Class* XorDrawGlyphListANY::class$ = nullptr;

		} // loops
	} // java2d
} // sun