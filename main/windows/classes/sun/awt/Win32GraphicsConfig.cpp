#include <sun/awt/Win32GraphicsConfig.h>

#include <java/awt/AWTException.h>
#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Image.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Transparency.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/DirectColorModel.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/PackedColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/image/WritableRaster.h>
#include <sun/awt/DisplayChangedListener.h>
#include <sun/awt/Win32GraphicsDevice.h>
#include <sun/awt/Win32GraphicsEnvironment.h>
#include <sun/awt/image/OffScreenImage.h>
#include <sun/awt/image/SunVolatileImage.h>
#include <sun/awt/windows/WComponentPeer.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/RenderLoops.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/windows/GDIWindowSurfaceData.h>
#include <jcpp.h>

#undef BACKGROUND
#undef BITMASK
#undef COPIED
#undef OPAQUE
#undef TRANSLUCENT
#undef TRUE
#undef UNDEFINED

using $AWTException = ::java::awt::AWTException;
using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $BufferCapabilities$FlipContents = ::java::awt::BufferCapabilities$FlipContents;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Image = ::java::awt::Image;
using $Rectangle = ::java::awt::Rectangle;
using $Transparency = ::java::awt::Transparency;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $DirectColorModel = ::java::awt::image::DirectColorModel;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $PackedColorModel = ::java::awt::image::PackedColorModel;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DisplayChangedListener = ::sun::awt::DisplayChangedListener;
using $Win32GraphicsDevice = ::sun::awt::Win32GraphicsDevice;
using $Win32GraphicsEnvironment = ::sun::awt::Win32GraphicsEnvironment;
using $OffScreenImage = ::sun::awt::image::OffScreenImage;
using $SunVolatileImage = ::sun::awt::image::SunVolatileImage;
using $SurfaceManager$ProxiedGraphicsConfig = ::sun::awt::image::SurfaceManager$ProxiedGraphicsConfig;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;
using $WObjectPeer = ::sun::awt::windows::WObjectPeer;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $RenderLoops = ::sun::java2d::loops::RenderLoops;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $GDIWindowSurfaceData = ::sun::java2d::windows::GDIWindowSurfaceData;

