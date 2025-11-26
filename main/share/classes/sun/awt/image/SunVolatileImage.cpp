#include <sun/awt/image/SunVolatileImage.h>

#include <java/awt/AlphaComposite.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Composite.h>
#include <java/awt/Font.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/ImageCapabilities.h>
#include <java/awt/Transparency.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/VolatileImage.h>
#include <sun/awt/image/BufImgVolatileSurfaceManager.h>
#include <sun/awt/image/BufferedImageGraphicsConfig.h>
#include <sun/awt/image/SurfaceManager.h>
#include <sun/awt/image/VolatileSurfaceManager.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/Surface.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/SurfaceManagerFactory.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/print/PrinterGraphicsConfig.h>
#include <jcpp.h>

#undef BITMASK
#undef OPAQUE
#undef PLAIN
#undef TRANSLUCENT

using $AlphaComposite = ::java::awt::AlphaComposite;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Composite = ::java::awt::Composite;
using $Font = ::java::awt::Font;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $ImageCapabilities = ::java::awt::ImageCapabilities;
using $Transparency = ::java::awt::Transparency;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $BufImgVolatileSurfaceManager = ::sun::awt::image::BufImgVolatileSurfaceManager;
using $BufferedImageGraphicsConfig = ::sun::awt::image::BufferedImageGraphicsConfig;
using $SurfaceManager = ::sun::awt::image::SurfaceManager;
using $VolatileSurfaceManager = ::sun::awt::image::VolatileSurfaceManager;
using $DestSurfaceProvider = ::sun::java2d::DestSurfaceProvider;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $Surface = ::sun::java2d::Surface;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $SurfaceManagerFactory = ::sun::java2d::SurfaceManagerFactory;
using $Region = ::sun::java2d::pipe::Region;
using $PrinterGraphicsConfig = ::sun::print::PrinterGraphicsConfig;

