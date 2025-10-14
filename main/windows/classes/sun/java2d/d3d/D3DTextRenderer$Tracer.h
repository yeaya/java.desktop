#ifndef _sun_java2d_d3d_D3DTextRenderer$Tracer_h_
#define _sun_java2d_d3d_D3DTextRenderer$Tracer_h_
//$ class sun.java2d.d3d.D3DTextRenderer$Tracer
//$ extends sun.java2d.d3d.D3DTextRenderer

#include <sun/java2d/d3d/D3DTextRenderer.h>

namespace sun {
	namespace font {
		class GlyphList;
	}
}
namespace sun {
	namespace java2d {
		class SunGraphics2D;
	}
}

namespace sun {
	namespace java2d {
		namespace d3d {

class D3DTextRenderer$Tracer : public ::sun::java2d::d3d::D3DTextRenderer {
	$class(D3DTextRenderer$Tracer, $NO_CLASS_INIT, ::sun::java2d::d3d::D3DTextRenderer)
public:
	D3DTextRenderer$Tracer();
	using ::sun::java2d::d3d::D3DTextRenderer::drawGlyphList;
	void init$(::sun::java2d::d3d::D3DTextRenderer* d3dtr);
	virtual void drawGlyphList(::sun::java2d::SunGraphics2D* sg2d, ::sun::font::GlyphList* gl) override;
};

		} // d3d
	} // java2d
} // sun

#endif // _sun_java2d_d3d_D3DTextRenderer$Tracer_h_