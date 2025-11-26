#ifndef _com_sun_imageio_plugins_bmp_BMPImageReader$2_h_
#define _com_sun_imageio_plugins_bmp_BMPImageReader$2_h_
//$ class com.sun.imageio.plugins.bmp.BMPImageReader$2
//$ extends javax.imageio.event.IIOReadUpdateListener

#include <java/lang/Array.h>
#include <javax/imageio/event/IIOReadUpdateListener.h>

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
namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
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

class BMPImageReader$2 : public ::javax::imageio::event::IIOReadUpdateListener {
	$class(BMPImageReader$2, $NO_CLASS_INIT, ::javax::imageio::event::IIOReadUpdateListener)
public:
	BMPImageReader$2();
	void init$(::com::sun::imageio::plugins::bmp::BMPImageReader* this$0);
	virtual void imageUpdate(::javax::imageio::ImageReader* source, ::java::awt::image::BufferedImage* theImage, int32_t minX, int32_t minY, int32_t width, int32_t height, int32_t periodX, int32_t periodY, $ints* bands) override;
	virtual void passComplete(::javax::imageio::ImageReader* source, ::java::awt::image::BufferedImage* theImage) override;
	virtual void passStarted(::javax::imageio::ImageReader* source, ::java::awt::image::BufferedImage* theImage, int32_t pass, int32_t minPass, int32_t maxPass, int32_t minX, int32_t minY, int32_t periodX, int32_t periodY, $ints* bands) override;
	virtual void thumbnailPassComplete(::javax::imageio::ImageReader* source, ::java::awt::image::BufferedImage* thumb) override;
	virtual void thumbnailPassStarted(::javax::imageio::ImageReader* source, ::java::awt::image::BufferedImage* thumb, int32_t pass, int32_t minPass, int32_t maxPass, int32_t minX, int32_t minY, int32_t periodX, int32_t periodY, $ints* bands) override;
	virtual void thumbnailUpdate(::javax::imageio::ImageReader* source, ::java::awt::image::BufferedImage* theThumbnail, int32_t minX, int32_t minY, int32_t width, int32_t height, int32_t periodX, int32_t periodY, $ints* bands) override;
	::com::sun::imageio::plugins::bmp::BMPImageReader* this$0 = nullptr;
};

				} // bmp
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_bmp_BMPImageReader$2_h_