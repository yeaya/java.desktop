#ifndef _java_awt_image_BufferedImageFilter_h_
#define _java_awt_image_BufferedImageFilter_h_
//$ class java.awt.image.BufferedImageFilter
//$ extends java.awt.image.ImageFilter

#include <java/awt/image/ImageFilter.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		namespace image {
			class BufferedImageOp;
			class ColorModel;
			class WritableRaster;
		}
	}
}

namespace java {
	namespace awt {
		namespace image {

class $import BufferedImageFilter : public ::java::awt::image::ImageFilter {
	$class(BufferedImageFilter, $NO_CLASS_INIT, ::java::awt::image::ImageFilter)
public:
	BufferedImageFilter();
	void init$(::java::awt::image::BufferedImageOp* op);
	void convertToRGB();
	::java::awt::image::WritableRaster* createDCMraster();
	virtual ::java::awt::image::BufferedImageOp* getBufferedImageOp();
	virtual void imageComplete(int32_t status) override;
	virtual void setColorModel(::java::awt::image::ColorModel* model) override;
	virtual void setDimensions(int32_t width, int32_t height) override;
	virtual void setPixels(int32_t x, int32_t y, int32_t w, int32_t h, ::java::awt::image::ColorModel* model, $bytes* pixels, int32_t off, int32_t scansize) override;
	virtual void setPixels(int32_t x, int32_t y, int32_t w, int32_t h, ::java::awt::image::ColorModel* model, $ints* pixels, int32_t off, int32_t scansize) override;
	::java::awt::image::BufferedImageOp* bufferedImageOp = nullptr;
	::java::awt::image::ColorModel* model = nullptr;
	int32_t width = 0;
	int32_t height = 0;
	$bytes* bytePixels = nullptr;
	$ints* intPixels = nullptr;
};

		} // image
	} // awt
} // java

#endif // _java_awt_image_BufferedImageFilter_h_