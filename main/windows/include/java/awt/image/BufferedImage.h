#ifndef _java_awt_image_BufferedImage_h_
#define _java_awt_image_BufferedImage_h_
//$ class java.awt.image.BufferedImage
//$ extends java.awt.Image
//$ implements java.awt.image.WritableRenderedImage,java.awt.Transparency

#include <java/awt/Image.h>
#include <java/awt/Transparency.h>
#include <java/awt/image/WritableRenderedImage.h>
#include <java/lang/Array.h>

#pragma push_macro("DCM_555_BLU_MASK")
#undef DCM_555_BLU_MASK
#pragma push_macro("DCM_555_GRN_MASK")
#undef DCM_555_GRN_MASK
#pragma push_macro("DCM_555_RED_MASK")
#undef DCM_555_RED_MASK
#pragma push_macro("DCM_565_BLU_MASK")
#undef DCM_565_BLU_MASK
#pragma push_macro("DCM_565_GRN_MASK")
#undef DCM_565_GRN_MASK
#pragma push_macro("DCM_565_RED_MASK")
#undef DCM_565_RED_MASK
#pragma push_macro("DCM_ALPHA_MASK")
#undef DCM_ALPHA_MASK
#pragma push_macro("DCM_BGR_BLU_MASK")
#undef DCM_BGR_BLU_MASK
#pragma push_macro("DCM_BGR_GRN_MASK")
#undef DCM_BGR_GRN_MASK
#pragma push_macro("DCM_BGR_RED_MASK")
#undef DCM_BGR_RED_MASK
#pragma push_macro("DCM_BLUE_MASK")
#undef DCM_BLUE_MASK
#pragma push_macro("DCM_GREEN_MASK")
#undef DCM_GREEN_MASK
#pragma push_macro("DCM_RED_MASK")
#undef DCM_RED_MASK
#pragma push_macro("TYPE_3BYTE_BGR")
#undef TYPE_3BYTE_BGR
#pragma push_macro("TYPE_4BYTE_ABGR")
#undef TYPE_4BYTE_ABGR
#pragma push_macro("TYPE_4BYTE_ABGR_PRE")
#undef TYPE_4BYTE_ABGR_PRE
#pragma push_macro("TYPE_BYTE_BINARY")
#undef TYPE_BYTE_BINARY
#pragma push_macro("TYPE_BYTE_GRAY")
#undef TYPE_BYTE_GRAY
#pragma push_macro("TYPE_BYTE_INDEXED")
#undef TYPE_BYTE_INDEXED
#pragma push_macro("TYPE_CUSTOM")
#undef TYPE_CUSTOM
#pragma push_macro("TYPE_INT_ARGB")
#undef TYPE_INT_ARGB
#pragma push_macro("TYPE_INT_ARGB_PRE")
#undef TYPE_INT_ARGB_PRE
#pragma push_macro("TYPE_INT_BGR")
#undef TYPE_INT_BGR
#pragma push_macro("TYPE_INT_RGB")
#undef TYPE_INT_RGB
#pragma push_macro("TYPE_USHORT_555_RGB")
#undef TYPE_USHORT_555_RGB
#pragma push_macro("TYPE_USHORT_565_RGB")
#undef TYPE_USHORT_565_RGB
#pragma push_macro("TYPE_USHORT_GRAY")
#undef TYPE_USHORT_GRAY

namespace java {
	namespace awt {
		class Graphics;
		class Graphics2D;
		class Point;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class ColorModel;
			class ImageObserver;
			class ImageProducer;
			class IndexColorModel;
			class Raster;
			class SampleModel;
			class TileObserver;
			class WritableRaster;
		}
	}
}
namespace java {
	namespace util {
		class Hashtable;
		class Vector;
	}
}
namespace sun {
	namespace awt {
		namespace image {
			class OffScreenImageSource;
		}
	}
}

