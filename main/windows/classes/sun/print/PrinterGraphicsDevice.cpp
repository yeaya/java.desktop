#include <sun/print/PrinterGraphicsDevice.h>

#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/Window.h>
#include <jcpp.h>

#undef TYPE_PRINTER

using $GraphicsConfigurationArray = $Array<::java::awt::GraphicsConfiguration>;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace print {

$FieldInfo _PrinterGraphicsDevice_FieldInfo_[] = {
	{"printerID", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(PrinterGraphicsDevice, printerID)},
	{"config", "Ljava/awt/GraphicsConfiguration;", nullptr, $PRIVATE | $FINAL, $field(PrinterGraphicsDevice, config)},
	{}
};

$MethodInfo _PrinterGraphicsDevice_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/GraphicsConfiguration;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(PrinterGraphicsDevice::*)($GraphicsConfiguration*,$String*)>(&PrinterGraphicsDevice::init$))},
	{"getConfigurations", "()[Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC},
	{"getDefaultConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC},
	{"getFullScreenWindow", "()Ljava/awt/Window;", nullptr, $PUBLIC},
	{"getIDstring", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getType", "()I", nullptr, $PUBLIC},
	{"setFullScreenWindow", "(Ljava/awt/Window;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PrinterGraphicsDevice_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.print.PrinterGraphicsDevice",
	"java.awt.GraphicsDevice",
	nullptr,
	_PrinterGraphicsDevice_FieldInfo_,
	_PrinterGraphicsDevice_MethodInfo_
};

$Object* allocate$PrinterGraphicsDevice($Class* clazz) {
	return $of($alloc(PrinterGraphicsDevice));
}

void PrinterGraphicsDevice::init$($GraphicsConfiguration* conf, $String* id) {
	$GraphicsDevice::init$();
	$set(this, printerID, id);
	$set(this, config, conf);
}

int32_t PrinterGraphicsDevice::getType() {
	return $GraphicsDevice::TYPE_PRINTER;
}

$String* PrinterGraphicsDevice::getIDstring() {
	return this->printerID;
}

$GraphicsConfigurationArray* PrinterGraphicsDevice::getConfigurations() {
	return $new($GraphicsConfigurationArray, {this->config});
}

$GraphicsConfiguration* PrinterGraphicsDevice::getDefaultConfiguration() {
	return this->config;
}

void PrinterGraphicsDevice::setFullScreenWindow($Window* w) {
}

$Window* PrinterGraphicsDevice::getFullScreenWindow() {
	return nullptr;
}

PrinterGraphicsDevice::PrinterGraphicsDevice() {
}

$Class* PrinterGraphicsDevice::load$($String* name, bool initialize) {
	$loadClass(PrinterGraphicsDevice, name, initialize, &_PrinterGraphicsDevice_ClassInfo_, allocate$PrinterGraphicsDevice);
	return class$;
}

$Class* PrinterGraphicsDevice::class$ = nullptr;

	} // print
} // sun