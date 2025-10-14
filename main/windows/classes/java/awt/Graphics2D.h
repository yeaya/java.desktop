#ifndef _java_awt_Graphics2D_h_
#define _java_awt_Graphics2D_h_
//$ class java.awt.Graphics2D
//$ extends java.awt.Graphics

#include <java/awt/Graphics.h>

namespace java {
	namespace awt {
		class Color;
		class Composite;
		class GraphicsConfiguration;
		class Image;
		class Paint;
		class Rectangle;
		class RenderingHints;
		class RenderingHints$Key;
		class Shape;
		class Stroke;
	}
}
namespace java {
	namespace awt {
		namespace font {
			class FontRenderContext;
			class GlyphVector;
		}
	}
}
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
			class BufferedImage;
			class BufferedImageOp;
			class ImageObserver;
			class RenderedImage;
		}
	}
}
namespace java {
	namespace awt {
		namespace image {
			namespace renderable {
				class RenderableImage;
			}
		}
	}
}
namespace java {
	namespace text {
		class AttributedCharacterIterator;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace java {
	namespace awt {

class $export Graphics2D : public ::java::awt::Graphics {
	$class(Graphics2D, $NO_CLASS_INIT, ::java::awt::Graphics)
public:
	Graphics2D();
	using ::java::awt::Graphics::drawImage;
	virtual void drawString($String* str, int32_t x, int32_t y) override {}
	virtual void drawString(::java::text::AttributedCharacterIterator* iterator, int32_t x, int32_t y) override {}
	void init$();
	virtual void addRenderingHints(::java::util::Map* hints) {}
	virtual void clip(::java::awt::Shape* s) {}
	virtual void draw(::java::awt::Shape* s) {}
	virtual void draw3DRect(int32_t x, int32_t y, int32_t width, int32_t height, bool raised) override;
	virtual void drawGlyphVector(::java::awt::font::GlyphVector* g, float x, float y) {}
	virtual bool drawImage(::java::awt::Image* img, ::java::awt::geom::AffineTransform* xform, ::java::awt::image::ImageObserver* obs) {return false;}
	virtual void drawImage(::java::awt::image::BufferedImage* img, ::java::awt::image::BufferedImageOp* op, int32_t x, int32_t y) {}
	virtual void drawRenderableImage(::java::awt::image::renderable::RenderableImage* img, ::java::awt::geom::AffineTransform* xform) {}
	virtual void drawRenderedImage(::java::awt::image::RenderedImage* img, ::java::awt::geom::AffineTransform* xform) {}
	virtual void drawString($String* str, float x, float y) {}
	virtual void drawString(::java::text::AttributedCharacterIterator* iterator, float x, float y) {}
	virtual void fill(::java::awt::Shape* s) {}
	virtual void fill3DRect(int32_t x, int32_t y, int32_t width, int32_t height, bool raised) override;
	virtual ::java::awt::Color* getBackground() {return nullptr;}
	virtual ::java::awt::Composite* getComposite() {return nullptr;}
	virtual ::java::awt::GraphicsConfiguration* getDeviceConfiguration() {return nullptr;}
	virtual ::java::awt::font::FontRenderContext* getFontRenderContext() {return nullptr;}
	virtual ::java::awt::Paint* getPaint() {return nullptr;}
	virtual $Object* getRenderingHint(::java::awt::RenderingHints$Key* hintKey) {return nullptr;}
	virtual ::java::awt::RenderingHints* getRenderingHints() {return nullptr;}
	virtual ::java::awt::Stroke* getStroke() {return nullptr;}
	virtual ::java::awt::geom::AffineTransform* getTransform() {return nullptr;}
	virtual bool hit(::java::awt::Rectangle* rect, ::java::awt::Shape* s, bool onStroke) {return false;}
	virtual void rotate(double theta) {}
	virtual void rotate(double theta, double x, double y) {}
	virtual void scale(double sx, double sy) {}
	virtual void setBackground(::java::awt::Color* color) {}
	virtual void setComposite(::java::awt::Composite* comp) {}
	virtual void setPaint(::java::awt::Paint* paint) {}
	virtual void setRenderingHint(::java::awt::RenderingHints$Key* hintKey, Object$* hintValue) {}
	virtual void setRenderingHints(::java::util::Map* hints) {}
	virtual void setStroke(::java::awt::Stroke* s) {}
	virtual void setTransform(::java::awt::geom::AffineTransform* Tx) {}
	virtual void shear(double shx, double shy) {}
	virtual void transform(::java::awt::geom::AffineTransform* Tx) {}
	virtual void translate(int32_t x, int32_t y) override {}
	virtual void translate(double tx, double ty) {}
};

	} // awt
} // java

#endif // _java_awt_Graphics2D_h_