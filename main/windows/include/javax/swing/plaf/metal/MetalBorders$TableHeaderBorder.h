#ifndef _javax_swing_plaf_metal_MetalBorders$TableHeaderBorder_h_
#define _javax_swing_plaf_metal_MetalBorders$TableHeaderBorder_h_
//$ class javax.swing.plaf.metal.MetalBorders$TableHeaderBorder
//$ extends javax.swing.border.AbstractBorder

#include <javax/swing/border/AbstractBorder.h>

namespace java {
	namespace awt {
		class Component;
		class Graphics;
		class Insets;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class $import MetalBorders$TableHeaderBorder : public ::javax::swing::border::AbstractBorder {
	$class(MetalBorders$TableHeaderBorder, $NO_CLASS_INIT, ::javax::swing::border::AbstractBorder)
public:
	MetalBorders$TableHeaderBorder();
	using ::javax::swing::border::AbstractBorder::getBorderInsets;
	void init$();
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c, ::java::awt::Insets* insets) override;
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	::java::awt::Insets* editorBorderInsets = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalBorders$TableHeaderBorder_h_