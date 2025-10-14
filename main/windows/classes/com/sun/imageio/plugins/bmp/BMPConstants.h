#ifndef _com_sun_imageio_plugins_bmp_BMPConstants_h_
#define _com_sun_imageio_plugins_bmp_BMPConstants_h_
//$ interface com.sun.imageio.plugins.bmp.BMPConstants
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("BI_BITFIELDS")
#undef BI_BITFIELDS
#pragma push_macro("BI_JPEG")
#undef BI_JPEG
#pragma push_macro("BI_PNG")
#undef BI_PNG
#pragma push_macro("BI_RGB")
#undef BI_RGB
#pragma push_macro("BI_RLE4")
#undef BI_RLE4
#pragma push_macro("BI_RLE8")
#undef BI_RLE8
#pragma push_macro("LCS_CALIBRATED_RGB")
#undef LCS_CALIBRATED_RGB
#pragma push_macro("LCS_WINDOWS_COLOR_SPACE")
#undef LCS_WINDOWS_COLOR_SPACE
#pragma push_macro("PROFILE_EMBEDDED")
#undef PROFILE_EMBEDDED
#pragma push_macro("PROFILE_LINKED")
#undef PROFILE_LINKED
#pragma push_macro("VERSION_2")
#undef VERSION_2
#pragma push_macro("VERSION_3")
#undef VERSION_3
#pragma push_macro("VERSION_3_EXT")
#undef VERSION_3_EXT
#pragma push_macro("VERSION_3_NT")
#undef VERSION_3_NT
#pragma push_macro("VERSION_4")
#undef VERSION_4
#pragma push_macro("VERSION_5")
#undef VERSION_5

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace bmp {

class BMPConstants : public ::java::lang::Object {
	$interface(BMPConstants, 0, ::java::lang::Object)
public:
	static $String* VERSION_2;
	static $String* VERSION_3;
	static $String* VERSION_3_NT;
	static $String* VERSION_3_EXT;
	static $String* VERSION_4;
	static $String* VERSION_5;
	static const int32_t LCS_CALIBRATED_RGB = 0;
	static const int32_t LCS_sRGB = 1;
	static const int32_t LCS_WINDOWS_COLOR_SPACE = 2;
	static const int32_t PROFILE_LINKED = 3;
	static const int32_t PROFILE_EMBEDDED = 4;
	static const int32_t BI_RGB = 0;
	static const int32_t BI_RLE8 = 1;
	static const int32_t BI_RLE4 = 2;
	static const int32_t BI_BITFIELDS = 3;
	static const int32_t BI_JPEG = 4;
	static const int32_t BI_PNG = 5;
};

				} // bmp
			} // plugins
		} // imageio
	} // sun
} // com

#pragma pop_macro("BI_BITFIELDS")
#pragma pop_macro("BI_JPEG")
#pragma pop_macro("BI_PNG")
#pragma pop_macro("BI_RGB")
#pragma pop_macro("BI_RLE4")
#pragma pop_macro("BI_RLE8")
#pragma pop_macro("LCS_CALIBRATED_RGB")
#pragma pop_macro("LCS_WINDOWS_COLOR_SPACE")
#pragma pop_macro("PROFILE_EMBEDDED")
#pragma pop_macro("PROFILE_LINKED")
#pragma pop_macro("VERSION_2")
#pragma pop_macro("VERSION_3")
#pragma pop_macro("VERSION_3_EXT")
#pragma pop_macro("VERSION_3_NT")
#pragma pop_macro("VERSION_4")
#pragma pop_macro("VERSION_5")

#endif // _com_sun_imageio_plugins_bmp_BMPConstants_h_