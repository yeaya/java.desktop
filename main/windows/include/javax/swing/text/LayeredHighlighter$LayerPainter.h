#ifndef _javax_swing_text_LayeredHighlighter$LayerPainter_h_
#define _javax_swing_text_LayeredHighlighter$LayerPainter_h_
//$ class javax.swing.text.LayeredHighlighter$LayerPainter
//$ extends javax.swing.text.Highlighter$HighlightPainter

#include <javax/swing/text/Highlighter$HighlightPainter.h>

namespace java {
	namespace awt {
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

class $import LayeredHighlighter$LayerPainter : public ::javax::swing::text::Highlighter$HighlightPainter {
	$class(LayeredHighlighter$LayerPainter, $NO_CLASS_INIT, ::javax::swing::text::Highlighter$HighlightPainter)
public:
	LayeredHighlighter$LayerPainter();
	void init$();
	virtual ::java::awt::Shape* paintLayer(::java::awt::Graphics* g, int32_t p0, int32_t p1, ::java::awt::Shape* viewBounds, ::javax::swing::text::JTextComponent* editor, ::javax::swing::text::View* view) {return nullptr;}
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_LayeredHighlighter$LayerPainter_h_