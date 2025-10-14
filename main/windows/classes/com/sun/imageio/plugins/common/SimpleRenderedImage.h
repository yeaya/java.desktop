#ifndef _com_sun_imageio_plugins_common_SimpleRenderedImage_h_
#define _com_sun_imageio_plugins_common_SimpleRenderedImage_h_
//$ class com.sun.imageio.plugins.common.SimpleRenderedImage
//$ extends java.awt.image.RenderedImage

#include <java/awt/image/RenderedImage.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class ColorModel;
			class Raster;
			class SampleModel;
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

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace common {

class SimpleRenderedImage : public ::java::awt::image::RenderedImage {
	$class(SimpleRenderedImage, $NO_CLASS_INIT, ::java::awt::image::RenderedImage)
public:
	SimpleRenderedImage();
	void init$();
	static int32_t XToTileX(int32_t x, int32_t tileGridXOffset, int32_t tileWidth);
	virtual int32_t XToTileX(int32_t x);
	static int32_t YToTileY(int32_t y, int32_t tileGridYOffset, int32_t tileHeight);
	virtual int32_t YToTileY(int32_t y);
	virtual ::java::awt::image::WritableRaster* copyData(::java::awt::image::WritableRaster* dest) override;
	virtual ::java::awt::Rectangle* getBounds();
	virtual ::java::awt::image::ColorModel* getColorModel() override;
	virtual ::java::awt::image::Raster* getData() override;
	virtual ::java::awt::image::Raster* getData(::java::awt::Rectangle* bounds) override;
	virtual int32_t getHeight() override;
	virtual int32_t getMaxTileX();
	virtual int32_t getMaxTileY();
	int32_t getMaxX();
	int32_t getMaxY();
	virtual int32_t getMinTileX() override;
	virtual int32_t getMinTileY() override;
	virtual int32_t getMinX() override;
	virtual int32_t getMinY() override;
	virtual int32_t getNumXTiles() override;
	virtual int32_t getNumYTiles() override;
	virtual $Object* getProperty($String* name) override;
	virtual $StringArray* getPropertyNames() override;
	virtual $StringArray* getPropertyNames($String* prefix);
	virtual ::java::awt::image::SampleModel* getSampleModel() override;
	virtual ::java::util::Vector* getSources() override;
	virtual int32_t getTileGridXOffset() override;
	virtual int32_t getTileGridYOffset() override;
	virtual int32_t getTileHeight() override;
	virtual int32_t getTileWidth() override;
	virtual int32_t getWidth() override;
	static int32_t tileXToX(int32_t tx, int32_t tileGridXOffset, int32_t tileWidth);
	virtual int32_t tileXToX(int32_t tx);
	static int32_t tileYToY(int32_t ty, int32_t tileGridYOffset, int32_t tileHeight);
	virtual int32_t tileYToY(int32_t ty);
	int32_t minX = 0;
	int32_t minY = 0;
	int32_t width = 0;
	int32_t height = 0;
	int32_t tileWidth = 0;
	int32_t tileHeight = 0;
	int32_t tileGridXOffset = 0;
	int32_t tileGridYOffset = 0;
	::java::awt::image::SampleModel* sampleModel = nullptr;
	::java::awt::image::ColorModel* colorModel = nullptr;
	::java::util::Vector* sources = nullptr;
	::java::util::Hashtable* properties = nullptr;
};

				} // common
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_common_SimpleRenderedImage_h_