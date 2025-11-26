#include <sun/java2d/loops/SetDrawRectANY.h>

#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/DrawRect.h>
#include <sun/java2d/loops/GeneralRenderer.h>
#include <sun/java2d/loops/PixelWriter.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $DrawRect = ::sun::java2d::loops::DrawRect;
using $GeneralRenderer = ::sun::java2d::loops::GeneralRenderer;
using $PixelWriter = ::sun::java2d::loops::PixelWriter;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;

namespace sun {
	namespace java2d {
		namespace loops {

$MethodInfo _SetDrawRectANY_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SetDrawRectANY::*)()>(&SetDrawRectANY::init$))},
	{"DrawRect", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;IIII)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SetDrawRectANY_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.loops.SetDrawRectANY",
	"sun.java2d.loops.DrawRect",
	nullptr,
	nullptr,
	_SetDrawRectANY_MethodInfo_
};

$Object* allocate$SetDrawRectANY($Class* clazz) {
	return $of($alloc(SetDrawRectANY));
}

void SetDrawRectANY::init$() {
	$init($SurfaceType);
	$init($CompositeType);
	$DrawRect::init$($SurfaceType::AnyColor, $CompositeType::SrcNoEa, $SurfaceType::Any);
}

void SetDrawRectANY::DrawRect$($SunGraphics2D* sg2d, $SurfaceData* sData, int32_t x, int32_t y, int32_t w, int32_t h) {
	$var($PixelWriter, pw, $GeneralRenderer::createSolidPixelWriter(sg2d, sData));
	$GeneralRenderer::doDrawRect(pw, sg2d, sData, x, y, w, h);
}

SetDrawRectANY::SetDrawRectANY() {
}

$Class* SetDrawRectANY::load$($String* name, bool initialize) {
	$loadClass(SetDrawRectANY, name, initialize, &_SetDrawRectANY_ClassInfo_, allocate$SetDrawRectANY);
	return class$;
}

$Class* SetDrawRectANY::class$ = nullptr;

		} // loops
	} // java2d
} // sun