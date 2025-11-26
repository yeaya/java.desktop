#ifndef _sun_java2d_loops_PixelWriter_h_
#define _sun_java2d_loops_PixelWriter_h_
//$ class sun.java2d.loops.PixelWriter
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class PixelWriter : public ::java::lang::Object {
	$class(PixelWriter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PixelWriter();
	void init$();
	virtual void setRaster(::java::awt::image::WritableRaster* dstRast);
	virtual void writePixel(int32_t x, int32_t y) {}
	::java::awt::image::WritableRaster* dstRast = nullptr;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_PixelWriter_h_