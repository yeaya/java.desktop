#ifndef _java_awt_image_ReplicateScaleFilter_h_
#define _java_awt_image_ReplicateScaleFilter_h_
//$ class java.awt.image.ReplicateScaleFilter
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

class $import ReplicateScaleFilter : public ::java::awt::image::ImageFilter {
	$class(ReplicateScaleFilter, $NO_CLASS_INIT, ::java::awt::image::ImageFilter)
public:
	ReplicateScaleFilter();
	void init$(int32_t width, int32_t height);
	void calculateMaps();
	virtual void setDimensions(int32_t w, int32_t h) override;
	virtual void setPixels(int32_t x, int32_t y, int32_t w, int32_t h, ::java::awt::image::ColorModel* model, $bytes* pixels, int32_t off, int32_t scansize) override;
	virtual void setPixels(int32_t x, int32_t y, int32_t w, int32_t h, ::java::awt::image::ColorModel* model, $ints* pixels, int32_t off, int32_t scansize) override;
	virtual void setProperties(::java::util::Hashtable* props) override;
	int32_t srcWidth = 0;
	int32_t srcHeight = 0;
	int32_t destWidth = 0;
	int32_t destHeight = 0;
	$ints* srcrows = nullptr;
	$ints* srccols = nullptr;
	$Object* outpixbuf = nullptr;
};

		} // image
	} // awt
} // java

#endif // _java_awt_image_ReplicateScaleFilter_h_