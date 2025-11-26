#ifndef _javax_swing_text_JTextComponent$KeyBinding_h_
#define _javax_swing_text_JTextComponent$KeyBinding_h_
//$ class javax.swing.text.JTextComponent$KeyBinding
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		class KeyStroke;
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $export JTextComponent$KeyBinding : public ::java::lang::Object {
	$class(JTextComponent$KeyBinding, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JTextComponent$KeyBinding();
	void init$(::javax::swing::KeyStroke* key, $String* actionName);
	::javax::swing::KeyStroke* key = nullptr;
	$String* actionName = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_JTextComponent$KeyBinding_h_