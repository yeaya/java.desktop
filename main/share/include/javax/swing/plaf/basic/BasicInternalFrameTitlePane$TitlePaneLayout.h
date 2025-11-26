#ifndef _javax_swing_plaf_basic_BasicInternalFrameTitlePane$TitlePaneLayout_h_
#define _javax_swing_plaf_basic_BasicInternalFrameTitlePane$TitlePaneLayout_h_
//$ class javax.swing.plaf.basic.BasicInternalFrameTitlePane$TitlePaneLayout
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
			namespace basic {
				class BasicInternalFrameTitlePane;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicInternalFrameTitlePane$TitlePaneLayout : public ::java::awt::LayoutManager {
	$class(BasicInternalFrameTitlePane$TitlePaneLayout, $NO_CLASS_INIT, ::java::awt::LayoutManager)
public:
	BasicInternalFrameTitlePane$TitlePaneLayout();
	void init$(::javax::swing::plaf::basic::BasicInternalFrameTitlePane* this$0);
	virtual void addLayoutComponent($String* name, ::java::awt::Component* c) override;
	virtual void layoutContainer(::java::awt::Container* c) override;
	virtual ::java::awt::Dimension* minimumLayoutSize(::java::awt::Container* c) override;
	virtual ::java::awt::Dimension* preferredLayoutSize(::java::awt::Container* c) override;
	virtual void removeLayoutComponent(::java::awt::Component* c) override;
	::javax::swing::plaf::basic::BasicInternalFrameTitlePane* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicInternalFrameTitlePane$TitlePaneLayout_h_