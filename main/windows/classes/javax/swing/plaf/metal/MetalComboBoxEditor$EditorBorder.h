#ifndef _javax_swing_plaf_metal_MetalComboBoxEditor$EditorBorder_h_
#define _javax_swing_plaf_metal_MetalComboBoxEditor$EditorBorder_h_
//$ class javax.swing.plaf.metal.MetalComboBoxEditor$EditorBorder
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
				class MetalComboBoxEditor;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class $export MetalComboBoxEditor$EditorBorder : public ::javax::swing::border::AbstractBorder {
	$class(MetalComboBoxEditor$EditorBorder, $NO_CLASS_INIT, ::javax::swing::border::AbstractBorder)
public:
	MetalComboBoxEditor$EditorBorder();
	using ::javax::swing::border::AbstractBorder::getBorderInsets;
	void init$(::javax::swing::plaf::metal::MetalComboBoxEditor* this$0);
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c, ::java::awt::Insets* insets) override;
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	::javax::swing::plaf::metal::MetalComboBoxEditor* this$0 = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalComboBoxEditor$EditorBorder_h_