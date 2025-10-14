#ifndef _javax_swing_plaf_nimbus_NimbusStyle$RuntimeState_h_
#define _javax_swing_plaf_nimbus_NimbusStyle$RuntimeState_h_
//$ class javax.swing.plaf.nimbus.NimbusStyle$RuntimeState
//$ extends java.lang.Cloneable

#include <java/lang/Cloneable.h>

namespace javax {
	namespace swing {
		class Painter;
		class UIDefaults;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {
				class NimbusStyle;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

class NimbusStyle$RuntimeState : public ::java::lang::Cloneable {
	$class(NimbusStyle$RuntimeState, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	NimbusStyle$RuntimeState();
	void init$(::javax::swing::plaf::nimbus::NimbusStyle* this$0, int32_t state, $String* stateName);
	virtual ::javax::swing::plaf::nimbus::NimbusStyle$RuntimeState* clone() override;
	virtual $String* toString() override;
	::javax::swing::plaf::nimbus::NimbusStyle* this$0 = nullptr;
	int32_t state = 0;
	::javax::swing::Painter* backgroundPainter = nullptr;
	::javax::swing::Painter* foregroundPainter = nullptr;
	::javax::swing::Painter* borderPainter = nullptr;
	$String* stateName = nullptr;
	::javax::swing::UIDefaults* defaults = nullptr;
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_nimbus_NimbusStyle$RuntimeState_h_