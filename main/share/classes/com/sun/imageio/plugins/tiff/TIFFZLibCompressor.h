#ifndef _com_sun_imageio_plugins_tiff_TIFFZLibCompressor_h_
#define _com_sun_imageio_plugins_tiff_TIFFZLibCompressor_h_
//$ class com.sun.imageio.plugins.tiff.TIFFZLibCompressor
//$ extends com.sun.imageio.plugins.tiff.TIFFDeflater

#include <com/sun/imageio/plugins/tiff/TIFFDeflater.h>

namespace javax {
	namespace imageio {
		class ImageWriteParam;
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

class TIFFZLibCompressor : public ::com::sun::imageio::plugins::tiff::TIFFDeflater {
	$class(TIFFZLibCompressor, $NO_CLASS_INIT, ::com::sun::imageio::plugins::tiff::TIFFDeflater)
public:
	TIFFZLibCompressor();
	void init$(::javax::imageio::ImageWriteParam* param, int32_t predictor);
};

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_tiff_TIFFZLibCompressor_h_