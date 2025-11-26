#ifndef _java_awt_PaintContext_h_
#define _java_awt_PaintContext_h_
//$ interface java.awt.PaintContext
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		namespace image {
			class ColorModel;
			class Raster;
		}
	}
}

namespace java {
	namespace awt {

class $export PaintContext : public ::java::lang::Object {
	$interface(PaintContext, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void dispose() {}
	virtual ::java::awt::image::ColorModel* getColorModel() {return nullptr;}
	virtual ::java::awt::image::Raster* getRaster(int32_t x, int32_t y, int32_t w, int32_t h) {return nullptr;}
};

	} // awt
} // java

#endif // _java_awt_PaintContext_h_