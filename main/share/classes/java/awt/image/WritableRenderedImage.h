#ifndef _java_awt_image_WritableRenderedImage_h_
#define _java_awt_image_WritableRenderedImage_h_
//$ interface java.awt.image.WritableRenderedImage
//$ extends java.awt.image.RenderedImage

#include <java/awt/image/RenderedImage.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Point;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class Raster;
			class TileObserver;
			class WritableRaster;
		}
	}
}

namespace java {
	namespace awt {
		namespace image {

class $export WritableRenderedImage : public ::java::awt::image::RenderedImage {
	$interface(WritableRenderedImage, $NO_CLASS_INIT, ::java::awt::image::RenderedImage)
public:
	virtual void addTileObserver(::java::awt::image::TileObserver* to) {}
	virtual ::java::awt::image::WritableRaster* getWritableTile(int32_t tileX, int32_t tileY) {return nullptr;}
	virtual $Array<::java::awt::Point>* getWritableTileIndices() {return nullptr;}
	virtual bool hasTileWriters() {return false;}
	virtual bool isTileWritable(int32_t tileX, int32_t tileY) {return false;}
	virtual void releaseWritableTile(int32_t tileX, int32_t tileY) {}
	virtual void removeTileObserver(::java::awt::image::TileObserver* to) {}
	virtual void setData(::java::awt::image::Raster* r) {}
};

		} // image
	} // awt
} // java

#endif // _java_awt_image_WritableRenderedImage_h_