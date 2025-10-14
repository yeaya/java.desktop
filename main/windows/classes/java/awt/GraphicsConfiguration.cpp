#include <java/awt/GraphicsConfiguration.h>

#include <java/awt/AWTException.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/GraphicsConfiguration$DefaultBufferCapabilities.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/ImageCapabilities.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Transparency.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Hashtable.h>
#include <sun/awt/image/SunVolatileImage.h>
#include <jcpp.h>

#undef OPAQUE

using $AWTException = ::java::awt::AWTException;
using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $GraphicsConfiguration$DefaultBufferCapabilities = ::java::awt::GraphicsConfiguration$DefaultBufferCapabilities;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $ImageCapabilities = ::java::awt::ImageCapabilities;
using $Rectangle = ::java::awt::Rectangle;
using $Transparency = ::java::awt::Transparency;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $SunVolatileImage = ::sun::awt::image::SunVolatileImage;

namespace java {
	namespace awt {

$FieldInfo _GraphicsConfiguration_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(GraphicsConfiguration, $assertionsDisabled)},
	{"defaultBufferCaps", "Ljava/awt/BufferCapabilities;", nullptr, $PRIVATE | $STATIC, $staticField(GraphicsConfiguration, defaultBufferCaps)},
	{"defaultImageCaps", "Ljava/awt/ImageCapabilities;", nullptr, $PRIVATE | $STATIC, $staticField(GraphicsConfiguration, defaultImageCaps)},
	{}
};

