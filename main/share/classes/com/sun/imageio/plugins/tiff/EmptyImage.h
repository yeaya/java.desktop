#ifndef _com_sun_imageio_plugins_tiff_EmptyImage_h_
#define _com_sun_imageio_plugins_tiff_EmptyImage_h_
//$ class com.sun.imageio.plugins.tiff.EmptyImage
//$ extends com.sun.imageio.plugins.common.SimpleRenderedImage

#include <com/sun/imageio/plugins/common/SimpleRenderedImage.h>

namespace java {
	namespace awt {
		namespace image {
			class ColorModel;
			class Raster;
			class SampleModel;
		}
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

class EmptyImage : public ::com::sun::imageio::plugins::common::SimpleRenderedImage {
	$class(EmptyImage, $NO_CLASS_INIT, ::com::sun::imageio::plugins::common::SimpleRenderedImage)
public:
	EmptyImage();
	void init$(int32_t minX, int32_t minY, int32_t width, int32_t height, int32_t tileGridXOffset, int32_t tileGridYOffset, int32_t tileWidth, int32_t tileHeight, ::java::awt::image::SampleModel* sampleModel, ::java::awt::image::ColorModel* colorModel);
	virtual ::java::awt::image::Raster* getTile(int32_t tileX, int32_t tileY) override;
};

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_tiff_EmptyImage_h_