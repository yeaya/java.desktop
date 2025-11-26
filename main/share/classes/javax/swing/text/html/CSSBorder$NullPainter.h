#ifndef _javax_swing_text_html_CSSBorder$NullPainter_h_
#define _javax_swing_text_html_CSSBorder$NullPainter_h_
//$ class javax.swing.text.html.CSSBorder$NullPainter
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

class CSSBorder$NullPainter : public ::javax::swing::text::html::CSSBorder$BorderPainter {
	$class(CSSBorder$NullPainter, $NO_CLASS_INIT, ::javax::swing::text::html::CSSBorder$BorderPainter)
public:
	CSSBorder$NullPainter();
	void init$();
	virtual void paint(::java::awt::Polygon* shape, ::java::awt::Graphics* g, ::java::awt::Color* color, int32_t side) override;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_CSSBorder$NullPainter_h_