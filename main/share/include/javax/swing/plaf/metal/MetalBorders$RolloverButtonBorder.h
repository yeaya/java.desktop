#ifndef _javax_swing_plaf_metal_MetalBorders$RolloverButtonBorder_h_
#define _javax_swing_plaf_metal_MetalBorders$RolloverButtonBorder_h_
//$ class javax.swing.plaf.metal.MetalBorders$RolloverButtonBorder
//$ extends javax.swing.plaf.metal.MetalBorders$ButtonBorder

#include <javax/swing/plaf/metal/MetalBorders$ButtonBorder.h>

namespace java {
	namespace awt {
		class Component;
		class Graphics;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class $import MetalBorders$RolloverButtonBorder : public ::javax::swing::plaf::metal::MetalBorders$ButtonBorder {
	$class(MetalBorders$RolloverButtonBorder, $NO_CLASS_INIT, ::javax::swing::plaf::metal::MetalBorders$ButtonBorder)
public:
	MetalBorders$RolloverButtonBorder();
	using ::javax::swing::plaf::metal::MetalBorders$ButtonBorder::getBorderInsets;
	void init$();
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalBorders$RolloverButtonBorder_h_