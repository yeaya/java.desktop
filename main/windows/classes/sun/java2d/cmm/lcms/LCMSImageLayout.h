#ifndef _sun_java2d_cmm_lcms_LCMSImageLayout_h_
#define _sun_java2d_cmm_lcms_LCMSImageLayout_h_
//$ class sun.java2d.cmm.lcms.LCMSImageLayout
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BYTES_SH")
#undef BYTES_SH
#pragma push_macro("CHANNELS_SH")
#undef CHANNELS_SH
#pragma push_macro("DOSWAP")
#undef DOSWAP
#pragma push_macro("DT_BYTE")
#undef DT_BYTE
#pragma push_macro("DT_DOUBLE")
#undef DT_DOUBLE
#pragma push_macro("DT_INT")
#undef DT_INT
#pragma push_macro("DT_SHORT")
#undef DT_SHORT
#pragma push_macro("EXTRA_SH")
#undef EXTRA_SH
#pragma push_macro("PT_ABGR_8")
#undef PT_ABGR_8
#pragma push_macro("PT_ARGB_8")
#undef PT_ARGB_8
#pragma push_macro("PT_BGRA_8")
#undef PT_BGRA_8
#pragma push_macro("PT_BGR_8")
#undef PT_BGR_8
#pragma push_macro("PT_GRAY_16")
#undef PT_GRAY_16
#pragma push_macro("PT_GRAY_8")
#undef PT_GRAY_8
#pragma push_macro("PT_RGBA_8")
#undef PT_RGBA_8
#pragma push_macro("PT_RGB_8")
#undef PT_RGB_8
#pragma push_macro("SWAPFIRST")
#undef SWAPFIRST

namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
			class Raster;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace cmm {
			namespace lcms {

class LCMSImageLayout : public ::java::lang::Object {
	$class(LCMSImageLayout, 0, ::java::lang::Object)
public:
	LCMSImageLayout();
	void init$(int32_t np, int32_t pixelType, int32_t pixelSize);
	void init$(int32_t width, int32_t height, int32_t pixelType, int32_t pixelSize);
	void init$($bytes* data, int32_t np, int32_t pixelType, int32_t pixelSize);
	void init$($shorts* data, int32_t np, int32_t pixelType, int32_t pixelSize);
	void init$($ints* data, int32_t np, int32_t pixelType, int32_t pixelSize);
	void init$($doubles* data, int32_t np, int32_t pixelType, int32_t pixelSize);
	void init$();
	static int32_t BYTES_SH(int32_t x);
	static int32_t CHANNELS_SH(int32_t x);
	static int32_t EXTRA_SH(int32_t x);
	static ::sun::java2d::cmm::lcms::LCMSImageLayout* createImageLayout(::java::awt::image::BufferedImage* image);
	static ::sun::java2d::cmm::lcms::LCMSImageLayout* createImageLayout(::java::awt::image::Raster* r);
	static int32_t getBytesPerPixel(int32_t pixelType);
	static int32_t safeAdd(int32_t a, int32_t b);
	static int32_t safeMult(int32_t a, int32_t b);
	void verify();
	static const int32_t SWAPFIRST = 16384; // 1 << 14
	static const int32_t DOSWAP = 1024; // 1 << 10
	static int32_t PT_RGB_8;
	static int32_t PT_GRAY_8;
	static int32_t PT_GRAY_16;
	static int32_t PT_RGBA_8;
	static int32_t PT_ARGB_8;
	static int32_t PT_BGR_8;
	static int32_t PT_ABGR_8;
	static int32_t PT_BGRA_8;
	static const int32_t DT_BYTE = 0;
	static const int32_t DT_SHORT = 1;
	static const int32_t DT_INT = 2;
	static const int32_t DT_DOUBLE = 3;
	bool isIntPacked = false;
	int32_t pixelType = 0;
	int32_t dataType = 0;
	int32_t width = 0;
	int32_t height = 0;
	int32_t nextRowOffset = 0;
	int32_t nextPixelOffset = 0;
	int32_t offset = 0;
	bool imageAtOnce = false;
	$Object* dataArray = nullptr;
	int32_t dataArrayLength = 0;
};

			} // lcms
		} // cmm
	} // java2d
} // sun

#pragma pop_macro("BYTES_SH")
#pragma pop_macro("CHANNELS_SH")
#pragma pop_macro("DOSWAP")
#pragma pop_macro("DT_BYTE")
#pragma pop_macro("DT_DOUBLE")
#pragma pop_macro("DT_INT")
#pragma pop_macro("DT_SHORT")
#pragma pop_macro("EXTRA_SH")
#pragma pop_macro("PT_ABGR_8")
#pragma pop_macro("PT_ARGB_8")
#pragma pop_macro("PT_BGRA_8")
#pragma pop_macro("PT_BGR_8")
#pragma pop_macro("PT_GRAY_16")
#pragma pop_macro("PT_GRAY_8")
#pragma pop_macro("PT_RGBA_8")
#pragma pop_macro("PT_RGB_8")
#pragma pop_macro("SWAPFIRST")

#endif // _sun_java2d_cmm_lcms_LCMSImageLayout_h_