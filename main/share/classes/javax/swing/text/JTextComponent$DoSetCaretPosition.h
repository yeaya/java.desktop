#ifndef _javax_swing_text_JTextComponent$DoSetCaretPosition_h_
#define _javax_swing_text_JTextComponent$DoSetCaretPosition_h_
//$ class javax.swing.text.JTextComponent$DoSetCaretPosition
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace javax {
	namespace swing {
		namespace text {
			class JTextComponent;
			class Position;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class JTextComponent$DoSetCaretPosition : public ::java::lang::Runnable {
	$class(JTextComponent$DoSetCaretPosition, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	JTextComponent$DoSetCaretPosition();
	void init$(::javax::swing::text::JTextComponent* this$0, ::javax::swing::text::JTextComponent* host, ::javax::swing::text::Position* newPos);
	virtual void run() override;
	::javax::swing::text::JTextComponent* this$0 = nullptr;
	::javax::swing::text::JTextComponent* host = nullptr;
	::javax::swing::text::Position* newPos = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_JTextComponent$DoSetCaretPosition_h_