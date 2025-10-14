#ifndef _sun_java2d_d3d_D3DTextRenderer_h_
#define _sun_java2d_d3d_D3DTextRenderer_h_
//$ class sun.java2d.d3d.D3DTextRenderer
//$ extends sun.java2d.pipe.BufferedTextPipe

#include <java/lang/Array.h>
#include <sun/java2d/pipe/BufferedTextPipe.h>

namespace java {
	namespace awt {
		class Composite;
	}
}
namespace sun {
	namespace java2d {
		class SunGraphics2D;
	}
}
namespace sun {
	namespace java2d {
		namespace pipe {
			class RenderQueue;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace d3d {

class D3DTextRenderer : public ::sun::java2d::pipe::BufferedTextPipe {
	$class(D3DTextRenderer, $NO_CLASS_INIT, ::sun::java2d::pipe::BufferedTextPipe)
public:
	D3DTextRenderer();
	using ::sun::java2d::pipe::BufferedTextPipe::drawGlyphList;
	void init$(::sun::java2d::pipe::RenderQueue* rq);
	static ::sun::java2d::pipe::RenderQueue* access$000(::sun::java2d::d3d::D3DTextRenderer* x0);
	virtual void drawGlyphList(int32_t numGlyphs, bool usePositions, bool subPixPos, bool rgbOrder, int32_t lcdContrast, float glOrigX, float glOrigY, $longs* images, $floats* positions) override;
	virtual ::sun::java2d::d3d::D3DTextRenderer* traceWrap();
	virtual void validateContext(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::Composite* comp) override;
};

		} // d3d
	} // java2d
} // sun

#endif // _sun_java2d_d3d_D3DTextRenderer_h_