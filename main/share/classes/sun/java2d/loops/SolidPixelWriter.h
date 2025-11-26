#ifndef _sun_java2d_loops_SolidPixelWriter_h_
#define _sun_java2d_loops_SolidPixelWriter_h_
//$ class sun.java2d.loops.SolidPixelWriter
//$ extends sun.java2d.loops.PixelWriter

#include <sun/java2d/loops/PixelWriter.h>

namespace sun {
	namespace java2d {
		namespace loops {

class SolidPixelWriter : public ::sun::java2d::loops::PixelWriter {
	$class(SolidPixelWriter, $NO_CLASS_INIT, ::sun::java2d::loops::PixelWriter)
public:
	SolidPixelWriter();
	void init$(Object$* srcPixel);
	virtual void writePixel(int32_t x, int32_t y) override;
	$Object* srcData = nullptr;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_SolidPixelWriter_h_