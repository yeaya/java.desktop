#ifndef _java_awt_Paint_h_
#define _java_awt_Paint_h_
//$ interface java.awt.Paint
//$ extends java.awt.Transparency

#include <java/awt/Transparency.h>

namespace java {
	namespace awt {
		class PaintContext;
		class Rectangle;
		class RenderingHints;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
			class Rectangle2D;
		}
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

class $import Paint : public ::java::awt::Transparency {
	$interface(Paint, $NO_CLASS_INIT, ::java::awt::Transparency)
public:
	virtual ::java::awt::PaintContext* createContext(::java::awt::image::ColorModel* cm, ::java::awt::Rectangle* deviceBounds, ::java::awt::geom::Rectangle2D* userBounds, ::java::awt::geom::AffineTransform* xform, ::java::awt::RenderingHints* hints) {return nullptr;}
};

	} // awt
} // java

#endif // _java_awt_Paint_h_