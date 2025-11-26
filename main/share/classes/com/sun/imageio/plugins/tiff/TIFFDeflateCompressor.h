#ifndef _com_sun_imageio_plugins_tiff_TIFFDeflateCompressor_h_
#define _com_sun_imageio_plugins_tiff_TIFFDeflateCompressor_h_
//$ class com.sun.imageio.plugins.tiff.TIFFDeflateCompressor
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

class TIFFDeflateCompressor : public ::com::sun::imageio::plugins::tiff::TIFFDeflater {
	$class(TIFFDeflateCompressor, $NO_CLASS_INIT, ::com::sun::imageio::plugins::tiff::TIFFDeflater)
public:
	TIFFDeflateCompressor();
	void init$(::javax::imageio::ImageWriteParam* param, int32_t predictor);
};

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_tiff_TIFFDeflateCompressor_h_