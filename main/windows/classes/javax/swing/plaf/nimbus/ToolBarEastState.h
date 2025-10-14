#ifndef _javax_swing_plaf_nimbus_ToolBarEastState_h_
#define _javax_swing_plaf_nimbus_ToolBarEastState_h_
//$ class javax.swing.plaf.nimbus.ToolBarEastState
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

class ToolBarEastState : public ::javax::swing::plaf::nimbus::State {
	$class(ToolBarEastState, $NO_CLASS_INIT, ::javax::swing::plaf::nimbus::State)
public:
	ToolBarEastState();
	void init$();
	using ::javax::swing::plaf::nimbus::State::isInState;
	virtual bool isInState(::javax::swing::JComponent* c) override;
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_nimbus_ToolBarEastState_h_