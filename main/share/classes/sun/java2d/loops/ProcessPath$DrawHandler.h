#ifndef _sun_java2d_loops_ProcessPath$DrawHandler_h_
#define _sun_java2d_loops_ProcessPath$DrawHandler_h_
//$ class sun.java2d.loops.ProcessPath$DrawHandler
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace java2d {
		namespace loops {

class ProcessPath$DrawHandler : public ::java::lang::Object {
	$class(ProcessPath$DrawHandler, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ProcessPath$DrawHandler();
	void init$(int32_t xMin, int32_t yMin, int32_t xMax, int32_t yMax, int32_t strokeControl);
	void init$(int32_t xMin, int32_t yMin, int32_t xMax, int32_t yMax);
	virtual void adjustBounds(int32_t bxMin, int32_t byMin, int32_t bxMax, int32_t byMax);
	virtual void drawLine(int32_t x0, int32_t y0, int32_t x1, int32_t y1) {}
	virtual void drawPixel(int32_t x0, int32_t y0) {}
	virtual void drawScanline(int32_t x0, int32_t x1, int32_t y0) {}
	virtual void setBounds(int32_t xMin, int32_t yMin, int32_t xMax, int32_t yMax);
	virtual void setBounds(int32_t xMin, int32_t yMin, int32_t xMax, int32_t yMax, int32_t strokeControl);
	int32_t xMin = 0;
	int32_t yMin = 0;
	int32_t xMax = 0;
	int32_t yMax = 0;
	float xMinf = 0.0;
	float yMinf = 0.0;
	float xMaxf = 0.0;
	float yMaxf = 0.0;
	int32_t strokeControl = 0;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_ProcessPath$DrawHandler_h_