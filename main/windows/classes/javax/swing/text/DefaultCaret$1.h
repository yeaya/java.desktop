#ifndef _javax_swing_text_DefaultCaret$1_h_
#define _javax_swing_text_DefaultCaret$1_h_
//$ class javax.swing.text.DefaultCaret$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace javax {
	namespace swing {
		namespace text {
			class DefaultCaret;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class DefaultCaret$1 : public ::java::lang::Runnable {
	$class(DefaultCaret$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	DefaultCaret$1();
	void init$(::javax::swing::text::DefaultCaret* this$0);
	virtual void run() override;
	::javax::swing::text::DefaultCaret* this$0 = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_DefaultCaret$1_h_