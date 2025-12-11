#include <sun/java2d/loops/SetDrawPathANY.h>

#include <java/awt/geom/Path2D$Float.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/DrawPath.h>
#include <sun/java2d/loops/GeneralRenderer.h>
#include <sun/java2d/loops/PixelWriter.h>
#include <sun/java2d/loops/PixelWriterDrawHandler.h>
#include <sun/java2d/loops/ProcessPath$DrawHandler.h>
#include <sun/java2d/loops/ProcessPath.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

using $Path2D$Float = ::java::awt::geom::Path2D$Float;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $DrawPath = ::sun::java2d::loops::DrawPath;
using $GeneralRenderer = ::sun::java2d::loops::GeneralRenderer;
using $PixelWriter = ::sun::java2d::loops::PixelWriter;
using $PixelWriterDrawHandler = ::sun::java2d::loops::PixelWriterDrawHandler;
using $ProcessPath = ::sun::java2d::loops::ProcessPath;
using $ProcessPath$DrawHandler = ::sun::java2d::loops::ProcessPath$DrawHandler;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;

namespace sun {
	namespace java2d {
		namespace loops {

$MethodInfo _SetDrawPathANY_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SetDrawPathANY::*)()>(&SetDrawPathANY::init$))},
	{"DrawPath", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;IILjava/awt/geom/Path2D$Float;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SetDrawPathANY_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.loops.SetDrawPathANY",
	"sun.java2d.loops.DrawPath",
	nullptr,
	nullptr,
	_SetDrawPathANY_MethodInfo_
};

$Object* allocate$SetDrawPathANY($Class* clazz) {
	return $of($alloc(SetDrawPathANY));
}

void SetDrawPathANY::init$() {
	$init($SurfaceType);
	$init($CompositeType);
	$DrawPath::init$($SurfaceType::AnyColor, $CompositeType::SrcNoEa, $SurfaceType::Any);
}

void SetDrawPathANY::DrawPath$($SunGraphics2D* sg2d, $SurfaceData* sData, int32_t transx, int32_t transy, $Path2D$Float* p2df) {
	$useLocalCurrentObjectStackCache();
	$var($PixelWriter, pw, $GeneralRenderer::createSolidPixelWriter(sg2d, sData));
	$ProcessPath::drawPath($$new($PixelWriterDrawHandler, sData, pw, $($nc(sg2d)->getCompClip()), sg2d->strokeHint), p2df, transx, transy);
}

SetDrawPathANY::SetDrawPathANY() {
}

$Class* SetDrawPathANY::load$($String* name, bool initialize) {
	$loadClass(SetDrawPathANY, name, initialize, &_SetDrawPathANY_ClassInfo_, allocate$SetDrawPathANY);
	return class$;
}

$Class* SetDrawPathANY::class$ = nullptr;

		} // loops
	} // java2d
} // sun