#ifndef _sun_awt_image_OffScreenImageSource_h_
#define _sun_awt_image_OffScreenImageSource_h_
//$ class sun.awt.image.OffScreenImageSource
//$ extends java.awt.image.ImageProducer

#include <java/awt/image/ImageProducer.h>

namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
			class ImageConsumer;
		}
	}
}
namespace java {
	namespace util {
		class Hashtable;
	}
}

namespace sun {
	namespace awt {
		namespace image {

class OffScreenImageSource : public ::java::awt::image::ImageProducer {
	$class(OffScreenImageSource, $NO_CLASS_INIT, ::java::awt::image::ImageProducer)
public:
	OffScreenImageSource();
	void init$(::java::awt::image::BufferedImage* image, ::java::util::Hashtable* properties);
	void init$(::java::awt::image::BufferedImage* image);
	virtual void addConsumer(::java::awt::image::ImageConsumer* ic) override;
	virtual bool isConsumer(::java::awt::image::ImageConsumer* ic) override;
	void produce();
	virtual void removeConsumer(::java::awt::image::ImageConsumer* ic) override;
	virtual void requestTopDownLeftRightResend(::java::awt::image::ImageConsumer* ic) override;
	void sendPixels();
	virtual void startProduction(::java::awt::image::ImageConsumer* ic) override;
	::java::awt::image::BufferedImage* image = nullptr;
	int32_t width = 0;
	int32_t height = 0;
	::java::util::Hashtable* properties = nullptr;
	::java::awt::image::ImageConsumer* theConsumer = nullptr;
};

		} // image
	} // awt
} // sun

#endif // _sun_awt_image_OffScreenImageSource_h_