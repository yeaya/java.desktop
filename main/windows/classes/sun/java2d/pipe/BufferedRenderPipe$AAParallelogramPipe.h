#ifndef _sun_java2d_pipe_BufferedRenderPipe$AAParallelogramPipe_h_
#define _sun_java2d_pipe_BufferedRenderPipe$AAParallelogramPipe_h_
//$ class sun.java2d.pipe.BufferedRenderPipe$AAParallelogramPipe
//$ extends sun.java2d.pipe.ParallelogramPipe

#include <sun/java2d/pipe/ParallelogramPipe.h>

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

class BufferedRenderPipe$AAParallelogramPipe : public ::sun::java2d::pipe::ParallelogramPipe {
	$class(BufferedRenderPipe$AAParallelogramPipe, $NO_CLASS_INIT, ::sun::java2d::pipe::ParallelogramPipe)
public:
	BufferedRenderPipe$AAParallelogramPipe();
	void init$(::sun::java2d::pipe::BufferedRenderPipe* this$0);
	virtual void drawParallelogram(::sun::java2d::SunGraphics2D* sg2d, double ux1, double uy1, double ux2, double uy2, double x, double y, double dx1, double dy1, double dx2, double dy2, double lw1, double lw2) override;
	virtual void fillParallelogram(::sun::java2d::SunGraphics2D* sg2d, double ux1, double uy1, double ux2, double uy2, double x, double y, double dx1, double dy1, double dx2, double dy2) override;
	::sun::java2d::pipe::BufferedRenderPipe* this$0 = nullptr;
};

		} // pipe
	} // java2d
} // sun

#endif // _sun_java2d_pipe_BufferedRenderPipe$AAParallelogramPipe_h_