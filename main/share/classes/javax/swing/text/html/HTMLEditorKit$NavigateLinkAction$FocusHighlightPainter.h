#ifndef _javax_swing_text_html_HTMLEditorKit$NavigateLinkAction$FocusHighlightPainter_h_
#define _javax_swing_text_html_HTMLEditorKit$NavigateLinkAction$FocusHighlightPainter_h_
//$ class javax.swing.text.html.HTMLEditorKit$NavigateLinkAction$FocusHighlightPainter
//$ extends javax.swing.text.DefaultHighlighter$DefaultHighlightPainter

#include <javax/swing/text/DefaultHighlighter$DefaultHighlightPainter.h>

namespace java {
	namespace awt {
		class Color;
		class Graphics;
		class Shape;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class JTextComponent;
			class View;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class $export HTMLEditorKit$NavigateLinkAction$FocusHighlightPainter : public ::javax::swing::text::DefaultHighlighter$DefaultHighlightPainter {
	$class(HTMLEditorKit$NavigateLinkAction$FocusHighlightPainter, $NO_CLASS_INIT, ::javax::swing::text::DefaultHighlighter$DefaultHighlightPainter)
public:
	HTMLEditorKit$NavigateLinkAction$FocusHighlightPainter();
	void init$(::java::awt::Color* color);
	virtual ::java::awt::Shape* paintLayer(::java::awt::Graphics* g, int32_t offs0, int32_t offs1, ::java::awt::Shape* bounds, ::javax::swing::text::JTextComponent* c, ::javax::swing::text::View* view) override;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_HTMLEditorKit$NavigateLinkAction$FocusHighlightPainter_h_