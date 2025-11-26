#ifndef _com_sun_imageio_plugins_tiff_TIFFLSBDecompressor_h_
#define _com_sun_imageio_plugins_tiff_TIFFLSBDecompressor_h_
//$ class com.sun.imageio.plugins.tiff.TIFFLSBDecompressor
//$ extends com.sun.imageio.plugins.tiff.TIFFDecompressor

#include <com/sun/imageio/plugins/tiff/TIFFDecompressor.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

class TIFFLSBDecompressor : public ::com::sun::imageio::plugins::tiff::TIFFDecompressor {
	$class(TIFFLSBDecompressor, 0, ::com::sun::imageio::plugins::tiff::TIFFDecompressor)
public:
	TIFFLSBDecompressor();
	using ::com::sun::imageio::plugins::tiff::TIFFDecompressor::decodeRaw;
	void init$();
	virtual void decodeRaw($bytes* b, int32_t dstOffset, int32_t bitsPerPixel, int32_t scanlineStride) override;
	static $bytes* flipTable;
};

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_tiff_TIFFLSBDecompressor_h_