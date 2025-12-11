#include <sun/java2d/opengl/CGLSurfaceData.h>

#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/Image.h>
#include <java/awt/Rectangle.h>
#include <java/awt/image/ColorModel.h>
#include <sun/awt/CGraphicsConfig.h>
#include <sun/awt/CGraphicsDevice.h>
#include <sun/java2d/opengl/CGLGraphicsConfig.h>
#include <sun/java2d/opengl/CGLLayer.h>
#include <sun/java2d/opengl/CGLSurfaceData$CGLLayerSurfaceData.h>
#include <sun/java2d/opengl/CGLSurfaceData$CGLOffScreenSurfaceData.h>
#include <sun/java2d/opengl/OGLGraphicsConfig.h>
#include <sun/java2d/opengl/OGLSurfaceData.h>
#include <sun/java2d/pipe/hw/AccelSurface.h>
#include <jcpp.h>

#undef TEXTURE

using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $Rectangle = ::java::awt::Rectangle;
using $ColorModel = ::java::awt::image::ColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CGraphicsConfig = ::sun::awt::CGraphicsConfig;
using $CGraphicsDevice = ::sun::awt::CGraphicsDevice;
using $CGLGraphicsConfig = ::sun::java2d::opengl::CGLGraphicsConfig;
using $CGLLayer = ::sun::java2d::opengl::CGLLayer;
using $CGLSurfaceData$CGLLayerSurfaceData = ::sun::java2d::opengl::CGLSurfaceData$CGLLayerSurfaceData;
using $CGLSurfaceData$CGLOffScreenSurfaceData = ::sun::java2d::opengl::CGLSurfaceData$CGLOffScreenSurfaceData;
using $OGLGraphicsConfig = ::sun::java2d::opengl::OGLGraphicsConfig;
using $OGLSurfaceData = ::sun::java2d::opengl::OGLSurfaceData;
using $AccelSurface = ::sun::java2d::pipe::hw::AccelSurface;

