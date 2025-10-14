#ifndef _sun_awt_image_ImageDecoder$1_h_
#define _sun_awt_image_ImageDecoder$1_h_
//$ class sun.awt.image.ImageDecoder$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace awt {
		namespace image {
			class ImageDecoder;
		}
	}
}

namespace sun {
	namespace awt {
		namespace image {

class ImageDecoder$1 : public ::java::security::PrivilegedAction {
	$class(ImageDecoder$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	ImageDecoder$1();
	void init$(::sun::awt::image::ImageDecoder* this$0);
	virtual $Object* run() override;
	::sun::awt::image::ImageDecoder* this$0 = nullptr;
};

		} // image
	} // awt
} // sun

#endif // _sun_awt_image_ImageDecoder$1_h_