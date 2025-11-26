#ifndef _javax_swing_text_html_StyleSheet$BoxPainter_h_
#define _javax_swing_text_html_StyleSheet$BoxPainter_h_
//$ class javax.swing.text.html.StyleSheet$BoxPainter
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace java {
	namespace awt {
		class Color;
		class Graphics;
		class Insets;
	}
}
namespace javax {
	namespace swing {
		namespace border {
			class Border;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
			class View;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class CSS;
				class CSS$Attribute;
				class StyleSheet;
				class StyleSheet$BackgroundImagePainter;
				class StyleSheet$BoxPainter$HorizontalMargin;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class $export StyleSheet$BoxPainter : public ::java::io::Serializable {
	$class(StyleSheet$BoxPainter, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	StyleSheet$BoxPainter();
	void init$(::javax::swing::text::AttributeSet* a, ::javax::swing::text::html::CSS* css, ::javax::swing::text::html::StyleSheet* ss);
	virtual ::javax::swing::border::Border* getBorder(::javax::swing::text::AttributeSet* a);
	virtual ::java::awt::Color* getBorderColor(::javax::swing::text::AttributeSet* a);
	virtual float getInset(int32_t side, ::javax::swing::text::View* v);
	virtual float getLength(::javax::swing::text::html::CSS$Attribute* key, ::javax::swing::text::AttributeSet* a);
	virtual float getOrientationMargin(::javax::swing::text::html::StyleSheet$BoxPainter$HorizontalMargin* side, float cssMargin, ::javax::swing::text::AttributeSet* a, bool isLeftToRight);
	static bool isLeftToRight(::javax::swing::text::View* v);
	static bool isOrientationAware(::javax::swing::text::View* v);
	virtual void paint(::java::awt::Graphics* g, float x, float y, float w, float h, ::javax::swing::text::View* v);
	float topMargin = 0.0;
	float bottomMargin = 0.0;
	float leftMargin = 0.0;
	float rightMargin = 0.0;
	int16_t marginFlags = 0;
	::javax::swing::border::Border* border = nullptr;
	::java::awt::Insets* binsets = nullptr;
	::javax::swing::text::html::CSS* css = nullptr;
	::javax::swing::text::html::StyleSheet* ss = nullptr;
	::java::awt::Color* bg = nullptr;
	::javax::swing::text::html::StyleSheet$BackgroundImagePainter* bgPainter = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_StyleSheet$BoxPainter_h_