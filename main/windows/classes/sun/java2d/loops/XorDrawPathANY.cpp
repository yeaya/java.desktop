#include <sun/java2d/loops/XorDrawPathANY.h>

#include <java/awt/geom/Path2D$Float.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace loops {

$MethodInfo _XorDrawPathANY_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(XorDrawPathANY::*)()>(&XorDrawPathANY::init$))},
	{"DrawPath", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;IILjava/awt/geom/Path2D$Float;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XorDrawPathANY_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.loops.XorDrawPathANY",
	"sun.java2d.loops.DrawPath",
	nullptr,
	nullptr,
	_XorDrawPathANY_MethodInfo_
};

$Object* allocate$XorDrawPathANY($Class* clazz) {
	return $of($alloc(XorDrawPathANY));
}

void XorDrawPathANY::init$() {
	$init($SurfaceType);
	$init($CompositeType);
	$DrawPath::init$($SurfaceType::AnyColor, $CompositeType::Xor, $SurfaceType::Any);
}

void XorDrawPathANY::DrawPath$($SunGraphics2D* sg2d, $SurfaceData* sData, int32_t transx, int32_t transy, $Path2D$Float* p2df) {
	$useLocalCurrentObjectStackCache();
	$var($PixelWriter, pw, $GeneralRenderer::createXorPixelWriter(sg2d, sData));
	$ProcessPath::drawPath($$new($PixelWriterDrawHandler, sData, pw, $($nc(sg2d)->getCompClip()), sg2d->strokeHint), p2df, transx, transy);
}

XorDrawPathANY::XorDrawPathANY() {
}

$Class* XorDrawPathANY::load$($String* name, bool initialize) {
	$loadClass(XorDrawPathANY, name, initialize, &_XorDrawPathANY_ClassInfo_, allocate$XorDrawPathANY);
	return class$;
}

$Class* XorDrawPathANY::class$ = nullptr;

		} // loops
	} // java2d
} // sun