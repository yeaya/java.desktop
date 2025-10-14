#ifndef _javax_swing_plaf_metal_MetalBorders$ErrorDialogBorder_h_
#define _javax_swing_plaf_metal_MetalBorders$ErrorDialogBorder_h_
//$ class javax.swing.plaf.metal.MetalBorders$ErrorDialogBorder
//$ extends javax.swing.plaf.metal.MetalBorders$DialogBorder

#include <javax/swing/plaf/metal/MetalBorders$DialogBorder.h>

namespace java {
	namespace awt {
		class Color;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class $import MetalBorders$ErrorDialogBorder : public ::javax::swing::plaf::metal::MetalBorders$DialogBorder {
	$class(MetalBorders$ErrorDialogBorder, $NO_CLASS_INIT, ::javax::swing::plaf::metal::MetalBorders$DialogBorder)
public:
	MetalBorders$ErrorDialogBorder();
	using ::javax::swing::plaf::metal::MetalBorders$DialogBorder::getBorderInsets;
	void init$();
	virtual ::java::awt::Color* getActiveBackground() override;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalBorders$ErrorDialogBorder_h_