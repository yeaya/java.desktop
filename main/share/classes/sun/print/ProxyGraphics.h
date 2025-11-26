#ifndef _sun_print_ProxyGraphics_h_
#define _sun_print_ProxyGraphics_h_
//$ class sun.print.ProxyGraphics
//$ extends java.awt.Graphics

#include <java/awt/Graphics.h>
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

namespace sun {
	namespace print {

class ProxyGraphics : public ::java::awt::Graphics {
	$class(ProxyGraphics, $HAS_FINALIZE | $NO_CLASS_INIT, ::java::awt::Graphics)
public:
	ProxyGraphics();
	void init$(::java::awt::Graphics* graphics);
	virtual void clearRect(int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void clipRect(int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void copyArea(int32_t x, int32_t y, int32_t width, int32_t height, int32_t dx, int32_t dy) override;
	virtual ::java::awt::Graphics* create() override;
	virtual ::java::awt::Graphics* create(int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void dispose() override;
	virtual void draw3DRect(int32_t x, int32_t y, int32_t width, int32_t height, bool raised) override;
	virtual void drawArc(int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) override;
	virtual void drawBytes($bytes* data, int32_t offset, int32_t length, int32_t x, int32_t y) override;
	virtual void drawChars($chars* data, int32_t offset, int32_t length, int32_t x, int32_t y) override;
	virtual bool drawImage(::java::awt::Image* img, int32_t x, int32_t y, ::java::awt::image::ImageObserver* observer) override;
	virtual bool drawImage(::java::awt::Image* img, int32_t x, int32_t y, int32_t width, int32_t height, ::java::awt::image::ImageObserver* observer) override;
	virtual bool drawImage(::java::awt::Image* img, int32_t x, int32_t y, ::java::awt::Color* bgcolor, ::java::awt::image::ImageObserver* observer) override;
	virtual bool drawImage(::java::awt::Image* img, int32_t x, int32_t y, int32_t width, int32_t height, ::java::awt::Color* bgcolor, ::java::awt::image::ImageObserver* observer) override;
	virtual bool drawImage(::java::awt::Image* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, ::java::awt::image::ImageObserver* observer) override;
	virtual bool drawImage(::java::awt::Image* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, ::java::awt::Color* bgcolor, ::java::awt::image::ImageObserver* observer) override;
	virtual void drawLine(int32_t x1, int32_t y1, int32_t x2, int32_t y2) override;
	virtual void drawOval(int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void drawPolygon($ints* xPoints, $ints* yPoints, int32_t nPoints) override;
	virtual void drawPolygon(::java::awt::Polygon* p) override;
	virtual void drawPolyline($ints* xPoints, $ints* yPoints, int32_t nPoints) override;
	virtual void drawRect(int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void drawRoundRect(int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) override;
	virtual void drawString($String* str, int32_t x, int32_t y) override;
	virtual void drawString(::java::text::AttributedCharacterIterator* iterator, int32_t x, int32_t y) override;
	virtual void fill3DRect(int32_t x, int32_t y, int32_t width, int32_t height, bool raised) override;
	virtual void fillArc(int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) override;
	virtual void fillOval(int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void fillPolygon($ints* xPoints, $ints* yPoints, int32_t nPoints) override;
	virtual void fillPolygon(::java::awt::Polygon* p) override;
	virtual void fillRect(int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void fillRoundRect(int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) override;
	virtual void finalize() override;
	virtual ::java::awt::Shape* getClip() override;
	virtual ::java::awt::Rectangle* getClipBounds() override;
	virtual ::java::awt::Rectangle* getClipBounds(::java::awt::Rectangle* r) override;
	virtual ::java::awt::Rectangle* getClipRect() override;
	virtual ::java::awt::Color* getColor() override;
	virtual ::java::awt::Font* getFont() override;
	virtual ::java::awt::FontMetrics* getFontMetrics() override;
	virtual ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* f) override;
	virtual ::java::awt::Graphics* getGraphics();
	virtual bool hitClip(int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void setClip(int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void setClip(::java::awt::Shape* clip) override;
	virtual void setColor(::java::awt::Color* c) override;
	virtual void setFont(::java::awt::Font* font) override;
	virtual void setPaintMode() override;
	virtual void setXORMode(::java::awt::Color* c1) override;
	virtual $String* toString() override;
	virtual void translate(int32_t x, int32_t y) override;
	::java::awt::Graphics* g = nullptr;
};

	} // print
} // sun

#endif // _sun_print_ProxyGraphics_h_