#ifndef _sun_awt_image_ImageFetchable_h_
#define _sun_awt_image_ImageFetchable_h_
//$ interface sun.awt.image.ImageFetchable
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace awt {
		namespace image {

class ImageFetchable : public ::java::lang::Object {
	$interface(ImageFetchable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void doFetch() {}
};

		} // image
	} // awt
} // sun

#endif // _sun_awt_image_ImageFetchable_h_