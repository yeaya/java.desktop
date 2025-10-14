#ifndef _sun_awt_image_PNGImageDecoder$PNGException_h_
#define _sun_awt_image_PNGImageDecoder$PNGException_h_
//$ class sun.awt.image.PNGImageDecoder$PNGException
//$ extends java.io.IOException

#include <java/io/IOException.h>

namespace sun {
	namespace awt {
		namespace image {
			class PNGImageDecoder;
		}
	}
}

namespace sun {
	namespace awt {
		namespace image {

class PNGImageDecoder$PNGException : public ::java::io::IOException {
	$class(PNGImageDecoder$PNGException, $NO_CLASS_INIT, ::java::io::IOException)
public:
	PNGImageDecoder$PNGException();
	void init$(::sun::awt::image::PNGImageDecoder* this$0, $String* s);
	::sun::awt::image::PNGImageDecoder* this$0 = nullptr;
	PNGImageDecoder$PNGException(const PNGImageDecoder$PNGException& e);
	PNGImageDecoder$PNGException wrapper$();
	virtual void throwWrapper$() override;
};

		} // image
	} // awt
} // sun

#endif // _sun_awt_image_PNGImageDecoder$PNGException_h_