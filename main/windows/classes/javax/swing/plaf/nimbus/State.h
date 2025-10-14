#ifndef _javax_swing_plaf_nimbus_State_h_
#define _javax_swing_plaf_nimbus_State_h_
//$ class javax.swing.plaf.nimbus.State
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Map;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {
				class State$StandardState;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

class $export State : public ::java::lang::Object {
	$class(State, 0, ::java::lang::Object)
public:
	State();
	void init$($String* name);
	virtual $String* getName();
	static ::javax::swing::plaf::nimbus::State$StandardState* getStandardState($String* name);
	virtual bool isInState(::javax::swing::JComponent* c, int32_t s);
	virtual bool isInState(::javax::swing::JComponent* c) {return false;}
	static bool isStandardStateName($String* name);
	virtual $String* toString() override;
	static ::java::util::Map* standardStates;
	static ::javax::swing::plaf::nimbus::State* Enabled;
	static ::javax::swing::plaf::nimbus::State* MouseOver;
	static ::javax::swing::plaf::nimbus::State* Pressed;
	static ::javax::swing::plaf::nimbus::State* Disabled;
	static ::javax::swing::plaf::nimbus::State* Focused;
	static ::javax::swing::plaf::nimbus::State* Selected;
	static ::javax::swing::plaf::nimbus::State* Default;
	$String* name = nullptr;
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_nimbus_State_h_