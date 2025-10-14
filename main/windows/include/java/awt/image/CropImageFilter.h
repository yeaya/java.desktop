#ifndef _java_awt_image_CropImageFilter_h_
#define _java_awt_image_CropImageFilter_h_
//$ class java.awt.image.CropImageFilter
//$ extends java.awt.image.ImageFilter

#include <java/awt/image/ImageFilter.h>
#include <java/lang/Array.h>

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

class $import CropImageFilter : public ::java::awt::image::ImageFilter {
	$class(CropImageFilter, $NO_CLASS_INIT, ::java::awt::image::ImageFilter)
public:
	CropImageFilter();
	void init$(int32_t x, int32_t y, int32_t w, int32_t h);
	int32_t addWithoutOverflow(int32_t x, int32_t w);
	virtual void setDimensions(int32_t w, int32_t h) override;
	virtual void setPixels(int32_t x, int32_t y, int32_t w, int32_t h, ::java::awt::image::ColorModel* model, $bytes* pixels, int32_t off, int32_t scansize) override;
	virtual void setPixels(int32_t x, int32_t y, int32_t w, int32_t h, ::java::awt::image::ColorModel* model, $ints* pixels, int32_t off, int32_t scansize) override;
	virtual void setProperties(::java::util::Hashtable* props) override;
	int32_t cropX = 0;
	int32_t cropY = 0;
	int32_t cropW = 0;
	int32_t cropH = 0;
};

		} // image
	} // awt
} // java

#endif // _java_awt_image_CropImageFilter_h_