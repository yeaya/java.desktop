#ifndef _javax_swing_plaf_metal_MetalInternalFrameTitlePane$MetalTitlePaneLayout_h_
#define _javax_swing_plaf_metal_MetalInternalFrameTitlePane$MetalTitlePaneLayout_h_
//$ class javax.swing.plaf.metal.MetalInternalFrameTitlePane$MetalTitlePaneLayout
//$ extends javax.swing.plaf.basic.BasicInternalFrameTitlePane$TitlePaneLayout

#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane$TitlePaneLayout.h>

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
				class MetalInternalFrameTitlePane;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class $export MetalInternalFrameTitlePane$MetalTitlePaneLayout : public ::javax::swing::plaf::basic::BasicInternalFrameTitlePane$TitlePaneLayout {
	$class(MetalInternalFrameTitlePane$MetalTitlePaneLayout, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicInternalFrameTitlePane$TitlePaneLayout)
public:
	MetalInternalFrameTitlePane$MetalTitlePaneLayout();
	void init$(::javax::swing::plaf::metal::MetalInternalFrameTitlePane* this$0);
	virtual void addLayoutComponent($String* name, ::java::awt::Component* c) override;
	virtual void layoutContainer(::java::awt::Container* c) override;
	virtual ::java::awt::Dimension* minimumLayoutSize(::java::awt::Container* c) override;
	virtual ::java::awt::Dimension* preferredLayoutSize(::java::awt::Container* c) override;
	virtual void removeLayoutComponent(::java::awt::Component* c) override;
	::javax::swing::plaf::metal::MetalInternalFrameTitlePane* this$0 = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalInternalFrameTitlePane$MetalTitlePaneLayout_h_