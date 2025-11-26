#ifndef _com_sun_imageio_plugins_jpeg_JPEG_h_
#define _com_sun_imageio_plugins_jpeg_JPEG_h_
//$ class com.sun.imageio.plugins.jpeg.JPEG
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ADOBE_IMPOSSIBLE")
#undef ADOBE_IMPOSSIBLE
#pragma push_macro("ADOBE_UNKNOWN")
#undef ADOBE_UNKNOWN
#pragma push_macro("ADOBE_YCC")
#undef ADOBE_YCC
#pragma push_macro("ADOBE_YCCK")
#undef ADOBE_YCCK
#pragma push_macro("APP0")
#undef APP0
#pragma push_macro("APP1")
#undef APP1
#pragma push_macro("APP10")
#undef APP10
#pragma push_macro("APP11")
#undef APP11
#pragma push_macro("APP12")
#undef APP12
#pragma push_macro("APP13")
#undef APP13
#pragma push_macro("APP14")
#undef APP14
#pragma push_macro("APP15")
#undef APP15
#pragma push_macro("APP2")
#undef APP2
#pragma push_macro("APP3")
#undef APP3
#pragma push_macro("APP4")
#undef APP4
#pragma push_macro("APP5")
#undef APP5
#pragma push_macro("APP6")
#undef APP6
#pragma push_macro("APP7")
#undef APP7
#pragma push_macro("APP8")
#undef APP8
#pragma push_macro("APP9")
#undef APP9
#pragma push_macro("COM")
#undef COM
#pragma push_macro("DAC")
#undef DAC
#pragma push_macro("DEFAULT_QUALITY")
#undef DEFAULT_QUALITY
#pragma push_macro("DENSITY_UNIT_ASPECT_RATIO")
#undef DENSITY_UNIT_ASPECT_RATIO
#pragma push_macro("DENSITY_UNIT_DOTS_CM")
#undef DENSITY_UNIT_DOTS_CM
#pragma push_macro("DENSITY_UNIT_DOTS_INCH")
#undef DENSITY_UNIT_DOTS_INCH
#pragma push_macro("DHP")
#undef DHP
#pragma push_macro("DHT")
#undef DHT
#pragma push_macro("DNL")
#undef DNL
#pragma push_macro("DQT")
#undef DQT
#pragma push_macro("DRI")
#undef DRI
#pragma push_macro("EOI")
#undef EOI
#pragma push_macro("EXP")
#undef EXP
#pragma push_macro("JCS_CMYK")
#undef JCS_CMYK
#pragma push_macro("JCS_GRAYSCALE")
#undef JCS_GRAYSCALE
#pragma push_macro("JCS_RGB")
#undef JCS_RGB
#pragma push_macro("JCS_UNKNOWN")
#undef JCS_UNKNOWN
#pragma push_macro("JCS_YCCK")
#undef JCS_YCCK
#pragma push_macro("JPEG")
#undef JPEG
#pragma push_macro("JPG")
#undef JPG
#pragma push_macro("NUM_DENSITY_UNIT")
#undef NUM_DENSITY_UNIT
#pragma push_macro("NUM_JCS_CODES")
#undef NUM_JCS_CODES
#pragma push_macro("RESTART_RANGE")
#undef RESTART_RANGE
#pragma push_macro("RST0")
#undef RST0
#pragma push_macro("RST1")
#undef RST1
#pragma push_macro("RST2")
#undef RST2
#pragma push_macro("RST3")
#undef RST3
#pragma push_macro("RST4")
#undef RST4
#pragma push_macro("RST5")
#undef RST5
#pragma push_macro("RST6")
#undef RST6
#pragma push_macro("RST7")
#undef RST7
#pragma push_macro("SOF0")
#undef SOF0
#pragma push_macro("SOF1")
#undef SOF1
#pragma push_macro("SOF10")
#undef SOF10
#pragma push_macro("SOF11")
#undef SOF11
#pragma push_macro("SOF13")
#undef SOF13
#pragma push_macro("SOF14")
#undef SOF14
#pragma push_macro("SOF15")
#undef SOF15
#pragma push_macro("SOF2")
#undef SOF2
#pragma push_macro("SOF3")
#undef SOF3
#pragma push_macro("SOF5")
#undef SOF5
#pragma push_macro("SOF6")
#undef SOF6
#pragma push_macro("SOF7")
#undef SOF7
#pragma push_macro("SOF9")
#undef SOF9
#pragma push_macro("SOI")
#undef SOI
#pragma push_macro("SOS")
#undef SOS
#pragma push_macro("TEM")
#undef TEM

