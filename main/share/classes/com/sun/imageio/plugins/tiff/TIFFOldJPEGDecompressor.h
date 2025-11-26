#ifndef _com_sun_imageio_plugins_tiff_TIFFOldJPEGDecompressor_h_
#define _com_sun_imageio_plugins_tiff_TIFFOldJPEGDecompressor_h_
//$ class com.sun.imageio.plugins.tiff.TIFFOldJPEGDecompressor
//$ extends com.sun.imageio.plugins.tiff.TIFFJPEGDecompressor

#include <com/sun/imageio/plugins/tiff/TIFFJPEGDecompressor.h>
#include <java/lang/Array.h>

#pragma push_macro("DHT")
#undef DHT
#pragma push_macro("DQT")
#undef DQT
#pragma push_macro("DRI")
#undef DRI
#pragma push_macro("SOF0")
#undef SOF0
#pragma push_macro("SOS")
#undef SOS

namespace java {
	namespace lang {
		class Long;
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

class TIFFOldJPEGDecompressor : public ::com::sun::imageio::plugins::tiff::TIFFJPEGDecompressor {
	$class(TIFFOldJPEGDecompressor, $HAS_FINALIZE | $NO_CLASS_INIT, ::com::sun::imageio::plugins::tiff::TIFFJPEGDecompressor)
public:
	TIFFOldJPEGDecompressor();
	using ::com::sun::imageio::plugins::tiff::TIFFJPEGDecompressor::decodeRaw;
	void init$();
	virtual void decodeRaw($bytes* b, int32_t dstOffset, int32_t bitsPerPixel, int32_t scanlineStride) override;
	virtual void finalize() override;
	void initialize();
	static const int32_t DHT = 196;
	static const int32_t DQT = 219;
	static const int32_t DRI = 221;
	static const int32_t SOF0 = 192;
	static const int32_t SOS = 218;
	bool isInitialized = false;
	::java::lang::Long* JPEGStreamOffset = nullptr;
	int32_t SOFPosition = 0;
	$bytes* SOSMarker = nullptr;
	int32_t subsamplingX = 0;
	int32_t subsamplingY = 0;
};

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com

#pragma pop_macro("DHT")
#pragma pop_macro("DQT")
#pragma pop_macro("DRI")
#pragma pop_macro("SOF0")
#pragma pop_macro("SOS")

#endif // _com_sun_imageio_plugins_tiff_TIFFOldJPEGDecompressor_h_