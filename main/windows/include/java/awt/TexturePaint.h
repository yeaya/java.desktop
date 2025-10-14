#ifndef _java_awt_TexturePaint_h_
#define _java_awt_TexturePaint_h_
//$ class java.awt.TexturePaint
//$ extends java.awt.Paint

#include <java/awt/Paint.h>

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
			class BufferedImage;
			class ColorModel;
		}
	}
}

namespace java {
	namespace awt {

class $import TexturePaint : public ::java::awt::Paint {
	$class(TexturePaint, $NO_CLASS_INIT, ::java::awt::Paint)
public:
	TexturePaint();
	void init$(::java::awt::image::BufferedImage* txtr, ::java::awt::geom::Rectangle2D* anchor);
	virtual ::java::awt::PaintContext* createContext(::java::awt::image::ColorModel* cm, ::java::awt::Rectangle* deviceBounds, ::java::awt::geom::Rectangle2D* userBounds, ::java::awt::geom::AffineTransform* xform, ::java::awt::RenderingHints* hints) override;
	virtual ::java::awt::geom::Rectangle2D* getAnchorRect();
	virtual ::java::awt::image::BufferedImage* getImage();
	virtual int32_t getTransparency() override;
	::java::awt::image::BufferedImage* bufImg = nullptr;
	double tx = 0.0;
	double ty = 0.0;
	double sx = 0.0;
	double sy = 0.0;
};

	} // awt
} // java

#endif // _java_awt_TexturePaint_h_