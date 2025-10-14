#ifndef _bug4666224$DumpAction_h_
#define _bug4666224$DumpAction_h_
//$ class bug4666224$DumpAction
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

class bug4666224$DumpAction : public ::javax::swing::AbstractAction {
	$class(bug4666224$DumpAction, $NO_CLASS_INIT, ::javax::swing::AbstractAction)
public:
	bug4666224$DumpAction();
	void init$(::bug4666224* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::bug4666224* this$0 = nullptr;
};

#endif // _bug4666224$DumpAction_h_