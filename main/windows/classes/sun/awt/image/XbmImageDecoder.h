#ifndef _sun_awt_image_XbmImageDecoder_h_
#define _sun_awt_image_XbmImageDecoder_h_
//$ class sun.awt.image.XbmImageDecoder
//$ extends sun.awt.image.ImageDecoder

#include <java/lang/Array.h>
#include <sun/awt/image/ImageDecoder.h>

namespace java {
	namespace io {
		class InputStream;
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

class XbmImageDecoder : public ::sun::awt::image::ImageDecoder {
	$class(XbmImageDecoder, 0, ::sun::awt::image::ImageDecoder)
public:
	XbmImageDecoder();
	void init$(::sun::awt::image::InputStreamImageSource* src, ::java::io::InputStream* is);
	static void error($String* s1);
	virtual void produceImage() override;
	static $bytes* XbmColormap;
	static int32_t XbmHints;
};

		} // image
	} // awt
} // sun

#endif // _sun_awt_image_XbmImageDecoder_h_