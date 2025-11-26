#ifndef _bug4666224$RotateAction_h_
#define _bug4666224$RotateAction_h_
//$ class bug4666224$RotateAction
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

class bug4666224$RotateAction : public ::javax::swing::AbstractAction {
	$class(bug4666224$RotateAction, $NO_CLASS_INIT, ::javax::swing::AbstractAction)
public:
	bug4666224$RotateAction();
	void init$(::bug4666224* this$0, int32_t placement);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::bug4666224* this$0 = nullptr;
	int32_t placement = 0;
};

#endif // _bug4666224$RotateAction_h_