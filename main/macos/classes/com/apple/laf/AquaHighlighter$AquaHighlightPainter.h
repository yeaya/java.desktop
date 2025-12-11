#ifndef _com_apple_laf_AquaHighlighter$AquaHighlightPainter_h_
#define _com_apple_laf_AquaHighlighter$AquaHighlightPainter_h_
//$ class com.apple.laf.AquaHighlighter$AquaHighlightPainter
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

namespace com {
	namespace apple {
		namespace laf {

class AquaHighlighter$AquaHighlightPainter : public ::javax::swing::text::DefaultHighlighter$DefaultHighlightPainter {
	$class(AquaHighlighter$AquaHighlightPainter, $NO_CLASS_INIT, ::javax::swing::text::DefaultHighlighter$DefaultHighlightPainter)
public:
	AquaHighlighter$AquaHighlightPainter();
	void init$(::java::awt::Color* c);
	virtual ::java::awt::Color* getColor() override;
	virtual ::java::awt::Color* getInactiveSelectionColor();
	virtual void paint(::java::awt::Graphics* g, int32_t offs0, int32_t offs1, ::java::awt::Shape* bounds, ::javax::swing::text::JTextComponent* c) override;
	virtual ::java::awt::Shape* paintLayer(::java::awt::Graphics* g, int32_t offs0, int32_t offs1, ::java::awt::Shape* bounds, ::javax::swing::text::JTextComponent* c, ::javax::swing::text::View* view) override;
	virtual void setColor(::javax::swing::text::JTextComponent* c);
	::java::awt::Color* selectionColor = nullptr;
	::java::awt::Color* disabledSelectionColor = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaHighlighter$AquaHighlightPainter_h_