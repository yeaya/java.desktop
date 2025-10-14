#ifndef _javax_swing_plaf_metal_MetalBorders$RolloverMarginBorder_h_
#define _javax_swing_plaf_metal_MetalBorders$RolloverMarginBorder_h_
//$ class javax.swing.plaf.metal.MetalBorders$RolloverMarginBorder
//$ extends javax.swing.border.EmptyBorder

#include <javax/swing/border/EmptyBorder.h>

namespace java {
	namespace awt {
		class Component;
		class Insets;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class $import MetalBorders$RolloverMarginBorder : public ::javax::swing::border::EmptyBorder {
	$class(MetalBorders$RolloverMarginBorder, $NO_CLASS_INIT, ::javax::swing::border::EmptyBorder)
public:
	MetalBorders$RolloverMarginBorder();
	using ::javax::swing::border::EmptyBorder::getBorderInsets;
	void init$();
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c, ::java::awt::Insets* insets) override;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalBorders$RolloverMarginBorder_h_