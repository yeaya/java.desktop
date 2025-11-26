#ifndef _javax_swing_JEditorPane$PageLoader$1_h_
#define _javax_swing_JEditorPane$PageLoader$1_h_
//$ class javax.swing.JEditorPane$PageLoader$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace javax {
	namespace swing {
		class JEditorPane$PageLoader;
	}
}

namespace javax {
	namespace swing {

class JEditorPane$PageLoader$1 : public ::java::lang::Runnable {
	$class(JEditorPane$PageLoader$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	JEditorPane$PageLoader$1();
	void init$(::javax::swing::JEditorPane$PageLoader* this$1);
	virtual void run() override;
	::javax::swing::JEditorPane$PageLoader* this$1 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JEditorPane$PageLoader$1_h_