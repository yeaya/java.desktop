#ifndef _com_apple_laf_AquaTabbedPaneCopyFromBasicUI$TabbedPaneLayout_h_
#define _com_apple_laf_AquaTabbedPaneCopyFromBasicUI$TabbedPaneLayout_h_
//$ class com.apple.laf.AquaTabbedPaneCopyFromBasicUI$TabbedPaneLayout
//$ extends java.awt.LayoutManager

#include <java/awt/LayoutManager.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaTabbedPaneCopyFromBasicUI;
		}
	}
}
namespace java {
	namespace awt {
		class Component;
		class Container;
		class Dimension;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaTabbedPaneCopyFromBasicUI$TabbedPaneLayout : public ::java::awt::LayoutManager {
	$class(AquaTabbedPaneCopyFromBasicUI$TabbedPaneLayout, $NO_CLASS_INIT, ::java::awt::LayoutManager)
public:
	AquaTabbedPaneCopyFromBasicUI$TabbedPaneLayout();
	void init$(::com::apple::laf::AquaTabbedPaneCopyFromBasicUI* this$0);
	virtual void addLayoutComponent($String* name, ::java::awt::Component* comp) override;
	virtual void calculateLayoutInfo();
	virtual ::java::awt::Dimension* calculateSize(bool minimum);
	virtual void calculateTabRects(int32_t tabPlacement, int32_t tabCount);
	virtual ::java::awt::Container* getTabContainer();
	virtual void layoutContainer(::java::awt::Container* parent) override;
	virtual void layoutTabComponents();
	virtual ::java::awt::Dimension* minimumLayoutSize(::java::awt::Container* parent) override;
	virtual void normalizeTabRuns(int32_t tabPlacement, int32_t tabCount, int32_t start, int32_t max);
	virtual void padSelectedTab(int32_t tabPlacement, int32_t selectedIndex);
	virtual void padTabRun(int32_t tabPlacement, int32_t start, int32_t end, int32_t max);
	virtual ::java::awt::Dimension* preferredLayoutSize(::java::awt::Container* parent) override;
	virtual int32_t preferredTabAreaHeight(int32_t tabPlacement, int32_t width);
	virtual int32_t preferredTabAreaWidth(int32_t tabPlacement, int32_t height);
	virtual void removeLayoutComponent(::java::awt::Component* comp) override;
	virtual void rotateTabRuns(int32_t tabPlacement, int32_t selectedRun);
	::com::apple::laf::AquaTabbedPaneCopyFromBasicUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaTabbedPaneCopyFromBasicUI$TabbedPaneLayout_h_