#ifndef _java_awt_image_DirectColorModel_h_
#define _java_awt_image_DirectColorModel_h_
//$ class java.awt.image.DirectColorModel
//$ extends java.awt.image.PackedColorModel

#include <java/awt/image/PackedColorModel.h>
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
			class ColorModel;
			class Raster;
			class WritableRaster;
		}
	}
}

namespace java {
	namespace awt {
		namespace image {

class $import DirectColorModel : public ::java::awt::image::PackedColorModel {
	$class(DirectColorModel, $NO_CLASS_INIT, ::java::awt::image::PackedColorModel)
public:
	DirectColorModel();
	using ::java::awt::image::PackedColorModel::getDataElement;
	using ::java::awt::image::PackedColorModel::getDataElements;
	void init$(int32_t bits, int32_t rmask, int32_t gmask, int32_t bmask);
	void init$(int32_t bits, int32_t rmask, int32_t gmask, int32_t bmask, int32_t amask);
	void init$(::java::awt::color::ColorSpace* space, int32_t bits, int32_t rmask, int32_t gmask, int32_t bmask, int32_t amask, bool isAlphaPremultiplied, int32_t transferType);
	virtual ::java::awt::image::ColorModel* coerceData(::java::awt::image::WritableRaster* raster, bool isAlphaPremultiplied) override;
	virtual ::java::awt::image::WritableRaster* createCompatibleWritableRaster(int32_t w, int32_t h) override;
	virtual int32_t getAlpha(int32_t pixel) override;
	virtual int32_t getAlpha(Object$* inData) override;
	int32_t getAlphaMask();
	virtual int32_t getBlue(int32_t pixel) override;
	virtual int32_t getBlue(Object$* inData) override;
	int32_t getBlueMask();
	virtual $ints* getComponents(int32_t pixel, $ints* components, int32_t offset) override;
	virtual $ints* getComponents(Object$* pixel, $ints* components, int32_t offset) override;
	virtual int32_t getDataElement($ints* components, int32_t offset) override;
	virtual $Object* getDataElements(int32_t rgb, Object$* pixel) override;
	virtual $Object* getDataElements($ints* components, int32_t offset, Object$* obj) override;
	$floats* getDefaultRGBComponents(int32_t pixel);
	virtual int32_t getGreen(int32_t pixel) override;
	virtual int32_t getGreen(Object$* inData) override;
	int32_t getGreenMask();
	virtual int32_t getRGB(int32_t pixel) override;
	virtual int32_t getRGB(Object$* inData) override;
	virtual int32_t getRed(int32_t pixel) override;
	virtual int32_t getRed(Object$* inData) override;
	int32_t getRedMask();
	int32_t getsRGBComponentFromLinearRGB(int32_t pixel, int32_t idx);
	int32_t getsRGBComponentFromsRGB(int32_t pixel, int32_t idx);
	virtual bool isCompatibleRaster(::java::awt::image::Raster* raster) override;
	void setFields();
	virtual $String* toString() override;
	int32_t red_mask = 0;
	int32_t green_mask = 0;
	int32_t blue_mask = 0;
	int32_t alpha_mask = 0;
	int32_t red_offset = 0;
	int32_t green_offset = 0;
	int32_t blue_offset = 0;
	int32_t alpha_offset = 0;
	int32_t red_scale = 0;
	int32_t green_scale = 0;
	int32_t blue_scale = 0;
	int32_t alpha_scale = 0;
	bool is_LinearRGB = false;
	int32_t lRGBprecision = 0;
	$bytes* tosRGB8LUT = nullptr;
	$bytes* fromsRGB8LUT8 = nullptr;
	$shorts* fromsRGB8LUT16 = nullptr;
};

		} // image
	} // awt
} // java

#endif // _java_awt_image_DirectColorModel_h_