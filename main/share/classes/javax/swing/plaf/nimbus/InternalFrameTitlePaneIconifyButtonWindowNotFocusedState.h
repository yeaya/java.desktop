#ifndef _javax_swing_plaf_nimbus_InternalFrameTitlePaneIconifyButtonWindowNotFocusedState_h_
#define _javax_swing_plaf_nimbus_InternalFrameTitlePaneIconifyButtonWindowNotFocusedState_h_
//$ class javax.swing.plaf.nimbus.InternalFrameTitlePaneIconifyButtonWindowNotFocusedState
//$ extends javax.swing.plaf.nimbus.State

#include <javax/swing/plaf/nimbus/State.h>

namespace javax {
	namespace swing {
		class JComponent;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

class InternalFrameTitlePaneIconifyButtonWindowNotFocusedState : public ::javax::swing::plaf::nimbus::State {
	$class(InternalFrameTitlePaneIconifyButtonWindowNotFocusedState, $NO_CLASS_INIT, ::javax::swing::plaf::nimbus::State)
public:
	InternalFrameTitlePaneIconifyButtonWindowNotFocusedState();
	void init$();
	using ::javax::swing::plaf::nimbus::State::isInState;
	virtual bool isInState(::javax::swing::JComponent* c) override;
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_nimbus_InternalFrameTitlePaneIconifyButtonWindowNotFocusedState_h_