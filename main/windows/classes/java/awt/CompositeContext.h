#ifndef _java_awt_CompositeContext_h_
#define _java_awt_CompositeContext_h_
//$ interface java.awt.CompositeContext
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		namespace image {
			class Raster;
			class WritableRaster;
		}
	}
}

namespace java {
	namespace awt {

class $export CompositeContext : public ::java::lang::Object {
	$interface(CompositeContext, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void compose(::java::awt::image::Raster* src, ::java::awt::image::Raster* dstIn, ::java::awt::image::WritableRaster* dstOut) {}
	virtual void dispose() {}
};

	} // awt
} // java

#endif // _java_awt_CompositeContext_h_