#ifndef _sun_java2d_cmm_ColorTransform_h_
#define _sun_java2d_cmm_ColorTransform_h_
//$ interface sun.java2d.cmm.ColorTransform
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
			class Raster;
			class WritableRaster;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace cmm {

class ColorTransform : public ::java::lang::Object {
	$interface(ColorTransform, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void colorConvert(::java::awt::image::BufferedImage* src, ::java::awt::image::BufferedImage* dst) {}
	virtual void colorConvert(::java::awt::image::Raster* src, ::java::awt::image::WritableRaster* dst, $floats* srcMinVal, $floats* srcMaxVal, $floats* dstMinVal, $floats* dstMaxVal) {}
	virtual void colorConvert(::java::awt::image::Raster* src, ::java::awt::image::WritableRaster* dst) {}
	virtual $shorts* colorConvert($shorts* src, $shorts* dest) {return nullptr;}
	virtual $bytes* colorConvert($bytes* src, $bytes* dest) {return nullptr;}
	virtual int32_t getNumInComponents() {return 0;}
	virtual int32_t getNumOutComponents() {return 0;}
	static const int32_t Any = (-1);
	static const int32_t In = 1;
	static const int32_t Out = 2;
	static const int32_t Gamut = 3;
	static const int32_t Simulation = 4;
};

		} // cmm
	} // java2d
} // sun

#endif // _sun_java2d_cmm_ColorTransform_h_