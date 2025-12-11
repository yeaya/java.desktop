#include <sun/java2d/x11/X11SurfaceData$LazyPipe.h>

#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/pipe/ValidatePipe.h>
#include <sun/java2d/x11/X11SurfaceData.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $ValidatePipe = ::sun::java2d::pipe::ValidatePipe;
using $X11SurfaceData = ::sun::java2d::x11::X11SurfaceData;

namespace sun {
	namespace java2d {
		namespace x11 {

$MethodInfo _X11SurfaceData$LazyPipe_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(X11SurfaceData$LazyPipe::*)()>(&X11SurfaceData$LazyPipe::init$))},
	{"validate", "(Lsun/java2d/SunGraphics2D;)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _X11SurfaceData$LazyPipe_InnerClassesInfo_[] = {
	{"sun.java2d.x11.X11SurfaceData$LazyPipe", "sun.java2d.x11.X11SurfaceData", "LazyPipe", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _X11SurfaceData$LazyPipe_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.x11.X11SurfaceData$LazyPipe",
	"sun.java2d.pipe.ValidatePipe",
	nullptr,
	nullptr,
	_X11SurfaceData$LazyPipe_MethodInfo_,
	nullptr,
	nullptr,
	_X11SurfaceData$LazyPipe_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.x11.X11SurfaceData"
};

$Object* allocate$X11SurfaceData$LazyPipe($Class* clazz) {
	return $of($alloc(X11SurfaceData$LazyPipe));
}

void X11SurfaceData$LazyPipe::init$() {
	$ValidatePipe::init$();
}

bool X11SurfaceData$LazyPipe::validate($SunGraphics2D* sg2d) {
	$var($X11SurfaceData, xsd, $cast($X11SurfaceData, $nc(sg2d)->surfaceData));
	if (!$nc(xsd)->isDrawableValid()) {
		return false;
	}
	$nc(xsd)->makePipes();
	return $ValidatePipe::validate(sg2d);
}

X11SurfaceData$LazyPipe::X11SurfaceData$LazyPipe() {
}

$Class* X11SurfaceData$LazyPipe::load$($String* name, bool initialize) {
	$loadClass(X11SurfaceData$LazyPipe, name, initialize, &_X11SurfaceData$LazyPipe_ClassInfo_, allocate$X11SurfaceData$LazyPipe);
	return class$;
}

$Class* X11SurfaceData$LazyPipe::class$ = nullptr;

		} // x11
	} // java2d
} // sun