namespace sun {
	namespace awt {
		namespace image {

$FieldInfo _SunVolatileImage_FieldInfo_[] = {
	{"volSurfaceManager", "Lsun/awt/image/VolatileSurfaceManager;", nullptr, $PROTECTED, $field(SunVolatileImage, volSurfaceManager)},
	{"comp", "Ljava/awt/Component;", nullptr, $PROTECTED, $field(SunVolatileImage, comp)},
	{"graphicsConfig", "Ljava/awt/GraphicsConfiguration;", nullptr, $PRIVATE, $field(SunVolatileImage, graphicsConfig)},
	{"defaultFont", "Ljava/awt/Font;", nullptr, $PRIVATE, $field(SunVolatileImage, defaultFont)},
	{"width", "I", nullptr, $PRIVATE, $field(SunVolatileImage, width)},
	{"height", "I", nullptr, $PRIVATE, $field(SunVolatileImage, height)},
	{"forcedAccelSurfaceType", "I", nullptr, $PRIVATE, $field(SunVolatileImage, forcedAccelSurfaceType)},
	{}
};

$MethodInfo _SunVolatileImage_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Component;Ljava/awt/GraphicsConfiguration;IILjava/lang/Object;ILjava/awt/ImageCapabilities;I)V", nullptr, $PROTECTED, $method(static_cast<void(SunVolatileImage::*)($Component*,$GraphicsConfiguration*,int32_t,int32_t,Object$*,int32_t,$ImageCapabilities*,int32_t)>(&SunVolatileImage::init$))},
	{"<init>", "(Ljava/awt/Component;Ljava/awt/GraphicsConfiguration;IILjava/lang/Object;Ljava/awt/ImageCapabilities;)V", nullptr, $PRIVATE, $method(static_cast<void(SunVolatileImage::*)($Component*,$GraphicsConfiguration*,int32_t,int32_t,Object$*,$ImageCapabilities*)>(&SunVolatileImage::init$))},
	{"<init>", "(Ljava/awt/Component;II)V", nullptr, $PUBLIC, $method(static_cast<void(SunVolatileImage::*)($Component*,int32_t,int32_t)>(&SunVolatileImage::init$))},
	{"<init>", "(Ljava/awt/Component;IILjava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(SunVolatileImage::*)($Component*,int32_t,int32_t,Object$*)>(&SunVolatileImage::init$))},
	{"<init>", "(Ljava/awt/GraphicsConfiguration;IIILjava/awt/ImageCapabilities;)V", nullptr, $PUBLIC, $method(static_cast<void(SunVolatileImage::*)($GraphicsConfiguration*,int32_t,int32_t,int32_t,$ImageCapabilities*)>(&SunVolatileImage::init$))},
	{"contentsLost", "()Z", nullptr, $PUBLIC},
	{"createGraphics", "()Ljava/awt/Graphics2D;", nullptr, $PUBLIC},
	{"createSurfaceManager", "(Ljava/lang/Object;Ljava/awt/ImageCapabilities;)Lsun/awt/image/VolatileSurfaceManager;", nullptr, $PROTECTED},
	{"getBackground", "()Ljava/awt/Color;", nullptr, $PRIVATE, $method(static_cast<$Color*(SunVolatileImage::*)()>(&SunVolatileImage::getBackground))},
	{"getBackupImage", "()Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC},
	{"getBackupImage", "(DD)Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC},
	{"getCapabilities", "()Ljava/awt/ImageCapabilities;", nullptr, $PUBLIC},
	{"getComponent", "()Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getDestSurface", "()Lsun/java2d/Surface;", nullptr, $PUBLIC},
	{"getFont", "()Ljava/awt/Font;", nullptr, $PRIVATE, $method(static_cast<$Font*(SunVolatileImage::*)()>(&SunVolatileImage::getFont))},
	{"getForcedAccelSurfaceType", "()I", nullptr, $PUBLIC},
	{"getForeground", "()Ljava/awt/Color;", nullptr, $PRIVATE, $method(static_cast<$Color*(SunVolatileImage::*)()>(&SunVolatileImage::getForeground))},
	{"getGraphicsConfig", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC},
	{"getHeight", "()I", nullptr, $PUBLIC},
	{"getHeight", "(Ljava/awt/image/ImageObserver;)I", nullptr, $PUBLIC},
	{"getProperty", "(Ljava/lang/String;Ljava/awt/image/ImageObserver;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getSnapshot", "()Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC},
	{"getWidth", "()I", nullptr, $PUBLIC},
	{"getWidth", "(Ljava/awt/image/ImageObserver;)I", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateGraphicsConfig", "()V", nullptr, $PUBLIC},
	{"validate", "(Ljava/awt/GraphicsConfiguration;)I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SunVolatileImage_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.image.SunVolatileImage",
	"java.awt.image.VolatileImage",
	"sun.java2d.DestSurfaceProvider",
	_SunVolatileImage_FieldInfo_,
	_SunVolatileImage_MethodInfo_
};

$Object* allocate$SunVolatileImage($Class* clazz) {
	return $of($alloc(SunVolatileImage));
}

int32_t SunVolatileImage::hashCode() {
	 return this->$VolatileImage::hashCode();
}

bool SunVolatileImage::equals(Object$* arg0) {
	 return this->$VolatileImage::equals(arg0);
}

$Object* SunVolatileImage::clone() {
	 return this->$VolatileImage::clone();
}

$String* SunVolatileImage::toString() {
	 return this->$VolatileImage::toString();
}

void SunVolatileImage::finalize() {
	this->$VolatileImage::finalize();
}

void SunVolatileImage::init$($Component* comp, $GraphicsConfiguration* graphicsConfig, int32_t width, int32_t height, Object$* context, int32_t transparency, $ImageCapabilities* caps, int32_t accType) {
	$useLocalCurrentObjectStackCache();
	$VolatileImage::init$();
	$set(this, comp, comp);
	$set(this, graphicsConfig, graphicsConfig);
	if (width <= 0 || height <= 0) {
		$throwNew($IllegalArgumentException, $$str({"Width ("_s, $$str(width), ") and height ("_s, $$str(height), ") cannot be <= 0"_s}));
	}
	this->width = width;
	this->height = height;
	this->forcedAccelSurfaceType = accType;
	if (!(transparency == $Transparency::OPAQUE || transparency == $Transparency::BITMASK || transparency == $Transparency::TRANSLUCENT)) {
		$throwNew($IllegalArgumentException, $$str({"Unknown transparency type:"_s, $$str(transparency)}));
	}
	this->transparency = transparency;
	$set(this, volSurfaceManager, createSurfaceManager(context, caps));
	$SurfaceManager::setManager(this, this->volSurfaceManager);
	$nc(this->volSurfaceManager)->initialize();
	$nc(this->volSurfaceManager)->initContents();
}

void SunVolatileImage::init$($Component* comp, $GraphicsConfiguration* graphicsConfig, int32_t width, int32_t height, Object$* context, $ImageCapabilities* caps) {
	SunVolatileImage::init$(comp, graphicsConfig, width, height, context, $Transparency::OPAQUE, caps, 0);
}

void SunVolatileImage::init$($Component* comp, int32_t width, int32_t height) {
	SunVolatileImage::init$(comp, width, height, nullptr);
}

void SunVolatileImage::init$($Component* comp, int32_t width, int32_t height, Object$* context) {
	SunVolatileImage::init$(comp, $($nc(comp)->getGraphicsConfiguration()), width, height, context, nullptr);
}

void SunVolatileImage::init$($GraphicsConfiguration* graphicsConfig, int32_t width, int32_t height, int32_t transparency, $ImageCapabilities* caps) {
	SunVolatileImage::init$(nullptr, graphicsConfig, width, height, nullptr, transparency, caps, 0);
}

int32_t SunVolatileImage::getWidth() {
	return this->width;
}

int32_t SunVolatileImage::getHeight() {
	return this->height;
}

$GraphicsConfiguration* SunVolatileImage::getGraphicsConfig() {
	return this->graphicsConfig;
}

void SunVolatileImage::updateGraphicsConfig() {
	if (this->comp != nullptr) {
		$var($GraphicsConfiguration, gc, $nc(this->comp)->getGraphicsConfiguration());
		if (gc != nullptr) {
			$set(this, graphicsConfig, gc);
		}
	}
}

$Component* SunVolatileImage::getComponent() {
	return this->comp;
}

int32_t SunVolatileImage::getForcedAccelSurfaceType() {
	return this->forcedAccelSurfaceType;
}

$VolatileSurfaceManager* SunVolatileImage::createSurfaceManager(Object$* context, $ImageCapabilities* caps) {
	if ($instanceOf($BufferedImageGraphicsConfig, this->graphicsConfig) || $instanceOf($PrinterGraphicsConfig, this->graphicsConfig) || (caps != nullptr && !caps->isAccelerated())) {
		return $new($BufImgVolatileSurfaceManager, this, context);
	}
	$var($SurfaceManagerFactory, smf, $SurfaceManagerFactory::getInstance());
	return $nc(smf)->createVolatileManager(this, context);
}

$Color* SunVolatileImage::getForeground() {
	if (this->comp != nullptr) {
		return $nc(this->comp)->getForeground();
	} else {
		$init($Color);
		return $Color::black;
	}
}

$Color* SunVolatileImage::getBackground() {
	if (this->comp != nullptr) {
		return $nc(this->comp)->getBackground();
	} else {
		$init($Color);
		return $Color::white;
	}
}

$Font* SunVolatileImage::getFont() {
	if (this->comp != nullptr) {
		return $nc(this->comp)->getFont();
	} else {
		if (this->defaultFont == nullptr) {
			$set(this, defaultFont, $new($Font, "Dialog"_s, $Font::PLAIN, 12));
		}
		return this->defaultFont;
	}
}

$Graphics2D* SunVolatileImage::createGraphics() {
	$useLocalCurrentObjectStackCache();
	$var($SurfaceData, var$0, $nc(this->volSurfaceManager)->getPrimarySurfaceData());
	$var($Color, var$1, getForeground());
	$var($Color, var$2, getBackground());
	return $new($SunGraphics2D, var$0, var$1, var$2, $(getFont()));
}

$Object* SunVolatileImage::getProperty($String* name, $ImageObserver* observer) {
	if (name == nullptr) {
		$throwNew($NullPointerException, "null property name is not allowed"_s);
	}
	$init($Image);
	return $of($Image::UndefinedProperty);
}

int32_t SunVolatileImage::getWidth($ImageObserver* observer) {
	return getWidth();
}

int32_t SunVolatileImage::getHeight($ImageObserver* observer) {
	return getHeight();
}

$BufferedImage* SunVolatileImage::getBackupImage() {
	return getBackupImage((double)1, (double)1);
}

$BufferedImage* SunVolatileImage::getBackupImage(double scaleX, double scaleY) {
	int32_t w = $Region::clipRound(getWidth() * scaleX);
	int32_t h = $Region::clipRound(getHeight() * scaleY);
	return $nc(this->graphicsConfig)->createCompatibleImage(w, h, getTransparency());
}

$BufferedImage* SunVolatileImage::getSnapshot() {
	$useLocalCurrentObjectStackCache();
	$var($BufferedImage, bi, getBackupImage());
	$var($Graphics2D, g, $nc(bi)->createGraphics());
	$init($AlphaComposite);
	$nc(g)->setComposite($AlphaComposite::Src);
	g->drawImage(this, 0, 0, nullptr);
	g->dispose();
	return bi;
}

int32_t SunVolatileImage::validate($GraphicsConfiguration* gc) {
	return $nc(this->volSurfaceManager)->validate(gc);
}

bool SunVolatileImage::contentsLost() {
	return $nc(this->volSurfaceManager)->contentsLost();
}

$ImageCapabilities* SunVolatileImage::getCapabilities() {
	return $nc(this->volSurfaceManager)->getCapabilities(this->graphicsConfig);
}

$Surface* SunVolatileImage::getDestSurface() {
	return $nc(this->volSurfaceManager)->getPrimarySurfaceData();
}

SunVolatileImage::SunVolatileImage() {
}

$Class* SunVolatileImage::load$($String* name, bool initialize) {
	$loadClass(SunVolatileImage, name, initialize, &_SunVolatileImage_ClassInfo_, allocate$SunVolatileImage);
	return class$;
}

$Class* SunVolatileImage::class$ = nullptr;

		} // image
	} // awt
} // sun