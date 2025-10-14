#include <sun/awt/image/BufferedImageDevice.h>

#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/image/BufferedImageGraphicsConfig.h>
#include <jcpp.h>

#undef TYPE_IMAGE_BUFFER

using $GraphicsConfigurationArray = $Array<::java::awt::GraphicsConfiguration>;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BufferedImageGraphicsConfig = ::sun::awt::image::BufferedImageGraphicsConfig;

namespace sun {
	namespace awt {
		namespace image {

$FieldInfo _BufferedImageDevice_FieldInfo_[] = {
	{"config", "Ljava/awt/GraphicsConfiguration;", nullptr, $PRIVATE | $FINAL, $field(BufferedImageDevice, config)},
	{}
};

$MethodInfo _BufferedImageDevice_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/image/BufferedImageGraphicsConfig;)V", nullptr, $PUBLIC, $method(static_cast<void(BufferedImageDevice::*)($BufferedImageGraphicsConfig*)>(&BufferedImageDevice::init$))},
	{"getConfigurations", "()[Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC},
	{"getDefaultConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC},
	{"getIDstring", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getType", "()I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _BufferedImageDevice_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.image.BufferedImageDevice",
	"java.awt.GraphicsDevice",
	nullptr,
	_BufferedImageDevice_FieldInfo_,
	_BufferedImageDevice_MethodInfo_
};

$Object* allocate$BufferedImageDevice($Class* clazz) {
	return $of($alloc(BufferedImageDevice));
}

void BufferedImageDevice::init$($BufferedImageGraphicsConfig* config) {
	$GraphicsDevice::init$();
	$set(this, config, config);
}

int32_t BufferedImageDevice::getType() {
	return $GraphicsDevice::TYPE_IMAGE_BUFFER;
}

$String* BufferedImageDevice::getIDstring() {
	return ("BufferedImage"_s);
}

$GraphicsConfigurationArray* BufferedImageDevice::getConfigurations() {
	return $new($GraphicsConfigurationArray, {this->config});
}

$GraphicsConfiguration* BufferedImageDevice::getDefaultConfiguration() {
	return this->config;
}

BufferedImageDevice::BufferedImageDevice() {
}

$Class* BufferedImageDevice::load$($String* name, bool initialize) {
	$loadClass(BufferedImageDevice, name, initialize, &_BufferedImageDevice_ClassInfo_, allocate$BufferedImageDevice);
	return class$;
}

$Class* BufferedImageDevice::class$ = nullptr;

		} // image
	} // awt
} // sun