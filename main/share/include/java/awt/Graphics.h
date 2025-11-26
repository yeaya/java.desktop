#ifndef _java_awt_Graphics_h_
#define _java_awt_Graphics_h_
//$ class java.awt.Graphics
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Color;
		class Font;
		class FontMetrics;
		class Image;
		class Polygon;
		class Rectangle;
		class Shape;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class ImageObserver;
		}
	}
}
namespace java {
	namespace text {
		class AttributedCharacterIterator;
	}
}

namespace java {
	namespace awt {

class $import Graphics : public ::java::lang::Object {
	$class(Graphics, $HAS_FINALIZE | $NO_CLASS_INIT, ::java::lang::Object)
public:
	Graphics();
	void init$();
	virtual void clearRect(int32_t x, int32_t y, int32_t width, int32_t height) {}
	virtual void clipRect(int32_t x, int32_t y, int32_t width, int32_t height) {}
	virtual void copyArea(int32_t x, int32_t y, int32_t width, int32_t height, int32_t dx, int32_t dy) {}
	virtual ::java::awt::Graphics* create() {return nullptr;}
	virtual ::java::awt::Graphics* create(int32_t x, int32_t y, int32_t width, int32_t height);
	virtual void dispose() {}
	virtual void draw3DRect(int32_t x, int32_t y, int32_t width, int32_t height, bool raised);
	virtual void drawArc(int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) {}
	virtual void drawBytes($bytes* data, int32_t offset, int32_t length, int32_t x, int32_t y);
	virtual void drawChars($chars* data, int32_t offset, int32_t length, int32_t x, int32_t y);
	virtual bool drawImage(::java::awt::Image* img, int32_t x, int32_t y, ::java::awt::image::ImageObserver* observer) {return false;}
	virtual bool drawImage(::java::awt::Image* img, int32_t x, int32_t y, int32_t width, int32_t height, ::java::awt::image::ImageObserver* observer) {return false;}
	virtual bool drawImage(::java::awt::Image* img, int32_t x, int32_t y, ::java::awt::Color* bgcolor, ::java::awt::image::ImageObserver* observer) {return false;}
	virtual bool drawImage(::java::awt::Image* img, int32_t x, int32_t y, int32_t width, int32_t height, ::java::awt::Color* bgcolor, ::java::awt::image::ImageObserver* observer) {return false;}
	virtual bool drawImage(::java::awt::Image* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, ::java::awt::image::ImageObserver* observer) {return false;}
	virtual bool drawImage(::java::awt::Image* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, ::java::awt::Color* bgcolor, ::java::awt::image::ImageObserver* observer) {return false;}
	virtual void drawLine(int32_t x1, int32_t y1, int32_t x2, int32_t y2) {}
	virtual void drawOval(int32_t x, int32_t y, int32_t width, int32_t height) {}
	virtual void drawPolygon($ints* xPoints, $ints* yPoints, int32_t nPoints) {}
	virtual void drawPolygon(::java::awt::Polygon* p);
	virtual void drawPolyline($ints* xPoints, $ints* yPoints, int32_t nPoints) {}
	virtual void drawRect(int32_t x, int32_t y, int32_t width, int32_t height);
	virtual void drawRoundRect(int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) {}
	virtual void drawString($String* str, int32_t x, int32_t y) {}
	virtual void drawString(::java::text::AttributedCharacterIterator* iterator, int32_t x, int32_t y) {}
	virtual void fill3DRect(int32_t x, int32_t y, int32_t width, int32_t height, bool raised);
	virtual void fillArc(int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) {}
	virtual void fillOval(int32_t x, int32_t y, int32_t width, int32_t height) {}
	virtual void fillPolygon($ints* xPoints, $ints* yPoints, int32_t nPoints) {}
	virtual void fillPolygon(::java::awt::Polygon* p);
	virtual void fillRect(int32_t x, int32_t y, int32_t width, int32_t height) {}
	virtual void fillRoundRect(int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) {}
	virtual void finalize() override;
	virtual ::java::awt::Shape* getClip() {return nullptr;}
	virtual ::java::awt::Rectangle* getClipBounds() {return nullptr;}
	virtual ::java::awt::Rectangle* getClipBounds(::java::awt::Rectangle* r);
	virtual ::java::awt::Rectangle* getClipRect();
	virtual ::java::awt::Color* getColor() {return nullptr;}
	virtual ::java::awt::Font* getFont() {return nullptr;}
	virtual ::java::awt::FontMetrics* getFontMetrics();
	virtual ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* f) {return nullptr;}
	virtual bool hitClip(int32_t x, int32_t y, int32_t width, int32_t height);
	virtual void setClip(int32_t x, int32_t y, int32_t width, int32_t height) {}
	virtual void setClip(::java::awt::Shape* clip) {}
	virtual void setColor(::java::awt::Color* c) {}
	virtual void setFont(::java::awt::Font* font) {}
	virtual void setPaintMode() {}
	virtual void setXORMode(::java::awt::Color* c1) {}
	virtual $String* toString() override;
	virtual void translate(int32_t x, int32_t y) {}
};

	} // awt
} // java

#endif // _java_awt_Graphics_h_