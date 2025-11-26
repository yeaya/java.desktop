#ifndef _sun_print_ProxyGraphics2D_h_
#define _sun_print_ProxyGraphics2D_h_
//$ class sun.print.ProxyGraphics2D
//$ extends java.awt.Graphics2D
//$ implements java.awt.print.PrinterGraphics

#include <java/awt/Graphics2D.h>
#include <java/awt/print/PrinterGraphics.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Color;
		class Composite;
		class Font;
		class FontMetrics;
		class Graphics;
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
	namespace awt {
		namespace print {
			class PrinterJob;
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

namespace sun {
	namespace print {

class ProxyGraphics2D : public ::java::awt::Graphics2D, public ::java::awt::print::PrinterGraphics {
	$class(ProxyGraphics2D, $HAS_FINALIZE | $NO_CLASS_INIT, ::java::awt::Graphics2D, ::java::awt::print::PrinterGraphics)
public:
	ProxyGraphics2D();
	using ::java::awt::Graphics2D::create;
	using ::java::awt::Graphics2D::getFontMetrics;
	using ::java::awt::Graphics2D::drawPolygon;
	using ::java::awt::Graphics2D::fillPolygon;
	using ::java::awt::Graphics2D::getClipBounds;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::Graphics2D* graphics, ::java::awt::print::PrinterJob* printerJob);
	virtual void addRenderingHints(::java::util::Map* hints) override;
	virtual void clearRect(int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void clip(::java::awt::Shape* s) override;
	virtual void clipRect(int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void copyArea(int32_t x, int32_t y, int32_t width, int32_t height, int32_t dx, int32_t dy) override;
	virtual ::java::awt::Graphics* create() override;
	virtual void dispose() override;
	virtual void draw(::java::awt::Shape* s) override;
	virtual void drawArc(int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) override;
	virtual void drawGlyphVector(::java::awt::font::GlyphVector* g, float x, float y) override;
	virtual bool drawImage(::java::awt::Image* img, int32_t x, int32_t y, ::java::awt::image::ImageObserver* observer) override;
	virtual bool drawImage(::java::awt::Image* img, int32_t x, int32_t y, int32_t width, int32_t height, ::java::awt::image::ImageObserver* observer) override;
	virtual bool drawImage(::java::awt::Image* img, int32_t x, int32_t y, ::java::awt::Color* bgcolor, ::java::awt::image::ImageObserver* observer) override;
	virtual bool drawImage(::java::awt::Image* img, int32_t x, int32_t y, int32_t width, int32_t height, ::java::awt::Color* bgcolor, ::java::awt::image::ImageObserver* observer) override;
	virtual bool drawImage(::java::awt::Image* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, ::java::awt::image::ImageObserver* observer) override;
	virtual bool drawImage(::java::awt::Image* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, ::java::awt::Color* bgcolor, ::java::awt::image::ImageObserver* observer) override;
	virtual bool drawImage(::java::awt::Image* img, ::java::awt::geom::AffineTransform* xform, ::java::awt::image::ImageObserver* obs) override;
	virtual void drawImage(::java::awt::image::BufferedImage* img, ::java::awt::image::BufferedImageOp* op, int32_t x, int32_t y) override;
	virtual void drawLine(int32_t x1, int32_t y1, int32_t x2, int32_t y2) override;
	virtual void drawOval(int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void drawPolygon($ints* xPoints, $ints* yPoints, int32_t nPoints) override;
	virtual void drawPolyline($ints* xPoints, $ints* yPoints, int32_t nPoints) override;
	virtual void drawRenderableImage(::java::awt::image::renderable::RenderableImage* img, ::java::awt::geom::AffineTransform* xform) override;
	virtual void drawRenderedImage(::java::awt::image::RenderedImage* img, ::java::awt::geom::AffineTransform* xform) override;
	virtual void drawRoundRect(int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) override;
	virtual void drawString($String* str, int32_t x, int32_t y) override;
	virtual void drawString(::java::text::AttributedCharacterIterator* iterator, int32_t x, int32_t y) override;
	virtual void drawString(::java::text::AttributedCharacterIterator* iterator, float x, float y) override;
	virtual void drawString($String* str, float x, float y) override;
	virtual void fill(::java::awt::Shape* s) override;
	virtual void fillArc(int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) override;
	virtual void fillOval(int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void fillPolygon($ints* xPoints, $ints* yPoints, int32_t nPoints) override;
	virtual void fillRect(int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void fillRoundRect(int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) override;
	virtual void finalize() override;
	virtual ::java::awt::Color* getBackground() override;
	::java::awt::image::BufferedImage* getBufferedImageCopy(::java::awt::Image* img, ::java::awt::Color* bgcolor);
	virtual ::java::awt::Shape* getClip() override;
	virtual ::java::awt::Rectangle* getClipBounds() override;
	virtual ::java::awt::Color* getColor() override;
	virtual ::java::awt::Composite* getComposite() override;
	virtual ::java::awt::Graphics2D* getDelegate();
	virtual ::java::awt::GraphicsConfiguration* getDeviceConfiguration() override;
	virtual ::java::awt::Font* getFont() override;
	virtual ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* f) override;
	virtual ::java::awt::font::FontRenderContext* getFontRenderContext() override;
	virtual ::java::awt::Paint* getPaint() override;
	virtual ::java::awt::print::PrinterJob* getPrinterJob() override;
	virtual $Object* getRenderingHint(::java::awt::RenderingHints$Key* hintCategory) override;
	virtual ::java::awt::RenderingHints* getRenderingHints() override;
	virtual ::java::awt::Stroke* getStroke() override;
	virtual ::java::awt::geom::AffineTransform* getTransform() override;
	virtual bool hit(::java::awt::Rectangle* rect, ::java::awt::Shape* s, bool onStroke) override;
	bool needToCopyBgColorImage(::java::awt::Image* img);
	virtual void rotate(double theta) override;
	virtual void rotate(double theta, double x, double y) override;
	virtual void scale(double sx, double sy) override;
	virtual void setBackground(::java::awt::Color* color) override;
	virtual void setClip(int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void setClip(::java::awt::Shape* clip) override;
	virtual void setColor(::java::awt::Color* c) override;
	virtual void setComposite(::java::awt::Composite* comp) override;
	virtual void setDelegate(::java::awt::Graphics2D* graphics);
	virtual void setFont(::java::awt::Font* font) override;
	virtual void setPaint(::java::awt::Paint* paint) override;
	virtual void setPaintMode() override;
	virtual void setRenderingHint(::java::awt::RenderingHints$Key* hintCategory, Object$* hintValue) override;
	virtual void setRenderingHints(::java::util::Map* hints) override;
	virtual void setStroke(::java::awt::Stroke* s) override;
	virtual void setTransform(::java::awt::geom::AffineTransform* Tx) override;
	virtual void setXORMode(::java::awt::Color* c1) override;
	virtual void shear(double shx, double shy) override;
	virtual $String* toString() override;
	virtual void transform(::java::awt::geom::AffineTransform* Tx) override;
	virtual void translate(int32_t x, int32_t y) override;
	virtual void translate(double tx, double ty) override;
	::java::awt::Graphics2D* mGraphics = nullptr;
	::java::awt::print::PrinterJob* mPrinterJob = nullptr;
};

	} // print
} // sun

#endif // _sun_print_ProxyGraphics2D_h_