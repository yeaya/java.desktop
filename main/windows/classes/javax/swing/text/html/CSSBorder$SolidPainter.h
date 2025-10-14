#ifndef _javax_swing_text_html_CSSBorder$SolidPainter_h_
#define _javax_swing_text_html_CSSBorder$SolidPainter_h_
//$ class javax.swing.text.html.CSSBorder$SolidPainter
//$ extends javax.swing.text.html.CSSBorder$BorderPainter

#include <javax/swing/text/html/CSSBorder$BorderPainter.h>

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

class CSSBorder$SolidPainter : public ::javax::swing::text::html::CSSBorder$BorderPainter {
	$class(CSSBorder$SolidPainter, $NO_CLASS_INIT, ::javax::swing::text::html::CSSBorder$BorderPainter)
public:
	CSSBorder$SolidPainter();
	void init$();
	virtual void paint(::java::awt::Polygon* shape, ::java::awt::Graphics* g, ::java::awt::Color* color, int32_t side) override;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_CSSBorder$SolidPainter_h_