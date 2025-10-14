#ifndef _java_awt_TexturePaintContext$Any_h_
#define _java_awt_TexturePaintContext$Any_h_
//$ class java.awt.TexturePaintContext$Any
//$ extends java.awt.TexturePaintContext

#include <java/awt/TexturePaintContext.h>

namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
		}
	}
}
namespace java {
	namespace awt {
		namespace image {
			class ColorModel;
			class WritableRaster;
		}
	}
}

namespace java {
	namespace awt {

class TexturePaintContext$Any : public ::java::awt::TexturePaintContext {
	$class(TexturePaintContext$Any, $NO_CLASS_INIT, ::java::awt::TexturePaintContext)
public:
	TexturePaintContext$Any();
	void init$(::java::awt::image::WritableRaster* srcRas, ::java::awt::image::ColorModel* cm, ::java::awt::geom::AffineTransform* xform, int32_t maxw, bool filter);
	virtual ::java::awt::image::WritableRaster* makeRaster(int32_t w, int32_t h) override;
	virtual void setRaster(int32_t x, int32_t y, int32_t xerr, int32_t yerr, int32_t w, int32_t h, int32_t bWidth, int32_t bHeight, int32_t colincx, int32_t colincxerr, int32_t colincy, int32_t colincyerr, int32_t rowincx, int32_t rowincxerr, int32_t rowincy, int32_t rowincyerr) override;
	::java::awt::image::WritableRaster* srcRas = nullptr;
	bool filter = false;
};

	} // awt
} // java

#endif // _java_awt_TexturePaintContext$Any_h_