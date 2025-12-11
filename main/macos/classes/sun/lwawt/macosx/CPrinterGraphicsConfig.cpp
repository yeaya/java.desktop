#include <sun/lwawt/macosx/CPrinterGraphicsConfig.h>

#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Transparency.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/print/PageFormat.h>
#include <sun/lwawt/macosx/CPrinterDevice.h>
#include <jcpp.h>

#undef OPAQUE

using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $Rectangle = ::java::awt::Rectangle;
using $Transparency = ::java::awt::Transparency;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $PageFormat = ::java::awt::print::PageFormat;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CPrinterDevice = ::sun::lwawt::macosx::CPrinterDevice;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CPrinterGraphicsConfig_FieldInfo_[] = {
	{"device", "Ljava/awt/GraphicsDevice;", nullptr, $PRIVATE | $FINAL, $field(CPrinterGraphicsConfig, device)},
	{"pf", "Ljava/awt/print/PageFormat;", nullptr, $PRIVATE | $FINAL, $field(CPrinterGraphicsConfig, pf)},
	{}
};

$MethodInfo _CPrinterGraphicsConfig_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/print/PageFormat;)V", nullptr, $PUBLIC, $method(static_cast<void(CPrinterGraphicsConfig::*)($PageFormat*)>(&CPrinterGraphicsConfig::init$))},
	{"createCompatibleImage", "(II)Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC},
	{"createCompatibleImage", "(III)Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC},
	{"createCompatibleVolatileImage", "(II)Ljava/awt/image/VolatileImage;", nullptr, $PUBLIC},
	{"createCompatibleVolatileImage", "(III)Ljava/awt/image/VolatileImage;", nullptr, $PUBLIC},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC},
	{"getColorModel", "(I)Ljava/awt/image/ColorModel;", nullptr, $PUBLIC},
	{"getConfig", "(Ljava/awt/print/PageFormat;)Lsun/lwawt/macosx/CPrinterGraphicsConfig;", nullptr, $PUBLIC | $STATIC, $method(static_cast<CPrinterGraphicsConfig*(*)($PageFormat*)>(&CPrinterGraphicsConfig::getConfig))},
	{"getDefaultTransform", "()Ljava/awt/geom/AffineTransform;", nullptr, $PUBLIC},
	{"getDevice", "()Ljava/awt/GraphicsDevice;", nullptr, $PUBLIC},
	{"getNormalizingTransform", "()Ljava/awt/geom/AffineTransform;", nullptr, $PUBLIC},
	{"getPageFormat", "()Ljava/awt/print/PageFormat;", nullptr, $PUBLIC, $method(static_cast<$PageFormat*(CPrinterGraphicsConfig::*)()>(&CPrinterGraphicsConfig::getPageFormat))},
	{}
};

$ClassInfo _CPrinterGraphicsConfig_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.lwawt.macosx.CPrinterGraphicsConfig",
	"java.awt.GraphicsConfiguration",
	nullptr,
	_CPrinterGraphicsConfig_FieldInfo_,
	_CPrinterGraphicsConfig_MethodInfo_
};

$Object* allocate$CPrinterGraphicsConfig($Class* clazz) {
	return $of($alloc(CPrinterGraphicsConfig));
}

CPrinterGraphicsConfig* CPrinterGraphicsConfig::getConfig($PageFormat* pf) {
	$init(CPrinterGraphicsConfig);
	return $new(CPrinterGraphicsConfig, pf);
}

void CPrinterGraphicsConfig::init$($PageFormat* pf) {
	$GraphicsConfiguration::init$();
	$set(this, device, $new($CPrinterDevice, this));
	$set(this, pf, pf);
}

$PageFormat* CPrinterGraphicsConfig::getPageFormat() {
	return this->pf;
}

$GraphicsDevice* CPrinterGraphicsConfig::getDevice() {
	return this->device;
}

$BufferedImage* CPrinterGraphicsConfig::createCompatibleImage(int32_t width, int32_t height) {
	return createCompatibleImage(width, height, $Transparency::OPAQUE);
}

$VolatileImage* CPrinterGraphicsConfig::createCompatibleVolatileImage(int32_t width, int32_t height) {
	return createCompatibleVolatileImage(width, height, $Transparency::OPAQUE);
}

$VolatileImage* CPrinterGraphicsConfig::createCompatibleVolatileImage(int32_t width, int32_t height, int32_t transparency) {
	return nullptr;
}

$BufferedImage* CPrinterGraphicsConfig::createCompatibleImage(int32_t width, int32_t height, int32_t transparency) {
	return nullptr;
}

$ColorModel* CPrinterGraphicsConfig::getColorModel() {
	return getColorModel($Transparency::OPAQUE);
}

$ColorModel* CPrinterGraphicsConfig::getColorModel(int32_t transparency) {
	return $ColorModel::getRGBdefault();
}

$AffineTransform* CPrinterGraphicsConfig::getDefaultTransform() {
	return $new($AffineTransform);
}

$AffineTransform* CPrinterGraphicsConfig::getNormalizingTransform() {
	return $new($AffineTransform);
}

$Rectangle* CPrinterGraphicsConfig::getBounds() {
	int32_t var$0 = $cast(int32_t, $nc(this->pf)->getWidth());
	return $new($Rectangle, 0, 0, var$0, $cast(int32_t, $nc(this->pf)->getHeight()));
}

CPrinterGraphicsConfig::CPrinterGraphicsConfig() {
}

$Class* CPrinterGraphicsConfig::load$($String* name, bool initialize) {
	$loadClass(CPrinterGraphicsConfig, name, initialize, &_CPrinterGraphicsConfig_ClassInfo_, allocate$CPrinterGraphicsConfig);
	return class$;
}

$Class* CPrinterGraphicsConfig::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun