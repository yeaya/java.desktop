#ifndef _com_sun_imageio_plugins_tiff_TIFFJPEGDecompressor_h_
#define _com_sun_imageio_plugins_tiff_TIFFJPEGDecompressor_h_
//$ class com.sun.imageio.plugins.tiff.TIFFJPEGDecompressor
//$ extends com.sun.imageio.plugins.tiff.TIFFDecompressor

#include <com/sun/imageio/plugins/tiff/TIFFDecompressor.h>
#include <java/lang/Array.h>

#pragma push_macro("EOI")
#undef EOI
#pragma push_macro("SOI")
#undef SOI

namespace javax {
	namespace imageio {
		class ImageReadParam;
		class ImageReader;
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

class TIFFJPEGDecompressor : public ::com::sun::imageio::plugins::tiff::TIFFDecompressor {
	$class(TIFFJPEGDecompressor, $HAS_FINALIZE | $NO_CLASS_INIT, ::com::sun::imageio::plugins::tiff::TIFFDecompressor)
public:
	TIFFJPEGDecompressor();
	using ::com::sun::imageio::plugins::tiff::TIFFDecompressor::decodeRaw;
	void init$();
	virtual void beginDecoding() override;
	virtual void decodeRaw($bytes* b, int32_t dstOffset, int32_t bitsPerPixel, int32_t scanlineStride) override;
	virtual void finalize() override;
	static const int32_t SOI = 216;
	static const int32_t EOI = 217;
	::javax::imageio::ImageReader* JPEGReader = nullptr;
	::javax::imageio::ImageReadParam* JPEGParam = nullptr;
	bool hasJPEGTables = false;
	$bytes* tables = nullptr;
	$bytes* data = nullptr;
};

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com

#pragma pop_macro("EOI")
#pragma pop_macro("SOI")

#endif // _com_sun_imageio_plugins_tiff_TIFFJPEGDecompressor_h_