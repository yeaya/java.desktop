#ifndef _javax_swing_text_JTextComponent$3$2_h_
#define _javax_swing_text_JTextComponent$3$2_h_
//$ class javax.swing.text.JTextComponent$3$2
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace javax {
	namespace swing {
		namespace text {
			class JTextComponent$3;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class JTextComponent$3$2 : public ::java::lang::Runnable {
	$class(JTextComponent$3$2, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	JTextComponent$3$2();
	void init$(::javax::swing::text::JTextComponent$3* this$1);
	virtual void run() override;
	::javax::swing::text::JTextComponent$3* this$1 = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_JTextComponent$3$2_h_