#include <sun/java2d/xr/XRSurfaceData$LazyPipe.h>

#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/pipe/ValidatePipe.h>
#include <sun/java2d/xr/XRSurfaceData.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $ValidatePipe = ::sun::java2d::pipe::ValidatePipe;
using $XRSurfaceData = ::sun::java2d::xr::XRSurfaceData;

namespace sun {
	namespace java2d {
		namespace xr {

$MethodInfo _XRSurfaceData$LazyPipe_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XRSurfaceData$LazyPipe::*)()>(&XRSurfaceData$LazyPipe::init$))},
	{"validate", "(Lsun/java2d/SunGraphics2D;)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XRSurfaceData$LazyPipe_InnerClassesInfo_[] = {
	{"sun.java2d.xr.XRSurfaceData$LazyPipe", "sun.java2d.xr.XRSurfaceData", "LazyPipe", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _XRSurfaceData$LazyPipe_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.xr.XRSurfaceData$LazyPipe",
	"sun.java2d.pipe.ValidatePipe",
	nullptr,
	nullptr,
	_XRSurfaceData$LazyPipe_MethodInfo_,
	nullptr,
	nullptr,
	_XRSurfaceData$LazyPipe_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.xr.XRSurfaceData"
};

$Object* allocate$XRSurfaceData$LazyPipe($Class* clazz) {
	return $of($alloc(XRSurfaceData$LazyPipe));
}

void XRSurfaceData$LazyPipe::init$() {
	$ValidatePipe::init$();
}

bool XRSurfaceData$LazyPipe::validate($SunGraphics2D* sg2d) {
	$var($XRSurfaceData, xsd, $cast($XRSurfaceData, $nc(sg2d)->surfaceData));
	if (!$nc(xsd)->isXRDrawableValid()) {
		return false;
	}
	$nc(xsd)->makePipes();
	return $ValidatePipe::validate(sg2d);
}

XRSurfaceData$LazyPipe::XRSurfaceData$LazyPipe() {
}

$Class* XRSurfaceData$LazyPipe::load$($String* name, bool initialize) {
	$loadClass(XRSurfaceData$LazyPipe, name, initialize, &_XRSurfaceData$LazyPipe_ClassInfo_, allocate$XRSurfaceData$LazyPipe);
	return class$;
}

$Class* XRSurfaceData$LazyPipe::class$ = nullptr;

		} // xr
	} // java2d
} // sun