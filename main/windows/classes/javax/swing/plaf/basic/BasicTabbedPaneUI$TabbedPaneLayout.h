#ifndef _javax_swing_plaf_basic_BasicTabbedPaneUI$TabbedPaneLayout_h_
#define _javax_swing_plaf_basic_BasicTabbedPaneUI$TabbedPaneLayout_h_
//$ class javax.swing.plaf.basic.BasicTabbedPaneUI$TabbedPaneLayout
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
				class BasicTabbedPaneUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicTabbedPaneUI$TabbedPaneLayout : public ::java::awt::LayoutManager {
	$class(BasicTabbedPaneUI$TabbedPaneLayout, $NO_CLASS_INIT, ::java::awt::LayoutManager)
public:
	BasicTabbedPaneUI$TabbedPaneLayout();
	void init$(::javax::swing::plaf::basic::BasicTabbedPaneUI* this$0);
	virtual void addLayoutComponent($String* name, ::java::awt::Component* comp) override;
	virtual void calculateLayoutInfo();
	virtual ::java::awt::Dimension* calculateSize(bool minimum);
	virtual void calculateTabRects(int32_t tabPlacement, int32_t tabCount);
	virtual void layoutContainer(::java::awt::Container* parent) override;
	void layoutTabComponents();
	virtual ::java::awt::Dimension* minimumLayoutSize(::java::awt::Container* parent) override;
	virtual void normalizeTabRuns(int32_t tabPlacement, int32_t tabCount, int32_t start, int32_t max);
	virtual void padSelectedTab(int32_t tabPlacement, int32_t selectedIndex);
	virtual void padTabRun(int32_t tabPlacement, int32_t start, int32_t end, int32_t max);
	virtual ::java::awt::Dimension* preferredLayoutSize(::java::awt::Container* parent) override;
	virtual int32_t preferredTabAreaHeight(int32_t tabPlacement, int32_t width);
	virtual int32_t preferredTabAreaWidth(int32_t tabPlacement, int32_t height);
	virtual void removeLayoutComponent(::java::awt::Component* comp) override;
	virtual void rotateTabRuns(int32_t tabPlacement, int32_t selectedRun);
	::javax::swing::plaf::basic::BasicTabbedPaneUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicTabbedPaneUI$TabbedPaneLayout_h_