namespace sun {
	namespace awt {

$CompoundAttribute _Win32GraphicsConfig_MethodAnnotations_init$0[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _Win32GraphicsConfig_FieldInfo_[] = {
	{"device", "Lsun/awt/Win32GraphicsDevice;", nullptr, $PRIVATE | $FINAL, $field(Win32GraphicsConfig, device)},
	{"visual", "I", nullptr, $PROTECTED, $field(Win32GraphicsConfig, visual)},
	{"solidloops", "Lsun/java2d/loops/RenderLoops;", nullptr, $PROTECTED, $field(Win32GraphicsConfig, solidloops)},
	{"sTypeOrig", "Lsun/java2d/loops/SurfaceType;", nullptr, $PRIVATE, $field(Win32GraphicsConfig, sTypeOrig)},
	{}
};

$MethodInfo _Win32GraphicsConfig_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/GraphicsDevice;I)V", nullptr, $PUBLIC | $DEPRECATED, $method(static_cast<void(Win32GraphicsConfig::*)($GraphicsDevice*,int32_t)>(&Win32GraphicsConfig::init$)), nullptr, nullptr, _Win32GraphicsConfig_MethodAnnotations_init$0},
	{"assertOperationSupported", "(Ljava/awt/Component;ILjava/awt/BufferCapabilities;)V", nullptr, $PUBLIC, nullptr, "java.awt.AWTException"},
	{"createAcceleratedImage", "(Ljava/awt/Component;II)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"createBackBuffer", "(Lsun/awt/windows/WComponentPeer;)Ljava/awt/image/VolatileImage;", nullptr, $PUBLIC},
	{"createSurfaceData", "(Lsun/awt/windows/WComponentPeer;I)Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{"displayChanged", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"flip", "(Lsun/awt/windows/WComponentPeer;Ljava/awt/Component;Ljava/awt/image/VolatileImage;IIIILjava/awt/BufferCapabilities$FlipContents;)V", nullptr, $PUBLIC},
	{"getBounds", "(I)Ljava/awt/Rectangle;", nullptr, $PRIVATE | $NATIVE, $method(static_cast<$Rectangle*(Win32GraphicsConfig::*)(int32_t)>(&Win32GraphicsConfig::getBounds))},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getColorModel", "(I)Ljava/awt/image/ColorModel;", nullptr, $PUBLIC},
	{"getConfig", "(Lsun/awt/Win32GraphicsDevice;I)Lsun/awt/Win32GraphicsConfig;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Win32GraphicsConfig*(*)($Win32GraphicsDevice*,int32_t)>(&Win32GraphicsConfig::getConfig))},
	{"getDefaultTransform", "()Ljava/awt/geom/AffineTransform;", nullptr, $PUBLIC},
	{"getDevice", "()Lsun/awt/Win32GraphicsDevice;", nullptr, $PUBLIC},
	{"getDeviceColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC},
	{"getNormalizingTransform", "()Ljava/awt/geom/AffineTransform;", nullptr, $PUBLIC},
	{"getProxyKey", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getSolidLoops", "(Lsun/java2d/loops/SurfaceType;)Lsun/java2d/loops/RenderLoops;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getVisual", "()I", nullptr, $PUBLIC},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&Win32GraphicsConfig::initIDs))},
	{"isTranslucencyCapable", "()Z", nullptr, $PUBLIC},
	{"paletteChanged", "()V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_getBounds 11
#define _METHOD_INDEX_initIDs 23

$InnerClassInfo _Win32GraphicsConfig_InnerClassesInfo_[] = {
	{"sun.awt.image.SurfaceManager$ProxiedGraphicsConfig", "sun.awt.image.SurfaceManager", "ProxiedGraphicsConfig", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Win32GraphicsConfig_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.Win32GraphicsConfig",
	"java.awt.GraphicsConfiguration",
	"sun.awt.DisplayChangedListener,sun.awt.image.SurfaceManager$ProxiedGraphicsConfig",
	_Win32GraphicsConfig_FieldInfo_,
	_Win32GraphicsConfig_MethodInfo_,
	nullptr,
	nullptr,
	_Win32GraphicsConfig_InnerClassesInfo_
};

$Object* allocate$Win32GraphicsConfig($Class* clazz) {
	return $of($alloc(Win32GraphicsConfig));
}

int32_t Win32GraphicsConfig::hashCode() {
	 return this->$GraphicsConfiguration::hashCode();
}

bool Win32GraphicsConfig::equals(Object$* arg0) {
	 return this->$GraphicsConfiguration::equals(arg0);
}

$Object* Win32GraphicsConfig::clone() {
	 return this->$GraphicsConfiguration::clone();
}

void Win32GraphicsConfig::finalize() {
	this->$GraphicsConfiguration::finalize();
}

void Win32GraphicsConfig::initIDs() {
	$init(Win32GraphicsConfig);
	$prepareNativeStatic(Win32GraphicsConfig, initIDs, void);
	$invokeNativeStatic(Win32GraphicsConfig, initIDs);
	$finishNativeStatic();
}

Win32GraphicsConfig* Win32GraphicsConfig::getConfig($Win32GraphicsDevice* device, int32_t pixFormatID) {
	$init(Win32GraphicsConfig);
	return $new(Win32GraphicsConfig, device, pixFormatID);
}

void Win32GraphicsConfig::init$($GraphicsDevice* device, int32_t visualnum) {
	$GraphicsConfiguration::init$();
	$set(this, sTypeOrig, nullptr);
	$set(this, device, $cast($Win32GraphicsDevice, device));
	this->visual = visualnum;
	$nc(($cast($Win32GraphicsDevice, device)))->addDisplayChangedListener(this);
}

$GraphicsDevice* Win32GraphicsConfig::getDevice() {
	return this->device;
}

int32_t Win32GraphicsConfig::getVisual() {
	return this->visual;
}

$Object* Win32GraphicsConfig::getProxyKey() {
	return $of(this->device);
}

$RenderLoops* Win32GraphicsConfig::getSolidLoops($SurfaceType* stype) {
	$synchronized(this) {
		if (this->solidloops == nullptr || this->sTypeOrig != stype) {
			$init($SurfaceType);
			$init($CompositeType);
			$set(this, solidloops, $SurfaceData::makeRenderLoops($SurfaceType::OpaqueColor, $CompositeType::SrcNoEa, stype));
			$set(this, sTypeOrig, stype);
		}
		return this->solidloops;
	}
}

$ColorModel* Win32GraphicsConfig::getColorModel() {
	$synchronized(this) {
		return $nc(this->device)->getColorModel();
	}
}

$ColorModel* Win32GraphicsConfig::getDeviceColorModel() {
	return $nc(this->device)->getDynamicColorModel();
}

$ColorModel* Win32GraphicsConfig::getColorModel(int32_t transparency) {
	switch (transparency) {
	case $Transparency::OPAQUE:
		{
			return getColorModel();
		}
	case $Transparency::BITMASK:
		{
			return $new($DirectColorModel, 25, 0x00FF0000, 0x0000FF00, 255, 0x01000000);
		}
	case $Transparency::TRANSLUCENT:
		{
			return $ColorModel::getRGBdefault();
		}
	default:
		{
			return nullptr;
		}
	}
}

$AffineTransform* Win32GraphicsConfig::getDefaultTransform() {
	double scaleX = $nc(this->device)->getDefaultScaleX();
	double scaleY = $nc(this->device)->getDefaultScaleY();
	return $AffineTransform::getScaleInstance(scaleX, scaleY);
}

$AffineTransform* Win32GraphicsConfig::getNormalizingTransform() {
	$var($Win32GraphicsEnvironment, ge, $cast($Win32GraphicsEnvironment, $GraphicsEnvironment::getLocalGraphicsEnvironment()));
	double xscale = $nc(ge)->getXResolution() / 72.0;
	double yscale = ge->getYResolution() / 72.0;
	return $new($AffineTransform, xscale, 0.0, 0.0, yscale, 0.0, 0.0);
}

$String* Win32GraphicsConfig::toString() {
	$useLocalCurrentObjectStackCache();
	return ($str({$($GraphicsConfiguration::toString()), "[dev="_s, this->device, ",pixfmt="_s, $$str(this->visual), "]"_s}));
}

$Rectangle* Win32GraphicsConfig::getBounds(int32_t screen) {
	$var($Rectangle, $ret, nullptr);
	$prepareNative(Win32GraphicsConfig, getBounds, $Rectangle*, int32_t screen);
	$assign($ret, $invokeNative(Win32GraphicsConfig, getBounds, screen));
	$finishNative();
	return $ret;
}

$Rectangle* Win32GraphicsConfig::getBounds() {
	return getBounds($nc(this->device)->getScreen());
}

void Win32GraphicsConfig::displayChanged() {
	$synchronized(this) {
		$set(this, solidloops, nullptr);
	}
}

void Win32GraphicsConfig::paletteChanged() {
}

$SurfaceData* Win32GraphicsConfig::createSurfaceData($WComponentPeer* peer, int32_t numBackBuffers) {
	return $GDIWindowSurfaceData::createData(peer);
}

$Image* Win32GraphicsConfig::createAcceleratedImage($Component* target, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$var($ColorModel, model, getColorModel($Transparency::OPAQUE));
	$var($WritableRaster, wr, $nc(model)->createCompatibleWritableRaster(width, height));
	return $new($OffScreenImage, target, model, wr, model->isAlphaPremultiplied());
}

void Win32GraphicsConfig::assertOperationSupported($Component* target, int32_t numBuffers, $BufferCapabilities* caps) {
	$throwNew($AWTException, "The operation requested is not supported"_s);
}

$VolatileImage* Win32GraphicsConfig::createBackBuffer($WComponentPeer* peer) {
	$useLocalCurrentObjectStackCache();
	$var($Component, target, $cast($Component, $nc(peer)->getTarget()));
	$var($Component, var$0, target);
	int32_t var$1 = $nc(target)->getWidth();
	$init($Boolean);
	return $new($SunVolatileImage, var$0, var$1, target->getHeight(), $Boolean::TRUE);
}

void Win32GraphicsConfig::flip($WComponentPeer* peer, $Component* target, $VolatileImage* backBuffer, int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	$useLocalCurrentObjectStackCache();
	$init($BufferCapabilities$FlipContents);
	if (flipAction == $BufferCapabilities$FlipContents::COPIED || flipAction == $BufferCapabilities$FlipContents::UNDEFINED) {
		$var($Graphics, g, $nc(peer)->getGraphics());
		{
			$var($Throwable, var$0, nullptr);
			try {
				$nc(g)->drawImage(backBuffer, x1, y1, x2, y2, x1, y1, x2, y2, nullptr);
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$nc(g)->dispose();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} else {
		if (flipAction == $BufferCapabilities$FlipContents::BACKGROUND) {
			$var($Graphics, g, $nc(backBuffer)->getGraphics());
			{
				$var($Throwable, var$2, nullptr);
				try {
					$nc(g)->setColor($($nc(target)->getBackground()));
					int32_t var$3 = backBuffer->getWidth();
					g->fillRect(0, 0, var$3, backBuffer->getHeight());
				} catch ($Throwable& var$4) {
					$assign(var$2, var$4);
				} /*finally*/ {
					$nc(g)->dispose();
				}
				if (var$2 != nullptr) {
					$throw(var$2);
				}
			}
		}
	}
}

bool Win32GraphicsConfig::isTranslucencyCapable() {
	return true;
}

void clinit$Win32GraphicsConfig($Class* class$) {
	{
		Win32GraphicsConfig::initIDs();
	}
}

Win32GraphicsConfig::Win32GraphicsConfig() {
}

$Class* Win32GraphicsConfig::load$($String* name, bool initialize) {
	$loadClass(Win32GraphicsConfig, name, initialize, &_Win32GraphicsConfig_ClassInfo_, clinit$Win32GraphicsConfig, allocate$Win32GraphicsConfig);
	return class$;
}

$Class* Win32GraphicsConfig::class$ = nullptr;

	} // awt
} // sun