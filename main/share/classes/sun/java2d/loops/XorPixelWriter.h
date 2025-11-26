#ifndef _sun_java2d_loops_XorPixelWriter_h_
#define _sun_java2d_loops_XorPixelWriter_h_
//$ class sun.java2d.loops.XorPixelWriter
//$ extends sun.java2d.loops.PixelWriter

#include <sun/java2d/loops/PixelWriter.h>

namespace java {
	namespace awt {
		namespace image {
			class ColorModel;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace loops {

class XorPixelWriter : public ::sun::java2d::loops::PixelWriter {
	$class(XorPixelWriter, $NO_CLASS_INIT, ::sun::java2d::loops::PixelWriter)
public:
	XorPixelWriter();
	void init$();
	virtual void writePixel(int32_t x, int32_t y) override;
	virtual void xorPixel(Object$* pixData) {}
	::java::awt::image::ColorModel* dstCM = nullptr;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_XorPixelWriter_h_