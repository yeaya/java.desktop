#include <sun/java2d/opengl/WGLSurfaceData$WGLWindowSurfaceData.h>

#include <java/awt/Rectangle.h>
#include <java/awt/image/ColorModel.h>
#include <sun/awt/windows/WComponentPeer.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/opengl/WGLGraphicsConfig.h>
#include <sun/java2d/opengl/WGLSurfaceData.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/pipe/hw/AccelSurface.h>
#include <jcpp.h>

#undef WINDOW

using $Rectangle = ::java::awt::Rectangle;
using $ColorModel = ::java::awt::image::ColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;
using $WObjectPeer = ::sun::awt::windows::WObjectPeer;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $WGLGraphicsConfig = ::sun::java2d::opengl::WGLGraphicsConfig;
using $WGLSurfaceData = ::sun::java2d::opengl::WGLSurfaceData;
using $Region = ::sun::java2d::pipe::Region;
using $AccelSurface = ::sun::java2d::pipe::hw::AccelSurface;

namespace sun {
	namespace java2d {
		namespace opengl {

$MethodInfo _WGLSurfaceData$WGLWindowSurfaceData_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/windows/WComponentPeer;Lsun/java2d/opengl/WGLGraphicsConfig;)V", nullptr, $PUBLIC, $method(static_cast<void(WGLSurfaceData$WGLWindowSurfaceData::*)($WComponentPeer*,$WGLGraphicsConfig*)>(&WGLSurfaceData$WGLWindowSurfaceData::init$))},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getDestination", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getReplacement", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WGLSurfaceData$WGLWindowSurfaceData_InnerClassesInfo_[] = {
	{"sun.java2d.opengl.WGLSurfaceData$WGLWindowSurfaceData", "sun.java2d.opengl.WGLSurfaceData", "WGLWindowSurfaceData", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _WGLSurfaceData$WGLWindowSurfaceData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.opengl.WGLSurfaceData$WGLWindowSurfaceData",
	"sun.java2d.opengl.WGLSurfaceData",
	nullptr,
	nullptr,
	_WGLSurfaceData$WGLWindowSurfaceData_MethodInfo_,
	nullptr,
	nullptr,
	_WGLSurfaceData$WGLWindowSurfaceData_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.opengl.WGLSurfaceData"
};

$Object* allocate$WGLSurfaceData$WGLWindowSurfaceData($Class* clazz) {
	return $of($alloc(WGLSurfaceData$WGLWindowSurfaceData));
}

void WGLSurfaceData$WGLWindowSurfaceData::init$($WComponentPeer* peer, $WGLGraphicsConfig* gc) {
	$WGLSurfaceData::init$(peer, gc, $($nc(peer)->getColorModel()), $AccelSurface::WINDOW);
}

$SurfaceData* WGLSurfaceData$WGLWindowSurfaceData::getReplacement() {
	return $nc(this->peer)->getSurfaceData();
}

$Rectangle* WGLSurfaceData$WGLWindowSurfaceData::getBounds() {
	$var($Rectangle, r, $nc(this->peer)->getBounds());
	$nc(r)->x = (r->y = 0);
	r->width = $Region::clipRound(r->width * this->scaleX);
	r->height = $Region::clipRound(r->height * this->scaleY);
	return r;
}

$Object* WGLSurfaceData$WGLWindowSurfaceData::getDestination() {
	return $of($nc(this->peer)->getTarget());
}

WGLSurfaceData$WGLWindowSurfaceData::WGLSurfaceData$WGLWindowSurfaceData() {
}

$Class* WGLSurfaceData$WGLWindowSurfaceData::load$($String* name, bool initialize) {
	$loadClass(WGLSurfaceData$WGLWindowSurfaceData, name, initialize, &_WGLSurfaceData$WGLWindowSurfaceData_ClassInfo_, allocate$WGLSurfaceData$WGLWindowSurfaceData);
	return class$;
}

$Class* WGLSurfaceData$WGLWindowSurfaceData::class$ = nullptr;

		} // opengl
	} // java2d
} // sun