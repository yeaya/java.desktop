#ifndef _javax_swing_text_Highlighter_h_
#define _javax_swing_text_Highlighter_h_
//$ interface javax.swing.text.Highlighter
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Graphics;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Highlighter$Highlight;
			class Highlighter$HighlightPainter;
			class JTextComponent;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import Highlighter : public ::java::lang::Object {
	$interface(Highlighter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* addHighlight(int32_t p0, int32_t p1, ::javax::swing::text::Highlighter$HighlightPainter* p) {return nullptr;}
	virtual void changeHighlight(Object$* tag, int32_t p0, int32_t p1) {}
	virtual void deinstall(::javax::swing::text::JTextComponent* c) {}
	virtual $Array<::javax::swing::text::Highlighter$Highlight>* getHighlights() {return nullptr;}
	virtual void install(::javax::swing::text::JTextComponent* c) {}
	virtual void paint(::java::awt::Graphics* g) {}
	virtual void removeAllHighlights() {}
	virtual void removeHighlight(Object$* tag) {}
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_Highlighter_h_