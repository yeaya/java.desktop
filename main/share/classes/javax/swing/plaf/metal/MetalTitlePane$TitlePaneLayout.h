#ifndef _javax_swing_plaf_metal_MetalTitlePane$TitlePaneLayout_h_
#define _javax_swing_plaf_metal_MetalTitlePane$TitlePaneLayout_h_
//$ class javax.swing.plaf.metal.MetalTitlePane$TitlePaneLayout
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
				class MetalTitlePane;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class MetalTitlePane$TitlePaneLayout : public ::java::awt::LayoutManager {
	$class(MetalTitlePane$TitlePaneLayout, $NO_CLASS_INIT, ::java::awt::LayoutManager)
public:
	MetalTitlePane$TitlePaneLayout();
	void init$(::javax::swing::plaf::metal::MetalTitlePane* this$0);
	virtual void addLayoutComponent($String* name, ::java::awt::Component* c) override;
	int32_t computeHeight();
	virtual void layoutContainer(::java::awt::Container* c) override;
	virtual ::java::awt::Dimension* minimumLayoutSize(::java::awt::Container* c) override;
	virtual ::java::awt::Dimension* preferredLayoutSize(::java::awt::Container* c) override;
	virtual void removeLayoutComponent(::java::awt::Component* c) override;
	::javax::swing::plaf::metal::MetalTitlePane* this$0 = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalTitlePane$TitlePaneLayout_h_