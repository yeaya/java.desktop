#ifndef _sun_awt_image_PNGImageDecoder_h_
#define _sun_awt_image_PNGImageDecoder_h_
//$ class sun.awt.image.PNGImageDecoder
//$ extends sun.awt.image.ImageDecoder

#include <java/lang/Array.h>
#include <sun/awt/image/ImageDecoder.h>

#pragma push_macro("ALPHA")
#undef ALPHA
#pragma push_macro("COLOR")
#undef COLOR
#pragma push_macro("GRAY")
#undef GRAY
#pragma push_macro("PALETTE")
#undef PALETTE

namespace java {
	namespace awt {
		namespace image {
			class ColorModel;
		}
	}
}
namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace util {
		class Hashtable;
	}
}
namespace sun {
	namespace awt {
		namespace image {
			class InputStreamImageSource;
			class PNGFilterInputStream;
		}
	}
}

namespace sun {
	namespace awt {
		namespace image {

class PNGImageDecoder : public ::sun::awt::image::ImageDecoder {
	$class(PNGImageDecoder, 0, ::sun::awt::image::ImageDecoder)
public:
	PNGImageDecoder();
	void init$(::sun::awt::image::InputStreamImageSource* src, ::java::io::InputStream* input);
	static int32_t crc($bytes* buf, int32_t offset, int32_t len);
	void fill();
	void filterRow($bytes* rowByteBuffer, $bytes* prevRow, int32_t rowFilter, int32_t rowByteWidth, int32_t bytesPerSample);
	int32_t getByte(int32_t pos);
	static bool getCheckCRC();
	bool getChunk();
	virtual bool getData();
	int32_t getInt(int32_t pos);
	int32_t getShort(int32_t pos);
	virtual bool handleChunk(int32_t key, $bytes* buf, int32_t st, int32_t len);
	bool need(int32_t n);
	void pngassert(bool b);
	virtual void print();
	virtual void produceImage() override;
	void property($String* key, Object$* value);
	void property($String* key, float value);
	void readAll();
	bool sendPixels(int32_t x, int32_t y, int32_t w, int32_t h, $ints* pixels, int32_t offset, int32_t pixlength);
	bool sendPixels(int32_t x, int32_t y, int32_t w, int32_t h, $bytes* pixels, int32_t offset, int32_t pixlength);
	static void setCheckCRC(bool c);
	static int32_t update_crc(int32_t crc, $bytes* buf, int32_t offset, int32_t len);
	virtual void wrc(int32_t c);
	virtual void wrk(int32_t n);
	static const int32_t GRAY = 0;
	static const int32_t PALETTE = 1;
	static const int32_t COLOR = 2;
	static const int32_t ALPHA = 4;
	static const int32_t bKGDChunk = 0x624B4744;
	static const int32_t cHRMChunk = 0x6348524D;
	static const int32_t gAMAChunk = 0x67414D41;
	static const int32_t hISTChunk = 0x68495354;
	static const int32_t IDATChunk = 0x49444154;
	static const int32_t IENDChunk = 0x49454E44;
	static const int32_t IHDRChunk = 0x49484452;
	static const int32_t PLTEChunk = 0x504C5445;
	static const int32_t pHYsChunk = 0x70485973;
	static const int32_t sBITChunk = 0x73424954;
	static const int32_t tEXtChunk = 0x74455874;
	static const int32_t tIMEChunk = 0x74494D45;
	static const int32_t tRNSChunk = 0x74524E53;
	static const int32_t zTXtChunk = 0x7A545874;
	int32_t width = 0;
	int32_t height = 0;
	int32_t bitDepth = 0;
	int32_t colorType = 0;
	int32_t compressionMethod = 0;
	int32_t filterMethod = 0;
	int32_t interlaceMethod = 0;
	int32_t gamma = 0;
	::java::util::Hashtable* properties = nullptr;
	::java::awt::image::ColorModel* cm = nullptr;
	$bytes* red_map = nullptr;
	$bytes* green_map = nullptr;
	$bytes* blue_map = nullptr;
	$bytes* alpha_map = nullptr;
	int32_t transparentPixel = 0;
	$bytes* transparentPixel_16 = nullptr;
	static $Array<::java::awt::image::ColorModel>* greyModels;
	static $bytes* startingRow;
	static $bytes* startingCol;
	static $bytes* rowIncrement;
	static $bytes* colIncrement;
	static $bytes* blockHeight;
	static $bytes* blockWidth;
	int32_t pos = 0;
	int32_t limit = 0;
	int32_t chunkStart = 0;
	int32_t chunkKey = 0;
	int32_t chunkLength = 0;
	int32_t chunkCRC = 0;
	bool seenEOF = false;
	static $bytes* signature;
	::sun::awt::image::PNGFilterInputStream* inputStream = nullptr;
	::java::io::InputStream* underlyingInputStream = nullptr;
	$bytes* inbuf = nullptr;
	static bool checkCRC;
	static $ints* crc_table;
};

		} // image
	} // awt
} // sun

#pragma pop_macro("ALPHA")
#pragma pop_macro("COLOR")
#pragma pop_macro("GRAY")
#pragma pop_macro("PALETTE")

#endif // _sun_awt_image_PNGImageDecoder_h_