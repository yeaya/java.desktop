#ifndef _javax_swing_plaf_nimbus_ProgressBarFinishedState_h_
#define _javax_swing_plaf_nimbus_ProgressBarFinishedState_h_
//$ class javax.swing.plaf.nimbus.ProgressBarFinishedState
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

class ProgressBarFinishedState : public ::javax::swing::plaf::nimbus::State {
	$class(ProgressBarFinishedState, $NO_CLASS_INIT, ::javax::swing::plaf::nimbus::State)
public:
	ProgressBarFinishedState();
	void init$();
	using ::javax::swing::plaf::nimbus::State::isInState;
	virtual bool isInState(::javax::swing::JComponent* c) override;
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_nimbus_ProgressBarFinishedState_h_