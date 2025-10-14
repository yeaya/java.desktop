#ifndef _com_sun_imageio_plugins_tiff_TIFFNullDecompressor_h_
#define _com_sun_imageio_plugins_tiff_TIFFNullDecompressor_h_
//$ class com.sun.imageio.plugins.tiff.TIFFNullDecompressor
//$ extends com.sun.imageio.plugins.tiff.TIFFDecompressor

#include <com/sun/imageio/plugins/tiff/TIFFDecompressor.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

class TIFFNullDecompressor : public ::com::sun::imageio::plugins::tiff::TIFFDecompressor {
	$class(TIFFNullDecompressor, $NO_CLASS_INIT, ::com::sun::imageio::plugins::tiff::TIFFDecompressor)
public:
	TIFFNullDecompressor();
	using ::com::sun::imageio::plugins::tiff::TIFFDecompressor::decodeRaw;
	void init$();
	virtual void beginDecoding() override;
	virtual void decode() override;
	virtual void decodeRaw($bytes* b, int32_t dstOffset, int32_t bitsPerPixel, int32_t scanlineStride) override;
	bool isReadActiveOnly = false;
	int32_t originalSrcMinX = 0;
	int32_t originalSrcMinY = 0;
	int32_t originalSrcWidth = 0;
	int32_t originalSrcHeight = 0;
};

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_tiff_TIFFNullDecompressor_h_