#ifndef _com_apple_laf_AquaTabbedPaneUI_h_
#define _com_apple_laf_AquaTabbedPaneUI_h_
//$ class com.apple.laf.AquaTabbedPaneUI
//$ extends com.apple.laf.AquaTabbedPaneCopyFromBasicUI

#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI.h>
#include <java/lang/Array.h>
#include <java/lang/Math.h>

#pragma push_macro("TAB_BORDER_INSET")
#undef TAB_BORDER_INSET

namespace apple {
	namespace laf {
		class JRSUIConstants$Direction;
		class JRSUIConstants$SegmentLeadingSeparator;
		class JRSUIConstants$SegmentPosition;
		class JRSUIConstants$SegmentTrailingSeparator;
		class JRSUIConstants$State;
	}
}
namespace com {
	namespace apple {
		namespace laf {
			class AquaPainter;
			class AquaTabbedPaneTabState;
			class AquaTabbedPaneUI$AlterRects;
		}
	}
}
namespace java {
	namespace awt {
		class Color;
		class Font;
		class FontMetrics;
		class Graphics;
		class Graphics2D;
		class Insets;
		class LayoutManager;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class FocusListener;
			class MouseListener;
		}
	}
}
namespace java {
	namespace beans {
		class PropertyChangeListener;
	}
}
namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace javax {
	namespace swing {
		class Icon;
		class JComponent;
		class JTabbedPane;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ChangeListener;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaTabbedPaneUI : public ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI {
	$class(AquaTabbedPaneUI, 0, ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI)
public:
	AquaTabbedPaneUI();
	using ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI::getTabBounds;
	void init$();
	virtual void assureRectsCreated(int32_t tabCount) override;
	virtual int32_t calculateTabHeight(int32_t tabPlacement, int32_t tabIndex, int32_t fontHeight) override;
	virtual ::javax::swing::event::ChangeListener* createChangeListener() override;
	virtual ::java::awt::event::FocusListener* createFocusListener() override;
	virtual ::java::awt::LayoutManager* createLayoutManager() override;
	virtual ::java::awt::event::MouseListener* createMouseListener() override;
	virtual ::java::beans::PropertyChangeListener* createPropertyChangeListener() override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual void fillTabWithBackground(::java::awt::Graphics* g, ::java::awt::Rectangle* rect, int32_t tabPlacement, bool first, bool last, ::java::awt::Color* color);
	static ::com::apple::laf::AquaTabbedPaneUI$AlterRects* getAlterationFor(int32_t tabPlacement);
	virtual ::java::awt::Insets* getContentBorderInsets(int32_t tabPlacement) override;
	virtual ::java::awt::Insets* getContentDrawingInsets(int32_t tabPlacement);
	virtual ::apple::laf::JRSUIConstants$Direction* getDirection();
	virtual ::javax::swing::Icon* getIconForScrollTab(int32_t tabPlacement, int32_t tabIndex, bool enabled);
	virtual ::javax::swing::Icon* getIconForTab(int32_t tabIndex) override;
	virtual ::apple::laf::JRSUIConstants$SegmentLeadingSeparator* getSegmentLeadingSeparator(int32_t index, int32_t selectedIndex, bool isLeftToRight);
	static ::apple::laf::JRSUIConstants$SegmentPosition* getSegmentPosition(bool first, bool last, bool isLeftToRight);
	virtual ::apple::laf::JRSUIConstants$SegmentTrailingSeparator* getSegmentTrailingSeparator(int32_t index, int32_t selectedIndex, bool isLeftToRight);
	virtual ::apple::laf::JRSUIConstants$State* getState(int32_t index, bool frameActive, bool isSelected);
	virtual ::java::awt::Rectangle* getTabBounds(::javax::swing::JTabbedPane* pane, int32_t i) override;
	virtual ::java::awt::Insets* getTabInsets(int32_t tabPlacement, int32_t tabIndex) override;
	virtual int32_t getTabLabelShiftX(int32_t tabPlacement, int32_t tabIndex, bool isSelected) override;
	virtual int32_t getTabLabelShiftY(int32_t tabPlacement, int32_t tabIndex, bool isSelected) override;
	virtual void installDefaults() override;
	virtual void installListeners() override;
	static bool isScrollTabIndex(int32_t index);
	virtual bool isTabBeforeSelectedTab(int32_t index, int32_t selectedIndex, bool isLeftToRight);
	virtual bool isTabVisible(int32_t index);
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void paintAllTabs(::java::awt::Graphics* g, ::java::awt::Rectangle* clipRect, int32_t tabPlacement, int32_t selectedIndex, bool active, bool frameActive, bool isLeftToRight);
	virtual void paintCUITab(::java::awt::Graphics* g, int32_t tabPlacement, ::java::awt::Rectangle* tabRect, bool isSelected, bool frameActive, bool isLeftToRight, int32_t nonRectIndex);
	virtual void paintContentBorder(::java::awt::Graphics* g, int32_t tabPlacement, int32_t selectedIndex) override;
	virtual void paintContents(::java::awt::Graphics* g, int32_t tabPlacement, int32_t tabIndex, ::java::awt::Rectangle* tabRect, ::java::awt::Rectangle* iconRect, ::java::awt::Rectangle* textRect, bool isSelected);
	virtual void paintScrollingTabs(::java::awt::Graphics* g, ::java::awt::Rectangle* clipRect, int32_t tabPlacement, int32_t selectedIndex, bool active, bool frameActive, bool isLeftToRight);
	virtual void paintTabNormal(::java::awt::Graphics* g, int32_t tabPlacement, int32_t tabIndex, bool active, bool frameActive, bool isLeftToRight);
	virtual void paintTabNormalFromRect(::java::awt::Graphics* g, int32_t tabPlacement, ::java::awt::Rectangle* tabRect, int32_t nonRectIndex, ::java::awt::Rectangle* iconRect, ::java::awt::Rectangle* textRect, bool active, bool frameActive, bool isLeftToRight);
	virtual void paintTitle(::java::awt::Graphics2D* g2d, ::java::awt::Font* font, ::java::awt::FontMetrics* metrics, ::java::awt::Rectangle* textRect, int32_t tabIndex, $String* title);
	virtual void repaintContentBorderEdge();
	virtual void rotateGraphics(::java::awt::Graphics2D* g2d, ::java::awt::Rectangle* tabRect, ::java::awt::Rectangle* textRect, ::java::awt::Rectangle* iconRect, int32_t tabPlacement);
	static void rotateInsets(::java::awt::Insets* topInsets, ::java::awt::Insets* targetInsets, int32_t targetPlacement);
	virtual bool shouldRepaintSelectedTabOnMouseDown();
	virtual bool shouldRotateTabRuns(int32_t tabPlacement) override;
	virtual int32_t tabForCoordinate(::javax::swing::JTabbedPane* pane, int32_t x, int32_t y) override;
	static void transposeRect(::java::awt::Rectangle* r);
	virtual void uninstallDefaults() override;
	virtual void uninstallListeners() override;
	static const int32_t kSmallTabHeight = 20;
	static const int32_t kLargeTabHeight = 23;
	static const int32_t kMaxIconSize = 16; // kLargeTabHeight - 7
	static double kNinetyDegrees;
	::java::awt::Insets* currentContentDrawingInsets = nullptr;
	::java::awt::Insets* currentContentBorderInsets = nullptr;
	::java::awt::Insets* contentDrawingInsets = nullptr;
	int32_t pressedTab = 0;
	bool popupSelectionChanged = false;
	::java::lang::Boolean* isDefaultFocusReceiver = nullptr;
	bool hasAvoidedFirstFocus = false;
	::com::apple::laf::AquaTabbedPaneTabState* visibleTabState = nullptr;
	::com::apple::laf::AquaPainter* painter = nullptr;
	::java::awt::Rectangle* fContentRect = nullptr;
	::java::awt::Rectangle* fIconRect = nullptr;
	::java::awt::Rectangle* fTextRect = nullptr;
	static $Array<::com::apple::laf::AquaTabbedPaneUI$AlterRects>* alterRects;
	static const int32_t TAB_BORDER_INSET = 9;
};

		} // laf
	} // apple
} // com

#pragma pop_macro("TAB_BORDER_INSET")

#endif // _com_apple_laf_AquaTabbedPaneUI_h_