#ifndef _javax_swing_text_DefaultStyledDocument$ChangeUpdateRunnable_h_
#define _javax_swing_text_DefaultStyledDocument$ChangeUpdateRunnable_h_
//$ class javax.swing.text.DefaultStyledDocument$ChangeUpdateRunnable
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace javax {
	namespace swing {
		namespace text {
			class DefaultStyledDocument;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import DefaultStyledDocument$ChangeUpdateRunnable : public ::java::lang::Runnable {
	$class(DefaultStyledDocument$ChangeUpdateRunnable, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	DefaultStyledDocument$ChangeUpdateRunnable();
	void init$(::javax::swing::text::DefaultStyledDocument* this$0);
	virtual void run() override;
	::javax::swing::text::DefaultStyledDocument* this$0 = nullptr;
	bool isPending = false;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_DefaultStyledDocument$ChangeUpdateRunnable_h_