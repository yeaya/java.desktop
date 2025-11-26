#ifndef _sun_awt_image_BufferedImageDevice_h_
#define _sun_awt_image_BufferedImageDevice_h_
//$ class sun.awt.image.BufferedImageDevice
//$ extends java.awt.GraphicsDevice

#include <java/awt/GraphicsDevice.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class GraphicsConfiguration;
	}
}
namespace sun {
	namespace awt {
		namespace image {
			class BufferedImageGraphicsConfig;
		}
	}
}

namespace sun {
	namespace awt {
		namespace image {

class BufferedImageDevice : public ::java::awt::GraphicsDevice {
	$class(BufferedImageDevice, $NO_CLASS_INIT, ::java::awt::GraphicsDevice)
public:
	BufferedImageDevice();
	void init$(::sun::awt::image::BufferedImageGraphicsConfig* config);
	virtual $Array<::java::awt::GraphicsConfiguration>* getConfigurations() override;
	virtual ::java::awt::GraphicsConfiguration* getDefaultConfiguration() override;
	virtual $String* getIDstring() override;
	virtual int32_t getType() override;
	::java::awt::GraphicsConfiguration* config = nullptr;
};

		} // image
	} // awt
} // sun

#endif // _sun_awt_image_BufferedImageDevice_h_