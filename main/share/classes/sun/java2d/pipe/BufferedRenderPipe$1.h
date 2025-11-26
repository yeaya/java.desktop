#ifndef _sun_java2d_pipe_BufferedRenderPipe$1_h_
#define _sun_java2d_pipe_BufferedRenderPipe$1_h_
//$ class sun.java2d.pipe.BufferedRenderPipe$1
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

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

class BufferedRenderPipe$1 : public ::java::lang::Runnable {
	$class(BufferedRenderPipe$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	BufferedRenderPipe$1();
	void init$(::sun::java2d::pipe::BufferedRenderPipe* this$0, $ints* val$xPoints, $ints* val$yPoints, int32_t val$nPoints, bool val$isClosed, ::sun::java2d::SunGraphics2D* val$sg2d);
	virtual void run() override;
	::sun::java2d::pipe::BufferedRenderPipe* this$0 = nullptr;
	::sun::java2d::SunGraphics2D* val$sg2d = nullptr;
	bool val$isClosed = false;
	int32_t val$nPoints = 0;
	$ints* val$yPoints = nullptr;
	$ints* val$xPoints = nullptr;
};

		} // pipe
	} // java2d
} // sun

#endif // _sun_java2d_pipe_BufferedRenderPipe$1_h_