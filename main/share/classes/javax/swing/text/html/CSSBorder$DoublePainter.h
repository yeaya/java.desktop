#ifndef _javax_swing_text_html_CSSBorder$DoublePainter_h_
#define _javax_swing_text_html_CSSBorder$DoublePainter_h_
//$ class javax.swing.text.html.CSSBorder$DoublePainter
//$ extends javax.swing.text.html.CSSBorder$StrokePainter

#include <javax/swing/text/html/CSSBorder$StrokePainter.h>

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

class CSSBorder$DoublePainter : public ::javax::swing::text::html::CSSBorder$StrokePainter {
	$class(CSSBorder$DoublePainter, $NO_CLASS_INIT, ::javax::swing::text::html::CSSBorder$StrokePainter)
public:
	CSSBorder$DoublePainter();
	void init$();
	virtual void paint(::java::awt::Polygon* shape, ::java::awt::Graphics* g, ::java::awt::Color* color, int32_t side) override;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_CSSBorder$DoublePainter_h_