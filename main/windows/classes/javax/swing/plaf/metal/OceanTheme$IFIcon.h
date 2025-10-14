#ifndef _javax_swing_plaf_metal_OceanTheme$IFIcon_h_
#define _javax_swing_plaf_metal_OceanTheme$IFIcon_h_
//$ class javax.swing.plaf.metal.OceanTheme$IFIcon
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

class OceanTheme$IFIcon : public ::javax::swing::plaf::IconUIResource {
	$class(OceanTheme$IFIcon, $NO_CLASS_INIT, ::javax::swing::plaf::IconUIResource)
public:
	OceanTheme$IFIcon();
	void init$(::javax::swing::Icon* normal, ::javax::swing::Icon* pressed);
	virtual void paintIcon(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y) override;
	::javax::swing::Icon* pressed = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_OceanTheme$IFIcon_h_