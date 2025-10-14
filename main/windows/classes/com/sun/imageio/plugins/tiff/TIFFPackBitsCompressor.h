#ifndef _com_sun_imageio_plugins_tiff_TIFFPackBitsCompressor_h_
#define _com_sun_imageio_plugins_tiff_TIFFPackBitsCompressor_h_
//$ class com.sun.imageio.plugins.tiff.TIFFPackBitsCompressor
//$ extends com.sun.imageio.plugins.tiff.TIFFCompressor

#include <com/sun/imageio/plugins/tiff/TIFFCompressor.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

class TIFFPackBitsCompressor : public ::com::sun::imageio::plugins::tiff::TIFFCompressor {
	$class(TIFFPackBitsCompressor, $NO_CLASS_INIT, ::com::sun::imageio::plugins::tiff::TIFFCompressor)
public:
	TIFFPackBitsCompressor();
	void init$();
	virtual int32_t encode($bytes* b, int32_t off, int32_t width, int32_t height, $ints* bitsPerSample, int32_t scanlineStride) override;
	static int32_t packBits($bytes* input, int32_t inOffset, int32_t inCount, $bytes* output, int32_t outOffset);
};

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_tiff_TIFFPackBitsCompressor_h_