#ifndef _java_awt_image_RGBImageFilter_h_
#define _java_awt_image_RGBImageFilter_h_
//$ class java.awt.image.RGBImageFilter
//$ extends java.awt.image.ImageFilter

#include <java/awt/image/ImageFilter.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		namespace image {
			class ColorModel;
			class IndexColorModel;
		}
	}
}

namespace java {
	namespace awt {
		namespace image {

class $import RGBImageFilter : public ::java::awt::image::ImageFilter {
	$class(RGBImageFilter, $NO_CLASS_INIT, ::java::awt::image::ImageFilter)
public:
	RGBImageFilter();
	void init$();
	virtual ::java::awt::image::IndexColorModel* filterIndexColorModel(::java::awt::image::IndexColorModel* icm);
	virtual int32_t filterRGB(int32_t x, int32_t y, int32_t rgb) {return 0;}
	virtual void filterRGBPixels(int32_t x, int32_t y, int32_t w, int32_t h, $ints* pixels, int32_t off, int32_t scansize);
	virtual void setColorModel(::java::awt::image::ColorModel* model) override;
	virtual void setPixels(int32_t x, int32_t y, int32_t w, int32_t h, ::java::awt::image::ColorModel* model, $bytes* pixels, int32_t off, int32_t scansize) override;
	virtual void setPixels(int32_t x, int32_t y, int32_t w, int32_t h, ::java::awt::image::ColorModel* model, $ints* pixels, int32_t off, int32_t scansize) override;
	virtual void substituteColorModel(::java::awt::image::ColorModel* oldcm, ::java::awt::image::ColorModel* newcm);
	::java::awt::image::ColorModel* origmodel = nullptr;
	::java::awt::image::ColorModel* newmodel = nullptr;
	bool canFilterIndexColorModel = false;
};

		} // image
	} // awt
} // java

#endif // _java_awt_image_RGBImageFilter_h_