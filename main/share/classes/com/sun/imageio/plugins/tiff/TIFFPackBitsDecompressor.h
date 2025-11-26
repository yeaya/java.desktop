#ifndef _com_sun_imageio_plugins_tiff_TIFFPackBitsDecompressor_h_
#define _com_sun_imageio_plugins_tiff_TIFFPackBitsDecompressor_h_
//$ class com.sun.imageio.plugins.tiff.TIFFPackBitsDecompressor
//$ extends com.sun.imageio.plugins.tiff.TIFFDecompressor

#include <com/sun/imageio/plugins/tiff/TIFFDecompressor.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

class TIFFPackBitsDecompressor : public ::com::sun::imageio::plugins::tiff::TIFFDecompressor {
	$class(TIFFPackBitsDecompressor, $NO_CLASS_INIT, ::com::sun::imageio::plugins::tiff::TIFFDecompressor)
public:
	TIFFPackBitsDecompressor();
	using ::com::sun::imageio::plugins::tiff::TIFFDecompressor::decodeRaw;
	using ::com::sun::imageio::plugins::tiff::TIFFDecompressor::decode;
	void init$();
	virtual int32_t decode($bytes* srcData, int32_t srcOffset, $bytes* dstData, int32_t dstOffset);
	virtual void decodeRaw($bytes* b, int32_t dstOffset, int32_t bitsPerPixel, int32_t scanlineStride) override;
};

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_tiff_TIFFPackBitsDecompressor_h_