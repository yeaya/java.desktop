#ifndef _javax_swing_plaf_nimbus_State$StandardState_h_
#define _javax_swing_plaf_nimbus_State$StandardState_h_
//$ class javax.swing.plaf.nimbus.State$StandardState
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

class $import State$StandardState : public ::javax::swing::plaf::nimbus::State {
	$class(State$StandardState, $NO_CLASS_INIT, ::javax::swing::plaf::nimbus::State)
public:
	State$StandardState();
	void init$(int32_t state);
	int32_t getState();
	virtual bool isInState(::javax::swing::JComponent* c, int32_t s) override;
	virtual bool isInState(::javax::swing::JComponent* c) override;
	using ::javax::swing::plaf::nimbus::State::toString;
	static $String* toString(int32_t state);
	int32_t state = 0;
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_nimbus_State$StandardState_h_