$MethodInfo _GraphicsConfiguration_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(GraphicsConfiguration::*)()>(&GraphicsConfiguration::init$))},
	{"createCompatibleImage", "(II)Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC},
	{"createCompatibleImage", "(III)Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC},
	{"createCompatibleVolatileImage", "(II)Ljava/awt/image/VolatileImage;", nullptr, $PUBLIC},
	{"createCompatibleVolatileImage", "(III)Ljava/awt/image/VolatileImage;", nullptr, $PUBLIC},
	{"createCompatibleVolatileImage", "(IILjava/awt/ImageCapabilities;)Ljava/awt/image/VolatileImage;", nullptr, $PUBLIC, nullptr, "java.awt.AWTException"},
	{"createCompatibleVolatileImage", "(IILjava/awt/ImageCapabilities;I)Ljava/awt/image/VolatileImage;", nullptr, $PUBLIC, nullptr, "java.awt.AWTException"},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC | $ABSTRACT},
	{"getBufferCapabilities", "()Ljava/awt/BufferCapabilities;", nullptr, $PUBLIC},
	{"getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC | $ABSTRACT},
	{"getColorModel", "(I)Ljava/awt/image/ColorModel;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDefaultTransform", "()Ljava/awt/geom/AffineTransform;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDevice", "()Ljava/awt/GraphicsDevice;", nullptr, $PUBLIC | $ABSTRACT},
	{"getImageCapabilities", "()Ljava/awt/ImageCapabilities;", nullptr, $PUBLIC},
	{"getNormalizingTransform", "()Ljava/awt/geom/AffineTransform;", nullptr, $PUBLIC | $ABSTRACT},
	{"isTranslucencyCapable", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GraphicsConfiguration_InnerClassesInfo_[] = {
	{"java.awt.GraphicsConfiguration$DefaultBufferCapabilities", "java.awt.GraphicsConfiguration", "DefaultBufferCapabilities", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _GraphicsConfiguration_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.GraphicsConfiguration",
	"java.lang.Object",
	nullptr,
	_GraphicsConfiguration_FieldInfo_,
	_GraphicsConfiguration_MethodInfo_,
	nullptr,
	nullptr,
	_GraphicsConfiguration_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.GraphicsConfiguration$DefaultBufferCapabilities"
};

$Object* allocate$GraphicsConfiguration($Class* clazz) {
	return $of($alloc(GraphicsConfiguration));
}

bool GraphicsConfiguration::$assertionsDisabled = false;
$BufferCapabilities* GraphicsConfiguration::defaultBufferCaps = nullptr;
$ImageCapabilities* GraphicsConfiguration::defaultImageCaps = nullptr;

void GraphicsConfiguration::init$() {
}

$BufferedImage* GraphicsConfiguration::createCompatibleImage(int32_t width, int32_t height) {
	$var($ColorModel, model, getColorModel());
	$var($WritableRaster, raster, $nc(model)->createCompatibleWritableRaster(width, height));
	return $new($BufferedImage, model, raster, model->isAlphaPremultiplied(), ($Hashtable*)nullptr);
}

$BufferedImage* GraphicsConfiguration::createCompatibleImage(int32_t width, int32_t height, int32_t transparency) {
	if ($nc($(getColorModel()))->getTransparency() == transparency) {
		return createCompatibleImage(width, height);
	}
	$var($ColorModel, cm, getColorModel(transparency));
	if (cm == nullptr) {
		$throwNew($IllegalArgumentException, $$str({"Unknown transparency: "_s, $$str(transparency)}));
	}
	$var($WritableRaster, wr, $nc(cm)->createCompatibleWritableRaster(width, height));
	return $new($BufferedImage, cm, wr, cm->isAlphaPremultiplied(), ($Hashtable*)nullptr);
}

$VolatileImage* GraphicsConfiguration::createCompatibleVolatileImage(int32_t width, int32_t height) {
	$var($VolatileImage, vi, nullptr);
	try {
		$assign(vi, createCompatibleVolatileImage(width, height, nullptr, $Transparency::OPAQUE));
	} catch ($AWTException&) {
		$var($AWTException, e, $catch());
		if (!GraphicsConfiguration::$assertionsDisabled) {
			$throwNew($AssertionError);
		}
	}
	return vi;
}

$VolatileImage* GraphicsConfiguration::createCompatibleVolatileImage(int32_t width, int32_t height, int32_t transparency) {
	$var($VolatileImage, vi, nullptr);
	try {
		$assign(vi, createCompatibleVolatileImage(width, height, nullptr, transparency));
	} catch ($AWTException&) {
		$var($AWTException, e, $catch());
		if (!GraphicsConfiguration::$assertionsDisabled) {
			$throwNew($AssertionError);
		}
	}
	return vi;
}

$VolatileImage* GraphicsConfiguration::createCompatibleVolatileImage(int32_t width, int32_t height, $ImageCapabilities* caps) {
	return createCompatibleVolatileImage(width, height, caps, $Transparency::OPAQUE);
}

$VolatileImage* GraphicsConfiguration::createCompatibleVolatileImage(int32_t width, int32_t height, $ImageCapabilities* caps, int32_t transparency) {
	$var($VolatileImage, vi, $new($SunVolatileImage, this, width, height, transparency, caps));
	bool var$0 = caps != nullptr && caps->isAccelerated();
	if (var$0 && !$nc($(vi->getCapabilities()))->isAccelerated()) {
		$throwNew($AWTException, "Supplied image capabilities could not be met by this graphics configuration."_s);
	}
	return vi;
}

$BufferCapabilities* GraphicsConfiguration::getBufferCapabilities() {
	if (GraphicsConfiguration::defaultBufferCaps == nullptr) {
		$assignStatic(GraphicsConfiguration::defaultBufferCaps, $new($GraphicsConfiguration$DefaultBufferCapabilities, $(getImageCapabilities())));
	}
	return GraphicsConfiguration::defaultBufferCaps;
}

$ImageCapabilities* GraphicsConfiguration::getImageCapabilities() {
	if (GraphicsConfiguration::defaultImageCaps == nullptr) {
		$assignStatic(GraphicsConfiguration::defaultImageCaps, $new($ImageCapabilities, false));
	}
	return GraphicsConfiguration::defaultImageCaps;
}

bool GraphicsConfiguration::isTranslucencyCapable() {
	return false;
}

void clinit$GraphicsConfiguration($Class* class$) {
	GraphicsConfiguration::$assertionsDisabled = !GraphicsConfiguration::class$->desiredAssertionStatus();
}

GraphicsConfiguration::GraphicsConfiguration() {
}

$Class* GraphicsConfiguration::load$($String* name, bool initialize) {
	$loadClass(GraphicsConfiguration, name, initialize, &_GraphicsConfiguration_ClassInfo_, clinit$GraphicsConfiguration, allocate$GraphicsConfiguration);
	return class$;
}

$Class* GraphicsConfiguration::class$ = nullptr;

	} // awt
} // java