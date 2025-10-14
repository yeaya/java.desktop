#ifndef _javax_swing_text_JTextComponent$3$1_h_
#define _javax_swing_text_JTextComponent$3$1_h_
//$ class javax.swing.text.JTextComponent$3$1
//$ extends java.util.concurrent.Callable

#include <java/util/concurrent/Callable.h>

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

class JTextComponent$3$1 : public ::java::util::concurrent::Callable {
	$class(JTextComponent$3$1, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	JTextComponent$3$1();
	void init$(::javax::swing::text::JTextComponent$3* this$1);
	virtual $Object* call() override;
	::javax::swing::text::JTextComponent$3* this$1 = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_JTextComponent$3$1_h_