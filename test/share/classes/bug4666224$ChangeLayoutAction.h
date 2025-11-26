#ifndef _bug4666224$ChangeLayoutAction_h_
#define _bug4666224$ChangeLayoutAction_h_
//$ class bug4666224$ChangeLayoutAction
//$ extends javax.swing.AbstractAction

#include <javax/swing/AbstractAction.h>

class bug4666224;
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}

class bug4666224$ChangeLayoutAction : public ::javax::swing::AbstractAction {
	$class(bug4666224$ChangeLayoutAction, $NO_CLASS_INIT, ::javax::swing::AbstractAction)
public:
	bug4666224$ChangeLayoutAction();
	void init$(::bug4666224* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::bug4666224* this$0 = nullptr;
	bool a = false;
};

#endif // _bug4666224$ChangeLayoutAction_h_