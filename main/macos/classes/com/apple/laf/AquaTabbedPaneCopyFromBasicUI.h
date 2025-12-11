#ifndef _com_apple_laf_AquaTabbedPaneCopyFromBasicUI_h_
#define _com_apple_laf_AquaTabbedPaneCopyFromBasicUI_h_
//$ class com.apple.laf.AquaTabbedPaneCopyFromBasicUI
//$ extends javax.swing.plaf.TabbedPaneUI
//$ implements javax.swing.SwingConstants

#include <java/lang/Array.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/plaf/TabbedPaneUI.h>

#pragma push_macro("CROP_SEGMENT")
#undef CROP_SEGMENT

namespace com {
	namespace apple {
		namespace laf {
			class AquaTabbedPaneCopyFromBasicUI$Handler;
			class AquaTabbedPaneCopyFromBasicUI$LazyActionMap;
			class AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport;
			class AquaTabbedPaneCopyFromBasicUI$TabContainer;
		}
	}
}
namespace java {
	namespace awt {
		class Color;
		class Component;
		class Component$BaselineResizeBehavior;
		class Dimension;
		class Font;
		class FontMetrics;
		class Graphics;
		class Insets;
		class LayoutManager;
		class Point;
		class Polygon;
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
	namespace util {
		class Hashtable;
		class Vector;
	}
}
namespace javax {
	namespace swing {
		class Icon;
		class InputMap;
		class JButton;
		class JComponent;
		class JTabbedPane;
		class KeyStroke;
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
namespace javax {
	namespace swing {
		namespace text {
			class View;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaTabbedPaneCopyFromBasicUI : public ::javax::swing::plaf::TabbedPaneUI, public ::javax::swing::SwingConstants {
	$class(AquaTabbedPaneCopyFromBasicUI, 0, ::javax::swing::plaf::TabbedPaneUI, ::javax::swing::SwingConstants)
public:
	AquaTabbedPaneCopyFromBasicUI();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void addMnemonic(int32_t index, int32_t mnemonic);
	virtual void assureRectsCreated(int32_t tabCount);
	void calculateBaseline();
	int32_t calculateBaselineIfNecessary();
	virtual int32_t calculateMaxTabHeight(int32_t tabPlacement);
	virtual int32_t calculateMaxTabWidth(int32_t tabPlacement);
	virtual int32_t calculateTabAreaHeight(int32_t tabPlacement, int32_t horizRunCount, int32_t maxTabHeight);
	virtual int32_t calculateTabAreaWidth(int32_t tabPlacement, int32_t vertRunCount, int32_t maxTabWidth);
	virtual int32_t calculateTabHeight(int32_t tabPlacement, int32_t tabIndex, int32_t fontHeight);
	virtual int32_t calculateTabWidth(int32_t tabPlacement, int32_t tabIndex, ::java::awt::FontMetrics* metrics);
	virtual ::javax::swing::event::ChangeListener* createChangeListener();
	static ::java::awt::Polygon* createCroppedTabShape(int32_t tabPlacement, ::java::awt::Rectangle* tabRect, int32_t cropline);
	virtual ::java::awt::event::FocusListener* createFocusListener();
	::java::util::Vector* createHTMLVector();
	virtual ::java::awt::LayoutManager* createLayoutManager();
	virtual ::java::awt::event::MouseListener* createMouseListener();
	virtual ::java::beans::PropertyChangeListener* createPropertyChangeListener();
	virtual ::javax::swing::JButton* createScrollButton(int32_t direction);
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual void ensureCurrentLayout();
	virtual void expandTabRunsArray();
	virtual int32_t getBaseline(::javax::swing::JComponent* c, int32_t width, int32_t height) override;
	virtual int32_t getBaseline(int32_t tab);
	virtual int32_t getBaselineOffset();
	virtual ::java::awt::Component$BaselineResizeBehavior* getBaselineResizeBehavior(::javax::swing::JComponent* c) override;
	int32_t getClosestTab(int32_t x, int32_t y);
	virtual ::java::awt::Insets* getContentBorderInsets(int32_t tabPlacement);
	virtual int32_t getFocusIndex();
	virtual ::java::awt::FontMetrics* getFontMetrics();
	::com::apple::laf::AquaTabbedPaneCopyFromBasicUI$Handler* getHandler();
	virtual ::javax::swing::Icon* getIconForTab(int32_t tabIndex);
	virtual ::javax::swing::InputMap* getInputMap(int32_t condition);
	virtual ::java::awt::Dimension* getMaximumSize(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getMinimumSize(::javax::swing::JComponent* c) override;
	virtual int32_t getNextTabIndex(int32_t base);
	virtual int32_t getNextTabIndexInRun(int32_t tabCount, int32_t base);
	virtual int32_t getNextTabRun(int32_t baseRun);
	virtual int32_t getPreviousTabIndex(int32_t base);
	virtual int32_t getPreviousTabIndexInRun(int32_t tabCount, int32_t base);
	virtual int32_t getPreviousTabRun(int32_t baseRun);
	virtual int32_t getRolloverTab();
	virtual int32_t getRunForTab(int32_t tabCount, int32_t tabIndex);
	virtual ::java::awt::Insets* getSelectedTabPadInsets(int32_t tabPlacement);
	virtual ::java::awt::Insets* getTabAreaInsets(int32_t tabPlacement);
	virtual ::java::awt::Rectangle* getTabBounds(::javax::swing::JTabbedPane* pane, int32_t i) override;
	virtual ::java::awt::Rectangle* getTabBounds(int32_t tabIndex, ::java::awt::Rectangle* dest);
	virtual ::java::awt::Component* getTabComponentAt(int32_t i);
	virtual ::java::awt::Insets* getTabInsets(int32_t tabPlacement, int32_t tabIndex);
	virtual int32_t getTabLabelShiftX(int32_t tabPlacement, int32_t tabIndex, bool isSelected);
	virtual int32_t getTabLabelShiftY(int32_t tabPlacement, int32_t tabIndex, bool isSelected);
	virtual int32_t getTabRunCount(::javax::swing::JTabbedPane* pane) override;
	virtual int32_t getTabRunIndent(int32_t tabPlacement, int32_t run);
	virtual int32_t getTabRunOffset(int32_t tabPlacement, int32_t tabCount, int32_t tabIndex, bool forward);
	virtual int32_t getTabRunOverlay(int32_t tabPlacement);
	virtual ::javax::swing::text::View* getTextViewForTab(int32_t tabIndex);
	virtual ::java::awt::Component* getVisibleComponent();
	void initMnemonics();
	virtual void installComponents();
	virtual void installDefaults();
	virtual void installKeyboardActions();
	virtual void installListeners();
	void installTabContainer();
	virtual void installUI(::javax::swing::JComponent* c) override;
	bool isHorizontalTabPlacement();
	virtual int32_t lastTabInRun(int32_t tabCount, int32_t run);
	virtual void layoutLabel(int32_t tabPlacement, ::java::awt::FontMetrics* metrics, int32_t tabIndex, $String* title, ::javax::swing::Icon* icon, ::java::awt::Rectangle* tabRect, ::java::awt::Rectangle* iconRect, ::java::awt::Rectangle* textRect, bool isSelected);
	static void loadActionMap(::com::apple::laf::AquaTabbedPaneCopyFromBasicUI$LazyActionMap* map);
	virtual void navigateSelectedTab(int32_t direction);
	void navigateTo(int32_t index);
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void paintContentBorder(::java::awt::Graphics* g, int32_t tabPlacement, int32_t selectedIndex);
	virtual void paintContentBorderBottomEdge(::java::awt::Graphics* g, int32_t tabPlacement, int32_t selectedIndex, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void paintContentBorderLeftEdge(::java::awt::Graphics* g, int32_t tabPlacement, int32_t selectedIndex, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void paintContentBorderRightEdge(::java::awt::Graphics* g, int32_t tabPlacement, int32_t selectedIndex, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void paintContentBorderTopEdge(::java::awt::Graphics* g, int32_t tabPlacement, int32_t selectedIndex, int32_t x, int32_t y, int32_t w, int32_t h);
	void paintCroppedTabEdge(::java::awt::Graphics* g);
	virtual void paintFocusIndicator(::java::awt::Graphics* g, int32_t tabPlacement, $Array<::java::awt::Rectangle>* rects, int32_t tabIndex, ::java::awt::Rectangle* iconRect, ::java::awt::Rectangle* textRect, bool isSelected);
	virtual void paintIcon(::java::awt::Graphics* g, int32_t tabPlacement, int32_t tabIndex, ::javax::swing::Icon* icon, ::java::awt::Rectangle* iconRect, bool isSelected);
	virtual void paintTab(::java::awt::Graphics* g, int32_t tabPlacement, $Array<::java::awt::Rectangle>* rects, int32_t tabIndex, ::java::awt::Rectangle* iconRect, ::java::awt::Rectangle* textRect);
	virtual void paintTabArea(::java::awt::Graphics* g, int32_t tabPlacement, int32_t selectedIndex);
	virtual void paintTabBackground(::java::awt::Graphics* g, int32_t tabPlacement, int32_t tabIndex, int32_t x, int32_t y, int32_t w, int32_t h, bool isSelected);
	virtual void paintTabBorder(::java::awt::Graphics* g, int32_t tabPlacement, int32_t tabIndex, int32_t x, int32_t y, int32_t w, int32_t h, bool isSelected);
	virtual void paintText(::java::awt::Graphics* g, int32_t tabPlacement, ::java::awt::Font* font, ::java::awt::FontMetrics* metrics, int32_t tabIndex, $String* title, ::java::awt::Rectangle* textRect, bool isSelected);
	void repaintTab(int32_t index);
	virtual bool requestFocusForVisibleComponent();
	void resetMnemonics();
	static void rotateInsets(::java::awt::Insets* topInsets, ::java::awt::Insets* targetInsets, int32_t targetPlacement);
	virtual bool scrollableTabLayoutEnabled();
	virtual void selectAdjacentRunTab(int32_t tabPlacement, int32_t tabIndex, int32_t offset);
	virtual void selectNextTab(int32_t current);
	virtual void selectNextTabInRun(int32_t current);
	virtual void selectPreviousTab(int32_t current);
	virtual void selectPreviousTabInRun(int32_t current);
	virtual void setFocusIndex(int32_t index, bool repaint);
	void setRolloverTab(int32_t x, int32_t y);
	virtual void setRolloverTab(int32_t index);
	virtual void setVisibleComponent(::java::awt::Component* component);
	virtual bool shouldPadTabRun(int32_t tabPlacement, int32_t run);
	virtual bool shouldRotateTabRuns(int32_t tabPlacement);
	virtual int32_t tabForCoordinate(::javax::swing::JTabbedPane* pane, int32_t x, int32_t y) override;
	int32_t tabForCoordinate(::javax::swing::JTabbedPane* pane, int32_t x, int32_t y, bool validateIfNecessary);
	virtual $String* toString() override;
	::java::awt::Point* translatePointToTabPanel(int32_t srcx, int32_t srcy, ::java::awt::Point* dest);
	virtual void uninstallComponents();
	virtual void uninstallDefaults();
	virtual void uninstallKeyboardActions();
	virtual void uninstallListeners();
	void uninstallTabContainer();
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	void updateMnemonics();
	void validateFocusIndex();
	::javax::swing::JTabbedPane* tabPane = nullptr;
	::java::awt::Color* highlight = nullptr;
	::java::awt::Color* lightHighlight = nullptr;
	::java::awt::Color* shadow = nullptr;
	::java::awt::Color* darkShadow = nullptr;
	::java::awt::Color* focus = nullptr;
	::java::awt::Color* selectedColor = nullptr;
	int32_t textIconGap = 0;
	int32_t tabRunOverlay = 0;
	::java::awt::Insets* tabInsets = nullptr;
	::java::awt::Insets* selectedTabPadInsets = nullptr;
	::java::awt::Insets* tabAreaInsets = nullptr;
	::java::awt::Insets* contentBorderInsets = nullptr;
	bool tabsOverlapBorder = false;
	bool tabsOpaque = false;
	bool contentOpaque = false;
	::javax::swing::KeyStroke* upKey = nullptr;
	::javax::swing::KeyStroke* downKey = nullptr;
	::javax::swing::KeyStroke* leftKey = nullptr;
	::javax::swing::KeyStroke* rightKey = nullptr;
	$ints* tabRuns = nullptr;
	int32_t runCount = 0;
	int32_t selectedRun = 0;
	$Array<::java::awt::Rectangle>* rects = nullptr;
	int32_t maxTabHeight = 0;
	int32_t maxTabWidth = 0;
	::javax::swing::event::ChangeListener* tabChangeListener = nullptr;
	::java::beans::PropertyChangeListener* propertyChangeListener = nullptr;
	::java::awt::event::MouseListener* mouseListener = nullptr;
	::java::awt::event::FocusListener* focusListener = nullptr;
	::java::awt::Insets* currentPadInsets = nullptr;
	::java::awt::Insets* currentTabAreaInsets = nullptr;
	::java::awt::Component* visibleComponent = nullptr;
	::java::util::Vector* htmlViews = nullptr;
	::java::util::Hashtable* mnemonicToIndexMap = nullptr;
	::javax::swing::InputMap* mnemonicInputMap = nullptr;
	::com::apple::laf::AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport* tabScroller = nullptr;
	::com::apple::laf::AquaTabbedPaneCopyFromBasicUI$TabContainer* tabContainer = nullptr;
	::java::awt::Rectangle* calcRect = nullptr;
	int32_t focusIndex = 0;
	::com::apple::laf::AquaTabbedPaneCopyFromBasicUI$Handler* handler = nullptr;
	int32_t rolloverTabIndex = 0;
	bool isRunsDirty = false;
	bool calculatedBaseline = false;
	int32_t baseline = 0;
	static $ints* xCropLen;
	static $ints* yCropLen;
	static const int32_t CROP_SEGMENT = 12;
};

		} // laf
	} // apple
} // com

#pragma pop_macro("CROP_SEGMENT")

#endif // _com_apple_laf_AquaTabbedPaneCopyFromBasicUI_h_