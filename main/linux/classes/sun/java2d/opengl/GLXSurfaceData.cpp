#include <sun/java2d/opengl/GLXSurfaceData.h>

#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Image.h>
#include <java/awt/Rectangle.h>
#include <java/awt/image/ColorModel.h>
#include <sun/awt/X11ComponentPeer.h>
#include <sun/awt/X11GraphicsConfig.h>
#include <sun/java2d/opengl/GLXGraphicsConfig.h>
#include <sun/java2d/opengl/GLXSurfaceData$GLXOffScreenSurfaceData.h>
#include <sun/java2d/opengl/GLXSurfaceData$GLXVSyncOffScreenSurfaceData.h>
#include <sun/java2d/opengl/GLXSurfaceData$GLXWindowSurfaceData.h>
#include <sun/java2d/opengl/OGLGraphicsConfig.h>
#include <sun/java2d/opengl/OGLSurfaceData.h>
#include <sun/java2d/pipe/hw/AccelSurface.h>
#include <jcpp.h>

#undef FLIP_BACKBUFFER

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
using $X11ComponentPeer = ::sun::awt::X11ComponentPeer;
using $X11GraphicsConfig = ::sun::awt::X11GraphicsConfig;
using $GLXGraphicsConfig = ::sun::java2d::opengl::GLXGraphicsConfig;
using $GLXSurfaceData$GLXOffScreenSurfaceData = ::sun::java2d::opengl::GLXSurfaceData$GLXOffScreenSurfaceData;
using $GLXSurfaceData$GLXVSyncOffScreenSurfaceData = ::sun::java2d::opengl::GLXSurfaceData$GLXVSyncOffScreenSurfaceData;
using $GLXSurfaceData$GLXWindowSurfaceData = ::sun::java2d::opengl::GLXSurfaceData$GLXWindowSurfaceData;
using $OGLGraphicsConfig = ::sun::java2d::opengl::OGLGraphicsConfig;
using $OGLSurfaceData = ::sun::java2d::opengl::OGLSurfaceData;
using $AccelSurface = ::sun::java2d::pipe::hw::AccelSurface;

