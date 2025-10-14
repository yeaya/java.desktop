#ifndef _sun_awt_image_JPEGImageDecoder_h_
#define _sun_awt_image_JPEGImageDecoder_h_
//$ class sun.awt.image.JPEGImageDecoder
//$ extends sun.awt.image.ImageDecoder

#include <java/awt/image/ImageConsumer.h>
#include <java/lang/Array.h>
#include <sun/awt/image/ImageDecoder.h>

#pragma push_macro("COMPLETESCANLINES")
#undef COMPLETESCANLINES
#pragma push_macro("SINGLEFRAME")
#undef SINGLEFRAME
#pragma push_macro("TOPDOWNLEFTRIGHT")
#undef TOPDOWNLEFTRIGHT

namespace java {
	namespace awt {
		namespace image {
			class ColorModel;
		}
	}
}
namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace util {
		class Hashtable;
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

class JPEGImageDecoder : public ::sun::awt::image::ImageDecoder {
	$class(JPEGImageDecoder, 0, ::sun::awt::image::ImageDecoder)
public:
	JPEGImageDecoder();
	void init$(::sun::awt::image::InputStreamImageSource* src, ::java::io::InputStream* is);
	static void error($String* s1);
	static void initIDs($Class* InputStreamClass);
	virtual void produceImage() override;
	void readImage(::java::io::InputStream* is, $bytes* buf);
	virtual bool sendHeaderInfo(int32_t width, int32_t height, bool gray, bool hasalpha, bool multipass);
	virtual bool sendPixels($ints* pixels, int32_t y);
	virtual bool sendPixels($bytes* pixels, int32_t y);
	static ::java::awt::image::ColorModel* RGBcolormodel;
	static ::java::awt::image::ColorModel* ARGBcolormodel;
	static ::java::awt::image::ColorModel* Graycolormodel;
	static $Class* InputStreamClass;
	::java::awt::image::ColorModel* colormodel = nullptr;
	::java::util::Hashtable* props = nullptr;
	static const int32_t hintflags = 22; // ::java::awt::image::ImageConsumer::TOPDOWNLEFTRIGHT | ::java::awt::image::ImageConsumer::COMPLETESCANLINES | ::java::awt::image::ImageConsumer::SINGLEFRAME
};

		} // image
	} // awt
} // sun

#pragma pop_macro("COMPLETESCANLINES")
#pragma pop_macro("SINGLEFRAME")
#pragma pop_macro("TOPDOWNLEFTRIGHT")

#endif // _sun_awt_image_JPEGImageDecoder_h_