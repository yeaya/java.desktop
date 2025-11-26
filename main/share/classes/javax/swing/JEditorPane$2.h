#ifndef _javax_swing_JEditorPane$2_h_
#define _javax_swing_JEditorPane$2_h_
//$ class javax.swing.JEditorPane$2
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace javax {
	namespace swing {
		class JEditorPane;
	}
}

namespace javax {
	namespace swing {

class JEditorPane$2 : public ::java::lang::Runnable {
	$class(JEditorPane$2, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	JEditorPane$2();
	void init$(::javax::swing::JEditorPane* this$0, $String* val$reference);
	virtual void run() override;
	::javax::swing::JEditorPane* this$0 = nullptr;
	$String* val$reference = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JEditorPane$2_h_