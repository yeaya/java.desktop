#ifndef _javax_swing_plaf_metal_MetalFileChooserUI$ButtonAreaLayout_h_
#define _javax_swing_plaf_metal_MetalFileChooserUI$ButtonAreaLayout_h_
//$ class javax.swing.plaf.metal.MetalFileChooserUI$ButtonAreaLayout
//$ extends java.awt.LayoutManager

#include <java/awt/LayoutManager.h>

namespace java {
	namespace awt {
		class Component;
		class Container;
		class Dimension;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class MetalFileChooserUI$ButtonAreaLayout : public ::java::awt::LayoutManager {
	$class(MetalFileChooserUI$ButtonAreaLayout, $NO_CLASS_INIT, ::java::awt::LayoutManager)
public:
	MetalFileChooserUI$ButtonAreaLayout();
	void init$();
	virtual void addLayoutComponent($String* string, ::java::awt::Component* comp) override;
	virtual void layoutContainer(::java::awt::Container* container) override;
	virtual ::java::awt::Dimension* minimumLayoutSize(::java::awt::Container* c) override;
	virtual ::java::awt::Dimension* preferredLayoutSize(::java::awt::Container* c) override;
	virtual void removeLayoutComponent(::java::awt::Component* c) override;
	int32_t hGap = 0;
	int32_t topMargin = 0;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalFileChooserUI$ButtonAreaLayout_h_