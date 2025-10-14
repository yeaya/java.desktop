#ifndef _java_awt_image_BaseMultiResolutionImage_h_
#define _java_awt_image_BaseMultiResolutionImage_h_
//$ class java.awt.image.BaseMultiResolutionImage
//$ extends java.awt.image.AbstractMultiResolutionImage

#include <java/awt/image/AbstractMultiResolutionImage.h>
#include <java/lang/Array.h>

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

class $export BaseMultiResolutionImage : public ::java::awt::image::AbstractMultiResolutionImage {
	$class(BaseMultiResolutionImage, $NO_CLASS_INIT, ::java::awt::image::AbstractMultiResolutionImage)
public:
	BaseMultiResolutionImage();
	void init$($Array<::java::awt::Image>* resolutionVariants);
	void init$(int32_t baseImageIndex, $Array<::java::awt::Image>* resolutionVariants);
	static void checkSize(double width, double height);
	virtual ::java::awt::Image* getBaseImage() override;
	virtual ::java::awt::Image* getResolutionVariant(double destImageWidth, double destImageHeight) override;
	virtual ::java::util::List* getResolutionVariants() override;
	int32_t baseImageIndex = 0;
	$Array<::java::awt::Image>* resolutionVariants = nullptr;
};

		} // image
	} // awt
} // java

#endif // _java_awt_image_BaseMultiResolutionImage_h_