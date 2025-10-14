#ifndef _javax_swing_plaf_metal_DefaultMetalTheme$WindowsFontDelegate_h_
#define _javax_swing_plaf_metal_DefaultMetalTheme$WindowsFontDelegate_h_
//$ class javax.swing.plaf.metal.DefaultMetalTheme$WindowsFontDelegate
//$ extends javax.swing.plaf.metal.DefaultMetalTheme$FontDelegate

#include <java/lang/Array.h>
#include <javax/swing/plaf/metal/DefaultMetalTheme$FontDelegate.h>

namespace javax {
	namespace swing {
		namespace plaf {
			class FontUIResource;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {
				class MetalFontDesktopProperty;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class DefaultMetalTheme$WindowsFontDelegate : public ::javax::swing::plaf::metal::DefaultMetalTheme$FontDelegate {
	$class(DefaultMetalTheme$WindowsFontDelegate, $NO_CLASS_INIT, ::javax::swing::plaf::metal::DefaultMetalTheme$FontDelegate)
public:
	DefaultMetalTheme$WindowsFontDelegate();
	void init$();
	virtual ::javax::swing::plaf::FontUIResource* getFont(int32_t type) override;
	$Array<::javax::swing::plaf::metal::MetalFontDesktopProperty>* props = nullptr;
	$booleans* checkedPriviledged = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_DefaultMetalTheme$WindowsFontDelegate_h_