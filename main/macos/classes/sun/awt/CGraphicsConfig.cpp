#include <sun/awt/CGraphicsConfig.h>

#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Transparency.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/ColorModel.h>
#include <sun/awt/CGraphicsDevice.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/lwawt/macosx/CFRetainedResource.h>
#include <jcpp.h>

#undef OPAQUE

using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $Rectangle = ::java::awt::Rectangle;
using $Transparency = ::java::awt::Transparency;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $ColorModel = ::java::awt::image::ColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CGraphicsDevice = ::sun::awt::CGraphicsDevice;

namespace sun {
	namespace awt {

$FieldInfo _CGraphicsConfig_FieldInfo_[] = {
	{"device", "Lsun/awt/CGraphicsDevice;", nullptr, $PRIVATE | $FINAL, $field(CGraphicsConfig, device)},
	{"colorModel", "Ljava/awt/image/ColorModel;", nullptr, $PRIVATE, $field(CGraphicsConfig, colorModel)},
	{}
};

$MethodInfo _CGraphicsConfig_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/awt/CGraphicsDevice;)V", nullptr, $PROTECTED, $method(static_cast<void(CGraphicsConfig::*)($CGraphicsDevice*)>(&CGraphicsConfig::init$))},
	{"createSurfaceData", "(Lsun/lwawt/macosx/CFRetainedResource;)Lsun/java2d/SurfaceData;", nullptr, $PUBLIC | $ABSTRACT},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC | $FINAL},
	{"getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC},
	{"getDefaultTransform", "()Ljava/awt/geom/AffineTransform;", nullptr, $PUBLIC},
	{"getDevice", "()Lsun/awt/CGraphicsDevice;", nullptr, $PUBLIC},
	{"getNormalizingTransform", "()Ljava/awt/geom/AffineTransform;", nullptr, $PUBLIC},
	{"isTranslucencyCapable", "()Z", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CGraphicsConfig_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.awt.CGraphicsConfig",
	"java.awt.GraphicsConfiguration",
	"sun.lwawt.LWGraphicsConfig",
	_CGraphicsConfig_FieldInfo_,
	_CGraphicsConfig_MethodInfo_
};

$Object* allocate$CGraphicsConfig($Class* clazz) {
	return $of($alloc(CGraphicsConfig));
}

int32_t CGraphicsConfig::hashCode() {
	 return this->$GraphicsConfiguration::hashCode();
}

bool CGraphicsConfig::equals(Object$* arg0) {
	 return this->$GraphicsConfiguration::equals(arg0);
}

$Object* CGraphicsConfig::clone() {
	 return this->$GraphicsConfiguration::clone();
}

$String* CGraphicsConfig::toString() {
	 return this->$GraphicsConfiguration::toString();
}

void CGraphicsConfig::finalize() {
	this->$GraphicsConfiguration::finalize();
}

void CGraphicsConfig::init$($CGraphicsDevice* device) {
	$GraphicsConfiguration::init$();
	$set(this, device, device);
}

$Rectangle* CGraphicsConfig::getBounds() {
	return $nc(this->device)->getBounds();
}

$ColorModel* CGraphicsConfig::getColorModel() {
	if (this->colorModel == nullptr) {
		$set(this, colorModel, getColorModel($Transparency::OPAQUE));
	}
	return this->colorModel;
}

$AffineTransform* CGraphicsConfig::getDefaultTransform() {
	double scaleFactor = (double)$nc(this->device)->getScaleFactor();
	return $AffineTransform::getScaleInstance(scaleFactor, scaleFactor);
}

$GraphicsDevice* CGraphicsConfig::getDevice() {
	return this->device;
}

$AffineTransform* CGraphicsConfig::getNormalizingTransform() {
	double xscale = $nc(this->device)->getXResolution() / 72.0;
	double yscale = $nc(this->device)->getYResolution() / 72.0;
	return $new($AffineTransform, xscale, 0.0, 0.0, yscale, 0.0, 0.0);
}

bool CGraphicsConfig::isTranslucencyCapable() {
	return true;
}

CGraphicsConfig::CGraphicsConfig() {
}

$Class* CGraphicsConfig::load$($String* name, bool initialize) {
	$loadClass(CGraphicsConfig, name, initialize, &_CGraphicsConfig_ClassInfo_, allocate$CGraphicsConfig);
	return class$;
}

$Class* CGraphicsConfig::class$ = nullptr;

	} // awt
} // sun