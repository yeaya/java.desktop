#ifndef _javax_swing_plaf_metal_OceanTheme$2_h_
#define _javax_swing_plaf_metal_OceanTheme$2_h_
//$ class javax.swing.plaf.metal.OceanTheme$2
//$ extends javax.swing.UIDefaults$LazyValue

#include <javax/swing/UIDefaults$LazyValue.h>

namespace javax {
	namespace swing {
		class UIDefaults;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {
				class OceanTheme;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class OceanTheme$2 : public ::javax::swing::UIDefaults$LazyValue {
	$class(OceanTheme$2, $NO_CLASS_INIT, ::javax::swing::UIDefaults$LazyValue)
public:
	OceanTheme$2();
	void init$(::javax::swing::plaf::metal::OceanTheme* this$0);
	virtual $Object* createValue(::javax::swing::UIDefaults* table) override;
	::javax::swing::plaf::metal::OceanTheme* this$0 = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_OceanTheme$2_h_