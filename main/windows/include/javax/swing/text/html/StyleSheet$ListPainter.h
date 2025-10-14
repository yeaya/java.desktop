#ifndef _javax_swing_text_html_StyleSheet$ListPainter_h_
#define _javax_swing_text_html_StyleSheet$ListPainter_h_
//$ class javax.swing.text.html.StyleSheet$ListPainter
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Component;
		class Graphics;
		class Rectangle;
	}
}
namespace java {
	namespace net {
		class URL;
	}
}
namespace javax {
	namespace swing {
		class Icon;
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
				class CSS$Value;
				class StyleSheet;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class $import StyleSheet$ListPainter : public ::java::io::Serializable {
	$class(StyleSheet$ListPainter, 0, ::java::io::Serializable)
public:
	StyleSheet$ListPainter();
	void init$(::javax::swing::text::AttributeSet* attr, ::javax::swing::text::html::StyleSheet* ss);
	virtual void drawIcon(::java::awt::Graphics* g, int32_t ax, int32_t ay, int32_t aw, int32_t ah, float align, ::java::awt::Component* c);
	virtual void drawLetter(::java::awt::Graphics* g, char16_t letter, int32_t ax, int32_t ay, int32_t aw, int32_t ah, float align, int32_t index);
	virtual void drawShape(::java::awt::Graphics* g, ::javax::swing::text::html::CSS$Value* type, int32_t ax, int32_t ay, int32_t aw, int32_t ah, float align);
	virtual $String* formatAlphaNumerals(int32_t itemNum);
	virtual $String* formatItemNum(int32_t itemNum, char16_t type);
	virtual $String* formatRomanDigit(int32_t level, int32_t digit);
	virtual $String* formatRomanNumerals(int32_t num);
	virtual $String* formatRomanNumerals(int32_t level, int32_t num);
	::javax::swing::text::html::CSS$Value* getChildType(::javax::swing::text::View* childView);
	int32_t getRenderIndex(::javax::swing::text::View* parentView, int32_t childIndex);
	void getStart(::javax::swing::text::View* parent);
	virtual void paint(::java::awt::Graphics* g, float x, float y, float w, float h, ::javax::swing::text::View* v, int32_t item);
	static $Array<char16_t, 2>* romanChars;
	::java::awt::Rectangle* paintRect = nullptr;
	bool checkedForStart = false;
	int32_t start = 0;
	::javax::swing::text::html::CSS$Value* type = nullptr;
	::java::net::URL* imageurl = nullptr;
	::javax::swing::text::html::StyleSheet* ss = nullptr;
	::javax::swing::Icon* img = nullptr;
	int32_t bulletgap = 0;
	bool isLeftToRight = false;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_StyleSheet$ListPainter_h_