#ifndef _java_awt_image_PackedColorModel_h_
#define _java_awt_image_PackedColorModel_h_
//$ class java.awt.image.PackedColorModel
//$ extends java.awt.image.ColorModel

#include <java/awt/image/ColorModel.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		namespace color {
			class ColorSpace;
		}
	}
}
namespace java {
	namespace awt {
		namespace image {
			class SampleModel;
			class WritableRaster;
		}
	}
}

namespace java {
	namespace awt {
		namespace image {

class $import PackedColorModel : public ::java::awt::image::ColorModel {
	$class(PackedColorModel, $NO_CLASS_INIT, ::java::awt::image::ColorModel)
public:
	PackedColorModel();
	void init$(::java::awt::color::ColorSpace* space, int32_t bits, $ints* colorMaskArray, int32_t alphaMask, bool isAlphaPremultiplied, int32_t trans, int32_t transferType);
	void init$(::java::awt::color::ColorSpace* space, int32_t bits, int32_t rmask, int32_t gmask, int32_t bmask, int32_t amask, bool isAlphaPremultiplied, int32_t trans, int32_t transferType);
	void DecomposeMask(int32_t mask, int32_t idx, $String* componentName);
	static int32_t countBits(int32_t mask);
	static $ints* createBitsArray($ints* colorMaskArray, int32_t alphaMask);
	static $ints* createBitsArray(int32_t rmask, int32_t gmask, int32_t bmask, int32_t amask);
	virtual ::java::awt::image::SampleModel* createCompatibleSampleModel(int32_t w, int32_t h) override;
	virtual bool equals(Object$* obj) override;
	virtual ::java::awt::image::WritableRaster* getAlphaRaster(::java::awt::image::WritableRaster* raster) override;
	int32_t getMask(int32_t index);
	$ints* getMasks();
	virtual int32_t hashCode() override;
	virtual bool isCompatibleSampleModel(::java::awt::image::SampleModel* sm) override;
	$ints* maskArray = nullptr;
	$ints* maskOffsets = nullptr;
	$floats* scaleFactors = nullptr;
	$volatile(int32_t) hashCode$ = 0;
};

		} // image
	} // awt
} // java

#endif // _java_awt_image_PackedColorModel_h_