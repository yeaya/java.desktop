#ifndef _javax_swing_plaf_nimbus_NimbusLookAndFeel$2_h_
#define _javax_swing_plaf_nimbus_NimbusLookAndFeel$2_h_
//$ class javax.swing.plaf.nimbus.NimbusLookAndFeel$2
//$ extends javax.swing.UIDefaults$ActiveValue

#include <javax/swing/UIDefaults$ActiveValue.h>

namespace javax {
	namespace swing {
		class UIDefaults;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {
				class NimbusLookAndFeel;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

class NimbusLookAndFeel$2 : public ::javax::swing::UIDefaults$ActiveValue {
	$class(NimbusLookAndFeel$2, $NO_CLASS_INIT, ::javax::swing::UIDefaults$ActiveValue)
public:
	NimbusLookAndFeel$2();
	void init$(::javax::swing::plaf::nimbus::NimbusLookAndFeel* this$0);
	virtual $Object* createValue(::javax::swing::UIDefaults* table) override;
	::javax::swing::plaf::nimbus::NimbusLookAndFeel* this$0 = nullptr;
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_nimbus_NimbusLookAndFeel$2_h_