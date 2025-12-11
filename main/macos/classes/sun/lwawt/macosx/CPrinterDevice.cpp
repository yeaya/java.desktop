#include <sun/lwawt/macosx/CPrinterDevice.h>

#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <sun/lwawt/macosx/CPrinterGraphicsConfig.h>
#include <jcpp.h>

#undef TYPE_PRINTER

using $GraphicsConfigurationArray = $Array<::java::awt::GraphicsConfiguration>;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CPrinterGraphicsConfig = ::sun::lwawt::macosx::CPrinterGraphicsConfig;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CPrinterDevice_FieldInfo_[] = {
	{"config", "Ljava/awt/GraphicsConfiguration;", nullptr, $PRIVATE | $FINAL, $field(CPrinterDevice, config)},
	{}
};

$MethodInfo _CPrinterDevice_MethodInfo_[] = {
	{"<init>", "(Lsun/lwawt/macosx/CPrinterGraphicsConfig;)V", nullptr, $PUBLIC, $method(static_cast<void(CPrinterDevice::*)($CPrinterGraphicsConfig*)>(&CPrinterDevice::init$))},
	{"getConfigurations", "()[Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC},
	{"getDefaultConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC},
	{"getIDstring", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getType", "()I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CPrinterDevice_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.lwawt.macosx.CPrinterDevice",
	"java.awt.GraphicsDevice",
	nullptr,
	_CPrinterDevice_FieldInfo_,
	_CPrinterDevice_MethodInfo_
};

$Object* allocate$CPrinterDevice($Class* clazz) {
	return $of($alloc(CPrinterDevice));
}

void CPrinterDevice::init$($CPrinterGraphicsConfig* config) {
	$GraphicsDevice::init$();
	$set(this, config, config);
}

int32_t CPrinterDevice::getType() {
	return $GraphicsDevice::TYPE_PRINTER;
}

$String* CPrinterDevice::getIDstring() {
	return ("Printer"_s);
}

$GraphicsConfigurationArray* CPrinterDevice::getConfigurations() {
	return $new($GraphicsConfigurationArray, {this->config});
}

$GraphicsConfiguration* CPrinterDevice::getDefaultConfiguration() {
	return this->config;
}

CPrinterDevice::CPrinterDevice() {
}

$Class* CPrinterDevice::load$($String* name, bool initialize) {
	$loadClass(CPrinterDevice, name, initialize, &_CPrinterDevice_ClassInfo_, allocate$CPrinterDevice);
	return class$;
}

$Class* CPrinterDevice::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun