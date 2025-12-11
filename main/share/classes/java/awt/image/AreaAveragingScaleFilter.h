#ifndef _java_awt_image_AreaAveragingScaleFilter_h_
#define _java_awt_image_AreaAveragingScaleFilter_h_
//$ class java.awt.image.AreaAveragingScaleFilter
//$ extends java.awt.image.ReplicateScaleFilter

#include <java/awt/image/ImageConsumer.h>
#include <java/awt/image/ReplicateScaleFilter.h>
#include <java/lang/Array.h>

#pragma push_macro("COMPLETESCANLINES")
#undef COMPLETESCANLINES
#pragma push_macro("TOPDOWNLEFTRIGHT")
#undef TOPDOWNLEFTRIGHT

namespace java {
	namespace awt {
		namespace image {
			class ColorModel;
		}
	}
}

namespace java {
	namespace awt {
		namespace image {

class $export AreaAveragingScaleFilter : public ::java::awt::image::ReplicateScaleFilter {
	$class(AreaAveragingScaleFilter, 0, ::java::awt::image::ReplicateScaleFilter)
public:
	AreaAveragingScaleFilter();
	void init$(int32_t width, int32_t height);
	void accumPixels(int32_t x, int32_t y, int32_t w, int32_t h, ::java::awt::image::ColorModel* model, Object$* pixels, int32_t off, int32_t scansize);
	$ints* calcRow();
	void makeAccumBuffers();
	virtual void setHints(int32_t hints) override;
	virtual void setPixels(int32_t x, int32_t y, int32_t w, int32_t h, ::java::awt::image::ColorModel* model, $bytes* pixels, int32_t off, int32_t scansize) override;
	virtual void setPixels(int32_t x, int32_t y, int32_t w, int32_t h, ::java::awt::image::ColorModel* model, $ints* pixels, int32_t off, int32_t scansize) override;
	static ::java::awt::image::ColorModel* rgbmodel;
	static const int32_t neededHints = 6; // (TOPDOWNLEFTRIGHT | COMPLETESCANLINES)
	bool passthrough = false;
	$floats* reds = nullptr;
	$floats* greens = nullptr;
	$floats* blues = nullptr;
	$floats* alphas = nullptr;
	int32_t savedy = 0;
	int32_t savedyrem = 0;
};

		} // image
	} // awt
} // java

#pragma pop_macro("COMPLETESCANLINES")
#pragma pop_macro("TOPDOWNLEFTRIGHT")

#endif // _java_awt_image_AreaAveragingScaleFilter_h_