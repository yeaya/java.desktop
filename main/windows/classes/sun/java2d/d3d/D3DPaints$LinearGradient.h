#ifndef _sun_java2d_d3d_D3DPaints$LinearGradient_h_
#define _sun_java2d_d3d_D3DPaints$LinearGradient_h_
//$ class sun.java2d.d3d.D3DPaints$LinearGradient
//$ extends sun.java2d.d3d.D3DPaints$MultiGradient

#include <sun/java2d/d3d/D3DPaints$MultiGradient.h>

namespace sun {
	namespace java2d {
		class SunGraphics2D;
	}
}

namespace sun {
	namespace java2d {
		namespace d3d {

class D3DPaints$LinearGradient : public ::sun::java2d::d3d::D3DPaints$MultiGradient {
	$class(D3DPaints$LinearGradient, $NO_CLASS_INIT, ::sun::java2d::d3d::D3DPaints$MultiGradient)
public:
	D3DPaints$LinearGradient();
	void init$();
	virtual bool isPaintValid(::sun::java2d::SunGraphics2D* sg2d) override;
};

		} // d3d
	} // java2d
} // sun

#endif // _sun_java2d_d3d_D3DPaints$LinearGradient_h_