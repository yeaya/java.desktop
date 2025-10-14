#ifndef _sun_awt_image_MultiResolutionCachedImage_h_
#define _sun_awt_image_MultiResolutionCachedImage_h_
//$ class sun.awt.image.MultiResolutionCachedImage
//$ extends java.awt.image.AbstractMultiResolutionImage

#include <java/awt/image/AbstractMultiResolutionImage.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Image;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class Dimension2D;
		}
	}
}
namespace java {
	namespace awt {
		namespace image {
			class ImageObserver;
			class MultiResolutionImage;
		}
	}
}
namespace java {
	namespace lang {
		class Integer;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace java {
	namespace util {
		namespace function {
			class BiFunction;
			class Function;
		}
	}
}

namespace sun {
	namespace awt {
		namespace image {

class MultiResolutionCachedImage : public ::java::awt::image::AbstractMultiResolutionImage {
	$class(MultiResolutionCachedImage, $NO_CLASS_INIT, ::java::awt::image::AbstractMultiResolutionImage)
public:
	MultiResolutionCachedImage();
	void init$(int32_t baseImageWidth, int32_t baseImageHeight, ::java::util::function::BiFunction* mapper);
	void init$(int32_t baseImageWidth, int32_t baseImageHeight, $Array<::java::awt::geom::Dimension2D>* sizes, ::java::util::function::BiFunction* mapper);
	void init$(int32_t baseImageWidth, int32_t baseImageHeight, $Array<::java::awt::geom::Dimension2D>* sizes, ::java::util::function::BiFunction* mapper, bool copySizes);
	static void checkSize(double width, double height);
	virtual ::java::awt::Image* getBaseImage() override;
	virtual int32_t getHeight(::java::awt::image::ImageObserver* observer) override;
	static int32_t getInfo(::java::awt::Image* image);
	virtual $Object* getProperty($String* name, ::java::awt::image::ImageObserver* observer) override;
	virtual ::java::awt::Image* getResolutionVariant(double destWidth, double destHeight) override;
	virtual ::java::util::List* getResolutionVariants() override;
	virtual ::java::awt::Image* getScaledInstance(int32_t width, int32_t height, int32_t hints) override;
	virtual int32_t getWidth(::java::awt::image::ImageObserver* observer) override;
	static bool lambda$getInfo$3(::java::awt::Image* img, int32_t infoflags, int32_t x, int32_t y, int32_t w, int32_t h);
	::java::awt::Image* lambda$getResolutionVariants$0(::java::awt::geom::Dimension2D* size);
	::java::awt::Image* lambda$map$1(::java::util::function::Function* mapper, ::java::lang::Integer* width, ::java::lang::Integer* height);
	static ::java::awt::Image* lambda$map$2(::java::util::function::Function* mapper, ::java::awt::image::MultiResolutionImage* mrImage, ::java::lang::Integer* w, ::java::lang::Integer* h);
	virtual ::sun::awt::image::MultiResolutionCachedImage* map(::java::util::function::Function* mapper);
	static ::java::awt::Image* map(::java::awt::image::MultiResolutionImage* mrImage, ::java::util::function::Function* mapper);
	static void preload(::java::awt::Image* image, int32_t availableInfo);
	void updateInfo(::java::awt::image::ImageObserver* observer, int32_t info);
	int32_t baseImageWidth = 0;
	int32_t baseImageHeight = 0;
	$Array<::java::awt::geom::Dimension2D>* sizes = nullptr;
	::java::util::function::BiFunction* mapper = nullptr;
	int32_t availableInfo = 0;
};

		} // image
	} // awt
} // sun

#endif // _sun_awt_image_MultiResolutionCachedImage_h_