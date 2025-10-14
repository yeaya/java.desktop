#ifndef _sun_java2d_d3d_D3DRenderer$Tracer$1_h_
#define _sun_java2d_d3d_D3DRenderer$Tracer$1_h_
//$ class sun.java2d.d3d.D3DRenderer$Tracer$1
//$ extends sun.java2d.pipe.ParallelogramPipe

#include <sun/java2d/pipe/ParallelogramPipe.h>

namespace sun {
	namespace java2d {
		class SunGraphics2D;
	}
}
namespace sun {
	namespace java2d {
		namespace d3d {
			class D3DRenderer$Tracer;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace d3d {

class D3DRenderer$Tracer$1 : public ::sun::java2d::pipe::ParallelogramPipe {
	$class(D3DRenderer$Tracer$1, $NO_CLASS_INIT, ::sun::java2d::pipe::ParallelogramPipe)
public:
	D3DRenderer$Tracer$1();
	void init$(::sun::java2d::d3d::D3DRenderer$Tracer* this$1, ::sun::java2d::pipe::ParallelogramPipe* val$realpipe);
	virtual void drawParallelogram(::sun::java2d::SunGraphics2D* sg2d, double ux1, double uy1, double ux2, double uy2, double x, double y, double dx1, double dy1, double dx2, double dy2, double lw1, double lw2) override;
	virtual void fillParallelogram(::sun::java2d::SunGraphics2D* sg2d, double ux1, double uy1, double ux2, double uy2, double x, double y, double dx1, double dy1, double dx2, double dy2) override;
	::sun::java2d::d3d::D3DRenderer$Tracer* this$1 = nullptr;
	::sun::java2d::pipe::ParallelogramPipe* val$realpipe = nullptr;
};

		} // d3d
	} // java2d
} // sun

#endif // _sun_java2d_d3d_D3DRenderer$Tracer$1_h_