namespace java {
	namespace awt {
		namespace image {

class $import BufferedImage : public ::java::awt::Image, public ::java::awt::image::WritableRenderedImage, public ::java::awt::Transparency {
	$class(BufferedImage, 0, ::java::awt::Image, ::java::awt::image::WritableRenderedImage, ::java::awt::Transparency)
public:
	BufferedImage();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t width, int32_t height, int32_t imageType);
	void init$(int32_t width, int32_t height, int32_t imageType, ::java::awt::image::IndexColorModel* cm);
	void init$(::java::awt::image::ColorModel* cm, ::java::awt::image::WritableRaster* raster, bool isRasterPremultiplied, ::java::util::Hashtable* properties);
	virtual void addTileObserver(::java::awt::image::TileObserver* to) override;
	virtual void coerceData(bool isAlphaPremultiplied);
	virtual ::java::awt::image::WritableRaster* copyData(::java::awt::image::WritableRaster* outRaster) override;
	virtual ::java::awt::Graphics2D* createGraphics();
	virtual ::java::awt::image::WritableRaster* getAlphaRaster();
	virtual ::java::awt::image::ColorModel* getColorModel() override;
	virtual ::java::awt::image::Raster* getData() override;
	virtual ::java::awt::image::Raster* getData(::java::awt::Rectangle* rect) override;
	virtual ::java::awt::Graphics* getGraphics() override;
	virtual int32_t getHeight() override;
	virtual int32_t getHeight(::java::awt::image::ImageObserver* observer) override;
	virtual int32_t getMinTileX() override;
	virtual int32_t getMinTileY() override;
	virtual int32_t getMinX() override;
	virtual int32_t getMinY() override;
	virtual int32_t getNumXTiles() override;
	virtual int32_t getNumYTiles() override;
	virtual $Object* getProperty($String* name, ::java::awt::image::ImageObserver* observer) override;
	virtual $Object* getProperty($String* name) override;
	virtual $StringArray* getPropertyNames() override;
	virtual int32_t getRGB(int32_t x, int32_t y);
	virtual $ints* getRGB(int32_t startX, int32_t startY, int32_t w, int32_t h, $ints* rgbArray, int32_t offset, int32_t scansize);
	virtual ::java::awt::image::WritableRaster* getRaster();
	virtual ::java::awt::image::SampleModel* getSampleModel() override;
	virtual ::java::awt::image::ImageProducer* getSource() override;
	virtual ::java::util::Vector* getSources() override;
	virtual ::java::awt::image::BufferedImage* getSubimage(int32_t x, int32_t y, int32_t w, int32_t h);
	virtual ::java::awt::image::Raster* getTile(int32_t tileX, int32_t tileY) override;
	virtual int32_t getTileGridXOffset() override;
	virtual int32_t getTileGridYOffset() override;
	virtual int32_t getTileHeight() override;
	virtual int32_t getTileWidth() override;
	virtual int32_t getTransparency() override;
	virtual int32_t getType();
	virtual int32_t getWidth() override;
	virtual int32_t getWidth(::java::awt::image::ImageObserver* observer) override;
	virtual ::java::awt::image::WritableRaster* getWritableTile(int32_t tileX, int32_t tileY) override;
	virtual $Array<::java::awt::Point>* getWritableTileIndices() override;
	virtual bool hasTileWriters() override;
	static void initIDs();
	virtual bool isAlphaPremultiplied();
	static bool isStandard(::java::awt::image::ColorModel* cm, ::java::awt::image::WritableRaster* wr);
	virtual bool isTileWritable(int32_t tileX, int32_t tileY) override;
	virtual void releaseWritableTile(int32_t tileX, int32_t tileY) override;
	virtual void removeTileObserver(::java::awt::image::TileObserver* to) override;
	virtual void setData(::java::awt::image::Raster* r) override;
	virtual void setRGB(int32_t x, int32_t y, int32_t rgb);
	virtual void setRGB(int32_t startX, int32_t startY, int32_t w, int32_t h, $ints* rgbArray, int32_t offset, int32_t scansize);
	virtual $String* toString() override;
	int32_t imageType = 0;
	::java::awt::image::ColorModel* colorModel = nullptr;
	::java::awt::image::WritableRaster* raster = nullptr;
	::sun::awt::image::OffScreenImageSource* osis = nullptr;
	::java::util::Hashtable* properties = nullptr;
	static const int32_t TYPE_CUSTOM = 0;
	static const int32_t TYPE_INT_RGB = 1;
	static const int32_t TYPE_INT_ARGB = 2;
	static const int32_t TYPE_INT_ARGB_PRE = 3;
	static const int32_t TYPE_INT_BGR = 4;
	static const int32_t TYPE_3BYTE_BGR = 5;
	static const int32_t TYPE_4BYTE_ABGR = 6;
	static const int32_t TYPE_4BYTE_ABGR_PRE = 7;
	static const int32_t TYPE_USHORT_565_RGB = 8;
	static const int32_t TYPE_USHORT_555_RGB = 9;
	static const int32_t TYPE_BYTE_GRAY = 10;
	static const int32_t TYPE_USHORT_GRAY = 11;
	static const int32_t TYPE_BYTE_BINARY = 12;
	static const int32_t TYPE_BYTE_INDEXED = 13;
	static const int32_t DCM_RED_MASK = 0x00FF0000;
	static const int32_t DCM_GREEN_MASK = 0x0000FF00;
	static const int32_t DCM_BLUE_MASK = 255;
	static const int32_t DCM_ALPHA_MASK = 0xFF000000;
	static const int32_t DCM_565_RED_MASK = 0x0000F800;
	static const int32_t DCM_565_GRN_MASK = 2016;
	static const int32_t DCM_565_BLU_MASK = 31;
	static const int32_t DCM_555_RED_MASK = 31744;
	static const int32_t DCM_555_GRN_MASK = 992;
	static const int32_t DCM_555_BLU_MASK = 31;
	static const int32_t DCM_BGR_RED_MASK = 255;
	static const int32_t DCM_BGR_GRN_MASK = 0x0000FF00;
	static const int32_t DCM_BGR_BLU_MASK = 0x00FF0000;
};

		} // image
	} // awt
} // java

