#ifndef _sun_awt_image_ImageAccessException_h_
#define _sun_awt_image_ImageAccessException_h_
//$ class sun.awt.image.ImageAccessException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace sun {
	namespace awt {
		namespace image {

class ImageAccessException : public ::java::lang::Exception {
	$class(ImageAccessException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	ImageAccessException();
	void init$($String* s);
	ImageAccessException(const ImageAccessException& e);
	ImageAccessException wrapper$();
	virtual void throwWrapper$() override;
};

		} // image
	} // awt
} // sun

#endif // _sun_awt_image_ImageAccessException_h_