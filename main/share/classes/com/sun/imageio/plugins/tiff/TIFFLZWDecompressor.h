#ifndef _com_sun_imageio_plugins_tiff_TIFFLZWDecompressor_h_
#define _com_sun_imageio_plugins_tiff_TIFFLZWDecompressor_h_
//$ class com.sun.imageio.plugins.tiff.TIFFLZWDecompressor
//$ extends com.sun.imageio.plugins.tiff.TIFFDecompressor

#include <com/sun/imageio/plugins/tiff/TIFFDecompressor.h>
#include <java/lang/Array.h>

#pragma push_macro("CLEAR_CODE")
#undef CLEAR_CODE
#pragma push_macro("EOI_CODE")
#undef EOI_CODE
#pragma push_macro("FIRST_CODE")
#undef FIRST_CODE

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

class TIFFLZWDecompressor : public ::com::sun::imageio::plugins::tiff::TIFFDecompressor {
	$class(TIFFLZWDecompressor, 0, ::com::sun::imageio::plugins::tiff::TIFFDecompressor)
public:
	TIFFLZWDecompressor();
	using ::com::sun::imageio::plugins::tiff::TIFFDecompressor::decodeRaw;
	using ::com::sun::imageio::plugins::tiff::TIFFDecompressor::decode;
	void init$(int32_t predictor, int32_t fillOrder);
	virtual void addStringToTable($bytes* oldString, int8_t newString);
	virtual void addStringToTable($bytes* string);
	virtual $bytes* composeString($bytes* oldString, int8_t newString);
	virtual int32_t decode($bytes* sdata, int32_t srcOffset, $bytes* ddata, int32_t dstOffset);
	virtual void decodeRaw($bytes* b, int32_t dstOffset, int32_t bitsPerPixel, int32_t scanlineStride) override;
	virtual int32_t getNextCode();
	virtual void initializeStringTable();
	virtual void writeString($bytes* string);
	static const int32_t CLEAR_CODE = 256;
	static const int32_t EOI_CODE = 257;
	static const int32_t FIRST_CODE = 258;
	static $ints* andTable;
	int32_t predictor = 0;
	bool flipBits = false;
	$bytes* srcData = nullptr;
	$bytes* dstData = nullptr;
	int32_t srcIndex = 0;
	int32_t dstIndex = 0;
	$Array<int8_t, 2>* stringTable = nullptr;
	int32_t tableIndex = 0;
	int32_t bitsToGet = 0;
	int32_t nextData = 0;
	int32_t nextBits = 0;
};

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com

#pragma pop_macro("CLEAR_CODE")
#pragma pop_macro("EOI_CODE")
#pragma pop_macro("FIRST_CODE")

#endif // _com_sun_imageio_plugins_tiff_TIFFLZWDecompressor_h_