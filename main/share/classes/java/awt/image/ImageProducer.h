#ifndef _java_awt_image_ImageProducer_h_
#define _java_awt_image_ImageProducer_h_
//$ interface java.awt.image.ImageProducer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		namespace image {
			class ImageConsumer;
		}
	}
}

namespace java {
	namespace awt {
		namespace image {

class $export ImageProducer : public ::java::lang::Object {
	$interface(ImageProducer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void addConsumer(::java::awt::image::ImageConsumer* ic) {}
	virtual bool isConsumer(::java::awt::image::ImageConsumer* ic) {return false;}
	virtual void removeConsumer(::java::awt::image::ImageConsumer* ic) {}
	virtual void requestTopDownLeftRightResend(::java::awt::image::ImageConsumer* ic) {}
	virtual void startProduction(::java::awt::image::ImageConsumer* ic) {}
};

		} // image
	} // awt
} // java

#endif // _java_awt_image_ImageProducer_h_