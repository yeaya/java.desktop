#ifndef _sun_font_Decoration$DecorationImpl_h_
#define _sun_font_Decoration$DecorationImpl_h_
//$ class sun.font.Decoration$DecorationImpl
//$ extends sun.font.Decoration

#include <sun/font/Decoration.h>

namespace java {
	namespace awt {
		class Graphics2D;
		class Paint;
		class Shape;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class Rectangle2D;
		}
	}
}
namespace sun {
	namespace font {
		class CoreMetrics;
		class Decoration$Label;
		class Underline;
	}
}

namespace sun {
	namespace font {

class Decoration$DecorationImpl : public ::sun::font::Decoration {
	$class(Decoration$DecorationImpl, $NO_CLASS_INIT, ::sun::font::Decoration)
public:
	Decoration$DecorationImpl();
	void init$(::java::awt::Paint* foreground, ::java::awt::Paint* background, bool swapColors, bool strikethrough, ::sun::font::Underline* stdUnderline, ::sun::font::Underline* imUnderline);
	static bool areEqual(Object$* lhs, Object$* rhs);
	virtual void drawTextAndDecorations(::sun::font::Decoration$Label* label, ::java::awt::Graphics2D* g2d, float x, float y) override;
	void drawTextAndEmbellishments(::sun::font::Decoration$Label* label, ::java::awt::Graphics2D* g2d, float x, float y);
	virtual bool equals(Object$* rhs) override;
	virtual ::java::awt::Shape* getOutline(::sun::font::Decoration$Label* label, float x, float y) override;
	float getUnderlineMaxY(::sun::font::CoreMetrics* cm);
	virtual ::java::awt::geom::Rectangle2D* getVisualBounds(::sun::font::Decoration$Label* label) override;
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	::java::awt::Paint* fgPaint = nullptr;
	::java::awt::Paint* bgPaint = nullptr;
	bool swapColors = false;
	bool strikethrough = false;
	::sun::font::Underline* stdUnderline = nullptr;
	::sun::font::Underline* imUnderline = nullptr;
};

	} // font
} // sun

#endif // _sun_font_Decoration$DecorationImpl_h_