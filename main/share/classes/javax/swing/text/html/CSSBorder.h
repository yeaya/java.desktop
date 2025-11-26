#ifndef _javax_swing_text_html_CSSBorder_h_
#define _javax_swing_text_html_CSSBorder_h_
//$ class javax.swing.text.html.CSSBorder
//$ extends javax.swing.border.AbstractBorder

#include <java/lang/Array.h>
#include <javax/swing/border/AbstractBorder.h>

#pragma push_macro("ATTRIBUTES")
#undef ATTRIBUTES
#pragma push_macro("BOTTOM")
#undef BOTTOM
#pragma push_macro("COLOR")
#undef COLOR
#pragma push_macro("DEFAULTS")
#undef DEFAULTS
#pragma push_macro("LEFT")
#undef LEFT
#pragma push_macro("PARSERS")
#undef PARSERS
#pragma push_macro("RIGHT")
#undef RIGHT
#pragma push_macro("STYLE")
#undef STYLE
#pragma push_macro("TOP")
#undef TOP
#pragma push_macro("WIDTH")
#undef WIDTH

namespace java {
	namespace awt {
		class Color;
		class Component;
		class Graphics;
		class Insets;
		class Polygon;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class CSS$Attribute;
				class CSS$CssValue;
				class CSS$Value;
				class CSSBorder$BorderPainter;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class CSSBorder : public ::javax::swing::border::AbstractBorder {
	$class(CSSBorder, 0, ::javax::swing::border::AbstractBorder)
public:
	CSSBorder();
	using ::javax::swing::border::AbstractBorder::getBorderInsets;
	void init$(::javax::swing::text::AttributeSet* attrs);
	static ::java::awt::Color* getAdjustedColor(::java::awt::Color* c, double factor);
	::java::awt::Color* getBorderColor(int32_t side);
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c, ::java::awt::Insets* insets) override;
	::javax::swing::text::html::CSSBorder$BorderPainter* getBorderPainter(int32_t side);
	::java::awt::Polygon* getBorderShape(int32_t side);
	::javax::swing::text::html::CSS$Value* getBorderStyle(int32_t side);
	int32_t getBorderWidth(int32_t side);
	$ints* getWidths();
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) override;
	static void registerBorderPainter(::javax::swing::text::html::CSS$Value* style, ::javax::swing::text::html::CSSBorder$BorderPainter* painter);
	static const int32_t COLOR = 0;
	static const int32_t STYLE = 1;
	static const int32_t WIDTH = 2;
	static const int32_t TOP = 0;
	static const int32_t RIGHT = 1;
	static const int32_t BOTTOM = 2;
	static const int32_t LEFT = 3;
	static $Array<::javax::swing::text::html::CSS$Attribute, 2>* ATTRIBUTES;
	static $Array<::javax::swing::text::html::CSS$CssValue>* PARSERS;
	static $ObjectArray* DEFAULTS;
	::javax::swing::text::AttributeSet* attrs = nullptr;
	static ::java::util::Map* borderPainters;
};

			} // html
		} // text
	} // swing
} // javax

#pragma pop_macro("ATTRIBUTES")
#pragma pop_macro("BOTTOM")
#pragma pop_macro("COLOR")
#pragma pop_macro("DEFAULTS")
#pragma pop_macro("LEFT")
#pragma pop_macro("PARSERS")
#pragma pop_macro("RIGHT")
#pragma pop_macro("STYLE")
#pragma pop_macro("TOP")
#pragma pop_macro("WIDTH")

#endif // _javax_swing_text_html_CSSBorder_h_