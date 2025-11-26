#ifndef _javax_swing_text_html_CSSBorder$DottedDashedPainter_h_
#define _javax_swing_text_html_CSSBorder$DottedDashedPainter_h_
//$ class javax.swing.text.html.CSSBorder$DottedDashedPainter
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

class CSSBorder$DottedDashedPainter : public ::javax::swing::text::html::CSSBorder$StrokePainter {
	$class(CSSBorder$DottedDashedPainter, $NO_CLASS_INIT, ::javax::swing::text::html::CSSBorder$StrokePainter)
public:
	CSSBorder$DottedDashedPainter();
	void init$(int32_t factor);
	virtual void paint(::java::awt::Polygon* shape, ::java::awt::Graphics* g, ::java::awt::Color* color, int32_t side) override;
	int32_t factor = 0;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_CSSBorder$DottedDashedPainter_h_