#ifndef _bug4870644$1_h_
#define _bug4870644$1_h_
//$ class bug4870644$1
//$ extends javax.swing.AbstractAction

#include <javax/swing/AbstractAction.h>

class bug4870644;
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}

class bug4870644$1 : public ::javax::swing::AbstractAction {
	$class(bug4870644$1, $NO_CLASS_INIT, ::javax::swing::AbstractAction)
public:
	bug4870644$1();
	void init$(::bug4870644* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::bug4870644* this$0 = nullptr;
};

#endif // _bug4870644$1_h_