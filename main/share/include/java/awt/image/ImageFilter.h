#ifndef _java_awt_image_ImageFilter_h_
#define _java_awt_image_ImageFilter_h_
//$ class java.awt.image.ImageFilter
//$ extends java.awt.image.ImageConsumer
//$ implements java.lang.Cloneable

#include <java/awt/image/ImageConsumer.h>
#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

namespace java {
	namespace awt {
		namespace image {
			class ColorModel;
			class ImageProducer;
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

class $import ImageFilter : public ::java::awt::image::ImageConsumer, public ::java::lang::Cloneable {
	$class(ImageFilter, $NO_CLASS_INIT, ::java::awt::image::ImageConsumer, ::java::lang::Cloneable)
public:
	ImageFilter();
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual $Object* clone() override;
	virtual ::java::awt::image::ImageFilter* getFilterInstance(::java::awt::image::ImageConsumer* ic);
	virtual void imageComplete(int32_t status) override;
	virtual void resendTopDownLeftRight(::java::awt::image::ImageProducer* ip);
	virtual void setColorModel(::java::awt::image::ColorModel* model) override;
	virtual void setDimensions(int32_t width, int32_t height) override;
	virtual void setHints(int32_t hints) override;
	virtual void setPixels(int32_t x, int32_t y, int32_t w, int32_t h, ::java::awt::image::ColorModel* model, $bytes* pixels, int32_t off, int32_t scansize) override;
	virtual void setPixels(int32_t x, int32_t y, int32_t w, int32_t h, ::java::awt::image::ColorModel* model, $ints* pixels, int32_t off, int32_t scansize) override;
	virtual void setProperties(::java::util::Hashtable* props) override;
	virtual $String* toString() override;
	::java::awt::image::ImageConsumer* consumer = nullptr;
};

		} // image
	} // awt
} // java

#endif // _java_awt_image_ImageFilter_h_