#ifndef _javax_swing_plaf_basic_BasicSplitPaneDivider$DividerLayout_h_
#define _javax_swing_plaf_basic_BasicSplitPaneDivider$DividerLayout_h_
//$ class javax.swing.plaf.basic.BasicSplitPaneDivider$DividerLayout
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
				class BasicSplitPaneDivider;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicSplitPaneDivider$DividerLayout : public ::java::awt::LayoutManager {
	$class(BasicSplitPaneDivider$DividerLayout, $NO_CLASS_INIT, ::java::awt::LayoutManager)
public:
	BasicSplitPaneDivider$DividerLayout();
	void init$(::javax::swing::plaf::basic::BasicSplitPaneDivider* this$0);
	virtual void addLayoutComponent($String* string, ::java::awt::Component* c) override;
	virtual void layoutContainer(::java::awt::Container* c) override;
	virtual ::java::awt::Dimension* minimumLayoutSize(::java::awt::Container* c) override;
	virtual ::java::awt::Dimension* preferredLayoutSize(::java::awt::Container* c) override;
	virtual void removeLayoutComponent(::java::awt::Component* c) override;
	::javax::swing::plaf::basic::BasicSplitPaneDivider* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicSplitPaneDivider$DividerLayout_h_