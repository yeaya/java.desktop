#ifndef _sun_java2d_pipe_ParallelogramPipe_h_
#define _sun_java2d_pipe_ParallelogramPipe_h_
//$ interface sun.java2d.pipe.ParallelogramPipe
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace java2d {
		class SunGraphics2D;
	}
}

namespace sun {
	namespace java2d {
		namespace pipe {

class ParallelogramPipe : public ::java::lang::Object {
	$interface(ParallelogramPipe, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void drawParallelogram(::sun::java2d::SunGraphics2D* sg, double ux1, double uy1, double ux2, double uy2, double x, double y, double dx1, double dy1, double dx2, double dy2, double lw1, double lw2) {}
	virtual void fillParallelogram(::sun::java2d::SunGraphics2D* sg, double ux1, double uy1, double ux2, double uy2, double x, double y, double dx1, double dy1, double dx2, double dy2) {}
};

		} // pipe
	} // java2d
} // sun

#endif // _sun_java2d_pipe_ParallelogramPipe_h_