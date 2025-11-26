#ifndef _javax_swing_ToolTipManager$insideTimerAction_h_
#define _javax_swing_ToolTipManager$insideTimerAction_h_
//$ class javax.swing.ToolTipManager$insideTimerAction
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

class $export ToolTipManager$insideTimerAction : public ::java::awt::event::ActionListener {
	$class(ToolTipManager$insideTimerAction, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	ToolTipManager$insideTimerAction();
	void init$(::javax::swing::ToolTipManager* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::javax::swing::ToolTipManager* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_ToolTipManager$insideTimerAction_h_