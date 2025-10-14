#ifndef _com_sun_imageio_plugins_tiff_TIFFDeflateDecompressor_h_
#define _com_sun_imageio_plugins_tiff_TIFFDeflateDecompressor_h_
//$ class com.sun.imageio.plugins.tiff.TIFFDeflateDecompressor
//$ extends com.sun.imageio.plugins.tiff.TIFFDecompressor

#include <com/sun/imageio/plugins/tiff/TIFFDecompressor.h>
#include <java/lang/Array.h>

namespace java {
	namespace util {
		namespace zip {
			class Inflater;
		}
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

class TIFFDeflateDecompressor : public ::com::sun::imageio::plugins::tiff::TIFFDecompressor {
	$class(TIFFDeflateDecompressor, $NO_CLASS_INIT, ::com::sun::imageio::plugins::tiff::TIFFDecompressor)
public:
	TIFFDeflateDecompressor();
	using ::com::sun::imageio::plugins::tiff::TIFFDecompressor::decodeRaw;
	void init$(int32_t predictor);
	virtual void decodeRaw($bytes* b, int32_t dstOffset, int32_t bitsPerPixel, int32_t scanlineStride) override;
	::java::util::zip::Inflater* inflater = nullptr;
	int32_t predictor = 0;
};

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_tiff_TIFFDeflateDecompressor_h_