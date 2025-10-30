#include <sun/awt/image/BufferedImageGraphicsConfig.h>

#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Transparency.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/DirectColorModel.h>
#include <java/awt/image/PackedColorModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/WritableRaster.h>
#include <java/util/Hashtable.h>
#include <sun/awt/image/BufferedImageDevice.h>
#include <jcpp.h>

#undef BITMASK
#undef MAX_VALUE
#undef OPAQUE
#undef TRANSLUCENT

using $BufferedImageGraphicsConfigArray = $Array<::sun::awt::image::BufferedImageGraphicsConfig>;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $Rectangle = ::java::awt::Rectangle;
using $Transparency = ::java::awt::Transparency;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $DirectColorModel = ::java::awt::image::DirectColorModel;
using $PackedColorModel = ::java::awt::image::PackedColorModel;
using $Raster = ::java::awt::image::Raster;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $BufferedImageDevice = ::sun::awt::image::BufferedImageDevice;

namespace sun {
	namespace awt {
		namespace image {

$FieldInfo _BufferedImageGraphicsConfig_FieldInfo_[] = {
	{"numconfigs", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BufferedImageGraphicsConfig, numconfigs)},
	{"standardConfigs", "[Lsun/awt/image/BufferedImageGraphicsConfig;", nullptr, $PRIVATE | $STATIC, $staticField(BufferedImageGraphicsConfig, standardConfigs)},
	{"scaledConfigs", "[Lsun/awt/image/BufferedImageGraphicsConfig;", nullptr, $PRIVATE | $STATIC, $staticField(BufferedImageGraphicsConfig, scaledConfigs)},
	{"device", "Ljava/awt/GraphicsDevice;", nullptr, $PRIVATE | $FINAL, $field(BufferedImageGraphicsConfig, device)},
	{"model", "Ljava/awt/image/ColorModel;", nullptr, $PRIVATE | $FINAL, $field(BufferedImageGraphicsConfig, model)},
	{"raster", "Ljava/awt/image/Raster;", nullptr, $PRIVATE | $FINAL, $field(BufferedImageGraphicsConfig, raster)},
	{"scaleX", "D", nullptr, $PRIVATE | $FINAL, $field(BufferedImageGraphicsConfig, scaleX)},
	{"scaleY", "D", nullptr, $PRIVATE | $FINAL, $field(BufferedImageGraphicsConfig, scaleY)},
	{}
};

$MethodInfo _BufferedImageGraphicsConfig_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/image/BufferedImage;Ljava/awt/Component;DD)V", nullptr, $PUBLIC, $method(static_cast<void(BufferedImageGraphicsConfig::*)($BufferedImage*,$Component*,double,double)>(&BufferedImageGraphicsConfig::init$))},
	{"createCompatibleImage", "(II)Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC},
	{"getColorModel", "(I)Ljava/awt/image/ColorModel;", nullptr, $PUBLIC},
	{"getConfig", "(Ljava/awt/image/BufferedImage;)Lsun/awt/image/BufferedImageGraphicsConfig;", nullptr, $PUBLIC | $STATIC, $method(static_cast<BufferedImageGraphicsConfig*(*)($BufferedImage*)>(&BufferedImageGraphicsConfig::getConfig))},
	{"getConfig", "(Ljava/awt/image/BufferedImage;DD)Lsun/awt/image/BufferedImageGraphicsConfig;", nullptr, $PUBLIC | $STATIC, $method(static_cast<BufferedImageGraphicsConfig*(*)($BufferedImage*,double,double)>(&BufferedImageGraphicsConfig::getConfig))},
	{"getDefaultTransform", "()Ljava/awt/geom/AffineTransform;", nullptr, $PUBLIC},
	{"getDevice", "()Ljava/awt/GraphicsDevice;", nullptr, $PUBLIC},
	{"getNormalizingTransform", "()Ljava/awt/geom/AffineTransform;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _BufferedImageGraphicsConfig_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.image.BufferedImageGraphicsConfig",
	"java.awt.GraphicsConfiguration",
	nullptr,
	_BufferedImageGraphicsConfig_FieldInfo_,
	_BufferedImageGraphicsConfig_MethodInfo_
};

$Object* allocate$BufferedImageGraphicsConfig($Class* clazz) {
	return $of($alloc(BufferedImageGraphicsConfig));
}

$BufferedImageGraphicsConfigArray* BufferedImageGraphicsConfig::standardConfigs = nullptr;
$BufferedImageGraphicsConfigArray* BufferedImageGraphicsConfig::scaledConfigs = nullptr;

BufferedImageGraphicsConfig* BufferedImageGraphicsConfig::getConfig($BufferedImage* bImg) {
	$init(BufferedImageGraphicsConfig);
	return getConfig(bImg, (double)1, (double)1);
}

BufferedImageGraphicsConfig* BufferedImageGraphicsConfig::getConfig($BufferedImage* bImg, double scaleX, double scaleY) {
	$init(BufferedImageGraphicsConfig);
	$useLocalCurrentObjectStackCache();
	$var(BufferedImageGraphicsConfig, ret, nullptr);
	int32_t type = $nc(bImg)->getType();
	$var($BufferedImageGraphicsConfigArray, configs, (scaleX == 1 && scaleY == 1) ? BufferedImageGraphicsConfig::standardConfigs : BufferedImageGraphicsConfig::scaledConfigs);
	if (type > 0 && type < BufferedImageGraphicsConfig::numconfigs) {
		$assign(ret, $nc(configs)->get(type));
		if (ret != nullptr && ret->scaleX == scaleX && ret->scaleY == scaleY) {
			return ret;
		}
	}
	$assign(ret, $new(BufferedImageGraphicsConfig, bImg, nullptr, scaleX, scaleY));
	if (type > 0 && type < BufferedImageGraphicsConfig::numconfigs) {
		$nc(configs)->set(type, ret);
	}
	return ret;
}

void BufferedImageGraphicsConfig::init$($BufferedImage* bufImg, $Component* comp, double scaleX, double scaleY) {
	$useLocalCurrentObjectStackCache();
	$GraphicsConfiguration::init$();
	if (comp == nullptr) {
		$set(this, device, $new($BufferedImageDevice, this));
	} else {
		$var($Graphics2D, g2d, $cast($Graphics2D, $nc(comp)->getGraphics()));
		$set(this, device, $nc($($nc(g2d)->getDeviceConfiguration()))->getDevice());
	}
	$set(this, model, $nc(bufImg)->getColorModel());
	$set(this, raster, $nc($(bufImg->getRaster()))->createCompatibleWritableRaster(1, 1));
	this->scaleX = scaleX;
	this->scaleY = scaleY;
}

$GraphicsDevice* BufferedImageGraphicsConfig::getDevice() {
	return this->device;
}

$BufferedImage* BufferedImageGraphicsConfig::createCompatibleImage(int32_t width, int32_t height) {
	$var($WritableRaster, wr, $nc(this->raster)->createCompatibleWritableRaster(width, height));
	return $new($BufferedImage, this->model, wr, $nc(this->model)->isAlphaPremultiplied(), ($Hashtable*)nullptr);
}

$ColorModel* BufferedImageGraphicsConfig::getColorModel() {
	return this->model;
}

$ColorModel* BufferedImageGraphicsConfig::getColorModel(int32_t transparency) {
	if ($nc(this->model)->getTransparency() == transparency) {
		return this->model;
	}
	switch (transparency) {
	case $Transparency::OPAQUE:
		{
			return $new($DirectColorModel, 24, 0x00FF0000, 0x0000FF00, 255);
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

$AffineTransform* BufferedImageGraphicsConfig::getDefaultTransform() {
	return $AffineTransform::getScaleInstance(this->scaleX, this->scaleY);
}

$AffineTransform* BufferedImageGraphicsConfig::getNormalizingTransform() {
	return $new($AffineTransform);
}

$Rectangle* BufferedImageGraphicsConfig::getBounds() {
	return $new($Rectangle, 0, 0, $Integer::MAX_VALUE, $Integer::MAX_VALUE);
}

void clinit$BufferedImageGraphicsConfig($Class* class$) {
	$assignStatic(BufferedImageGraphicsConfig::standardConfigs, $new($BufferedImageGraphicsConfigArray, BufferedImageGraphicsConfig::numconfigs));
	$assignStatic(BufferedImageGraphicsConfig::scaledConfigs, $new($BufferedImageGraphicsConfigArray, BufferedImageGraphicsConfig::numconfigs));
}

BufferedImageGraphicsConfig::BufferedImageGraphicsConfig() {
}

$Class* BufferedImageGraphicsConfig::load$($String* name, bool initialize) {
	$loadClass(BufferedImageGraphicsConfig, name, initialize, &_BufferedImageGraphicsConfig_ClassInfo_, clinit$BufferedImageGraphicsConfig, allocate$BufferedImageGraphicsConfig);
	return class$;
}

$Class* BufferedImageGraphicsConfig::class$ = nullptr;

		} // image
	} // awt
} // sun