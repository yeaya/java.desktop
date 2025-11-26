#ifndef _javax_swing_plaf_metal_MetalTabbedPaneUI_h_
#define _javax_swing_plaf_metal_MetalTabbedPaneUI_h_
//$ class javax.swing.plaf.metal.MetalTabbedPaneUI
//$ extends javax.swing.plaf.basic.BasicTabbedPaneUI

#include <java/lang/Array.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI.h>

namespace java {
	namespace awt {
		class Color;
		class Graphics;
		class LayoutManager;
		class Rectangle;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class $export MetalTabbedPaneUI : public ::javax::swing::plaf::basic::BasicTabbedPaneUI {
	$class(MetalTabbedPaneUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicTabbedPaneUI)
public:
	MetalTabbedPaneUI();
	void init$();
	virtual int32_t calculateMaxTabHeight(int32_t tabPlacement) override;
	virtual ::java::awt::LayoutManager* createLayoutManager() override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* x);
	virtual int32_t getBaselineOffset() override;
	virtual ::java::awt::Color* getColorForGap(int32_t currentRun, int32_t x, int32_t y);
	virtual int32_t getRolloverTabIndex();
	virtual int32_t getTabLabelShiftX(int32_t tabPlacement, int32_t tabIndex, bool isSelected) override;
	virtual int32_t getTabLabelShiftY(int32_t tabPlacement, int32_t tabIndex, bool isSelected) override;
	virtual int32_t getTabRunOverlay(int32_t tabPlacement) override;
	::java::awt::Color* getUnselectedBackgroundAt(int32_t index);
	virtual void installDefaults() override;
	bool isLastInRun(int32_t tabIndex);
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void paintBottomTabBorder(int32_t tabIndex, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t btm, int32_t rght, bool isSelected);
	virtual void paintContentBorderBottomEdge(::java::awt::Graphics* g, int32_t tabPlacement, int32_t selectedIndex, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void paintContentBorderLeftEdge(::java::awt::Graphics* g, int32_t tabPlacement, int32_t selectedIndex, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void paintContentBorderRightEdge(::java::awt::Graphics* g, int32_t tabPlacement, int32_t selectedIndex, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void paintContentBorderTopEdge(::java::awt::Graphics* g, int32_t tabPlacement, int32_t selectedIndex, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void paintFocusIndicator(::java::awt::Graphics* g, int32_t tabPlacement, $Array<::java::awt::Rectangle>* rects, int32_t tabIndex, ::java::awt::Rectangle* iconRect, ::java::awt::Rectangle* textRect, bool isSelected) override;
	virtual void paintHighlightBelowTab();
	virtual void paintLeftTabBorder(int32_t tabIndex, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t btm, int32_t rght, bool isSelected);
	virtual void paintRightTabBorder(int32_t tabIndex, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t btm, int32_t rght, bool isSelected);
	virtual void paintTabBackground(::java::awt::Graphics* g, int32_t tabPlacement, int32_t tabIndex, int32_t x, int32_t y, int32_t w, int32_t h, bool isSelected) override;
	virtual void paintTabBorder(::java::awt::Graphics* g, int32_t tabPlacement, int32_t tabIndex, int32_t x, int32_t y, int32_t w, int32_t h, bool isSelected) override;
	virtual void paintTopTabBorder(int32_t tabIndex, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t btm, int32_t rght, bool isSelected);
	virtual bool shouldFillGap(int32_t currentRun, int32_t tabIndex, int32_t x, int32_t y);
	virtual bool shouldPadTabRun(int32_t tabPlacement, int32_t run) override;
	using ::javax::swing::plaf::basic::BasicTabbedPaneUI::shouldRotateTabRuns;
	virtual bool shouldRotateTabRuns(int32_t tabPlacement, int32_t selectedRun);
	virtual void update(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	int32_t minTabWidth = 0;
	::java::awt::Color* unselectedBackground = nullptr;
	::java::awt::Color* tabAreaBackground = nullptr;
	::java::awt::Color* selectColor = nullptr;
	::java::awt::Color* selectHighlight = nullptr;
	bool tabsOpaque = false;
	bool ocean = false;
	::java::awt::Color* oceanSelectedBorderColor = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalTabbedPaneUI_h_