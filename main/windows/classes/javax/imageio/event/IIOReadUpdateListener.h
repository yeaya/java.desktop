#ifndef _javax_imageio_event_IIOReadUpdateListener_h_
#define _javax_imageio_event_IIOReadUpdateListener_h_
//$ interface javax.imageio.event.IIOReadUpdateListener
//$ extends java.util.EventListener

#include <java/lang/Array.h>
#include <java/util/EventListener.h>

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

namespace javax {
	namespace imageio {
		namespace event {

class $export IIOReadUpdateListener : public ::java::util::EventListener {
	$interface(IIOReadUpdateListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void imageUpdate(::javax::imageio::ImageReader* source, ::java::awt::image::BufferedImage* theImage, int32_t minX, int32_t minY, int32_t width, int32_t height, int32_t periodX, int32_t periodY, $ints* bands) {}
	virtual void passComplete(::javax::imageio::ImageReader* source, ::java::awt::image::BufferedImage* theImage) {}
	virtual void passStarted(::javax::imageio::ImageReader* source, ::java::awt::image::BufferedImage* theImage, int32_t pass, int32_t minPass, int32_t maxPass, int32_t minX, int32_t minY, int32_t periodX, int32_t periodY, $ints* bands) {}
	virtual void thumbnailPassComplete(::javax::imageio::ImageReader* source, ::java::awt::image::BufferedImage* theThumbnail) {}
	virtual void thumbnailPassStarted(::javax::imageio::ImageReader* source, ::java::awt::image::BufferedImage* theThumbnail, int32_t pass, int32_t minPass, int32_t maxPass, int32_t minX, int32_t minY, int32_t periodX, int32_t periodY, $ints* bands) {}
	virtual void thumbnailUpdate(::javax::imageio::ImageReader* source, ::java::awt::image::BufferedImage* theThumbnail, int32_t minX, int32_t minY, int32_t width, int32_t height, int32_t periodX, int32_t periodY, $ints* bands) {}
};

		} // event
	} // imageio
} // javax

#endif // _javax_imageio_event_IIOReadUpdateListener_h_