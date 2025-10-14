#ifndef _com_sun_imageio_plugins_tiff_TIFFLZWCompressor_h_
#define _com_sun_imageio_plugins_tiff_TIFFLZWCompressor_h_
//$ class com.sun.imageio.plugins.tiff.TIFFLZWCompressor
//$ extends com.sun.imageio.plugins.tiff.TIFFCompressor

#include <com/sun/imageio/plugins/tiff/TIFFCompressor.h>
#include <java/lang/Array.h>

namespace javax {
	namespace imageio {
		namespace stream {
			class ImageOutputStream;
		}
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

class TIFFLZWCompressor : public ::com::sun::imageio::plugins::tiff::TIFFCompressor {
	$class(TIFFLZWCompressor, $NO_CLASS_INIT, ::com::sun::imageio::plugins::tiff::TIFFCompressor)
public:
	TIFFLZWCompressor();
	void init$(int32_t predictorValue);
	virtual int32_t encode($bytes* b, int32_t off, int32_t width, int32_t height, $ints* bitsPerSample, int32_t scanlineStride) override;
	virtual void setStream(::javax::imageio::stream::ImageOutputStream* stream) override;
	int32_t predictor = 0;
};

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_tiff_TIFFLZWCompressor_h_