#include <sun/print/PrinterGraphicsConfig.h>

#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Transparency.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/DirectColorModel.h>
#include <java/awt/image/PackedColorModel.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/print/PrinterGraphicsDevice.h>
#include <jcpp.h>

#undef BITMASK
#undef OPAQUE
#undef TRANSLUCENT
#undef TYPE_3BYTE_BGR

using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $Rectangle = ::java::awt::Rectangle;
using $Transparency = ::java::awt::Transparency;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $DirectColorModel = ::java::awt::image::DirectColorModel;
using $PackedColorModel = ::java::awt::image::PackedColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrinterGraphicsDevice = ::sun::print::PrinterGraphicsDevice;

namespace sun {
	namespace print {

$FieldInfo _PrinterGraphicsConfig_FieldInfo_[] = {
	{"theModel", "Ljava/awt/image/ColorModel;", nullptr, $STATIC, $staticField(PrinterGraphicsConfig, theModel)},
	{"device", "Ljava/awt/GraphicsDevice;", nullptr, $PRIVATE | $FINAL, $field(PrinterGraphicsConfig, device)},
	{"pageWidth", "I", nullptr, $PRIVATE | $FINAL, $field(PrinterGraphicsConfig, pageWidth)},
	{"pageHeight", "I", nullptr, $PRIVATE | $FINAL, $field(PrinterGraphicsConfig, pageHeight)},
	{"deviceTransform", "Ljava/awt/geom/AffineTransform;", nullptr, $PRIVATE | $FINAL, $field(PrinterGraphicsConfig, deviceTransform)},
	{}
};

$MethodInfo _PrinterGraphicsConfig_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/awt/geom/AffineTransform;II)V", nullptr, $PUBLIC, $method(static_cast<void(PrinterGraphicsConfig::*)($String*,$AffineTransform*,int32_t,int32_t)>(&PrinterGraphicsConfig::init$))},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC},
	{"getColorModel", "(I)Ljava/awt/image/ColorModel;", nullptr, $PUBLIC},
	{"getDefaultTransform", "()Ljava/awt/geom/AffineTransform;", nullptr, $PUBLIC},
	{"getDevice", "()Ljava/awt/GraphicsDevice;", nullptr, $PUBLIC},
	{"getNormalizingTransform", "()Ljava/awt/geom/AffineTransform;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PrinterGraphicsConfig_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.print.PrinterGraphicsConfig",
	"java.awt.GraphicsConfiguration",
	nullptr,
	_PrinterGraphicsConfig_FieldInfo_,
	_PrinterGraphicsConfig_MethodInfo_
};

$Object* allocate$PrinterGraphicsConfig($Class* clazz) {
	return $of($alloc(PrinterGraphicsConfig));
}

$ColorModel* PrinterGraphicsConfig::theModel = nullptr;

void PrinterGraphicsConfig::init$($String* printerID, $AffineTransform* deviceTx, int32_t pageWid, int32_t pageHgt) {
	$GraphicsConfiguration::init$();
	this->pageWidth = pageWid;
	this->pageHeight = pageHgt;
	$set(this, deviceTransform, deviceTx);
	$set(this, device, $new($PrinterGraphicsDevice, this, printerID));
}

$GraphicsDevice* PrinterGraphicsConfig::getDevice() {
	return this->device;
}

$ColorModel* PrinterGraphicsConfig::getColorModel() {
	if (PrinterGraphicsConfig::theModel == nullptr) {
		$var($BufferedImage, bufImg, $new($BufferedImage, 1, 1, $BufferedImage::TYPE_3BYTE_BGR));
		$assignStatic(PrinterGraphicsConfig::theModel, bufImg->getColorModel());
	}
	return PrinterGraphicsConfig::theModel;
}

$ColorModel* PrinterGraphicsConfig::getColorModel(int32_t transparency) {
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

$AffineTransform* PrinterGraphicsConfig::getDefaultTransform() {
	return $new($AffineTransform, this->deviceTransform);
}

$AffineTransform* PrinterGraphicsConfig::getNormalizingTransform() {
	return $new($AffineTransform);
}

$Rectangle* PrinterGraphicsConfig::getBounds() {
	return $new($Rectangle, 0, 0, this->pageWidth, this->pageHeight);
}

PrinterGraphicsConfig::PrinterGraphicsConfig() {
}

$Class* PrinterGraphicsConfig::load$($String* name, bool initialize) {
	$loadClass(PrinterGraphicsConfig, name, initialize, &_PrinterGraphicsConfig_ClassInfo_, allocate$PrinterGraphicsConfig);
	return class$;
}

$Class* PrinterGraphicsConfig::class$ = nullptr;

	} // print
} // sun