namespace java {
	namespace awt {
		namespace color {
			class ColorSpace;
		}
	}
}
namespace javax {
	namespace imageio {
		class ImageTypeSpecifier;
	}
}
namespace javax {
	namespace imageio {
		namespace plugins {
			namespace jpeg {
				class JPEGHuffmanTable;
				class JPEGQTable;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

class JPEG : public ::java::lang::Object {
	$class(JPEG, 0, ::java::lang::Object)
public:
	JPEG();
	void init$();
	static float convertToLinearQuality(float quality);
	static $Array<::javax::imageio::plugins::jpeg::JPEGHuffmanTable>* getDefaultHuffmanTables(bool wantDC);
	static $Array<::javax::imageio::plugins::jpeg::JPEGQTable>* getDefaultQTables();
	static bool isJFIFcompliant(::javax::imageio::ImageTypeSpecifier* imageType, bool input);
	static int32_t transformForType(::javax::imageio::ImageTypeSpecifier* imageType, bool input);
	static const int32_t TEM = 1;
	static const int32_t SOF0 = 192;
	static const int32_t SOF1 = 193;
	static const int32_t SOF2 = 194;
	static const int32_t SOF3 = 195;
	static const int32_t DHT = 196;
	static const int32_t SOF5 = 197;
	static const int32_t SOF6 = 198;
	static const int32_t SOF7 = 199;
	static const int32_t JPG = 200;
	static const int32_t SOF9 = 201;
	static const int32_t SOF10 = 202;
	static const int32_t SOF11 = 203;
	static const int32_t DAC = 204;
	static const int32_t SOF13 = 205;
	static const int32_t SOF14 = 206;
	static const int32_t SOF15 = 207;
	static const int32_t RST0 = 208;
	static const int32_t RST1 = 209;
	static const int32_t RST2 = 210;
	static const int32_t RST3 = 211;
	static const int32_t RST4 = 212;
	static const int32_t RST5 = 213;
	static const int32_t RST6 = 214;
	static const int32_t RST7 = 215;
	static const int32_t RESTART_RANGE = 8;
	static const int32_t SOI = 216;
	static const int32_t EOI = 217;
	static const int32_t SOS = 218;
	static const int32_t DQT = 219;
	static const int32_t DNL = 220;
	static const int32_t DRI = 221;
	static const int32_t DHP = 222;
	static const int32_t EXP = 223;
	static const int32_t APP0 = 224;
	static const int32_t APP1 = 225;
	static const int32_t APP2 = 226;
	static const int32_t APP3 = 227;
	static const int32_t APP4 = 228;
	static const int32_t APP5 = 229;
	static const int32_t APP6 = 230;
	static const int32_t APP7 = 231;
	static const int32_t APP8 = 232;
	static const int32_t APP9 = 233;
	static const int32_t APP10 = 234;
	static const int32_t APP11 = 235;
	static const int32_t APP12 = 236;
	static const int32_t APP13 = 237;
	static const int32_t APP14 = 238;
	static const int32_t APP15 = 239;
	static const int32_t COM = 254;
	static const int32_t DENSITY_UNIT_ASPECT_RATIO = 0;
	static const int32_t DENSITY_UNIT_DOTS_INCH = 1;
	static const int32_t DENSITY_UNIT_DOTS_CM = 2;
	static const int32_t NUM_DENSITY_UNIT = 3;
	static const int32_t ADOBE_IMPOSSIBLE = (-1);
	static const int32_t ADOBE_UNKNOWN = 0;
	static const int32_t ADOBE_YCC = 1;
	static const int32_t ADOBE_YCCK = 2;
	static $String* vendor;
	static $String* version;
	static $StringArray* names;
	static $StringArray* suffixes;
	static $StringArray* MIMETypes;
	static $String* nativeImageMetadataFormatName;
	static $String* nativeImageMetadataFormatClassName;
	static $String* nativeStreamMetadataFormatName;
	static $String* nativeStreamMetadataFormatClassName;
	static const int32_t JCS_UNKNOWN = 0;
	static const int32_t JCS_GRAYSCALE = 1;
	static const int32_t JCS_RGB = 2;
	static const int32_t JCS_YCbCr = 3;
	static const int32_t JCS_CMYK = 4;
	static const int32_t JCS_YCCK = 5;
	static const int32_t NUM_JCS_CODES = 6; // JCS_YCCK + 1
	static $Array<int32_t, 2>* bandOffsets;
	static $ints* bOffsRGB;
	static ::java::awt::color::ColorSpace* sRGB;
	static float DEFAULT_QUALITY;
};

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com

#pragma pop_macro("ADOBE_IMPOSSIBLE")
#pragma pop_macro("ADOBE_UNKNOWN")
#pragma pop_macro("ADOBE_YCC")
#pragma pop_macro("ADOBE_YCCK")
#pragma pop_macro("APP0")
#pragma pop_macro("APP1")
#pragma pop_macro("APP10")
#pragma pop_macro("APP11")
#pragma pop_macro("APP12")
#pragma pop_macro("APP13")
#pragma pop_macro("APP14")
#pragma pop_macro("APP15")
#pragma pop_macro("APP2")
#pragma pop_macro("APP3")
#pragma pop_macro("APP4")
#pragma pop_macro("APP5")
#pragma pop_macro("APP6")
#pragma pop_macro("APP7")
#pragma pop_macro("APP8")
#pragma pop_macro("APP9")
#pragma pop_macro("COM")
#pragma pop_macro("DAC")
#pragma pop_macro("DEFAULT_QUALITY")
#pragma pop_macro("DENSITY_UNIT_ASPECT_RATIO")
#pragma pop_macro("DENSITY_UNIT_DOTS_CM")
#pragma pop_macro("DENSITY_UNIT_DOTS_INCH")
#pragma pop_macro("DHP")
#pragma pop_macro("DHT")
#pragma pop_macro("DNL")
#pragma pop_macro("DQT")
#pragma pop_macro("DRI")
#pragma pop_macro("EOI")
#pragma pop_macro("EXP")
#pragma pop_macro("JCS_CMYK")
#pragma pop_macro("JCS_GRAYSCALE")
#pragma pop_macro("JCS_RGB")
#pragma pop_macro("JCS_UNKNOWN")
#pragma pop_macro("JCS_YCCK")
#pragma pop_macro("JPEG")
#pragma pop_macro("JPG")
#pragma pop_macro("NUM_DENSITY_UNIT")
#pragma pop_macro("NUM_JCS_CODES")
#pragma pop_macro("RESTART_RANGE")
#pragma pop_macro("RST0")
#pragma pop_macro("RST1")
#pragma pop_macro("RST2")
#pragma pop_macro("RST3")
#pragma pop_macro("RST4")
#pragma pop_macro("RST5")
#pragma pop_macro("RST6")
#pragma pop_macro("RST7")
#pragma pop_macro("SOF0")
#pragma pop_macro("SOF1")
#pragma pop_macro("SOF10")
#pragma pop_macro("SOF11")
#pragma pop_macro("SOF13")
#pragma pop_macro("SOF14")
#pragma pop_macro("SOF15")
#pragma pop_macro("SOF2")
#pragma pop_macro("SOF3")
#pragma pop_macro("SOF5")
#pragma pop_macro("SOF6")
#pragma pop_macro("SOF7")
#pragma pop_macro("SOF9")
#pragma pop_macro("SOI")
#pragma pop_macro("SOS")
#pragma pop_macro("TEM")

#endif // _com_sun_imageio_plugins_jpeg_JPEG_h_