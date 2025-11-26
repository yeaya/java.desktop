#include <sun/java2d/loops/XorDrawPolygonsANY.h>

#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/DrawPolygons.h>
#include <sun/java2d/loops/GeneralRenderer.h>
#include <sun/java2d/loops/PixelWriter.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $DrawPolygons = ::sun::java2d::loops::DrawPolygons;
using $GeneralRenderer = ::sun::java2d::loops::GeneralRenderer;
using $PixelWriter = ::sun::java2d::loops::PixelWriter;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace loops {

$MethodInfo _XorDrawPolygonsANY_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(XorDrawPolygonsANY::*)()>(&XorDrawPolygonsANY::init$))},
	{"DrawPolygons", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;[I[I[IIIIZ)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XorDrawPolygonsANY_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.loops.XorDrawPolygonsANY",
	"sun.java2d.loops.DrawPolygons",
	nullptr,
	nullptr,
	_XorDrawPolygonsANY_MethodInfo_
};

$Object* allocate$XorDrawPolygonsANY($Class* clazz) {
	return $of($alloc(XorDrawPolygonsANY));
}

void XorDrawPolygonsANY::init$() {
	$init($SurfaceType);
	$init($CompositeType);
	$DrawPolygons::init$($SurfaceType::AnyColor, $CompositeType::Xor, $SurfaceType::Any);
}

void XorDrawPolygonsANY::DrawPolygons$($SunGraphics2D* sg2d, $SurfaceData* sData, $ints* xPoints, $ints* yPoints, $ints* nPoints, int32_t numPolys, int32_t transx, int32_t transy, bool close) {
	$useLocalCurrentObjectStackCache();
	$var($PixelWriter, pw, $GeneralRenderer::createXorPixelWriter(sg2d, sData));
	int32_t off = 0;
	$var($Region, clip, $nc(sg2d)->getCompClip());
	for (int32_t i = 0; i < numPolys; ++i) {
		int32_t numpts = $nc(nPoints)->get(i);
		$GeneralRenderer::doDrawPoly(sData, pw, xPoints, yPoints, off, numpts, clip, transx, transy, close);
		off += numpts;
	}
}

XorDrawPolygonsANY::XorDrawPolygonsANY() {
}

$Class* XorDrawPolygonsANY::load$($String* name, bool initialize) {
	$loadClass(XorDrawPolygonsANY, name, initialize, &_XorDrawPolygonsANY_ClassInfo_, allocate$XorDrawPolygonsANY);
	return class$;
}

$Class* XorDrawPolygonsANY::class$ = nullptr;

		} // loops
	} // java2d
} // sun