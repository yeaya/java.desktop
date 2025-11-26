#ifndef _java_awt_image_FilteredImageSource_h_
#define _java_awt_image_FilteredImageSource_h_
//$ class java.awt.image.FilteredImageSource
//$ extends java.awt.image.ImageProducer

#include <java/awt/image/ImageProducer.h>

namespace java {
	namespace awt {
		namespace image {
			class ImageConsumer;
			class ImageFilter;
		}
	}
}
namespace java {
	namespace util {
		class Hashtable;
	}
}

namespace java {
	namespace awt {
		namespace image {

class $import FilteredImageSource : public ::java::awt::image::ImageProducer {
	$class(FilteredImageSource, $NO_CLASS_INIT, ::java::awt::image::ImageProducer)
public:
	FilteredImageSource();
	void init$(::java::awt::image::ImageProducer* orig, ::java::awt::image::ImageFilter* imgf);
	virtual void addConsumer(::java::awt::image::ImageConsumer* ic) override;
	virtual bool isConsumer(::java::awt::image::ImageConsumer* ic) override;
	virtual void removeConsumer(::java::awt::image::ImageConsumer* ic) override;
	virtual void requestTopDownLeftRightResend(::java::awt::image::ImageConsumer* ic) override;
	virtual void startProduction(::java::awt::image::ImageConsumer* ic) override;
	::java::awt::image::ImageProducer* src = nullptr;
	::java::awt::image::ImageFilter* filter = nullptr;
	::java::util::Hashtable* proxies = nullptr;
};

		} // image
	} // awt
} // java

#endif // _java_awt_image_FilteredImageSource_h_