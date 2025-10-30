#include <sun/java2d/opengl/WGLSurfaceData.h>

#include <java/awt/Component.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Image.h>
#include <java/awt/Rectangle.h>
#include <java/awt/image/ColorModel.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/Win32GraphicsConfig.h>
#include <sun/awt/Win32GraphicsDevice.h>
#include <sun/awt/windows/WComponentPeer.h>
#include <sun/java2d/opengl/OGLGraphicsConfig.h>
#include <sun/java2d/opengl/OGLSurfaceData.h>
#include <sun/java2d/opengl/WGLGraphicsConfig.h>
#include <sun/java2d/opengl/WGLSurfaceData$WGLOffScreenSurfaceData.h>
#include <sun/java2d/opengl/WGLSurfaceData$WGLVSyncOffScreenSurfaceData.h>
#include <sun/java2d/opengl/WGLSurfaceData$WGLWindowSurfaceData.h>
#include <sun/java2d/pipe/hw/AccelSurface.h>
#include <jcpp.h>

#undef FLIP_BACKBUFFER
#undef TEXTURE

using $Component = ::java::awt::Component;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Image = ::java::awt::Image;
using $Rectangle = ::java::awt::Rectangle;
using $ColorModel = ::java::awt::image::ColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunToolkit = ::sun::awt::SunToolkit;
using $Win32GraphicsConfig = ::sun::awt::Win32GraphicsConfig;
using $Win32GraphicsDevice = ::sun::awt::Win32GraphicsDevice;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;
using $WObjectPeer = ::sun::awt::windows::WObjectPeer;
using $OGLGraphicsConfig = ::sun::java2d::opengl::OGLGraphicsConfig;
using $OGLSurfaceData = ::sun::java2d::opengl::OGLSurfaceData;
using $WGLGraphicsConfig = ::sun::java2d::opengl::WGLGraphicsConfig;
using $WGLSurfaceData$WGLOffScreenSurfaceData = ::sun::java2d::opengl::WGLSurfaceData$WGLOffScreenSurfaceData;
using $WGLSurfaceData$WGLVSyncOffScreenSurfaceData = ::sun::java2d::opengl::WGLSurfaceData$WGLVSyncOffScreenSurfaceData;
using $WGLSurfaceData$WGLWindowSurfaceData = ::sun::java2d::opengl::WGLSurfaceData$WGLWindowSurfaceData;
using $AccelSurface = ::sun::java2d::pipe::hw::AccelSurface;

