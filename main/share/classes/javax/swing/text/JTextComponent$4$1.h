#ifndef _javax_swing_text_JTextComponent$4$1_h_
#define _javax_swing_text_JTextComponent$4$1_h_
//$ class javax.swing.text.JTextComponent$4$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace javax {
	namespace swing {
		namespace text {
			class JTextComponent$4;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class JTextComponent$4$1 : public ::java::security::PrivilegedAction {
	$class(JTextComponent$4$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	JTextComponent$4$1();
	void init$(::javax::swing::text::JTextComponent$4* this$0, $Class* val$type);
	virtual $Object* run() override;
	::javax::swing::text::JTextComponent$4* this$0 = nullptr;
	$Class* val$type = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_JTextComponent$4$1_h_