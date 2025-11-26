#ifndef _javax_swing_plaf_nimbus_NimbusStyle$1_h_
#define _javax_swing_plaf_nimbus_NimbusStyle$1_h_
//$ class javax.swing.plaf.nimbus.NimbusStyle$1
//$ extends java.util.Comparator

#include <java/util/Comparator.h>

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {
				class NimbusStyle$RuntimeState;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

class NimbusStyle$1 : public ::java::util::Comparator {
	$class(NimbusStyle$1, $NO_CLASS_INIT, ::java::util::Comparator)
public:
	NimbusStyle$1();
	void init$();
	virtual int32_t compare(::javax::swing::plaf::nimbus::NimbusStyle$RuntimeState* a, ::javax::swing::plaf::nimbus::NimbusStyle$RuntimeState* b);
	virtual int32_t compare(Object$* a, Object$* b) override;
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_nimbus_NimbusStyle$1_h_