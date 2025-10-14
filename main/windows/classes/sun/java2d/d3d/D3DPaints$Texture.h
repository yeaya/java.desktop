#ifndef _sun_java2d_d3d_D3DPaints$Texture_h_
#define _sun_java2d_d3d_D3DPaints$Texture_h_
//$ class sun.java2d.d3d.D3DPaints$Texture
//$ extends sun.java2d.d3d.D3DPaints

#include <sun/java2d/d3d/D3DPaints.h>

namespace sun {
	namespace java2d {
		class SunGraphics2D;
	}
}

namespace sun {
	namespace java2d {
		namespace d3d {

class D3DPaints$Texture : public ::sun::java2d::d3d::D3DPaints {
	$class(D3DPaints$Texture, $NO_CLASS_INIT, ::sun::java2d::d3d::D3DPaints)
public:
	D3DPaints$Texture();
	void init$();
	virtual bool isPaintValid(::sun::java2d::SunGraphics2D* sg2d) override;
};

		} // d3d
	} // java2d
} // sun

#endif // _sun_java2d_d3d_D3DPaints$Texture_h_