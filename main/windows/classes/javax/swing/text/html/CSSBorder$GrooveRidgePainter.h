#ifndef _javax_swing_text_html_CSSBorder$GrooveRidgePainter_h_
#define _javax_swing_text_html_CSSBorder$GrooveRidgePainter_h_
//$ class javax.swing.text.html.CSSBorder$GrooveRidgePainter
//$ extends javax.swing.text.html.CSSBorder$ShadowLightPainter

#include <javax/swing/text/html/CSSBorder$ShadowLightPainter.h>

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
				class CSS$Value;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class CSSBorder$GrooveRidgePainter : public ::javax::swing::text::html::CSSBorder$ShadowLightPainter {
	$class(CSSBorder$GrooveRidgePainter, $NO_CLASS_INIT, ::javax::swing::text::html::CSSBorder$ShadowLightPainter)
public:
	CSSBorder$GrooveRidgePainter();
	void init$(::javax::swing::text::html::CSS$Value* type);
	virtual void paint(::java::awt::Polygon* shape, ::java::awt::Graphics* g, ::java::awt::Color* color, int32_t side) override;
	::javax::swing::text::html::CSS$Value* type = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_CSSBorder$GrooveRidgePainter_h_