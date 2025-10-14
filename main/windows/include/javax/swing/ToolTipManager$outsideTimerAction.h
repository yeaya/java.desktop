#ifndef _javax_swing_ToolTipManager$outsideTimerAction_h_
#define _javax_swing_ToolTipManager$outsideTimerAction_h_
//$ class javax.swing.ToolTipManager$outsideTimerAction
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class ToolTipManager;
	}
}

namespace javax {
	namespace swing {

class $import ToolTipManager$outsideTimerAction : public ::java::awt::event::ActionListener {
	$class(ToolTipManager$outsideTimerAction, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	ToolTipManager$outsideTimerAction();
	void init$(::javax::swing::ToolTipManager* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::javax::swing::ToolTipManager* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_ToolTipManager$outsideTimerAction_h_