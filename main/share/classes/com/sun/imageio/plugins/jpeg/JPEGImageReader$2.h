#ifndef _com_sun_imageio_plugins_jpeg_JPEGImageReader$2_h_
#define _com_sun_imageio_plugins_jpeg_JPEGImageReader$2_h_
//$ class com.sun.imageio.plugins.jpeg.JPEGImageReader$2
//$ extends com.sun.imageio.plugins.jpeg.ImageTypeProducer

#include <com/sun/imageio/plugins/jpeg/ImageTypeProducer.h>

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {
					class JPEGImageReader;
				}
			}
		}
	}
}
namespace javax {
	namespace imageio {
		class ImageTypeSpecifier;
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

class JPEGImageReader$2 : public ::com::sun::imageio::plugins::jpeg::ImageTypeProducer {
	$class(JPEGImageReader$2, $NO_CLASS_INIT, ::com::sun::imageio::plugins::jpeg::ImageTypeProducer)
public:
	JPEGImageReader$2();
	void init$(::com::sun::imageio::plugins::jpeg::JPEGImageReader* this$0);
	virtual ::javax::imageio::ImageTypeSpecifier* produce() override;
	::com::sun::imageio::plugins::jpeg::JPEGImageReader* this$0 = nullptr;
};

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_jpeg_JPEGImageReader$2_h_