namespace sun {
	namespace java2d {
		namespace opengl {

$FieldInfo _GLXSurfaceData_FieldInfo_[] = {
	{"peer", "Lsun/awt/X11ComponentPeer;", nullptr, $PROTECTED, $field(GLXSurfaceData, peer)},
	{"graphicsConfig", "Lsun/java2d/opengl/GLXGraphicsConfig;", nullptr, $PRIVATE, $field(GLXSurfaceData, graphicsConfig)},
	{}
};

$MethodInfo _GLXSurfaceData_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11ComponentPeer;Lsun/java2d/opengl/GLXGraphicsConfig;Ljava/awt/image/ColorModel;I)V", nullptr, $PROTECTED, $method(static_cast<void(GLXSurfaceData::*)($X11ComponentPeer*,$GLXGraphicsConfig*,$ColorModel*,int32_t)>(&GLXSurfaceData::init$))},
	{"createData", "(Lsun/awt/X11ComponentPeer;)Lsun/java2d/opengl/GLXSurfaceData$GLXWindowSurfaceData;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$GLXSurfaceData$GLXWindowSurfaceData*(*)($X11ComponentPeer*)>(&GLXSurfaceData::createData))},
	{"createData", "(Lsun/awt/X11ComponentPeer;Ljava/awt/Image;I)Lsun/java2d/opengl/GLXSurfaceData$GLXOffScreenSurfaceData;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$GLXSurfaceData$GLXOffScreenSurfaceData*(*)($X11ComponentPeer*,$Image*,int32_t)>(&GLXSurfaceData::createData))},
	{"createData", "(Lsun/java2d/opengl/GLXGraphicsConfig;IILjava/awt/image/ColorModel;Ljava/awt/Image;I)Lsun/java2d/opengl/GLXSurfaceData$GLXOffScreenSurfaceData;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$GLXSurfaceData$GLXOffScreenSurfaceData*(*)($GLXGraphicsConfig*,int32_t,int32_t,$ColorModel*,$Image*,int32_t)>(&GLXSurfaceData::createData))},
	{"getDeviceConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC},
	{"getGC", "(Lsun/awt/X11ComponentPeer;)Lsun/java2d/opengl/GLXGraphicsConfig;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$GLXGraphicsConfig*(*)($X11ComponentPeer*)>(&GLXSurfaceData::getGC))},
	{"initOps", "(Lsun/java2d/opengl/OGLGraphicsConfig;Lsun/awt/X11ComponentPeer;J)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(GLXSurfaceData::*)($OGLGraphicsConfig*,$X11ComponentPeer*,int64_t)>(&GLXSurfaceData::initOps))},
	{}
};

#define _METHOD_INDEX_initOps 6

$InnerClassInfo _GLXSurfaceData_InnerClassesInfo_[] = {
	{"sun.java2d.opengl.GLXSurfaceData$GLXOffScreenSurfaceData", "sun.java2d.opengl.GLXSurfaceData", "GLXOffScreenSurfaceData", $PUBLIC | $STATIC},
	{"sun.java2d.opengl.GLXSurfaceData$GLXVSyncOffScreenSurfaceData", "sun.java2d.opengl.GLXSurfaceData", "GLXVSyncOffScreenSurfaceData", $PUBLIC | $STATIC},
	{"sun.java2d.opengl.GLXSurfaceData$GLXWindowSurfaceData", "sun.java2d.opengl.GLXSurfaceData", "GLXWindowSurfaceData", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _GLXSurfaceData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.java2d.opengl.GLXSurfaceData",
	"sun.java2d.opengl.OGLSurfaceData",
	nullptr,
	_GLXSurfaceData_FieldInfo_,
	_GLXSurfaceData_MethodInfo_,
	nullptr,
	nullptr,
	_GLXSurfaceData_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.opengl.GLXSurfaceData$GLXOffScreenSurfaceData,sun.java2d.opengl.GLXSurfaceData$GLXVSyncOffScreenSurfaceData,sun.java2d.opengl.GLXSurfaceData$GLXWindowSurfaceData"
};

$Object* allocate$GLXSurfaceData($Class* clazz) {
	return $of($alloc(GLXSurfaceData));
}

void GLXSurfaceData::initOps($OGLGraphicsConfig* gc, $X11ComponentPeer* peer, int64_t aData) {
	$prepareNative(GLXSurfaceData, initOps, void, $OGLGraphicsConfig* gc, $X11ComponentPeer* peer, int64_t aData);
	$invokeNative(gc, peer, aData);
	$finishNative();
}

void GLXSurfaceData::init$($X11ComponentPeer* peer, $GLXGraphicsConfig* gc, $ColorModel* cm, int32_t type) {
	$OGLSurfaceData::init$(gc, cm, type);
	$set(this, peer, peer);
	$set(this, graphicsConfig, gc);
	initOps(gc, peer, $nc(this->graphicsConfig)->getAData());
}

$GraphicsConfiguration* GLXSurfaceData::getDeviceConfiguration() {
	return this->graphicsConfig;
}

$GLXSurfaceData$GLXWindowSurfaceData* GLXSurfaceData::createData($X11ComponentPeer* peer) {
	$init(GLXSurfaceData);
	$var($GLXGraphicsConfig, gc, getGC(peer));
	return $new($GLXSurfaceData$GLXWindowSurfaceData, peer, gc);
}

$GLXSurfaceData$GLXOffScreenSurfaceData* GLXSurfaceData::createData($X11ComponentPeer* peer, $Image* image, int32_t type) {
	$init(GLXSurfaceData);
	$useLocalCurrentObjectStackCache();
	$var($GLXGraphicsConfig, gc, getGC(peer));
	$var($Rectangle, r, $nc(peer)->getBounds());
	if (type == $AccelSurface::FLIP_BACKBUFFER) {
		return $new($GLXSurfaceData$GLXOffScreenSurfaceData, peer, gc, $nc(r)->width, r->height, image, $(peer->getColorModel()), $AccelSurface::FLIP_BACKBUFFER);
	} else {
		return $new($GLXSurfaceData$GLXVSyncOffScreenSurfaceData, peer, gc, $nc(r)->width, r->height, image, $(peer->getColorModel()), type);
	}
}

$GLXSurfaceData$GLXOffScreenSurfaceData* GLXSurfaceData::createData($GLXGraphicsConfig* gc, int32_t width, int32_t height, $ColorModel* cm, $Image* image, int32_t type) {
	$init(GLXSurfaceData);
	return $new($GLXSurfaceData$GLXOffScreenSurfaceData, nullptr, gc, width, height, image, cm, type);
}

$GLXGraphicsConfig* GLXSurfaceData::getGC($X11ComponentPeer* peer) {
	$init(GLXSurfaceData);
	$useLocalCurrentObjectStackCache();
	if (peer != nullptr) {
		return $cast($GLXGraphicsConfig, peer->getGraphicsConfiguration());
	} else {
		$var($GraphicsEnvironment, env, $GraphicsEnvironment::getLocalGraphicsEnvironment());
		$var($GraphicsDevice, gd, $nc(env)->getDefaultScreenDevice());
		return $cast($GLXGraphicsConfig, $nc(gd)->getDefaultConfiguration());
	}
}

GLXSurfaceData::GLXSurfaceData() {
}

$Class* GLXSurfaceData::load$($String* name, bool initialize) {
	$loadClass(GLXSurfaceData, name, initialize, &_GLXSurfaceData_ClassInfo_, allocate$GLXSurfaceData);
	return class$;
}

$Class* GLXSurfaceData::class$ = nullptr;

		} // opengl
	} // java2d
} // sun