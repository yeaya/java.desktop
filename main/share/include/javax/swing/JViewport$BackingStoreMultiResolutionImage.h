#ifndef _javax_swing_JViewport$BackingStoreMultiResolutionImage_h_
#define _javax_swing_JViewport$BackingStoreMultiResolutionImage_h_
//$ class javax.swing.JViewport$BackingStoreMultiResolutionImage
//$ extends java.awt.image.AbstractMultiResolutionImage

#include <java/awt/image/AbstractMultiResolutionImage.h>

namespace java {
	namespace awt {
		class Graphics;
		class Image;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class ImageObserver;
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace javax {
	namespace swing {

class $import JViewport$BackingStoreMultiResolutionImage : public ::java::awt::image::AbstractMultiResolutionImage {
	$class(JViewport$BackingStoreMultiResolutionImage, $NO_CLASS_INIT, ::java::awt::image::AbstractMultiResolutionImage)
public:
	JViewport$BackingStoreMultiResolutionImage();
	void init$(int32_t width, int32_t height, int32_t scaledWidth, int32_t scaledHeight, ::java::awt::Image* rvImage);
	virtual ::java::awt::Image* getBaseImage() override;
	virtual ::java::awt::Graphics* getGraphics() override;
	virtual int32_t getHeight(::java::awt::image::ImageObserver* observer) override;
	virtual ::java::awt::Image* getResolutionVariant(double w, double h) override;
	virtual ::java::util::List* getResolutionVariants() override;
	virtual int32_t getWidth(::java::awt::image::ImageObserver* observer) override;
	int32_t width = 0;
	int32_t height = 0;
	int32_t scaledWidth = 0;
	int32_t scaledHeight = 0;
	::java::awt::Image* rvImage = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JViewport$BackingStoreMultiResolutionImage_h_