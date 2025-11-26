#ifndef _javax_swing_text_html_CSSBorder$BorderPainter_h_
#define _javax_swing_text_html_CSSBorder$BorderPainter_h_
//$ interface javax.swing.text.html.CSSBorder$BorderPainter
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Color;
		class Graphics;
		class Polygon;
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class CSSBorder$BorderPainter : public ::java::lang::Object {
	$interface(CSSBorder$BorderPainter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void paint(::java::awt::Polygon* shape, ::java::awt::Graphics* g, ::java::awt::Color* color, int32_t side) {}
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_CSSBorder$BorderPainter_h_