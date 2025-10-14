#ifndef _sun_print_PrinterGraphicsDevice_h_
#define _sun_print_PrinterGraphicsDevice_h_
//$ class sun.print.PrinterGraphicsDevice
//$ extends java.awt.GraphicsDevice

#include <java/awt/GraphicsDevice.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class GraphicsConfiguration;
		class Window;
	}
}

namespace sun {
	namespace print {

class PrinterGraphicsDevice : public ::java::awt::GraphicsDevice {
	$class(PrinterGraphicsDevice, $NO_CLASS_INIT, ::java::awt::GraphicsDevice)
public:
	PrinterGraphicsDevice();
	void init$(::java::awt::GraphicsConfiguration* conf, $String* id);
	virtual $Array<::java::awt::GraphicsConfiguration>* getConfigurations() override;
	virtual ::java::awt::GraphicsConfiguration* getDefaultConfiguration() override;
	virtual ::java::awt::Window* getFullScreenWindow() override;
	virtual $String* getIDstring() override;
	virtual int32_t getType() override;
	virtual void setFullScreenWindow(::java::awt::Window* w) override;
	$String* printerID = nullptr;
	::java::awt::GraphicsConfiguration* config = nullptr;
};

	} // print
} // sun

#endif // _sun_print_PrinterGraphicsDevice_h_