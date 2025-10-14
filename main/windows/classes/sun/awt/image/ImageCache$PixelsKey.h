#ifndef _sun_awt_image_ImageCache$PixelsKey_h_
#define _sun_awt_image_ImageCache$PixelsKey_h_
//$ interface sun.awt.image.ImageCache$PixelsKey
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace awt {
		namespace image {

class ImageCache$PixelsKey : public ::java::lang::Object {
	$interface(ImageCache$PixelsKey, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t getPixelCount() {return 0;}
};

		} // image
	} // awt
} // sun

#endif // _sun_awt_image_ImageCache$PixelsKey_h_