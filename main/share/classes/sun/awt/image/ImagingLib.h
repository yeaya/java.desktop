#ifndef _sun_awt_image_ImagingLib_h_
#define _sun_awt_image_ImagingLib_h_
//$ class sun.awt.image.ImagingLib
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("AFFINE_OP")
#undef AFFINE_OP
#pragma push_macro("CONVOLVE_OP")
#undef CONVOLVE_OP
#pragma push_macro("LOOKUP_OP")
#undef LOOKUP_OP
#pragma push_macro("NUM_NATIVE_OPS")
#undef NUM_NATIVE_OPS

namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
			class BufferedImageOp;
			class Kernel;
			class Raster;
			class RasterOp;
			class WritableRaster;
		}
	}
}

namespace sun {
	namespace awt {
		namespace image {

class ImagingLib : public ::java::lang::Object {
	$class(ImagingLib, 0, ::java::lang::Object)
public:
	ImagingLib();
	void init$();
	static int32_t convolveBI(::java::awt::image::BufferedImage* src, ::java::awt::image::BufferedImage* dst, ::java::awt::image::Kernel* kernel, int32_t edgeHint);
	static int32_t convolveRaster(::java::awt::image::Raster* src, ::java::awt::image::Raster* dst, ::java::awt::image::Kernel* kernel, int32_t edgeHint);
	static ::java::awt::image::WritableRaster* filter(::java::awt::image::RasterOp* op, ::java::awt::image::Raster* src, ::java::awt::image::WritableRaster* dst);
	static ::java::awt::image::BufferedImage* filter(::java::awt::image::BufferedImageOp* op, ::java::awt::image::BufferedImage* src, ::java::awt::image::BufferedImage* dst);
	static int32_t getNativeOpIndex($Class* opClass);
	static bool init();
	static int32_t lookupByteBI(::java::awt::image::BufferedImage* src, ::java::awt::image::BufferedImage* dst, $Array<int8_t, 2>* table);
	static int32_t lookupByteRaster(::java::awt::image::Raster* src, ::java::awt::image::Raster* dst, $Array<int8_t, 2>* table);
	static int32_t transformBI(::java::awt::image::BufferedImage* src, ::java::awt::image::BufferedImage* dst, $doubles* matrix, int32_t interpType);
	static int32_t transformRaster(::java::awt::image::Raster* src, ::java::awt::image::Raster* dst, $doubles* matrix, int32_t interpType);
	static bool useLib;
	static bool verbose;
	static const int32_t NUM_NATIVE_OPS = 3;
	static const int32_t LOOKUP_OP = 0;
	static const int32_t AFFINE_OP = 1;
	static const int32_t CONVOLVE_OP = 2;
	static $ClassArray* nativeOpClass;
};

		} // image
	} // awt
} // sun

#pragma pop_macro("AFFINE_OP")
#pragma pop_macro("CONVOLVE_OP")
#pragma pop_macro("LOOKUP_OP")
#pragma pop_macro("NUM_NATIVE_OPS")

#endif // _sun_awt_image_ImagingLib_h_