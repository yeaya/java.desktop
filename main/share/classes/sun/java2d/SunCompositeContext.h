#ifndef _sun_java2d_SunCompositeContext_h_
#define _sun_java2d_SunCompositeContext_h_
//$ class sun.java2d.SunCompositeContext
//$ extends java.awt.CompositeContext

#include <java/awt/CompositeContext.h>

namespace java {
	namespace awt {
		class AlphaComposite;
		class Composite;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class ColorModel;
			class Raster;
			class WritableRaster;
		}
	}
}
namespace sun {
	namespace java2d {
		namespace loops {
			class CompositeType;
			class XORComposite;
		}
	}
}

namespace sun {
	namespace java2d {

class SunCompositeContext : public ::java::awt::CompositeContext {
	$class(SunCompositeContext, $NO_CLASS_INIT, ::java::awt::CompositeContext)
public:
	SunCompositeContext();
	void init$(::java::awt::AlphaComposite* ac, ::java::awt::image::ColorModel* s, ::java::awt::image::ColorModel* d);
	void init$(::sun::java2d::loops::XORComposite* xc, ::java::awt::image::ColorModel* s, ::java::awt::image::ColorModel* d);
	virtual void compose(::java::awt::image::Raster* src1, ::java::awt::image::Raster* src2, ::java::awt::image::WritableRaster* dst) override;
	virtual void dispose() override;
	::java::awt::image::ColorModel* srcCM = nullptr;
	::java::awt::image::ColorModel* dstCM = nullptr;
	::java::awt::Composite* composite = nullptr;
	::sun::java2d::loops::CompositeType* comptype = nullptr;
};

	} // java2d
} // sun

#endif // _sun_java2d_SunCompositeContext_h_