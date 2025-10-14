#ifndef _javax_swing_text_html_CSSBorder$StrokePainter_h_
#define _javax_swing_text_html_CSSBorder$StrokePainter_h_
//$ class javax.swing.text.html.CSSBorder$StrokePainter
//$ extends javax.swing.text.html.CSSBorder$BorderPainter

#include <java/lang/Array.h>
#include <javax/swing/text/html/CSSBorder$BorderPainter.h>

namespace java {
	namespace awt {
		class Color;
		class Graphics;
		class Rectangle;
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class CSSBorder$StrokePainter : public ::javax::swing::text::html::CSSBorder$BorderPainter {
	$class(CSSBorder$StrokePainter, $NO_CLASS_INIT, ::javax::swing::text::html::CSSBorder$BorderPainter)
public:
	CSSBorder$StrokePainter();
	void init$();
	virtual void paintStrokes(::java::awt::Rectangle* r, ::java::awt::Graphics* g, int32_t axis, $ints* lengthPattern, $Array<::java::awt::Color>* colorPattern);
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_CSSBorder$StrokePainter_h_