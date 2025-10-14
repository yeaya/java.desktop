#ifndef _sun_java2d_loops_XORComposite_h_
#define _sun_java2d_loops_XORComposite_h_
//$ class sun.java2d.loops.XORComposite
//$ extends java.awt.Composite

#include <java/awt/Composite.h>

namespace java {
	namespace awt {
		class Color;
		class CompositeContext;
		class RenderingHints;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class ColorModel;
		}
	}
}
namespace sun {
	namespace java2d {
		class SurfaceData;
	}
}

namespace sun {
	namespace java2d {
		namespace loops {

class XORComposite : public ::java::awt::Composite {
	$class(XORComposite, $NO_CLASS_INIT, ::java::awt::Composite)
public:
	XORComposite();
	void init$(::java::awt::Color* xorColor, ::sun::java2d::SurfaceData* sd);
	virtual ::java::awt::CompositeContext* createContext(::java::awt::image::ColorModel* srcColorModel, ::java::awt::image::ColorModel* dstColorModel, ::java::awt::RenderingHints* hints) override;
	int32_t getAlphaMask();
	::java::awt::Color* getXorColor();
	int32_t getXorPixel();
	::java::awt::Color* xorColor = nullptr;
	int32_t xorPixel = 0;
	int32_t alphaMask = 0;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_XORComposite_h_