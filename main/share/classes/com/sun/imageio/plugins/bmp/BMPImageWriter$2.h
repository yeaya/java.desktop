#ifndef _com_sun_imageio_plugins_bmp_BMPImageWriter$2_h_
#define _com_sun_imageio_plugins_bmp_BMPImageWriter$2_h_
//$ class com.sun.imageio.plugins.bmp.BMPImageWriter$2
//$ extends javax.imageio.event.IIOWriteWarningListener

#include <javax/imageio/event/IIOWriteWarningListener.h>

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace bmp {
					class BMPImageWriter;
				}
			}
		}
	}
}
namespace javax {
	namespace imageio {
		class ImageWriter;
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace bmp {

class BMPImageWriter$2 : public ::javax::imageio::event::IIOWriteWarningListener {
	$class(BMPImageWriter$2, $NO_CLASS_INIT, ::javax::imageio::event::IIOWriteWarningListener)
public:
	BMPImageWriter$2();
	void init$(::com::sun::imageio::plugins::bmp::BMPImageWriter* this$0);
	virtual void warningOccurred(::javax::imageio::ImageWriter* source, int32_t imageIndex, $String* warning) override;
	::com::sun::imageio::plugins::bmp::BMPImageWriter* this$0 = nullptr;
};

				} // bmp
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_bmp_BMPImageWriter$2_h_