namespace sun {
	namespace java2d {
		namespace opengl {

$FieldInfo _CGLSurfaceData_FieldInfo_[] = {
	{"scale", "I", nullptr, $PRIVATE | $FINAL, $field(CGLSurfaceData, scale)},
	{"width", "I", nullptr, $FINAL, $field(CGLSurfaceData, width)},
	{"height", "I", nullptr, $FINAL, $field(CGLSurfaceData, height)},
	{"graphicsConfig", "Lsun/java2d/opengl/CGLGraphicsConfig;", nullptr, $PRIVATE | $FINAL, $field(CGLSurfaceData, graphicsConfig)},
	{}
};

$MethodInfo _CGLSurfaceData_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/opengl/CGLLayer;Lsun/java2d/opengl/CGLGraphicsConfig;Ljava/awt/image/ColorModel;III)V", nullptr, $PRIVATE, $method(static_cast<void(CGLSurfaceData::*)($CGLLayer*,$CGLGraphicsConfig*,$ColorModel*,int32_t,int32_t,int32_t)>(&CGLSurfaceData::init$))},
	{"clearWindow", "()V", nullptr, $PROTECTED | $NATIVE},
	{"createData", "(Lsun/java2d/opengl/CGLLayer;)Lsun/java2d/opengl/CGLSurfaceData$CGLLayerSurfaceData;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$CGLSurfaceData$CGLLayerSurfaceData*(*)($CGLLayer*)>(&CGLSurfaceData::createData))},
	{"createData", "(Lsun/java2d/opengl/CGLGraphicsConfig;IILjava/awt/image/ColorModel;Ljava/awt/Image;I)Lsun/java2d/opengl/CGLSurfaceData$CGLOffScreenSurfaceData;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$CGLSurfaceData$CGLOffScreenSurfaceData*(*)($CGLGraphicsConfig*,int32_t,int32_t,$ColorModel*,$Image*,int32_t)>(&CGLSurfaceData::createData))},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getDefaultScaleX", "()D", nullptr, $PUBLIC},
	{"getDefaultScaleY", "()D", nullptr, $PUBLIC},
	{"getDeviceConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC},
	{"initOps", "(Lsun/java2d/opengl/OGLGraphicsConfig;JJJIIZ)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(CGLSurfaceData::*)($OGLGraphicsConfig*,int64_t,int64_t,int64_t,int32_t,int32_t,bool)>(&CGLSurfaceData::initOps))},
	{}
};

#define _METHOD_INDEX_clearWindow 1
#define _METHOD_INDEX_initOps 8

$InnerClassInfo _CGLSurfaceData_InnerClassesInfo_[] = {
	{"sun.java2d.opengl.CGLSurfaceData$CGLOffScreenSurfaceData", "sun.java2d.opengl.CGLSurfaceData", "CGLOffScreenSurfaceData", $PUBLIC | $STATIC},
	{"sun.java2d.opengl.CGLSurfaceData$CGLLayerSurfaceData", "sun.java2d.opengl.CGLSurfaceData", "CGLLayerSurfaceData", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _CGLSurfaceData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.java2d.opengl.CGLSurfaceData",
	"sun.java2d.opengl.OGLSurfaceData",
	nullptr,
	_CGLSurfaceData_FieldInfo_,
	_CGLSurfaceData_MethodInfo_,
	nullptr,
	nullptr,
	_CGLSurfaceData_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.opengl.CGLSurfaceData$CGLOffScreenSurfaceData,sun.java2d.opengl.CGLSurfaceData$CGLLayerSurfaceData"
};

$Object* allocate$CGLSurfaceData($Class* clazz) {
	return $of($alloc(CGLSurfaceData));
}

void CGLSurfaceData::initOps($OGLGraphicsConfig* gc, int64_t pConfigInfo, int64_t pPeerData, int64_t layerPtr, int32_t xoff, int32_t yoff, bool isOpaque) {
	$prepareNative(CGLSurfaceData, initOps, void, $OGLGraphicsConfig* gc, int64_t pConfigInfo, int64_t pPeerData, int64_t layerPtr, int32_t xoff, int32_t yoff, bool isOpaque);
	$invokeNative(gc, pConfigInfo, pPeerData, layerPtr, xoff, yoff, isOpaque);
	$finishNative();
}

void CGLSurfaceData::init$($CGLLayer* layer, $CGLGraphicsConfig* gc, $ColorModel* cm, int32_t type, int32_t width, int32_t height) {
	$OGLSurfaceData::init$(gc, cm, type);
	this->scale = type == $AccelSurface::TEXTURE ? 1 : $nc($($cast($CGraphicsDevice, $nc(gc)->getDevice())))->getScaleFactor();
	this->width = width * this->scale;
	this->height = height * this->scale;
	$set(this, graphicsConfig, gc);
	int64_t layerPtr = 0;
	bool isOpaque = true;
	if (layer != nullptr) {
		layerPtr = layer->getPointer();
		isOpaque = layer->isOpaque();
	}
	initOps(gc, gc->getNativeConfigInfo(), 0, layerPtr, 0, 0, isOpaque);
}

$GraphicsConfiguration* CGLSurfaceData::getDeviceConfiguration() {
	return this->graphicsConfig;
}

$CGLSurfaceData$CGLLayerSurfaceData* CGLSurfaceData::createData($CGLLayer* layer) {
	$init(CGLSurfaceData);
	$useLocalCurrentObjectStackCache();
	$var($CGLGraphicsConfig, gc, $cast($CGLGraphicsConfig, $nc(layer)->getGraphicsConfiguration()));
	$var($Rectangle, r, layer->getBounds());
	return $new($CGLSurfaceData$CGLLayerSurfaceData, layer, gc, $nc(r)->width, r->height);
}

$CGLSurfaceData$CGLOffScreenSurfaceData* CGLSurfaceData::createData($CGLGraphicsConfig* gc, int32_t width, int32_t height, $ColorModel* cm, $Image* image, int32_t type) {
	$init(CGLSurfaceData);
	return $new($CGLSurfaceData$CGLOffScreenSurfaceData, gc, width, height, image, cm, type);
}

double CGLSurfaceData::getDefaultScaleX() {
	return (double)this->scale;
}

double CGLSurfaceData::getDefaultScaleY() {
	return (double)this->scale;
}

$Rectangle* CGLSurfaceData::getBounds() {
	return $new($Rectangle, this->width, this->height);
}

void CGLSurfaceData::clearWindow() {
	$prepareNative(CGLSurfaceData, clearWindow, void);
	$invokeNative();
	$finishNative();
}

CGLSurfaceData::CGLSurfaceData() {
}

$Class* CGLSurfaceData::load$($String* name, bool initialize) {
	$loadClass(CGLSurfaceData, name, initialize, &_CGLSurfaceData_ClassInfo_, allocate$CGLSurfaceData);
	return class$;
}

$Class* CGLSurfaceData::class$ = nullptr;

		} // opengl
	} // java2d
} // sun