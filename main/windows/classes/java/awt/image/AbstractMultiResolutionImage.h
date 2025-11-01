#ifndef _java_awt_image_AbstractMultiResolutionImage_h_
#define _java_awt_image_AbstractMultiResolutionImage_h_
//$ class java.awt.image.AbstractMultiResolutionImage
//$ extends java.awt.Image
//$ implements java.awt.image.MultiResolutionImage

#include <java/awt/Image.h>
#include <java/awt/image/MultiResolutionImage.h>

namespace java {
	namespace awt {
		class Graphics;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class ImageObserver;
			class ImageProducer;
		}
	}
}

namespace java {
	namespace awt {
		namespace image {

class $export AbstractMultiResolutionImage : public ::java::awt::Image, public ::java::awt::image::MultiResolutionImage {
	$class(AbstractMultiResolutionImage, $NO_CLASS_INIT, ::java::awt::Image, ::java::awt::image::MultiResolutionImage)
public:
	AbstractMultiResolutionImage();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual ::java::awt::Image* getBaseImage() {return nullptr;}
	virtual ::java::awt::Graphics* getGraphics() override;
	virtual int32_t getHeight(::java::awt::image::ImageObserver* observer) override;
	virtual $Object* getProperty($String* name, ::java::awt::image::ImageObserver* observer) override;
	virtual ::java::awt::image::ImageProducer* getSource() override;
	virtual int32_t getWidth(::java::awt::image::ImageObserver* observer) override;
	virtual $String* toString() override;
};

		} // image
	} // awt
} // java

#endif // _java_awt_image_AbstractMultiResolutionImage_h_