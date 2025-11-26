#ifndef _javax_swing_text_Highlighter$HighlightPainter_h_
#define _javax_swing_text_Highlighter$HighlightPainter_h_
//$ interface javax.swing.text.Highlighter$HighlightPainter
//$ extends java.lang.Object

#include <java/lang/Object.h>

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
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import Highlighter$HighlightPainter : public ::java::lang::Object {
	$interface(Highlighter$HighlightPainter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void paint(::java::awt::Graphics* g, int32_t p0, int32_t p1, ::java::awt::Shape* bounds, ::javax::swing::text::JTextComponent* c) {}
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_Highlighter$HighlightPainter_h_