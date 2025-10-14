#include <java/awt/Image.h>

#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image$1.h>
#include <java/awt/ImageCapabilities.h>
#include <java/awt/Toolkit.h>
#include <java/awt/image/AreaAveragingScaleFilter.h>
#include <java/awt/image/FilteredImageSource.h>
#include <java/awt/image/ImageFilter.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/ImageProducer.h>
#include <java/awt/image/ReplicateScaleFilter.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/image/SurfaceManager$ImageAccessor.h>
#include <sun/awt/image/SurfaceManager.h>
#include <jcpp.h>

#undef SCALE_AREA_AVERAGING
#undef SCALE_DEFAULT
#undef SCALE_FAST
#undef SCALE_REPLICATE
#undef SCALE_SMOOTH

using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image$1 = ::java::awt::Image$1;
using $ImageCapabilities = ::java::awt::ImageCapabilities;
using $Toolkit = ::java::awt::Toolkit;
using $AreaAveragingScaleFilter = ::java::awt::image::AreaAveragingScaleFilter;
using $FilteredImageSource = ::java::awt::image::FilteredImageSource;
using $ImageFilter = ::java::awt::image::ImageFilter;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ImageProducer = ::java::awt::image::ImageProducer;
using $ReplicateScaleFilter = ::java::awt::image::ReplicateScaleFilter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SurfaceManager = ::sun::awt::image::SurfaceManager;
using $SurfaceManager$ImageAccessor = ::sun::awt::image::SurfaceManager$ImageAccessor;

namespace java {
	namespace awt {

$FieldInfo _Image_FieldInfo_[] = {
	{"defaultImageCaps", "Ljava/awt/ImageCapabilities;", nullptr, $PRIVATE | $STATIC, $staticField(Image, defaultImageCaps)},
	{"accelerationPriority", "F", nullptr, $PROTECTED, $field(Image, accelerationPriority)},
	{"UndefinedProperty", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Image, UndefinedProperty)},
	{"SCALE_DEFAULT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Image, SCALE_DEFAULT)},
	{"SCALE_FAST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Image, SCALE_FAST)},
	{"SCALE_SMOOTH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Image, SCALE_SMOOTH)},
	{"SCALE_REPLICATE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Image, SCALE_REPLICATE)},
	{"SCALE_AREA_AVERAGING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Image, SCALE_AREA_AVERAGING)},
	{"surfaceManager", "Lsun/awt/image/SurfaceManager;", nullptr, 0, $field(Image, surfaceManager)},
	{}
};

$MethodInfo _Image_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(Image::*)()>(&Image::init$))},
	{"flush", "()V", nullptr, $PUBLIC},
	{"getAccelerationPriority", "()F", nullptr, $PUBLIC},
	{"getCapabilities", "(Ljava/awt/GraphicsConfiguration;)Ljava/awt/ImageCapabilities;", nullptr, $PUBLIC},
	{"getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC | $ABSTRACT},
	{"getHeight", "(Ljava/awt/image/ImageObserver;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getProperty", "(Ljava/lang/String;Ljava/awt/image/ImageObserver;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"getScaledInstance", "(III)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"getSource", "()Ljava/awt/image/ImageProducer;", nullptr, $PUBLIC | $ABSTRACT},
	{"getWidth", "(Ljava/awt/image/ImageObserver;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"setAccelerationPriority", "(F)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Image_InnerClassesInfo_[] = {
	{"java.awt.Image$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Image_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.Image",
	"java.lang.Object",
	nullptr,
	_Image_FieldInfo_,
	_Image_MethodInfo_,
	nullptr,
	nullptr,
	_Image_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.Image$1"
};

$Object* allocate$Image($Class* clazz) {
	return $of($alloc(Image));
}


$ImageCapabilities* Image::defaultImageCaps = nullptr;

$Object* Image::UndefinedProperty = nullptr;

void Image::init$() {
	this->accelerationPriority = 0.5f;
}

Image* Image::getScaledInstance(int32_t width, int32_t height, int32_t hints) {
	$var($ImageFilter, filter, nullptr);
	if (((int32_t)(hints & (uint32_t)(Image::SCALE_SMOOTH | Image::SCALE_AREA_AVERAGING))) != 0) {
		$assign(filter, $new($AreaAveragingScaleFilter, width, height));
	} else {
		$assign(filter, $new($ReplicateScaleFilter, width, height));
	}
	$var($ImageProducer, prod, nullptr);
	$assign(prod, $new($FilteredImageSource, $(getSource()), filter));
	return $nc($($Toolkit::getDefaultToolkit()))->createImage(prod);
}

void Image::flush() {
	if (this->surfaceManager != nullptr) {
		$nc(this->surfaceManager)->flush();
	}
}

$ImageCapabilities* Image::getCapabilities($GraphicsConfiguration* gc) {
	if (this->surfaceManager != nullptr) {
		return $nc(this->surfaceManager)->getCapabilities(gc);
	}
	return Image::defaultImageCaps;
}

void Image::setAccelerationPriority(float priority) {
	if (priority < 0 || priority > 1) {
		$throwNew($IllegalArgumentException, "Priority must be a value between 0 and 1, inclusive"_s);
	}
	this->accelerationPriority = priority;
	if (this->surfaceManager != nullptr) {
		$nc(this->surfaceManager)->setAccelerationPriority(this->accelerationPriority);
	}
}

float Image::getAccelerationPriority() {
	return this->accelerationPriority;
}

void clinit$Image($Class* class$) {
	$assignStatic(Image::defaultImageCaps, $new($ImageCapabilities, false));
	$assignStatic(Image::UndefinedProperty, $new($Object));
	{
		$SurfaceManager::setImageAccessor($$new($Image$1));
	}
}

Image::Image() {
}

$Class* Image::load$($String* name, bool initialize) {
	$loadClass(Image, name, initialize, &_Image_ClassInfo_, clinit$Image, allocate$Image);
	return class$;
}

$Class* Image::class$ = nullptr;

	} // awt
} // java