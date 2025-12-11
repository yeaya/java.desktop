#ifndef _sun_lwawt_macosx_CPrinterDevice_h_
#define _sun_lwawt_macosx_CPrinterDevice_h_
//$ class sun.lwawt.macosx.CPrinterDevice
//$ extends java.awt.GraphicsDevice

#include <java/awt/GraphicsDevice.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class GraphicsConfiguration;
	}
}
namespace sun {
	namespace lwawt {
		namespace macosx {
			class CPrinterGraphicsConfig;
		}
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CPrinterDevice : public ::java::awt::GraphicsDevice {
	$class(CPrinterDevice, $NO_CLASS_INIT, ::java::awt::GraphicsDevice)
public:
	CPrinterDevice();
	void init$(::sun::lwawt::macosx::CPrinterGraphicsConfig* config);
	virtual $Array<::java::awt::GraphicsConfiguration>* getConfigurations() override;
	virtual ::java::awt::GraphicsConfiguration* getDefaultConfiguration() override;
	virtual $String* getIDstring() override;
	virtual int32_t getType() override;
	::java::awt::GraphicsConfiguration* config = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CPrinterDevice_h_