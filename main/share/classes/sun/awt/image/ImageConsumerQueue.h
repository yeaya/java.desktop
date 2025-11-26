#ifndef _sun_awt_image_ImageConsumerQueue_h_
#define _sun_awt_image_ImageConsumerQueue_h_
//$ class sun.awt.image.ImageConsumerQueue
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		namespace image {
			class ImageConsumer;
		}
	}
}
namespace sun {
	namespace awt {
		namespace image {
			class InputStreamImageSource;
		}
	}
}

namespace sun {
	namespace awt {
		namespace image {

class ImageConsumerQueue : public ::java::lang::Object {
	$class(ImageConsumerQueue, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ImageConsumerQueue();
	void init$(::sun::awt::image::InputStreamImageSource* src, ::java::awt::image::ImageConsumer* ic);
	static bool isConsumer(::sun::awt::image::ImageConsumerQueue* cqbase, ::java::awt::image::ImageConsumer* ic);
	static ::sun::awt::image::ImageConsumerQueue* removeConsumer(::sun::awt::image::ImageConsumerQueue* cqbase, ::java::awt::image::ImageConsumer* ic, bool stillinterested);
	virtual $String* toString() override;
	::sun::awt::image::ImageConsumerQueue* next = nullptr;
	::java::awt::image::ImageConsumer* consumer = nullptr;
	bool interested = false;
	$Object* securityContext = nullptr;
	bool secure = false;
};

		} // image
	} // awt
} // sun

#endif // _sun_awt_image_ImageConsumerQueue_h_