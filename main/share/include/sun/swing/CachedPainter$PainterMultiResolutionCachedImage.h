#ifndef _sun_swing_CachedPainter$PainterMultiResolutionCachedImage_h_
#define _sun_swing_CachedPainter$PainterMultiResolutionCachedImage_h_
//$ class sun.swing.CachedPainter$PainterMultiResolutionCachedImage
//$ extends java.awt.image.AbstractMultiResolutionImage

#include <java/awt/image/AbstractMultiResolutionImage.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Component;
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
namespace sun {
	namespace swing {
		class CachedPainter;
	}
}

namespace sun {
	namespace swing {

class $import CachedPainter$PainterMultiResolutionCachedImage : public ::java::awt::image::AbstractMultiResolutionImage {
	$class(CachedPainter$PainterMultiResolutionCachedImage, $NO_CLASS_INIT, ::java::awt::image::AbstractMultiResolutionImage)
public:
	CachedPainter$PainterMultiResolutionCachedImage();
	void init$(::sun::swing::CachedPainter* this$0, int32_t baseWidth, int32_t baseHeight);
	virtual ::java::awt::Image* getBaseImage() override;
	virtual int32_t getHeight(::java::awt::image::ImageObserver* observer) override;
	virtual ::java::awt::Image* getResolutionVariant(double destWidth, double destHeight) override;
	virtual ::java::util::List* getResolutionVariants() override;
	virtual int32_t getWidth(::java::awt::image::ImageObserver* observer) override;
	virtual void setParams(::java::awt::Component* c, $ObjectArray* args);
	::sun::swing::CachedPainter* this$0 = nullptr;
	int32_t baseWidth = 0;
	int32_t baseHeight = 0;
	::java::awt::Component* c = nullptr;
	$ObjectArray* args = nullptr;
};

	} // swing
} // sun

#endif // _sun_swing_CachedPainter$PainterMultiResolutionCachedImage_h_