#ifndef _sun_java2d_loops_XorPixelWriter$IntData_h_
#define _sun_java2d_loops_XorPixelWriter$IntData_h_
//$ class sun.java2d.loops.XorPixelWriter$IntData
//$ extends sun.java2d.loops.XorPixelWriter

#include <java/lang/Array.h>
#include <sun/java2d/loops/XorPixelWriter.h>

namespace java {
	namespace awt {
		namespace image {
			class WritableRaster;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace loops {

class XorPixelWriter$IntData : public ::sun::java2d::loops::XorPixelWriter {
	$class(XorPixelWriter$IntData, $NO_CLASS_INIT, ::sun::java2d::loops::XorPixelWriter)
public:
	XorPixelWriter$IntData();
	void init$(Object$* srcPixel, Object$* xorPixel);
	virtual void setRaster(::java::awt::image::WritableRaster* dstRast) override;
	virtual void writePixel(int32_t x, int32_t y) override;
	virtual void xorPixel(Object$* pixData) override;
	$ints* xorData = nullptr;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_XorPixelWriter$IntData_h_