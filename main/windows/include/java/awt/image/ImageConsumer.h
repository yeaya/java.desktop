#ifndef _java_awt_image_ImageConsumer_h_
#define _java_awt_image_ImageConsumer_h_
//$ interface java.awt.image.ImageConsumer
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("COMPLETESCANLINES")
#undef COMPLETESCANLINES
#pragma push_macro("IMAGEABORTED")
#undef IMAGEABORTED
#pragma push_macro("IMAGEERROR")
#undef IMAGEERROR
#pragma push_macro("RANDOMPIXELORDER")
#undef RANDOMPIXELORDER
#pragma push_macro("SINGLEFRAME")
#undef SINGLEFRAME
#pragma push_macro("SINGLEFRAMEDONE")
#undef SINGLEFRAMEDONE
#pragma push_macro("SINGLEPASS")
#undef SINGLEPASS
#pragma push_macro("STATICIMAGEDONE")
#undef STATICIMAGEDONE
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
	namespace util {
		class Hashtable;
	}
}

namespace java {
	namespace awt {
		namespace image {

class $import ImageConsumer : public ::java::lang::Object {
	$interface(ImageConsumer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void imageComplete(int32_t status) {}
	virtual void setColorModel(::java::awt::image::ColorModel* model) {}
	virtual void setDimensions(int32_t width, int32_t height) {}
	virtual void setHints(int32_t hintflags) {}
	virtual void setPixels(int32_t x, int32_t y, int32_t w, int32_t h, ::java::awt::image::ColorModel* model, $bytes* pixels, int32_t off, int32_t scansize) {}
	virtual void setPixels(int32_t x, int32_t y, int32_t w, int32_t h, ::java::awt::image::ColorModel* model, $ints* pixels, int32_t off, int32_t scansize) {}
	virtual void setProperties(::java::util::Hashtable* props) {}
	static const int32_t RANDOMPIXELORDER = 1;
	static const int32_t TOPDOWNLEFTRIGHT = 2;
	static const int32_t COMPLETESCANLINES = 4;
	static const int32_t SINGLEPASS = 8;
	static const int32_t SINGLEFRAME = 16;
	static const int32_t IMAGEERROR = 1;
	static const int32_t SINGLEFRAMEDONE = 2;
	static const int32_t STATICIMAGEDONE = 3;
	static const int32_t IMAGEABORTED = 4;
};

		} // image
	} // awt
} // java

#pragma pop_macro("COMPLETESCANLINES")
#pragma pop_macro("IMAGEABORTED")
#pragma pop_macro("IMAGEERROR")
#pragma pop_macro("RANDOMPIXELORDER")
#pragma pop_macro("SINGLEFRAME")
#pragma pop_macro("SINGLEFRAMEDONE")
#pragma pop_macro("SINGLEPASS")
#pragma pop_macro("STATICIMAGEDONE")
#pragma pop_macro("TOPDOWNLEFTRIGHT")

#endif // _java_awt_image_ImageConsumer_h_