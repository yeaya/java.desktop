#ifndef _java_awt_Composite_h_
#define _java_awt_Composite_h_
//$ interface java.awt.Composite
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
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

namespace java {
	namespace awt {

class $import Composite : public ::java::lang::Object {
	$interface(Composite, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::awt::CompositeContext* createContext(::java::awt::image::ColorModel* srcColorModel, ::java::awt::image::ColorModel* dstColorModel, ::java::awt::RenderingHints* hints) {return nullptr;}
};

	} // awt
} // java

#endif // _java_awt_Composite_h_