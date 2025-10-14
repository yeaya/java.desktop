#ifndef _javax_swing_plaf_metal_OceanTheme$COIcon_h_
#define _javax_swing_plaf_metal_OceanTheme$COIcon_h_
//$ class javax.swing.plaf.metal.OceanTheme$COIcon
//$ extends javax.swing.plaf.IconUIResource

#include <javax/swing/plaf/IconUIResource.h>

namespace java {
	namespace awt {
		class Component;
		class Graphics;
	}
}
namespace javax {
	namespace swing {
		class Icon;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class OceanTheme$COIcon : public ::javax::swing::plaf::IconUIResource {
	$class(OceanTheme$COIcon, $NO_CLASS_INIT, ::javax::swing::plaf::IconUIResource)
public:
	OceanTheme$COIcon();
	void init$(::javax::swing::Icon* ltr, ::javax::swing::Icon* rtl);
	virtual void paintIcon(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y) override;
	::javax::swing::Icon* rtl = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_OceanTheme$COIcon_h_