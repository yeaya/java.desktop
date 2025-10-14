#ifndef _java_awt_image_MultiResolutionImage_h_
#define _java_awt_image_MultiResolutionImage_h_
//$ interface java.awt.image.MultiResolutionImage
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Image;
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace java {
	namespace awt {
		namespace image {

class $export MultiResolutionImage : public ::java::lang::Object {
	$interface(MultiResolutionImage, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::awt::Image* getResolutionVariant(double destImageWidth, double destImageHeight) {return nullptr;}
	virtual ::java::util::List* getResolutionVariants() {return nullptr;}
};

		} // image
	} // awt
} // java

#endif // _java_awt_image_MultiResolutionImage_h_