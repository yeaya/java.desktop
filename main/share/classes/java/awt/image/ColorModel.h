#ifndef _java_awt_image_ColorModel_h_
#define _java_awt_image_ColorModel_h_
//$ class java.awt.image.ColorModel
//$ extends java.awt.Transparency

#include <java/awt/Transparency.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		namespace color {
			class ColorSpace;
			class ICC_ColorSpace;
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
	namespace util {
		class Map;
	}
}

namespace java {
	namespace awt {
		namespace image {

class $export ColorModel : public ::java::awt::Transparency {
	$class(ColorModel, $HAS_FINALIZE, ::java::awt::Transparency)
public:
	ColorModel();
	void init$(int32_t bits);
	void init$(int32_t pixel_bits, $ints* bits, ::java::awt::color::ColorSpace* cspace, bool hasAlpha, bool isAlphaPremultiplied, int32_t transparency, int32_t transferType);
	virtual ::java::awt::image::ColorModel* coerceData(::java::awt::image::WritableRaster* raster, bool isAlphaPremultiplied);
	virtual ::java::awt::image::SampleModel* createCompatibleSampleModel(int32_t w, int32_t h);
	virtual ::java::awt::image::WritableRaster* createCompatibleWritableRaster(int32_t w, int32_t h);
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t getAlpha(int32_t pixel) {return 0;}
	virtual int32_t getAlpha(Object$* inData);
	virtual ::java::awt::image::WritableRaster* getAlphaRaster(::java::awt::image::WritableRaster* raster);
	virtual int32_t getBlue(int32_t pixel) {return 0;}
	virtual int32_t getBlue(Object$* inData);
	::java::awt::color::ColorSpace* getColorSpace();
	virtual int32_t getComponentSize(int32_t componentIdx);
	virtual $ints* getComponentSize();
	virtual $ints* getComponents(int32_t pixel, $ints* components, int32_t offset);
	virtual $ints* getComponents(Object$* pixel, $ints* components, int32_t offset);
	virtual int32_t getDataElement($ints* components, int32_t offset);
	virtual int32_t getDataElement($floats* normComponents, int32_t normOffset);
	virtual $Object* getDataElements(int32_t rgb, Object$* pixel);
	virtual $Object* getDataElements($ints* components, int32_t offset, Object$* obj);
	virtual $Object* getDataElements($floats* normComponents, int32_t normOffset, Object$* obj);
	static int32_t getDefaultTransferType(int32_t pixel_bits);
	static $bytes* getGray16TosRGB8LUT(::java::awt::color::ICC_ColorSpace* grayCS);
	static $bytes* getGray8TosRGB8LUT(::java::awt::color::ICC_ColorSpace* grayCS);
	virtual int32_t getGreen(int32_t pixel) {return 0;}
	virtual int32_t getGreen(Object$* inData);
	static $shorts* getLinearGray16ToOtherGray16LUT(::java::awt::color::ICC_ColorSpace* grayCS);
	static $bytes* getLinearGray16ToOtherGray8LUT(::java::awt::color::ICC_ColorSpace* grayCS);
	static $bytes* getLinearRGB16TosRGB8LUT();
	static $bytes* getLinearRGB8TosRGB8LUT();
	virtual $floats* getNormalizedComponents($ints* components, int32_t offset, $floats* normComponents, int32_t normOffset);
	virtual $floats* getNormalizedComponents(Object$* pixel, $floats* normComponents, int32_t normOffset);
	virtual int32_t getNumColorComponents();
	virtual int32_t getNumComponents();
	virtual int32_t getPixelSize();
	virtual int32_t getRGB(int32_t pixel);
	virtual int32_t getRGB(Object$* inData);
	static ::java::awt::image::ColorModel* getRGBdefault();
	virtual int32_t getRed(int32_t pixel) {return 0;}
	virtual int32_t getRed(Object$* inData);
	int32_t getTransferType();
	virtual int32_t getTransparency() override;
	virtual $ints* getUnnormalizedComponents($floats* normComponents, int32_t normOffset, $ints* components, int32_t offset);
	static $shorts* getsRGB8ToLinearRGB16LUT();
	static $bytes* getsRGB8ToLinearRGB8LUT();
	bool hasAlpha();
	virtual int32_t hashCode() override;
	static void initIDs();
	bool isAlphaPremultiplied();
	virtual bool isCompatibleRaster(::java::awt::image::Raster* raster);
	virtual bool isCompatibleSampleModel(::java::awt::image::SampleModel* sm);
	static bool isLinearGRAYspace(::java::awt::color::ColorSpace* cs);
	static bool isLinearRGBspace(::java::awt::color::ColorSpace* cs);
	static void loadLibraries();
	virtual $String* toString() override;
	int64_t pData = 0;
	int32_t pixel_bits = 0;
	$ints* nBits = nullptr;
	int32_t transparency = 0;
	bool supportsAlpha = false;
	bool isAlphaPremultiplied$ = false;
	int32_t numComponents = 0;
	int32_t numColorComponents = 0;
	::java::awt::color::ColorSpace* colorSpace = nullptr;
	int32_t colorSpaceType = 0;
	int32_t maxBits = 0;
	bool is_sRGB = false;
	int32_t transferType = 0;
	static bool loaded;
	static ::java::awt::image::ColorModel* RGBdefault;
	static $bytes* l8Tos8;
	static $bytes* s8Tol8;
	static $bytes* l16Tos8;
	static $shorts* s8Tol16;
	static ::java::util::Map* g8Tos8Map;
	static ::java::util::Map* lg16Toog8Map;
	static ::java::util::Map* g16Tos8Map;
	static ::java::util::Map* lg16Toog16Map;
};

		} // image
	} // awt
} // java

#endif // _java_awt_image_ColorModel_h_