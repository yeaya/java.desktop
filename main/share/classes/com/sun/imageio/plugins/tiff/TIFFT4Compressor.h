#ifndef _com_sun_imageio_plugins_tiff_TIFFT4Compressor_h_
#define _com_sun_imageio_plugins_tiff_TIFFT4Compressor_h_
//$ class com.sun.imageio.plugins.tiff.TIFFT4Compressor
//$ extends com.sun.imageio.plugins.tiff.TIFFFaxCompressor

#include <com/sun/imageio/plugins/tiff/TIFFFaxCompressor.h>
#include <java/lang/Array.h>

namespace javax {
	namespace imageio {
		namespace metadata {
			class IIOMetadata;
		}
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

class TIFFT4Compressor : public ::com::sun::imageio::plugins::tiff::TIFFFaxCompressor {
	$class(TIFFT4Compressor, $NO_CLASS_INIT, ::com::sun::imageio::plugins::tiff::TIFFFaxCompressor)
public:
	TIFFT4Compressor();
	void init$();
	virtual int32_t add1DBits($bytes* buf, int32_t where, int32_t count, int32_t color) override;
	virtual int32_t add2DBits($bytes* buf, int32_t where, $Array<int32_t, 2>* mode, int32_t entry) override;
	virtual int32_t addEOFB($bytes* buf, int32_t where) override;
	virtual int32_t addEOL(bool is1DMode, bool addFill, bool add1, $bytes* buf, int32_t where) override;
	virtual int32_t encode($bytes* b, int32_t off, int32_t width, int32_t height, $ints* bitsPerSample, int32_t scanlineStride) override;
	virtual int32_t encode1D($bytes* data, int32_t rowOffset, int32_t colOffset, int32_t rowLength, $bytes* compData, int32_t compOffset) override;
	virtual int32_t encodeT4(bool is1DMode, bool isEOLAligned, $bytes* data, int32_t lineStride, int32_t colOffset, int32_t width, int32_t height, $bytes* compData);
	virtual void initBitBuf() override;
	virtual int32_t nextState($bytes* data, int32_t base, int32_t bitOffset, int32_t maxOffset) override;
	virtual void setMetadata(::javax::imageio::metadata::IIOMetadata* metadata) override;
	bool is1DMode = false;
	bool isEOLAligned = false;
};

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_tiff_TIFFT4Compressor_h_