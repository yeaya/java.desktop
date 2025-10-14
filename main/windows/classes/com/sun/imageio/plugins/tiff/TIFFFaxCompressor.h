#ifndef _com_sun_imageio_plugins_tiff_TIFFFaxCompressor_h_
#define _com_sun_imageio_plugins_tiff_TIFFFaxCompressor_h_
//$ class com.sun.imageio.plugins.tiff.TIFFFaxCompressor
//$ extends com.sun.imageio.plugins.tiff.TIFFCompressor

#include <com/sun/imageio/plugins/tiff/TIFFCompressor.h>
#include <java/lang/Array.h>

#pragma push_macro("BLACK")
#undef BLACK
#pragma push_macro("WHITE")
#undef WHITE

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

class TIFFFaxCompressor : public ::com::sun::imageio::plugins::tiff::TIFFCompressor {
	$class(TIFFFaxCompressor, 0, ::com::sun::imageio::plugins::tiff::TIFFCompressor)
public:
	TIFFFaxCompressor();
	void init$($String* compressionType, int32_t compressionTagValue, bool isCompressionLossless);
	virtual int32_t add1DBits($bytes* buf, int32_t where, int32_t count, int32_t color);
	virtual int32_t add2DBits($bytes* buf, int32_t where, $Array<int32_t, 2>* mode, int32_t entry);
	virtual int32_t addEOFB($bytes* buf, int32_t where);
	virtual int32_t addEOL(bool is1DMode, bool addFill, bool add1, $bytes* buf, int32_t where);
	virtual int32_t encode1D($bytes* data, int32_t rowOffset, int32_t colOffset, int32_t rowLength, $bytes* compData, int32_t compOffset);
	virtual void initBitBuf();
	virtual int32_t nextState($bytes* data, int32_t base, int32_t bitOffset, int32_t maxOffset);
	virtual void setMetadata(::javax::imageio::metadata::IIOMetadata* metadata) override;
	static const int32_t WHITE = 0;
	static const int32_t BLACK = 1;
	static $bytes* byteTable;
	static $ints* termCodesBlack;
	static $ints* termCodesWhite;
	static $ints* makeupCodesBlack;
	static $ints* makeupCodesWhite;
	static $ints* passMode;
	static $ints* vertMode;
	static $ints* horzMode;
	static $Array<int32_t, 2>* termCodes;
	static $Array<int32_t, 2>* makeupCodes;
	static $Array<int32_t, 2>* pass;
	static $Array<int32_t, 2>* vert;
	static $Array<int32_t, 2>* horz;
	bool inverseFill = false;
	int32_t bits = 0;
	int32_t ndex = 0;
};

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com

#pragma pop_macro("BLACK")
#pragma pop_macro("WHITE")

#endif // _com_sun_imageio_plugins_tiff_TIFFFaxCompressor_h_