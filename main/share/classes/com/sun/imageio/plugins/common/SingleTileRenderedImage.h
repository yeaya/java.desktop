#ifndef _com_sun_imageio_plugins_common_SingleTileRenderedImage_h_
#define _com_sun_imageio_plugins_common_SingleTileRenderedImage_h_
//$ class com.sun.imageio.plugins.common.SingleTileRenderedImage
//$ extends com.sun.imageio.plugins.common.SimpleRenderedImage

#include <com/sun/imageio/plugins/common/SimpleRenderedImage.h>

namespace java {
	namespace awt {
		namespace image {
			class ColorModel;
			class Raster;
		}
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace common {

class SingleTileRenderedImage : public ::com::sun::imageio::plugins::common::SimpleRenderedImage {
	$class(SingleTileRenderedImage, $NO_CLASS_INIT, ::com::sun::imageio::plugins::common::SimpleRenderedImage)
public:
	SingleTileRenderedImage();
	void init$(::java::awt::image::Raster* ras, ::java::awt::image::ColorModel* colorModel);
	virtual ::java::awt::image::Raster* getTile(int32_t tileX, int32_t tileY) override;
	::java::awt::image::Raster* ras = nullptr;
};

				} // common
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_common_SingleTileRenderedImage_h_