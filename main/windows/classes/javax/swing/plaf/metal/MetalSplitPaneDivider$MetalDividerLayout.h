#ifndef _javax_swing_plaf_metal_MetalSplitPaneDivider$MetalDividerLayout_h_
#define _javax_swing_plaf_metal_MetalSplitPaneDivider$MetalDividerLayout_h_
//$ class javax.swing.plaf.metal.MetalSplitPaneDivider$MetalDividerLayout
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
				class MetalSplitPaneDivider;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class MetalSplitPaneDivider$MetalDividerLayout : public ::java::awt::LayoutManager {
	$class(MetalSplitPaneDivider$MetalDividerLayout, $NO_CLASS_INIT, ::java::awt::LayoutManager)
public:
	MetalSplitPaneDivider$MetalDividerLayout();
	void init$(::javax::swing::plaf::metal::MetalSplitPaneDivider* this$0);
	virtual void addLayoutComponent($String* string, ::java::awt::Component* c) override;
	virtual void layoutContainer(::java::awt::Container* c) override;
	virtual ::java::awt::Dimension* minimumLayoutSize(::java::awt::Container* c) override;
	virtual ::java::awt::Dimension* preferredLayoutSize(::java::awt::Container* c) override;
	virtual void removeLayoutComponent(::java::awt::Component* c) override;
	::javax::swing::plaf::metal::MetalSplitPaneDivider* this$0 = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalSplitPaneDivider$MetalDividerLayout_h_