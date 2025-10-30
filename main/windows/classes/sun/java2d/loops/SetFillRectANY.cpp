#include <sun/java2d/loops/SetFillRectANY.h>

#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/FillRect.h>
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
using $FillRect = ::sun::java2d::loops::FillRect;
using $GeneralRenderer = ::sun::java2d::loops::GeneralRenderer;
using $PixelWriter = ::sun::java2d::loops::PixelWriter;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace loops {

$MethodInfo _SetFillRectANY_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SetFillRectANY::*)()>(&SetFillRectANY::init$))},
	{"FillRect", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;IIII)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SetFillRectANY_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.loops.SetFillRectANY",
	"sun.java2d.loops.FillRect",
	nullptr,
	nullptr,
	_SetFillRectANY_MethodInfo_
};

$Object* allocate$SetFillRectANY($Class* clazz) {
	return $of($alloc(SetFillRectANY));
}

void SetFillRectANY::init$() {
	$init($SurfaceType);
	$init($CompositeType);
	$FillRect::init$($SurfaceType::AnyColor, $CompositeType::SrcNoEa, $SurfaceType::Any);
}

void SetFillRectANY::FillRect$($SunGraphics2D* sg2d, $SurfaceData* sData, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($PixelWriter, pw, $GeneralRenderer::createSolidPixelWriter(sg2d, sData));
	$var($Region, r, $nc($($nc(sg2d)->getCompClip()))->getBoundsIntersectionXYWH(x, y, w, h));
	$var($SurfaceData, var$0, sData);
	$var($PixelWriter, var$1, pw);
	int32_t var$2 = $nc(r)->getLoX();
	int32_t var$3 = r->getLoY();
	int32_t var$4 = r->getHiX();
	$GeneralRenderer::doSetRect(var$0, var$1, var$2, var$3, var$4, r->getHiY());
}

SetFillRectANY::SetFillRectANY() {
}

$Class* SetFillRectANY::load$($String* name, bool initialize) {
	$loadClass(SetFillRectANY, name, initialize, &_SetFillRectANY_ClassInfo_, allocate$SetFillRectANY);
	return class$;
}

$Class* SetFillRectANY::class$ = nullptr;

		} // loops
	} // java2d
} // sun