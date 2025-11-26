#ifndef _com_sun_imageio_plugins_bmp_BMPImageReader$3_h_
#define _com_sun_imageio_plugins_bmp_BMPImageReader$3_h_
//$ class com.sun.imageio.plugins.bmp.BMPImageReader$3
//$ extends javax.imageio.event.IIOReadWarningListener

#include <javax/imageio/event/IIOReadWarningListener.h>

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace bmp {
					class BMPImageReader;
				}
			}
		}
	}
}
namespace javax {
	namespace imageio {
		class ImageReader;
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace bmp {

class BMPImageReader$3 : public ::javax::imageio::event::IIOReadWarningListener {
	$class(BMPImageReader$3, $NO_CLASS_INIT, ::javax::imageio::event::IIOReadWarningListener)
public:
	BMPImageReader$3();
	void init$(::com::sun::imageio::plugins::bmp::BMPImageReader* this$0);
	virtual void warningOccurred(::javax::imageio::ImageReader* source, $String* warning) override;
	::com::sun::imageio::plugins::bmp::BMPImageReader* this$0 = nullptr;
};

				} // bmp
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_bmp_BMPImageReader$3_h_