#ifndef _javax_swing_text_DefaultHighlighter$DefaultHighlightPainter_h_
#define _javax_swing_text_DefaultHighlighter$DefaultHighlightPainter_h_
//$ class javax.swing.text.DefaultHighlighter$DefaultHighlightPainter
//$ extends javax.swing.text.LayeredHighlighter$LayerPainter

#include <javax/swing/text/LayeredHighlighter$LayerPainter.h>

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

class $import DefaultHighlighter$DefaultHighlightPainter : public ::javax::swing::text::LayeredHighlighter$LayerPainter {
	$class(DefaultHighlighter$DefaultHighlightPainter, $NO_CLASS_INIT, ::javax::swing::text::LayeredHighlighter$LayerPainter)
public:
	DefaultHighlighter$DefaultHighlightPainter();
	void init$(::java::awt::Color* c);
	virtual ::java::awt::Color* getColor();
	virtual void paint(::java::awt::Graphics* g, int32_t offs0, int32_t offs1, ::java::awt::Shape* bounds, ::javax::swing::text::JTextComponent* c) override;
	virtual ::java::awt::Shape* paintLayer(::java::awt::Graphics* g, int32_t offs0, int32_t offs1, ::java::awt::Shape* bounds, ::javax::swing::text::JTextComponent* c, ::javax::swing::text::View* view) override;
	::java::awt::Color* color = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_DefaultHighlighter$DefaultHighlightPainter_h_