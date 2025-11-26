#ifndef _javax_swing_plaf_nimbus_SplitPaneDividerVerticalState_h_
#define _javax_swing_plaf_nimbus_SplitPaneDividerVerticalState_h_
//$ class javax.swing.plaf.nimbus.SplitPaneDividerVerticalState
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

class SplitPaneDividerVerticalState : public ::javax::swing::plaf::nimbus::State {
	$class(SplitPaneDividerVerticalState, $NO_CLASS_INIT, ::javax::swing::plaf::nimbus::State)
public:
	SplitPaneDividerVerticalState();
	void init$();
	using ::javax::swing::plaf::nimbus::State::isInState;
	virtual bool isInState(::javax::swing::JComponent* c) override;
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_nimbus_SplitPaneDividerVerticalState_h_