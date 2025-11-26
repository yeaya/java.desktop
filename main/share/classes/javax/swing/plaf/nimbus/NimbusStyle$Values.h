#ifndef _javax_swing_plaf_nimbus_NimbusStyle$Values_h_
#define _javax_swing_plaf_nimbus_NimbusStyle$Values_h_
//$ class javax.swing.plaf.nimbus.NimbusStyle$Values
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Insets;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace javax {
	namespace swing {
		class UIDefaults;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {
				class NimbusStyle$RuntimeState;
				class State;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

class NimbusStyle$Values : public ::java::lang::Object {
	$class(NimbusStyle$Values, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NimbusStyle$Values();
	void init$();
	$Array<::javax::swing::plaf::nimbus::State>* stateTypes = nullptr;
	$Array<::javax::swing::plaf::nimbus::NimbusStyle$RuntimeState>* states = nullptr;
	::java::awt::Insets* contentMargins = nullptr;
	::javax::swing::UIDefaults* defaults = nullptr;
	::java::util::Map* cache = nullptr;
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_nimbus_NimbusStyle$Values_h_