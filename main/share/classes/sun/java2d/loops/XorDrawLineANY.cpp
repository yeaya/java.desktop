#include <sun/java2d/loops/XorDrawLineANY.h>

#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/DrawLine.h>
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
using $DrawLine = ::sun::java2d::loops::DrawLine;
using $GeneralRenderer = ::sun::java2d::loops::GeneralRenderer;
using $PixelWriter = ::sun::java2d::loops::PixelWriter;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace loops {

$MethodInfo _XorDrawLineANY_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(XorDrawLineANY::*)()>(&XorDrawLineANY::init$))},
	{"DrawLine", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;IIII)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XorDrawLineANY_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.loops.XorDrawLineANY",
	"sun.java2d.loops.DrawLine",
	nullptr,
	nullptr,
	_XorDrawLineANY_MethodInfo_
};

$Object* allocate$XorDrawLineANY($Class* clazz) {
	return $of($alloc(XorDrawLineANY));
}

void XorDrawLineANY::init$() {
	$init($SurfaceType);
	$init($CompositeType);
	$DrawLine::init$($SurfaceType::AnyColor, $CompositeType::Xor, $SurfaceType::Any);
}

void XorDrawLineANY::DrawLine$($SunGraphics2D* sg2d, $SurfaceData* sData, int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
	$useLocalCurrentObjectStackCache();
	$var($PixelWriter, pw, $GeneralRenderer::createXorPixelWriter(sg2d, sData));
	if (y1 >= y2) {
		$GeneralRenderer::doDrawLine(sData, pw, nullptr, $($nc(sg2d)->getCompClip()), x2, y2, x1, y1);
	} else {
		$GeneralRenderer::doDrawLine(sData, pw, nullptr, $($nc(sg2d)->getCompClip()), x1, y1, x2, y2);
	}
}

XorDrawLineANY::XorDrawLineANY() {
}

$Class* XorDrawLineANY::load$($String* name, bool initialize) {
	$loadClass(XorDrawLineANY, name, initialize, &_XorDrawLineANY_ClassInfo_, allocate$XorDrawLineANY);
	return class$;
}

$Class* XorDrawLineANY::class$ = nullptr;

		} // loops
	} // java2d
} // sun