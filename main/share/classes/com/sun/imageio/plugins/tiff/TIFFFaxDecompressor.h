#ifndef _com_sun_imageio_plugins_tiff_TIFFFaxDecompressor_h_
#define _com_sun_imageio_plugins_tiff_TIFFFaxDecompressor_h_
//$ class com.sun.imageio.plugins.tiff.TIFFFaxDecompressor
//$ extends com.sun.imageio.plugins.tiff.TIFFDecompressor

#include <com/sun/imageio/plugins/tiff/TIFFDecompressor.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

class TIFFFaxDecompressor : public ::com::sun::imageio::plugins::tiff::TIFFDecompressor {
	$class(TIFFFaxDecompressor, 0, ::com::sun::imageio::plugins::tiff::TIFFDecompressor)
public:
	TIFFFaxDecompressor();
	using ::com::sun::imageio::plugins::tiff::TIFFDecompressor::decodeRaw;
	void init$();
	virtual void beginDecoding() override;
	int32_t decodeBlackCodeWord();
	virtual void decodeNextScanline(int32_t lineIndex);
	virtual void decodeRLE();
	virtual void decodeRaw($bytes* b, int32_t dstOffset, int32_t pixelBitStride, int32_t scanlineStride) override;
	virtual void decodeT4();
	virtual void decodeT6();
	int32_t decodeWhiteCodeWord();
	int32_t findNextLine();
	void getNextChangingElement(int32_t a0, bool isWhite, $ints* ret);
	int32_t nextLesserThan8Bits(int32_t bitsToGet);
	int32_t nextNBits(int32_t bitsToGet);
	void setToBlack(int32_t bitNum, int32_t numBits);
	void updatePointer(int32_t bitsToMoveBack);
	void warning($String* msg);
	int32_t fillOrder = 0;
	int32_t t4Options = 0;
	int32_t t6Options = 0;
	int32_t uncompressedMode = 0;
	int32_t fillBits = 0;
	int32_t oneD = 0;
	$bytes* data = nullptr;
	int32_t bitPointer = 0;
	int32_t bytePointer = 0;
	$bytes* buffer = nullptr;
	int32_t w = 0;
	int32_t h = 0;
	int32_t bitsPerScanline = 0;
	int32_t lineBitNum = 0;
	int32_t changingElemSize = 0;
	$ints* prevChangingElems = nullptr;
	$ints* currChangingElems = nullptr;
	int32_t lastChangingElement = 0;
	static $ints* table1;
	static $ints* table2;
	static $bytes* flipTable;
	static $shorts* white;
	static $shorts* additionalMakeup;
	static $shorts* initBlack;
	static $shorts* twoBitBlack;
	static $shorts* black;
	static $bytes* twoDCodes;
};

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_tiff_TIFFFaxDecompressor_h_