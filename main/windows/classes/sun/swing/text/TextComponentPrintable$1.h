#ifndef _sun_swing_text_TextComponentPrintable$1_h_
#define _sun_swing_text_TextComponentPrintable$1_h_
//$ class sun.swing.text.TextComponentPrintable$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace javax {
	namespace swing {
		class JEditorPane;
	}
}

namespace sun {
	namespace swing {
		namespace text {

class TextComponentPrintable$1 : public ::java::lang::Runnable {
	$class(TextComponentPrintable$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	TextComponentPrintable$1();
	void init$(::javax::swing::JEditorPane* val$editor);
	virtual void run() override;
	::javax::swing::JEditorPane* val$editor = nullptr;
};

		} // text
	} // swing
} // sun

#endif // _sun_swing_text_TextComponentPrintable$1_h_