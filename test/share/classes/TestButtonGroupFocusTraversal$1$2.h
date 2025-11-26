#ifndef _TestButtonGroupFocusTraversal$1$2_h_
#define _TestButtonGroupFocusTraversal$1$2_h_
//$ class TestButtonGroupFocusTraversal$1$2
//$ extends javax.swing.AbstractAction

#include <javax/swing/AbstractAction.h>

class TestButtonGroupFocusTraversal$1;
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}

class TestButtonGroupFocusTraversal$1$2 : public ::javax::swing::AbstractAction {
	$class(TestButtonGroupFocusTraversal$1$2, $NO_CLASS_INIT, ::javax::swing::AbstractAction)
public:
	TestButtonGroupFocusTraversal$1$2();
	void init$(::TestButtonGroupFocusTraversal$1* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::TestButtonGroupFocusTraversal$1* this$0 = nullptr;
};

#endif // _TestButtonGroupFocusTraversal$1$2_h_