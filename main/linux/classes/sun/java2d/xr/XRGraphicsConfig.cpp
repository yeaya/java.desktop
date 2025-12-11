#include <sun/java2d/xr/XRGraphicsConfig.h>

#include <java/awt/Transparency.h>
#include <sun/awt/X11ComponentPeer.h>
#include <sun/awt/X11GraphicsConfig.h>
#include <sun/awt/X11GraphicsDevice.h>
#include <sun/awt/X11GraphicsEnvironment.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/x11/XSurfaceData.h>
#include <sun/java2d/xr/XRSurfaceData$XRWindowSurfaceData.h>
#include <sun/java2d/xr/XRSurfaceData.h>
#include <jcpp.h>

#undef OPAQUE

using $Transparency = ::java::awt::Transparency;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $X11ComponentPeer = ::sun::awt::X11ComponentPeer;
using $X11GraphicsConfig = ::sun::awt::X11GraphicsConfig;
using $X11GraphicsDevice = ::sun::awt::X11GraphicsDevice;
using $X11GraphicsEnvironment = ::sun::awt::X11GraphicsEnvironment;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $XSurfaceData = ::sun::java2d::x11::XSurfaceData;
using $XRSurfaceData = ::sun::java2d::xr::XRSurfaceData;

namespace sun {
	namespace java2d {
		namespace xr {

$MethodInfo _XRGraphicsConfig_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11GraphicsDevice;IIIZ)V", nullptr, $PRIVATE, $method(static_cast<void(XRGraphicsConfig::*)($X11GraphicsDevice*,int32_t,int32_t,int32_t,bool)>(&XRGraphicsConfig::init$))},
	{"createSurfaceData", "(Lsun/awt/X11ComponentPeer;)Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{"getConfig", "(Lsun/awt/X11GraphicsDevice;IIIZ)Lsun/java2d/xr/XRGraphicsConfig;", nullptr, $PUBLIC | $STATIC, $method(static_cast<XRGraphicsConfig*(*)($X11GraphicsDevice*,int32_t,int32_t,int32_t,bool)>(&XRGraphicsConfig::getConfig))},
	{"getProxyKey", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getSurfaceType", "()Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

$ClassInfo _XRGraphicsConfig_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.xr.XRGraphicsConfig",
	"sun.awt.X11GraphicsConfig",
	nullptr,
	nullptr,
	_XRGraphicsConfig_MethodInfo_
};

$Object* allocate$XRGraphicsConfig($Class* clazz) {
	return $of($alloc(XRGraphicsConfig));
}

void XRGraphicsConfig::init$($X11GraphicsDevice* device, int32_t visualnum, int32_t depth, int32_t colormap, bool doubleBuffer) {
	$X11GraphicsConfig::init$(device, visualnum, depth, colormap, doubleBuffer);
}

$SurfaceData* XRGraphicsConfig::createSurfaceData($X11ComponentPeer* peer) {
	return $XRSurfaceData::createData(peer);
}

XRGraphicsConfig* XRGraphicsConfig::getConfig($X11GraphicsDevice* device, int32_t visualnum, int32_t depth, int32_t colormap, bool doubleBuffer) {
	$init(XRGraphicsConfig);
	if (!$X11GraphicsEnvironment::isXRenderAvailable()) {
		return nullptr;
	}
	return $new(XRGraphicsConfig, device, visualnum, depth, colormap, doubleBuffer);
}

$Object* XRGraphicsConfig::getProxyKey() {
	return $of(this);
}

$SurfaceType* XRGraphicsConfig::getSurfaceType() {
	$synchronized(this) {
		if (this->surfaceType != nullptr) {
			return this->surfaceType;
		}
		$set(this, surfaceType, $XRSurfaceData::getSurfaceType(this, $Transparency::OPAQUE));
		return this->surfaceType;
	}
}

XRGraphicsConfig::XRGraphicsConfig() {
}

$Class* XRGraphicsConfig::load$($String* name, bool initialize) {
	$loadClass(XRGraphicsConfig, name, initialize, &_XRGraphicsConfig_ClassInfo_, allocate$XRGraphicsConfig);
	return class$;
}

$Class* XRGraphicsConfig::class$ = nullptr;

		} // xr
	} // java2d
} // sun