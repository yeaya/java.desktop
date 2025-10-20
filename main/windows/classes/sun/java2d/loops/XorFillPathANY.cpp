#include <sun/java2d/loops/XorFillPathANY.h>

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
#include <sun/java2d/loops/FillPath.h>
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
using $FillPath = ::sun::java2d::loops::FillPath;
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

$MethodInfo _XorFillPathANY_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(XorFillPathANY::*)()>(&XorFillPathANY::init$))},
	{"FillPath", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;IILjava/awt/geom/Path2D$Float;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XorFillPathANY_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.loops.XorFillPathANY",
	"sun.java2d.loops.FillPath",
	nullptr,
	nullptr,
	_XorFillPathANY_MethodInfo_
};

$Object* allocate$XorFillPathANY($Class* clazz) {
	return $of($alloc(XorFillPathANY));
}

void XorFillPathANY::init$() {
	$init($SurfaceType);
	$init($CompositeType);
	$FillPath::init$($SurfaceType::AnyColor, $CompositeType::Xor, $SurfaceType::Any);
}

void XorFillPathANY::FillPath$($SunGraphics2D* sg2d, $SurfaceData* sData, int32_t transx, int32_t transy, $Path2D$Float* p2df) {
	$useLocalCurrentObjectStackCache();
	$var($PixelWriter, pw, $GeneralRenderer::createXorPixelWriter(sg2d, sData));
	$ProcessPath::fillPath($$new($PixelWriterDrawHandler, sData, pw, $($nc(sg2d)->getCompClip()), sg2d->strokeHint), p2df, transx, transy);
}

XorFillPathANY::XorFillPathANY() {
}

$Class* XorFillPathANY::load$($String* name, bool initialize) {
	$loadClass(XorFillPathANY, name, initialize, &_XorFillPathANY_ClassInfo_, allocate$XorFillPathANY);
	return class$;
}

$Class* XorFillPathANY::class$ = nullptr;

		} // loops
	} // java2d
} // sun