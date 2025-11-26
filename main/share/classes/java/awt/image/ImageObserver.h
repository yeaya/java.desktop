#ifndef _java_awt_image_ImageObserver_h_
#define _java_awt_image_ImageObserver_h_
//$ interface java.awt.image.ImageObserver
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ABORT")
#undef ABORT
#pragma push_macro("ALLBITS")
#undef ALLBITS
#pragma push_macro("ERROR")
#undef ERROR
#pragma push_macro("FRAMEBITS")
#undef FRAMEBITS
#pragma push_macro("HEIGHT")
#undef HEIGHT
#pragma push_macro("PROPERTIES")
#undef PROPERTIES
#pragma push_macro("SOMEBITS")
#undef SOMEBITS
#pragma push_macro("WIDTH")
#undef WIDTH

namespace java {
	namespace awt {
		class Image;
	}
}

namespace java {
	namespace awt {
		namespace image {

class $export ImageObserver : public ::java::lang::Object {
	$interface(ImageObserver, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool imageUpdate(::java::awt::Image* img, int32_t infoflags, int32_t x, int32_t y, int32_t width, int32_t height) {return false;}
	static const int32_t WIDTH = 1;
	static const int32_t HEIGHT = 2;
	static const int32_t PROPERTIES = 4;
	static const int32_t SOMEBITS = 8;
	static const int32_t FRAMEBITS = 16;
	static const int32_t ALLBITS = 32;
	static const int32_t ERROR = 64;
	static const int32_t ABORT = 128;
};

		} // image
	} // awt
} // java

#pragma pop_macro("ABORT")
#pragma pop_macro("ALLBITS")
#pragma pop_macro("ERROR")
#pragma pop_macro("FRAMEBITS")
#pragma pop_macro("HEIGHT")
#pragma pop_macro("PROPERTIES")
#pragma pop_macro("SOMEBITS")
#pragma pop_macro("WIDTH")

#endif // _java_awt_image_ImageObserver_h_