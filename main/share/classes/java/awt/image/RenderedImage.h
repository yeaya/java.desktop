#ifndef _java_awt_image_RenderedImage_h_
#define _java_awt_image_RenderedImage_h_
//$ interface java.awt.image.RenderedImage
//$ extends java.lang.Object

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
		class Vector;
	}
}

namespace java {
	namespace awt {
		namespace image {

class $export RenderedImage : public ::java::lang::Object {
	$interface(RenderedImage, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::awt::image::WritableRaster* copyData(::java::awt::image::WritableRaster* raster) {return nullptr;}
	virtual ::java::awt::image::ColorModel* getColorModel() {return nullptr;}
	virtual ::java::awt::image::Raster* getData() {return nullptr;}
	virtual ::java::awt::image::Raster* getData(::java::awt::Rectangle* rect) {return nullptr;}
	virtual int32_t getHeight() {return 0;}
	virtual int32_t getMinTileX() {return 0;}
	virtual int32_t getMinTileY() {return 0;}
	virtual int32_t getMinX() {return 0;}
	virtual int32_t getMinY() {return 0;}
	virtual int32_t getNumXTiles() {return 0;}
	virtual int32_t getNumYTiles() {return 0;}
	virtual $Object* getProperty($String* name) {return nullptr;}
	virtual $StringArray* getPropertyNames() {return nullptr;}
	virtual ::java::awt::image::SampleModel* getSampleModel() {return nullptr;}
	virtual ::java::util::Vector* getSources() {return nullptr;}
	virtual ::java::awt::image::Raster* getTile(int32_t tileX, int32_t tileY) {return nullptr;}
	virtual int32_t getTileGridXOffset() {return 0;}
	virtual int32_t getTileGridYOffset() {return 0;}
	virtual int32_t getTileHeight() {return 0;}
	virtual int32_t getTileWidth() {return 0;}
	virtual int32_t getWidth() {return 0;}
};

		} // image
	} // awt
} // java

#endif // _java_awt_image_RenderedImage_h_