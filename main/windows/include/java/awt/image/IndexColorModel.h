#ifndef _java_awt_image_IndexColorModel_h_
#define _java_awt_image_IndexColorModel_h_
//$ class java.awt.image.IndexColorModel
//$ extends java.awt.image.ColorModel

#include <java/awt/image/ColorModel.h>
#include <java/lang/Array.h>

#pragma push_macro("CACHESIZE")
#undef CACHESIZE

namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
			class Raster;
			class SampleModel;
			class WritableRaster;
		}
	}
}
namespace java {
	namespace math {
		class BigInteger;
	}
}
namespace sun {
	namespace awt {
		namespace image {
			class BufImgSurfaceData$ICMColorData;
		}
	}
}

namespace java {
	namespace awt {
		namespace image {

class $import IndexColorModel : public ::java::awt::image::ColorModel {
	$class(IndexColorModel, $HAS_FINALIZE, ::java::awt::image::ColorModel)
public:
	IndexColorModel();
	using ::java::awt::image::ColorModel::getComponentSize;
	using ::java::awt::image::ColorModel::getRed;
	using ::java::awt::image::ColorModel::getGreen;
	using ::java::awt::image::ColorModel::getBlue;
	using ::java::awt::image::ColorModel::getAlpha;
	using ::java::awt::image::ColorModel::getRGB;
	using ::java::awt::image::ColorModel::getDataElement;
	using ::java::awt::image::ColorModel::getDataElements;
	void init$(int32_t bits, int32_t size, $bytes* r, $bytes* g, $bytes* b);
	void init$(int32_t bits, int32_t size, $bytes* r, $bytes* g, $bytes* b, int32_t trans);
	void init$(int32_t bits, int32_t size, $bytes* r, $bytes* g, $bytes* b, $bytes* a);
	void init$(int32_t bits, int32_t size, $bytes* cmap, int32_t start, bool hasalpha);
	void init$(int32_t bits, int32_t size, $bytes* cmap, int32_t start, bool hasalpha, int32_t trans);
	void init$(int32_t bits, int32_t size, $ints* cmap, int32_t start, bool hasalpha, int32_t trans, int32_t transferType);
	void init$(int32_t bits, int32_t size, $ints* cmap, int32_t start, int32_t transferType, ::java::math::BigInteger* validBits);
	int32_t calcRealMapSize(int32_t bits, int32_t size);
	void calculatePixelMask();
	virtual ::java::awt::image::BufferedImage* convertToIntDiscrete(::java::awt::image::Raster* raster, bool forceARGB);
	virtual ::java::awt::image::SampleModel* createCompatibleSampleModel(int32_t w, int32_t h) override;
	virtual ::java::awt::image::WritableRaster* createCompatibleWritableRaster(int32_t w, int32_t h) override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	::java::math::BigInteger* getAllValid();
	virtual int32_t getAlpha(int32_t pixel) override;
	void getAlphas($bytes* a);
	virtual int32_t getBlue(int32_t pixel) override;
	void getBlues($bytes* b);
	virtual $ints* getComponentSize() override;
	virtual $ints* getComponents(int32_t pixel, $ints* components, int32_t offset) override;
	virtual $ints* getComponents(Object$* pixel, $ints* components, int32_t offset) override;
	virtual int32_t getDataElement($ints* components, int32_t offset) override;
	virtual $Object* getDataElements(int32_t rgb, Object$* pixel) override;
	virtual $Object* getDataElements($ints* components, int32_t offset, Object$* pixel) override;
	virtual int32_t getGreen(int32_t pixel) override;
	void getGreens($bytes* g);
	int32_t getMapSize();
	virtual int32_t getRGB(int32_t pixel) override;
	void getRGBs($ints* rgb);
	virtual int32_t getRed(int32_t pixel) override;
	void getReds($bytes* r);
	virtual int32_t getTransparency() override;
	int32_t getTransparentPixel();
	virtual ::java::math::BigInteger* getValidPixels();
	virtual int32_t hashCode() override;
	static void initIDs();
	$Object* installpixel(Object$* pixel, int32_t pix);
	virtual bool isCompatibleRaster(::java::awt::image::Raster* raster) override;
	virtual bool isCompatibleSampleModel(::java::awt::image::SampleModel* sm) override;
	virtual bool isValid(int32_t pixel);
	virtual bool isValid();
	void setRGBs(int32_t size, $bytes* r, $bytes* g, $bytes* b, $bytes* a);
	void setRGBs(int32_t size, $ints* cmap, int32_t start, bool hasalpha);
	void setTransparency(int32_t transparency);
	void setTransparentPixel(int32_t trans);
	virtual $String* toString() override;
	$ints* rgb = nullptr;
	int32_t map_size = 0;
	int32_t pixel_mask = 0;
	int32_t transparent_index = 0;
	bool allgrayopaque = false;
	::java::math::BigInteger* validBits = nullptr;
	$volatile(int32_t) hashCode$ = 0;
	::sun::awt::image::BufImgSurfaceData$ICMColorData* colorData = nullptr;
	static $ints* opaqueBits;
	static $ints* alphaBits;
	static const int32_t CACHESIZE = 40;
	$ints* lookupcache = nullptr;
};

		} // image
	} // awt
} // java

#pragma pop_macro("CACHESIZE")

#endif // _java_awt_image_IndexColorModel_h_