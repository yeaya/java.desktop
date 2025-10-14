#ifndef _sun_java2d_pipe_BufferedRenderPipe$BufferedDrawHandler_h_
#define _sun_java2d_pipe_BufferedRenderPipe$BufferedDrawHandler_h_
//$ class sun.java2d.pipe.BufferedRenderPipe$BufferedDrawHandler
//$ extends sun.java2d.loops.ProcessPath$DrawHandler

#include <sun/java2d/loops/ProcessPath$DrawHandler.h>

namespace sun {
	namespace java2d {
		class SunGraphics2D;
	}
}
namespace sun {
	namespace java2d {
		namespace pipe {
			class BufferedRenderPipe;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace pipe {

class BufferedRenderPipe$BufferedDrawHandler : public ::sun::java2d::loops::ProcessPath$DrawHandler {
	$class(BufferedRenderPipe$BufferedDrawHandler, $NO_CLASS_INIT, ::sun::java2d::loops::ProcessPath$DrawHandler)
public:
	BufferedRenderPipe$BufferedDrawHandler();
	void init$(::sun::java2d::pipe::BufferedRenderPipe* this$0);
	virtual void drawLine(int32_t x1, int32_t y1, int32_t x2, int32_t y2) override;
	virtual void drawPixel(int32_t x, int32_t y) override;
	virtual void drawScanline(int32_t x1, int32_t x2, int32_t y) override;
	virtual void endFillPath();
	void resetFillPath();
	virtual void startFillPath();
	void updateScanlineCount();
	virtual void validate(::sun::java2d::SunGraphics2D* sg2d);
	::sun::java2d::pipe::BufferedRenderPipe* this$0 = nullptr;
	int32_t scanlineCount = 0;
	int32_t scanlineCountIndex = 0;
	int32_t remainingScanlines = 0;
};

		} // pipe
	} // java2d
} // sun

#endif // _sun_java2d_pipe_BufferedRenderPipe$BufferedDrawHandler_h_