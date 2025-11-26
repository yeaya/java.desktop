#ifndef _java_awt_image_ComponentColorModel_h_
#define _java_awt_image_ComponentColorModel_h_
//$ class java.awt.image.ComponentColorModel
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
			class Raster;
			class SampleModel;
			class WritableRaster;
		}
	}
}

namespace java {
	namespace awt {
		namespace image {

class $export ComponentColorModel : public ::java::awt::image::ColorModel {
	$class(ComponentColorModel, $NO_CLASS_INIT, ::java::awt::image::ColorModel)
public:
	ComponentColorModel();
	void init$(::java::awt::color::ColorSpace* colorSpace, $ints* bits, bool hasAlpha, bool isAlphaPremultiplied, int32_t transparency, int32_t transferType);
	void init$(::java::awt::color::ColorSpace* colorSpace, bool hasAlpha, bool isAlphaPremultiplied, int32_t transparency, int32_t transferType);
	static $ints* bitsArrayHelper($ints* origBits, int32_t transferType, ::java::awt::color::ColorSpace* colorSpace, bool hasAlpha);
	static int32_t bitsHelper(int32_t transferType, ::java::awt::color::ColorSpace* colorSpace, bool hasAlpha);
	virtual ::java::awt::image::ColorModel* coerceData(::java::awt::image::WritableRaster* raster, bool isAlphaPremultiplied) override;
	virtual ::java::awt::image::SampleModel* createCompatibleSampleModel(int32_t w, int32_t h) override;
	virtual ::java::awt::image::WritableRaster* createCompatibleWritableRaster(int32_t w, int32_t h) override;
	virtual bool equals(Object$* obj) override;
	int32_t extractComponent(Object$* inData, int32_t idx, int32_t precision);
	virtual int32_t getAlpha(int32_t pixel) override;
	virtual int32_t getAlpha(Object$* inData) override;
	virtual ::java::awt::image::WritableRaster* getAlphaRaster(::java::awt::image::WritableRaster* raster) override;
	virtual int32_t getBlue(int32_t pixel) override;
	virtual int32_t getBlue(Object$* inData) override;
	virtual $ints* getComponents(int32_t pixel, $ints* components, int32_t offset) override;
	virtual $ints* getComponents(Object$* pixel, $ints* components, int32_t offset) override;
	virtual int32_t getDataElement($ints* components, int32_t offset) override;
	virtual int32_t getDataElement($floats* normComponents, int32_t normOffset) override;
	virtual $Object* getDataElements(int32_t rgb, Object$* pixel) override;
	virtual $Object* getDataElements($ints* components, int32_t offset, Object$* obj) override;
	virtual $Object* getDataElements($floats* normComponents, int32_t normOffset, Object$* obj) override;
	virtual int32_t getGreen(int32_t pixel) override;
	virtual int32_t getGreen(Object$* inData) override;
	virtual $floats* getNormalizedComponents($ints* components, int32_t offset, $floats* normComponents, int32_t normOffset) override;
	virtual $floats* getNormalizedComponents(Object$* pixel, $floats* normComponents, int32_t normOffset) override;
	virtual int32_t getRGB(int32_t pixel) override;
	virtual int32_t getRGB(Object$* inData) override;
	int32_t getRGBComponent(int32_t pixel, int32_t idx);
	int32_t getRGBComponent(Object$* inData, int32_t idx);
	virtual int32_t getRed(int32_t pixel) override;
	virtual int32_t getRed(Object$* inData) override;
	virtual $ints* getUnnormalizedComponents($floats* normComponents, int32_t normOffset, $ints* components, int32_t offset) override;
	virtual int32_t hashCode() override;
	void initScale();
	virtual bool isCompatibleRaster(::java::awt::image::Raster* raster) override;
	virtual bool isCompatibleSampleModel(::java::awt::image::SampleModel* sm) override;
	void setupLUTs();
	bool signed$ = false;
	bool is_sRGB_stdScale = false;
	bool is_LinearRGB_stdScale = false;
	bool is_LinearGray_stdScale = false;
	bool is_ICCGray_stdScale = false;
	$bytes* tosRGB8LUT = nullptr;
	$bytes* fromsRGB8LUT8 = nullptr;
	$shorts* fromsRGB8LUT16 = nullptr;
	$bytes* fromLinearGray16ToOtherGray8LUT = nullptr;
	$shorts* fromLinearGray16ToOtherGray16LUT = nullptr;
	bool needScaleInit = false;
	bool noUnnorm = false;
	bool nonStdScale = false;
	$floats* min = nullptr;
	$floats* diffMinMax = nullptr;
	$floats* compOffset = nullptr;
	$floats* compScale = nullptr;
	$volatile(int32_t) hashCode$ = 0;
};

		} // image
	} // awt
} // java

#endif // _java_awt_image_ComponentColorModel_h_