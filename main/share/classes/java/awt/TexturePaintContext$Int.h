#ifndef _java_awt_TexturePaintContext$Int_h_
#define _java_awt_TexturePaintContext$Int_h_
//$ class java.awt.TexturePaintContext$Int
//$ extends java.awt.TexturePaintContext

#include <java/awt/TexturePaintContext.h>
#include <java/lang/Array.h>

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
namespace sun {
	namespace awt {
		namespace image {
			class IntegerInterleavedRaster;
		}
	}
}

namespace java {
	namespace awt {

class TexturePaintContext$Int : public ::java::awt::TexturePaintContext {
	$class(TexturePaintContext$Int, $NO_CLASS_INIT, ::java::awt::TexturePaintContext)
public:
	TexturePaintContext$Int();
	void init$(::sun::awt::image::IntegerInterleavedRaster* srcRas, ::java::awt::image::ColorModel* cm, ::java::awt::geom::AffineTransform* xform, int32_t maxw, bool filter);
	virtual ::java::awt::image::WritableRaster* makeRaster(int32_t w, int32_t h) override;
	virtual void setRaster(int32_t x, int32_t y, int32_t xerr, int32_t yerr, int32_t w, int32_t h, int32_t bWidth, int32_t bHeight, int32_t colincx, int32_t colincxerr, int32_t colincy, int32_t colincyerr, int32_t rowincx, int32_t rowincxerr, int32_t rowincy, int32_t rowincyerr) override;
	::sun::awt::image::IntegerInterleavedRaster* srcRas = nullptr;
	$ints* inData = nullptr;
	int32_t inOff = 0;
	int32_t inSpan = 0;
	$ints* outData = nullptr;
	int32_t outOff = 0;
	int32_t outSpan = 0;
	bool filter = false;
};

	} // awt
} // java

#endif // _java_awt_TexturePaintContext$Int_h_