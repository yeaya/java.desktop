#ifndef _javax_swing_plaf_metal_MetalRootPaneUI$MetalRootLayout_h_
#define _javax_swing_plaf_metal_MetalRootPaneUI$MetalRootLayout_h_
//$ class javax.swing.plaf.metal.MetalRootPaneUI$MetalRootLayout
//$ extends java.awt.LayoutManager2

#include <java/awt/LayoutManager2.h>

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

class MetalRootPaneUI$MetalRootLayout : public ::java::awt::LayoutManager2 {
	$class(MetalRootPaneUI$MetalRootLayout, $NO_CLASS_INIT, ::java::awt::LayoutManager2)
public:
	MetalRootPaneUI$MetalRootLayout();
	void init$();
	virtual void addLayoutComponent($String* name, ::java::awt::Component* comp) override;
	virtual void addLayoutComponent(::java::awt::Component* comp, Object$* constraints) override;
	virtual float getLayoutAlignmentX(::java::awt::Container* target) override;
	virtual float getLayoutAlignmentY(::java::awt::Container* target) override;
	virtual void invalidateLayout(::java::awt::Container* target) override;
	virtual void layoutContainer(::java::awt::Container* parent) override;
	virtual ::java::awt::Dimension* maximumLayoutSize(::java::awt::Container* target) override;
	virtual ::java::awt::Dimension* minimumLayoutSize(::java::awt::Container* parent) override;
	virtual ::java::awt::Dimension* preferredLayoutSize(::java::awt::Container* parent) override;
	virtual void removeLayoutComponent(::java::awt::Component* comp) override;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalRootPaneUI$MetalRootLayout_h_