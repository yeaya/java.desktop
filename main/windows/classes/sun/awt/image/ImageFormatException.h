#ifndef _sun_awt_image_ImageFormatException_h_
#define _sun_awt_image_ImageFormatException_h_
//$ class sun.awt.image.ImageFormatException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace sun {
	namespace awt {
		namespace image {

class ImageFormatException : public ::java::lang::Exception {
	$class(ImageFormatException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	ImageFormatException();
	void init$($String* s);
	ImageFormatException(const ImageFormatException& e);
	ImageFormatException wrapper$();
	virtual void throwWrapper$() override;
};

		} // image
	} // awt
} // sun

#endif // _sun_awt_image_ImageFormatException_h_