#ifndef _sun_font_TextSourceLabel_h_
#define _sun_font_TextSourceLabel_h_
//$ class sun.font.TextSourceLabel
//$ extends sun.font.TextLabel

#include <sun/font/TextLabel.h>

namespace java {
	namespace awt {
		class Graphics2D;
		class Rectangle;
		class Shape;
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
			class Rectangle2D;
		}
	}
}
namespace sun {
	namespace font {
		class TextSource;
	}
}

namespace sun {
	namespace font {

class TextSourceLabel : public ::sun::font::TextLabel {
	$class(TextSourceLabel, $NO_CLASS_INIT, ::sun::font::TextLabel)
public:
	TextSourceLabel();
	using ::sun::font::TextLabel::getVisualBounds;
	using ::sun::font::TextLabel::getLogicalBounds;
	using ::sun::font::TextLabel::getAlignBounds;
	using ::sun::font::TextLabel::getItalicBounds;
	using ::sun::font::TextLabel::getOutline;
	using ::sun::font::TextLabel::draw;
	void init$(::sun::font::TextSource* source);
	void init$(::sun::font::TextSource* source, ::java::awt::geom::Rectangle2D* lb, ::java::awt::geom::Rectangle2D* ab, ::java::awt::font::GlyphVector* gv);
	virtual ::java::awt::geom::Rectangle2D* createAlignBounds();
	virtual ::java::awt::font::GlyphVector* createGV();
	virtual ::java::awt::geom::Rectangle2D* createItalicBounds();
	virtual ::java::awt::geom::Rectangle2D* createLogicalBounds();
	virtual ::java::awt::geom::Rectangle2D* createVisualBounds();
	virtual void draw(::java::awt::Graphics2D* g, float x, float y) override;
	virtual ::java::awt::geom::Rectangle2D* getAlignBounds(float x, float y) override;
	virtual ::java::awt::geom::AffineTransform* getBaselineTransform();
	::java::awt::font::GlyphVector* getGV();
	virtual ::java::awt::geom::Rectangle2D* getItalicBounds(float x, float y) override;
	virtual ::java::awt::geom::Rectangle2D* getLogicalBounds(float x, float y) override;
	virtual ::java::awt::Shape* getOutline(float x, float y) override;
	virtual ::java::awt::Rectangle* getPixelBounds(::java::awt::font::FontRenderContext* frc, float x, float y);
	virtual ::sun::font::TextSource* getSource();
	virtual ::java::awt::geom::Rectangle2D* getVisualBounds(float x, float y) override;
	::sun::font::TextSource* source = nullptr;
	::java::awt::geom::Rectangle2D* lb = nullptr;
	::java::awt::geom::Rectangle2D* ab = nullptr;
	::java::awt::geom::Rectangle2D* vb = nullptr;
	::java::awt::geom::Rectangle2D* ib = nullptr;
	::java::awt::font::GlyphVector* gv = nullptr;
};

	} // font
} // sun

#endif // _sun_font_TextSourceLabel_h_