namespace sun {
	namespace java2d {
		namespace opengl {

$FieldInfo _WGLSurfaceData_FieldInfo_[] = {
	{"peer", "Lsun/awt/windows/WComponentPeer;", nullptr, $PROTECTED, $field(WGLSurfaceData, peer)},
	{"graphicsConfig", "Lsun/java2d/opengl/WGLGraphicsConfig;", nullptr, $PRIVATE, $field(WGLSurfaceData, graphicsConfig)},
	{"scaleX", "D", nullptr, $PROTECTED, $field(WGLSurfaceData, scaleX)},
	{"scaleY", "D", nullptr, $PROTECTED, $field(WGLSurfaceData, scaleY)},
	{}
};

$MethodInfo _WGLSurfaceData_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/windows/WComponentPeer;Lsun/java2d/opengl/WGLGraphicsConfig;Ljava/awt/image/ColorModel;I)V", nullptr, $PROTECTED, $method(static_cast<void(WGLSurfaceData::*)($WComponentPeer*,$WGLGraphicsConfig*,$ColorModel*,int32_t)>(&WGLSurfaceData::init$))},
	{"createData", "(Lsun/awt/windows/WComponentPeer;)Lsun/java2d/opengl/WGLSurfaceData$WGLWindowSurfaceData;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$WGLSurfaceData$WGLWindowSurfaceData*(*)($WComponentPeer*)>(&WGLSurfaceData::createData))},
	{"createData", "(Lsun/awt/windows/WComponentPeer;Ljava/awt/Image;I)Lsun/java2d/opengl/WGLSurfaceData$WGLOffScreenSurfaceData;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$WGLSurfaceData$WGLOffScreenSurfaceData*(*)($WComponentPeer*,$Image*,int32_t)>(&WGLSurfaceData::createData))},
	{"createData", "(Lsun/java2d/opengl/WGLGraphicsConfig;IILjava/awt/image/ColorModel;Ljava/awt/Image;I)Lsun/java2d/opengl/WGLSurfaceData$WGLOffScreenSurfaceData;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$WGLSurfaceData$WGLOffScreenSurfaceData*(*)($WGLGraphicsConfig*,int32_t,int32_t,$ColorModel*,$Image*,int32_t)>(&WGLSurfaceData::createData))},
	{"getDefaultScaleX", "()D", nullptr, $PUBLIC},
	{"getDefaultScaleY", "()D", nullptr, $PUBLIC},
	{"getDeviceConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC},
	{"getGC", "(Lsun/awt/windows/WComponentPeer;)Lsun/java2d/opengl/WGLGraphicsConfig;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$WGLGraphicsConfig*(*)($WComponentPeer*)>(&WGLSurfaceData::getGC))},
	{"initOps", "(Lsun/java2d/opengl/OGLGraphicsConfig;JLsun/awt/windows/WComponentPeer;J)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(WGLSurfaceData::*)($OGLGraphicsConfig*,int64_t,$WComponentPeer*,int64_t)>(&WGLSurfaceData::initOps))},
	{"updateWindowAccelImpl", "(JLsun/awt/windows/WComponentPeer;II)Z", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<bool(*)(int64_t,$WComponentPeer*,int32_t,int32_t)>(&WGLSurfaceData::updateWindowAccelImpl))},
	{}
};

#define _METHOD_INDEX_initOps 8
#define _METHOD_INDEX_updateWindowAccelImpl 9

$InnerClassInfo _WGLSurfaceData_InnerClassesInfo_[] = {
	{"sun.java2d.opengl.WGLSurfaceData$WGLOffScreenSurfaceData", "sun.java2d.opengl.WGLSurfaceData", "WGLOffScreenSurfaceData", $PUBLIC | $STATIC},
	{"sun.java2d.opengl.WGLSurfaceData$WGLVSyncOffScreenSurfaceData", "sun.java2d.opengl.WGLSurfaceData", "WGLVSyncOffScreenSurfaceData", $PUBLIC | $STATIC},
	{"sun.java2d.opengl.WGLSurfaceData$WGLWindowSurfaceData", "sun.java2d.opengl.WGLSurfaceData", "WGLWindowSurfaceData", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _WGLSurfaceData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.java2d.opengl.WGLSurfaceData",
	"sun.java2d.opengl.OGLSurfaceData",
	nullptr,
	_WGLSurfaceData_FieldInfo_,
	_WGLSurfaceData_MethodInfo_,
	nullptr,
	nullptr,
	_WGLSurfaceData_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.opengl.WGLSurfaceData$WGLOffScreenSurfaceData,sun.java2d.opengl.WGLSurfaceData$WGLVSyncOffScreenSurfaceData,sun.java2d.opengl.WGLSurfaceData$WGLWindowSurfaceData"
};

$Object* allocate$WGLSurfaceData($Class* clazz) {
	return $of($alloc(WGLSurfaceData));
}

void WGLSurfaceData::initOps($OGLGraphicsConfig* gc, int64_t pConfigInfo, $WComponentPeer* peer, int64_t hwnd) {
	$prepareNative(WGLSurfaceData, initOps, void, $OGLGraphicsConfig* gc, int64_t pConfigInfo, $WComponentPeer* peer, int64_t hwnd);
	$invokeNative(WGLSurfaceData, initOps, gc, pConfigInfo, peer, hwnd);
	$finishNative();
}

void WGLSurfaceData::init$($WComponentPeer* peer, $WGLGraphicsConfig* gc, $ColorModel* cm, int32_t type) {
	$OGLSurfaceData::init$(gc, cm, type);
	this->scaleX = (double)1;
	this->scaleY = (double)1;
	$set(this, peer, peer);
	$set(this, graphicsConfig, gc);
	$var($Win32GraphicsDevice, device, $cast($Win32GraphicsDevice, $nc(gc)->getDevice()));
	this->scaleX = type == $AccelSurface::TEXTURE ? (float)1 : $nc(device)->getDefaultScaleX();
	this->scaleY = type == $AccelSurface::TEXTURE ? (float)1 : device->getDefaultScaleY();
	int64_t pConfigInfo = gc->getNativeConfigInfo();
	int64_t hwnd = peer != nullptr ? $nc(peer)->getHWnd() : (int64_t)0;
	initOps(gc, pConfigInfo, peer, hwnd);
}

double WGLSurfaceData::getDefaultScaleX() {
	return this->scaleX;
}

double WGLSurfaceData::getDefaultScaleY() {
	return this->scaleY;
}

$GraphicsConfiguration* WGLSurfaceData::getDeviceConfiguration() {
	return this->graphicsConfig;
}

$WGLSurfaceData$WGLWindowSurfaceData* WGLSurfaceData::createData($WComponentPeer* peer) {
	$init(WGLSurfaceData);
	$useLocalCurrentObjectStackCache();
	bool var$0 = !$nc(peer)->isAccelCapable();
	if (var$0 || !$SunToolkit::isContainingTopLevelOpaque($cast($Component, $($nc(peer)->getTarget())))) {
		return nullptr;
	}
	$var($WGLGraphicsConfig, gc, getGC(peer));
	return $new($WGLSurfaceData$WGLWindowSurfaceData, peer, gc);
}

$WGLSurfaceData$WGLOffScreenSurfaceData* WGLSurfaceData::createData($WComponentPeer* peer, $Image* image, int32_t type) {
	$init(WGLSurfaceData);
	$useLocalCurrentObjectStackCache();
	bool var$0 = !$nc(peer)->isAccelCapable();
	if (var$0 || !$SunToolkit::isContainingTopLevelOpaque($cast($Component, $($nc(peer)->getTarget())))) {
		return nullptr;
	}
	$var($WGLGraphicsConfig, gc, getGC(peer));
	$var($Rectangle, r, $nc(peer)->getBounds());
	if (type == $AccelSurface::FLIP_BACKBUFFER) {
		return $new($WGLSurfaceData$WGLOffScreenSurfaceData, peer, gc, $nc(r)->width, r->height, image, $(peer->getColorModel()), type);
	} else {
		return $new($WGLSurfaceData$WGLVSyncOffScreenSurfaceData, peer, gc, $nc(r)->width, r->height, image, $(peer->getColorModel()), type);
	}
}

$WGLSurfaceData$WGLOffScreenSurfaceData* WGLSurfaceData::createData($WGLGraphicsConfig* gc, int32_t width, int32_t height, $ColorModel* cm, $Image* image, int32_t type) {
	$init(WGLSurfaceData);
	return $new($WGLSurfaceData$WGLOffScreenSurfaceData, nullptr, gc, width, height, image, cm, type);
}

$WGLGraphicsConfig* WGLSurfaceData::getGC($WComponentPeer* peer) {
	$init(WGLSurfaceData);
	$useLocalCurrentObjectStackCache();
	if (peer != nullptr) {
		return $cast($WGLGraphicsConfig, peer->getGraphicsConfiguration());
	} else {
		$var($GraphicsEnvironment, env, $GraphicsEnvironment::getLocalGraphicsEnvironment());
		$var($GraphicsDevice, gd, $nc(env)->getDefaultScreenDevice());
		return $cast($WGLGraphicsConfig, $nc(gd)->getDefaultConfiguration());
	}
}

bool WGLSurfaceData::updateWindowAccelImpl(int64_t psdops, $WComponentPeer* peer, int32_t w, int32_t h) {
	$init(WGLSurfaceData);
	bool $ret = false;
	$prepareNativeStatic(WGLSurfaceData, updateWindowAccelImpl, bool, int64_t psdops, $WComponentPeer* peer, int32_t w, int32_t h);
	$ret = $invokeNativeStatic(WGLSurfaceData, updateWindowAccelImpl, psdops, peer, w, h);
	$finishNativeStatic();
	return $ret;
}

WGLSurfaceData::WGLSurfaceData() {
}

$Class* WGLSurfaceData::load$($String* name, bool initialize) {
	$loadClass(WGLSurfaceData, name, initialize, &_WGLSurfaceData_ClassInfo_, allocate$WGLSurfaceData);
	return class$;
}

$Class* WGLSurfaceData::class$ = nullptr;

		} // opengl
	} // java2d
} // sun