#pragma pop_macro("DCM_555_BLU_MASK")
#pragma pop_macro("DCM_555_GRN_MASK")
#pragma pop_macro("DCM_555_RED_MASK")
#pragma pop_macro("DCM_565_BLU_MASK")
#pragma pop_macro("DCM_565_GRN_MASK")
#pragma pop_macro("DCM_565_RED_MASK")
#pragma pop_macro("DCM_ALPHA_MASK")
#pragma pop_macro("DCM_BGR_BLU_MASK")
#pragma pop_macro("DCM_BGR_GRN_MASK")
#pragma pop_macro("DCM_BGR_RED_MASK")
#pragma pop_macro("DCM_BLUE_MASK")
#pragma pop_macro("DCM_GREEN_MASK")
#pragma pop_macro("DCM_RED_MASK")
#pragma pop_macro("TYPE_3BYTE_BGR")
#pragma pop_macro("TYPE_4BYTE_ABGR")
#pragma pop_macro("TYPE_4BYTE_ABGR_PRE")
#pragma pop_macro("TYPE_BYTE_BINARY")
#pragma pop_macro("TYPE_BYTE_GRAY")
#pragma pop_macro("TYPE_BYTE_INDEXED")
#pragma pop_macro("TYPE_CUSTOM")
#pragma pop_macro("TYPE_INT_ARGB")
#pragma pop_macro("TYPE_INT_ARGB_PRE")
#pragma pop_macro("TYPE_INT_BGR")
#pragma pop_macro("TYPE_INT_RGB")
#pragma pop_macro("TYPE_USHORT_555_RGB")
#pragma pop_macro("TYPE_USHORT_565_RGB")
#pragma pop_macro("TYPE_USHORT_GRAY")

#endif // _java_awt_image_BufferedImage_h_