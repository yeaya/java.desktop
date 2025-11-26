#ifndef _javax_swing_plaf_metal_MetalLookAndFeel$FontActiveValue_h_
#define _javax_swing_plaf_metal_MetalLookAndFeel$FontActiveValue_h_
//$ class javax.swing.plaf.metal.MetalLookAndFeel$FontActiveValue
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
			namespace metal {
				class MetalTheme;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class MetalLookAndFeel$FontActiveValue : public ::javax::swing::UIDefaults$ActiveValue {
	$class(MetalLookAndFeel$FontActiveValue, $NO_CLASS_INIT, ::javax::swing::UIDefaults$ActiveValue)
public:
	MetalLookAndFeel$FontActiveValue();
	void init$(::javax::swing::plaf::metal::MetalTheme* theme, int32_t type);
	virtual $Object* createValue(::javax::swing::UIDefaults* table) override;
	int32_t type = 0;
	::javax::swing::plaf::metal::MetalTheme* theme = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalLookAndFeel$FontActiveValue_h_