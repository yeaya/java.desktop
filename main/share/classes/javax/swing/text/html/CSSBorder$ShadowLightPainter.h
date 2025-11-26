#ifndef _javax_swing_text_html_CSSBorder$ShadowLightPainter_h_
#define _javax_swing_text_html_CSSBorder$ShadowLightPainter_h_
//$ class javax.swing.text.html.CSSBorder$ShadowLightPainter
//$ extends javax.swing.text.html.CSSBorder$StrokePainter

#include <javax/swing/text/html/CSSBorder$StrokePainter.h>

namespace java {
	namespace awt {
		class Color;
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class CSSBorder$ShadowLightPainter : public ::javax::swing::text::html::CSSBorder$StrokePainter {
	$class(CSSBorder$ShadowLightPainter, $NO_CLASS_INIT, ::javax::swing::text::html::CSSBorder$StrokePainter)
public:
	CSSBorder$ShadowLightPainter();
	void init$();
	static ::java::awt::Color* getLightColor(::java::awt::Color* c);
	static ::java::awt::Color* getShadowColor(::java::awt::Color* c);
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_CSSBorder$ShadowLightPainter_h_