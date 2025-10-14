#ifndef _sun_java2d_d3d_D3DPaints$MultiGradient_h_
#define _sun_java2d_d3d_D3DPaints$MultiGradient_h_
//$ class sun.java2d.d3d.D3DPaints$MultiGradient
//$ extends sun.java2d.d3d.D3DPaints

#include <sun/java2d/d3d/D3DPaints.h>

#pragma push_macro("MULTI_MAX_FRACTIONS_D3D")
#undef MULTI_MAX_FRACTIONS_D3D

namespace sun {
	namespace java2d {
		class SunGraphics2D;
	}
}

namespace sun {
	namespace java2d {
		namespace d3d {

class D3DPaints$MultiGradient : public ::sun::java2d::d3d::D3DPaints {
	$class(D3DPaints$MultiGradient, $NO_CLASS_INIT, ::sun::java2d::d3d::D3DPaints)
public:
	D3DPaints$MultiGradient();
	void init$();
	virtual bool isPaintValid(::sun::java2d::SunGraphics2D* sg2d) override;
	static const int32_t MULTI_MAX_FRACTIONS_D3D = 8;
};

		} // d3d
	} // java2d
} // sun

#pragma pop_macro("MULTI_MAX_FRACTIONS_D3D")

#endif // _sun_java2d_d3d_D3DPaints$MultiGradient_h_