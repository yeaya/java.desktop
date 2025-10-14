#ifndef _javax_swing_text_LayeredHighlighter_h_
#define _javax_swing_text_LayeredHighlighter_h_
//$ class javax.swing.text.LayeredHighlighter
//$ extends javax.swing.text.Highlighter

#include <javax/swing/text/Highlighter.h>

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

class $export LayeredHighlighter : public ::javax::swing::text::Highlighter {
	$class(LayeredHighlighter, $NO_CLASS_INIT, ::javax::swing::text::Highlighter)
public:
	LayeredHighlighter();
	void init$();
	virtual void paintLayeredHighlights(::java::awt::Graphics* g, int32_t p0, int32_t p1, ::java::awt::Shape* viewBounds, ::javax::swing::text::JTextComponent* editor, ::javax::swing::text::View* view) {}
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_LayeredHighlighter_h_