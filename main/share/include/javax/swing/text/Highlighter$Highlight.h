#ifndef _javax_swing_text_Highlighter$Highlight_h_
#define _javax_swing_text_Highlighter$Highlight_h_
//$ interface javax.swing.text.Highlighter$Highlight
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		namespace text {
			class Highlighter$HighlightPainter;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import Highlighter$Highlight : public ::java::lang::Object {
	$interface(Highlighter$Highlight, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t getEndOffset() {return 0;}
	virtual ::javax::swing::text::Highlighter$HighlightPainter* getPainter() {return nullptr;}
	virtual int32_t getStartOffset() {return 0;}
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_Highlighter$Highlight_h_