#ifndef _com_sun_imageio_plugins_tiff_TIFFRenderedImage_h_
#define _com_sun_imageio_plugins_tiff_TIFFRenderedImage_h_
//$ class com.sun.imageio.plugins.tiff.TIFFRenderedImage
//$ extends java.awt.image.RenderedImage

#include <java/awt/image/RenderedImage.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {
					class TIFFImageReader;
				}
			}
		}
	}
}
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
		class Vector;
	}
}
namespace javax {
	namespace imageio {
		class ImageReadParam;
		class ImageTypeSpecifier;
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

class TIFFRenderedImage : public ::java::awt::image::RenderedImage {
	$class(TIFFRenderedImage, $NO_CLASS_INIT, ::java::awt::image::RenderedImage)
public:
	TIFFRenderedImage();
	void init$(::com::sun::imageio::plugins::tiff::TIFFImageReader* reader, int32_t imageIndex, ::javax::imageio::ImageReadParam* readParam, int32_t width, int32_t height);
	::javax::imageio::ImageReadParam* cloneImageReadParam(::javax::imageio::ImageReadParam* param, bool copyTagSets);
	virtual ::java::awt::image::WritableRaster* copyData(::java::awt::image::WritableRaster* raster) override;
	virtual ::java::awt::image::ColorModel* getColorModel() override;
	virtual ::java::awt::image::Raster* getData() override;
	virtual ::java::awt::image::Raster* getData(::java::awt::Rectangle* rect) override;
	virtual int32_t getHeight() override;
	virtual int32_t getMinTileX() override;
	virtual int32_t getMinTileY() override;
	virtual int32_t getMinX() override;
	virtual int32_t getMinY() override;
	virtual int32_t getNumXTiles() override;
	virtual int32_t getNumYTiles() override;
	virtual $Object* getProperty($String* name) override;
	virtual $StringArray* getPropertyNames() override;
	virtual ::java::awt::image::SampleModel* getSampleModel() override;
	virtual ::java::util::Vector* getSources() override;
	virtual ::java::awt::image::Raster* getTile(int32_t tileX, int32_t tileY) override;
	virtual int32_t getTileGridXOffset() override;
	virtual int32_t getTileGridYOffset() override;
	virtual int32_t getTileHeight() override;
	virtual int32_t getTileWidth() override;
	virtual int32_t getWidth() override;
	virtual ::java::awt::image::WritableRaster* read(::java::awt::Rectangle* rect);
	::com::sun::imageio::plugins::tiff::TIFFImageReader* reader = nullptr;
	int32_t imageIndex = 0;
	::javax::imageio::ImageReadParam* tileParam = nullptr;
	int32_t subsampleX = 0;
	int32_t subsampleY = 0;
	bool isSubsampling = false;
	int32_t width = 0;
	int32_t height = 0;
	int32_t tileWidth = 0;
	int32_t tileHeight = 0;
	::javax::imageio::ImageTypeSpecifier* its = nullptr;
};

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_tiff_TIFFRenderedImage_h_