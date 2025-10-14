#include <sun/java2d/loops/SetDrawPolygonsANY.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$MethodInfo _SetDrawPolygonsANY_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SetDrawPolygonsANY::*)()>(&SetDrawPolygonsANY::init$))},
	{"DrawPolygons", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;[I[I[IIIIZ)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SetDrawPolygonsANY_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.loops.SetDrawPolygonsANY",
	"sun.java2d.loops.DrawPolygons",
	nullptr,
	nullptr,
	_SetDrawPolygonsANY_MethodInfo_
};

$Object* allocate$SetDrawPolygonsANY($Class* clazz) {
	return $of($alloc(SetDrawPolygonsANY));
}

void SetDrawPolygonsANY::init$() {
	$init($SurfaceType);
	$init($CompositeType);
	$DrawPolygons::init$($SurfaceType::AnyColor, $CompositeType::SrcNoEa, $SurfaceType::Any);
}

void SetDrawPolygonsANY::DrawPolygons$($SunGraphics2D* sg2d, $SurfaceData* sData, $ints* xPoints, $ints* yPoints, $ints* nPoints, int32_t numPolys, int32_t transx, int32_t transy, bool close) {
	$var($PixelWriter, pw, $GeneralRenderer::createSolidPixelWriter(sg2d, sData));
	int32_t off = 0;
	$var($Region, clip, $nc(sg2d)->getCompClip());
	for (int32_t i = 0; i < numPolys; ++i) {
		int32_t numpts = $nc(nPoints)->get(i);
		$GeneralRenderer::doDrawPoly(sData, pw, xPoints, yPoints, off, numpts, clip, transx, transy, close);
		off += numpts;
	}
}

SetDrawPolygonsANY::SetDrawPolygonsANY() {
}

$Class* SetDrawPolygonsANY::load$($String* name, bool initialize) {
	$loadClass(SetDrawPolygonsANY, name, initialize, &_SetDrawPolygonsANY_ClassInfo_, allocate$SetDrawPolygonsANY);
	return class$;
}

$Class* SetDrawPolygonsANY::class$ = nullptr;

		} // loops
	} // java2d
} // sun