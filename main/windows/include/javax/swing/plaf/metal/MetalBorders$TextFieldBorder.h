#ifndef _javax_swing_plaf_metal_MetalBorders$TextFieldBorder_h_
#define _javax_swing_plaf_metal_MetalBorders$TextFieldBorder_h_
//$ class javax.swing.plaf.metal.MetalBorders$TextFieldBorder
//$ extends javax.swing.plaf.metal.MetalBorders$Flush3DBorder

#include <javax/swing/plaf/metal/MetalBorders$Flush3DBorder.h>

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

class $import MetalBorders$TextFieldBorder : public ::javax::swing::plaf::metal::MetalBorders$Flush3DBorder {
	$class(MetalBorders$TextFieldBorder, $NO_CLASS_INIT, ::javax::swing::plaf::metal::MetalBorders$Flush3DBorder)
public:
	MetalBorders$TextFieldBorder();
	using ::javax::swing::plaf::metal::MetalBorders$Flush3DBorder::getBorderInsets;
	void init$();
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalBorders$TextFieldBorder_h_