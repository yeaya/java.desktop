#include <javax/swing/plaf/metal/MetalTabbedPaneUI.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TabbedPaneUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI$TabbedPaneLayout.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalTabbedPaneUI$TabbedPaneLayout.h>
#include <javax/swing/plaf/metal/MetalUtils.h>
#include <jcpp.h>

#undef BOTTOM
#undef LEFT
#undef RIGHT
#undef SCROLL_TAB_LAYOUT
#undef TOP

using $RectangleArray = $Array<::java::awt::Rectangle>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $SwingConstants = ::javax::swing::SwingConstants;
using $UIManager = ::javax::swing::UIManager;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TabbedPaneUI = ::javax::swing::plaf::TabbedPaneUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicTabbedPaneUI = ::javax::swing::plaf::basic::BasicTabbedPaneUI;
using $BasicTabbedPaneUI$TabbedPaneLayout = ::javax::swing::plaf::basic::BasicTabbedPaneUI$TabbedPaneLayout;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;
using $MetalTabbedPaneUI$TabbedPaneLayout = ::javax::swing::plaf::metal::MetalTabbedPaneUI$TabbedPaneLayout;
using $MetalUtils = ::javax::swing::plaf::metal::MetalUtils;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalTabbedPaneUI_FieldInfo_[] = {
	{"minTabWidth", "I", nullptr, $PROTECTED, $field(MetalTabbedPaneUI, minTabWidth)},
	{"unselectedBackground", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(MetalTabbedPaneUI, unselectedBackground)},
	{"tabAreaBackground", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(MetalTabbedPaneUI, tabAreaBackground)},
	{"selectColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(MetalTabbedPaneUI, selectColor)},
	{"selectHighlight", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(MetalTabbedPaneUI, selectHighlight)},
	{"tabsOpaque", "Z", nullptr, $PRIVATE, $field(MetalTabbedPaneUI, tabsOpaque)},
	{"ocean", "Z", nullptr, $PRIVATE, $field(MetalTabbedPaneUI, ocean)},
	{"oceanSelectedBorderColor", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(MetalTabbedPaneUI, oceanSelectedBorderColor)},
	{}
};

$MethodInfo _MetalTabbedPaneUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalTabbedPaneUI::*)()>(&MetalTabbedPaneUI::init$))},
	{"calculateMaxTabHeight", "(I)I", nullptr, $PROTECTED},
	{"createLayoutManager", "()Ljava/awt/LayoutManager;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MetalTabbedPaneUI::createUI))},
	{"getBaselineOffset", "()I", nullptr, $PROTECTED},
	{"getColorForGap", "(III)Ljava/awt/Color;", nullptr, $PROTECTED},
	{"getRolloverTabIndex", "()I", nullptr, 0},
	{"getTabLabelShiftX", "(IIZ)I", nullptr, $PROTECTED},
	{"getTabLabelShiftY", "(IIZ)I", nullptr, $PROTECTED},
	{"getTabRunOverlay", "(I)I", nullptr, $PROTECTED},
	{"getUnselectedBackgroundAt", "(I)Ljava/awt/Color;", nullptr, $PRIVATE, $method(static_cast<$Color*(MetalTabbedPaneUI::*)(int32_t)>(&MetalTabbedPaneUI::getUnselectedBackgroundAt))},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"isLastInRun", "(I)Z", nullptr, $PRIVATE, $method(static_cast<bool(MetalTabbedPaneUI::*)(int32_t)>(&MetalTabbedPaneUI::isLastInRun))},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paintBottomTabBorder", "(ILjava/awt/Graphics;IIIIIIZ)V", nullptr, $PROTECTED},
	{"paintContentBorderBottomEdge", "(Ljava/awt/Graphics;IIIIII)V", nullptr, $PROTECTED},
	{"paintContentBorderLeftEdge", "(Ljava/awt/Graphics;IIIIII)V", nullptr, $PROTECTED},
	{"paintContentBorderRightEdge", "(Ljava/awt/Graphics;IIIIII)V", nullptr, $PROTECTED},
	{"paintContentBorderTopEdge", "(Ljava/awt/Graphics;IIIIII)V", nullptr, $PROTECTED},
	{"paintFocusIndicator", "(Ljava/awt/Graphics;I[Ljava/awt/Rectangle;ILjava/awt/Rectangle;Ljava/awt/Rectangle;Z)V", nullptr, $PROTECTED},
	{"paintHighlightBelowTab", "()V", nullptr, $PROTECTED},
	{"paintLeftTabBorder", "(ILjava/awt/Graphics;IIIIIIZ)V", nullptr, $PROTECTED},
	{"paintRightTabBorder", "(ILjava/awt/Graphics;IIIIIIZ)V", nullptr, $PROTECTED},
	{"paintTabBackground", "(Ljava/awt/Graphics;IIIIIIZ)V", nullptr, $PROTECTED},
	{"paintTabBorder", "(Ljava/awt/Graphics;IIIIIIZ)V", nullptr, $PROTECTED},
	{"paintTopTabBorder", "(ILjava/awt/Graphics;IIIIIIZ)V", nullptr, $PROTECTED},
	{"shouldFillGap", "(IIII)Z", nullptr, $PROTECTED},
	{"shouldPadTabRun", "(II)Z", nullptr, $PROTECTED},
	{"shouldRotateTabRuns", "(II)Z", nullptr, $PROTECTED},
	{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalTabbedPaneUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalTabbedPaneUI$TabbedPaneLayout", "javax.swing.plaf.metal.MetalTabbedPaneUI", "TabbedPaneLayout", $PUBLIC},
	{}
};

$ClassInfo _MetalTabbedPaneUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalTabbedPaneUI",
	"javax.swing.plaf.basic.BasicTabbedPaneUI",
	nullptr,
	_MetalTabbedPaneUI_FieldInfo_,
	_MetalTabbedPaneUI_MethodInfo_,
	nullptr,
	nullptr,
	_MetalTabbedPaneUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalTabbedPaneUI$TabbedPaneLayout"
};

$Object* allocate$MetalTabbedPaneUI($Class* clazz) {
	return $of($alloc(MetalTabbedPaneUI));
}

void MetalTabbedPaneUI::init$() {
	$BasicTabbedPaneUI::init$();
	this->minTabWidth = 40;
	this->tabsOpaque = true;
}

$ComponentUI* MetalTabbedPaneUI::createUI($JComponent* x) {
	$init(MetalTabbedPaneUI);
	return $new(MetalTabbedPaneUI);
}

$LayoutManager* MetalTabbedPaneUI::createLayoutManager() {
	if ($nc(this->tabPane)->getTabLayoutPolicy() == $JTabbedPane::SCROLL_TAB_LAYOUT) {
		return $BasicTabbedPaneUI::createLayoutManager();
	}
	return $new($MetalTabbedPaneUI$TabbedPaneLayout, this);
}

void MetalTabbedPaneUI::installDefaults() {
	$BasicTabbedPaneUI::installDefaults();
	$set(this, tabAreaBackground, $UIManager::getColor("TabbedPane.tabAreaBackground"_s));
	$set(this, selectColor, $UIManager::getColor("TabbedPane.selected"_s));
	$set(this, selectHighlight, $UIManager::getColor("TabbedPane.selectHighlight"_s));
	this->tabsOpaque = $UIManager::getBoolean("TabbedPane.tabsOpaque"_s);
	$set(this, unselectedBackground, $UIManager::getColor("TabbedPane.unselectedBackground"_s));
	this->ocean = $MetalLookAndFeel::usingOcean();
	if (this->ocean) {
		$set(this, oceanSelectedBorderColor, $UIManager::getColor("TabbedPane.borderHightlightColor"_s));
	}
}

void MetalTabbedPaneUI::paintTabBorder($Graphics* g, int32_t tabPlacement, int32_t tabIndex, int32_t x, int32_t y, int32_t w, int32_t h, bool isSelected) {
	int32_t bottom = y + (h - 1);
	int32_t right = x + (w - 1);
	switch (tabPlacement) {
	case $SwingConstants::LEFT:
		{
			paintLeftTabBorder(tabIndex, g, x, y, w, h, bottom, right, isSelected);
			break;
		}
	case $SwingConstants::BOTTOM:
		{
			paintBottomTabBorder(tabIndex, g, x, y, w, h, bottom, right, isSelected);
			break;
		}
	case $SwingConstants::RIGHT:
		{
			paintRightTabBorder(tabIndex, g, x, y, w, h, bottom, right, isSelected);
			break;
		}
	case $SwingConstants::TOP:
		{}
	default:
		{
			paintTopTabBorder(tabIndex, g, x, y, w, h, bottom, right, isSelected);
		}
	}
}

void MetalTabbedPaneUI::paintTopTabBorder(int32_t tabIndex, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t btm, int32_t rght, bool isSelected) {
	$useLocalCurrentObjectStackCache();
	int32_t currentRun = getRunForTab($nc(this->tabPane)->getTabCount(), tabIndex);
	int32_t lastIndex = lastTabInRun($nc(this->tabPane)->getTabCount(), currentRun);
	int32_t firstIndex = $nc(this->tabRuns)->get(currentRun);
	bool leftToRight = $MetalUtils::isLeftToRight(this->tabPane);
	int32_t selectedIndex = $nc(this->tabPane)->getSelectedIndex();
	int32_t bottom = h - 1;
	int32_t right = w - 1;
	if (shouldFillGap(currentRun, tabIndex, x, y)) {
		$nc(g)->translate(x, y);
		if (leftToRight) {
			g->setColor($(getColorForGap(currentRun, x, y + 1)));
			g->fillRect(1, 0, 5, 3);
			g->fillRect(1, 3, 2, 2);
		} else {
			g->setColor($(getColorForGap(currentRun, x + w - 1, y + 1)));
			g->fillRect(right - 5, 0, 5, 3);
			g->fillRect(right - 2, 3, 2, 2);
		}
		g->translate(-x, -y);
	}
	$nc(g)->translate(x, y);
	if (this->ocean && isSelected) {
		g->setColor(this->oceanSelectedBorderColor);
	} else {
		g->setColor(this->darkShadow);
	}
	if (leftToRight) {
		g->drawLine(1, 5, 6, 0);
		g->drawLine(6, 0, right, 0);
		if (tabIndex == lastIndex) {
			g->drawLine(right, 1, right, bottom);
		}
		if (this->ocean && tabIndex - 1 == selectedIndex && currentRun == getRunForTab($nc(this->tabPane)->getTabCount(), selectedIndex)) {
			g->setColor(this->oceanSelectedBorderColor);
		}
		if (tabIndex != $nc(this->tabRuns)->get(this->runCount - 1)) {
			if (this->ocean && isSelected) {
				g->drawLine(0, 6, 0, bottom);
				g->setColor(this->darkShadow);
				g->drawLine(0, 0, 0, 5);
			} else {
				g->drawLine(0, 0, 0, bottom);
			}
		} else {
			g->drawLine(0, 6, 0, bottom);
		}
	} else {
		g->drawLine(right - 1, 5, right - 6, 0);
		g->drawLine(right - 6, 0, 0, 0);
		if (tabIndex == lastIndex) {
			g->drawLine(0, 1, 0, bottom);
		}
		if (this->ocean && tabIndex - 1 == selectedIndex && currentRun == getRunForTab($nc(this->tabPane)->getTabCount(), selectedIndex)) {
			g->setColor(this->oceanSelectedBorderColor);
			g->drawLine(right, 0, right, bottom);
		} else if (this->ocean && isSelected) {
			g->drawLine(right, 6, right, bottom);
			if (tabIndex != 0) {
				g->setColor(this->darkShadow);
				g->drawLine(right, 0, right, 5);
			}
		} else if (tabIndex != $nc(this->tabRuns)->get(this->runCount - 1)) {
			g->drawLine(right, 0, right, bottom);
		} else {
			g->drawLine(right, 6, right, bottom);
		}
	}
	g->setColor(isSelected ? this->selectHighlight : this->highlight);
	if (leftToRight) {
		g->drawLine(1, 6, 6, 1);
		g->drawLine(6, 1, (tabIndex == lastIndex) ? right - 1 : right, 1);
		g->drawLine(1, 6, 1, bottom);
		if (tabIndex == firstIndex && tabIndex != $nc(this->tabRuns)->get(this->runCount - 1)) {
			if ($nc(this->tabPane)->getSelectedIndex() == $nc(this->tabRuns)->get(currentRun + 1)) {
				g->setColor(this->selectHighlight);
			} else {
				g->setColor(this->highlight);
			}
			g->drawLine(1, 0, 1, 4);
		}
	} else {
		g->drawLine(right - 1, 6, right - 6, 1);
		g->drawLine(right - 6, 1, 1, 1);
		if (tabIndex == lastIndex) {
			g->drawLine(1, 1, 1, bottom);
		} else {
			g->drawLine(0, 1, 0, bottom);
		}
	}
	g->translate(-x, -y);
}

bool MetalTabbedPaneUI::shouldFillGap(int32_t currentRun, int32_t tabIndex, int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	bool result = false;
	if (!this->tabsOpaque) {
		return false;
	}
	if (currentRun == this->runCount - 2) {
		$var($Rectangle, lastTabBounds, getTabBounds(this->tabPane, $nc(this->tabPane)->getTabCount() - 1));
		$var($Rectangle, tabBounds, getTabBounds(this->tabPane, tabIndex));
		if ($MetalUtils::isLeftToRight(this->tabPane)) {
			int32_t lastTabRight = $nc(lastTabBounds)->x + lastTabBounds->width - 1;
			if (lastTabRight > $nc(tabBounds)->x + 2) {
				return true;
			}
		} else {
			int32_t lastTabLeft = $nc(lastTabBounds)->x;
			int32_t currentTabRight = $nc(tabBounds)->x + tabBounds->width - 1;
			if (lastTabLeft < currentTabRight - 2) {
				return true;
			}
		}
	} else {
		result = currentRun != this->runCount - 1;
	}
	return result;
}

$Color* MetalTabbedPaneUI::getColorForGap(int32_t currentRun, int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	int32_t shadowWidth = 4;
	int32_t selectedIndex = $nc(this->tabPane)->getSelectedIndex();
	int32_t startIndex = $nc(this->tabRuns)->get(currentRun + 1);
	int32_t endIndex = lastTabInRun($nc(this->tabPane)->getTabCount(), currentRun + 1);
	int32_t tabOverGap = -1;
	for (int32_t i = startIndex; i <= endIndex; ++i) {
		$var($Rectangle, tabBounds, getTabBounds(this->tabPane, i));
		int32_t tabLeft = $nc(tabBounds)->x;
		int32_t tabRight = (tabBounds->x + tabBounds->width) - 1;
		if ($MetalUtils::isLeftToRight(this->tabPane)) {
			if (tabLeft <= x && tabRight - shadowWidth > x) {
				return selectedIndex == i ? this->selectColor : getUnselectedBackgroundAt(i);
			}
		} else if (tabLeft + shadowWidth < x && tabRight >= x) {
			return selectedIndex == i ? this->selectColor : getUnselectedBackgroundAt(i);
		}
	}
	return $nc(this->tabPane)->getBackground();
}

void MetalTabbedPaneUI::paintLeftTabBorder(int32_t tabIndex, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t btm, int32_t rght, bool isSelected) {
	$useLocalCurrentObjectStackCache();
	int32_t tabCount = $nc(this->tabPane)->getTabCount();
	int32_t currentRun = getRunForTab(tabCount, tabIndex);
	int32_t lastIndex = lastTabInRun(tabCount, currentRun);
	int32_t firstIndex = $nc(this->tabRuns)->get(currentRun);
	$nc(g)->translate(x, y);
	int32_t bottom = h - 1;
	int32_t right = w - 1;
	if (tabIndex != firstIndex && this->tabsOpaque) {
		g->setColor($nc(this->tabPane)->getSelectedIndex() == tabIndex - 1 ? this->selectColor : $(getUnselectedBackgroundAt(tabIndex - 1)));
		g->fillRect(2, 0, 4, 3);
		g->drawLine(2, 3, 2, 3);
	}
	if (this->ocean) {
		g->setColor(isSelected ? this->selectHighlight : $(static_cast<$Color*>($MetalLookAndFeel::getWhite())));
	} else {
		g->setColor(isSelected ? this->selectHighlight : this->highlight);
	}
	g->drawLine(1, 6, 6, 1);
	g->drawLine(1, 6, 1, bottom);
	g->drawLine(6, 1, right, 1);
	if (tabIndex != firstIndex) {
		if ($nc(this->tabPane)->getSelectedIndex() == tabIndex - 1) {
			g->setColor(this->selectHighlight);
		} else {
			g->setColor(this->ocean ? $(static_cast<$Color*>($MetalLookAndFeel::getWhite())) : this->highlight);
		}
		g->drawLine(1, 0, 1, 4);
	}
	if (this->ocean) {
		if (isSelected) {
			g->setColor(this->oceanSelectedBorderColor);
		} else {
			g->setColor(this->darkShadow);
		}
	} else {
		g->setColor(this->darkShadow);
	}
	g->drawLine(1, 5, 6, 0);
	g->drawLine(6, 0, right, 0);
	if (tabIndex == lastIndex) {
		g->drawLine(0, bottom, right, bottom);
	}
	if (this->ocean) {
		if ($nc(this->tabPane)->getSelectedIndex() == tabIndex - 1) {
			g->drawLine(0, 5, 0, bottom);
			g->setColor(this->oceanSelectedBorderColor);
			g->drawLine(0, 0, 0, 5);
		} else if (isSelected) {
			g->drawLine(0, 6, 0, bottom);
			if (tabIndex != 0) {
				g->setColor(this->darkShadow);
				g->drawLine(0, 0, 0, 5);
			}
		} else if (tabIndex != firstIndex) {
			g->drawLine(0, 0, 0, bottom);
		} else {
			g->drawLine(0, 6, 0, bottom);
		}
	} else if (tabIndex != firstIndex) {
		g->drawLine(0, 0, 0, bottom);
	} else {
		g->drawLine(0, 6, 0, bottom);
	}
	g->translate(-x, -y);
}

void MetalTabbedPaneUI::paintBottomTabBorder(int32_t tabIndex, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t btm, int32_t rght, bool isSelected) {
	$useLocalCurrentObjectStackCache();
	int32_t tabCount = $nc(this->tabPane)->getTabCount();
	int32_t currentRun = getRunForTab(tabCount, tabIndex);
	int32_t lastIndex = lastTabInRun(tabCount, currentRun);
	int32_t firstIndex = $nc(this->tabRuns)->get(currentRun);
	bool leftToRight = $MetalUtils::isLeftToRight(this->tabPane);
	int32_t bottom = h - 1;
	int32_t right = w - 1;
	if (shouldFillGap(currentRun, tabIndex, x, y)) {
		$nc(g)->translate(x, y);
		if (leftToRight) {
			g->setColor($(getColorForGap(currentRun, x, y)));
			g->fillRect(1, bottom - 4, 3, 5);
			g->fillRect(4, bottom - 1, 2, 2);
		} else {
			g->setColor($(getColorForGap(currentRun, x + w - 1, y)));
			g->fillRect(right - 3, bottom - 3, 3, 4);
			g->fillRect(right - 5, bottom - 1, 2, 2);
			g->drawLine(right - 1, bottom - 4, right - 1, bottom - 4);
		}
		g->translate(-x, -y);
	}
	$nc(g)->translate(x, y);
	if (this->ocean && isSelected) {
		g->setColor(this->oceanSelectedBorderColor);
	} else {
		g->setColor(this->darkShadow);
	}
	if (leftToRight) {
		g->drawLine(1, bottom - 5, 6, bottom);
		g->drawLine(6, bottom, right, bottom);
		if (tabIndex == lastIndex) {
			g->drawLine(right, 0, right, bottom);
		}
		if (this->ocean && isSelected) {
			g->drawLine(0, 0, 0, bottom - 6);
			if ((currentRun == 0 && tabIndex != 0) || (currentRun > 0 && tabIndex != $nc(this->tabRuns)->get(currentRun - 1))) {
				g->setColor(this->darkShadow);
				g->drawLine(0, bottom - 5, 0, bottom);
			}
		} else {
			if (this->ocean && tabIndex == $nc(this->tabPane)->getSelectedIndex() + 1) {
				g->setColor(this->oceanSelectedBorderColor);
			}
			if (tabIndex != $nc(this->tabRuns)->get(this->runCount - 1)) {
				g->drawLine(0, 0, 0, bottom);
			} else {
				g->drawLine(0, 0, 0, bottom - 6);
			}
		}
	} else {
		g->drawLine(right - 1, bottom - 5, right - 6, bottom);
		g->drawLine(right - 6, bottom, 0, bottom);
		if (tabIndex == lastIndex) {
			g->drawLine(0, 0, 0, bottom);
		}
		if (this->ocean && tabIndex == $nc(this->tabPane)->getSelectedIndex() + 1) {
			g->setColor(this->oceanSelectedBorderColor);
			g->drawLine(right, 0, right, bottom);
		} else if (this->ocean && isSelected) {
			g->drawLine(right, 0, right, bottom - 6);
			if (tabIndex != firstIndex) {
				g->setColor(this->darkShadow);
				g->drawLine(right, bottom - 5, right, bottom);
			}
		} else if (tabIndex != $nc(this->tabRuns)->get(this->runCount - 1)) {
			g->drawLine(right, 0, right, bottom);
		} else {
			g->drawLine(right, 0, right, bottom - 6);
		}
	}
	g->setColor(isSelected ? this->selectHighlight : this->highlight);
	if (leftToRight) {
		g->drawLine(1, bottom - 6, 6, bottom - 1);
		g->drawLine(1, 0, 1, bottom - 6);
		if (tabIndex == firstIndex && tabIndex != $nc(this->tabRuns)->get(this->runCount - 1)) {
			if ($nc(this->tabPane)->getSelectedIndex() == $nc(this->tabRuns)->get(currentRun + 1)) {
				g->setColor(this->selectHighlight);
			} else {
				g->setColor(this->highlight);
			}
			g->drawLine(1, bottom - 4, 1, bottom);
		}
	} else if (tabIndex == lastIndex) {
		g->drawLine(1, 0, 1, bottom - 1);
	} else {
		g->drawLine(0, 0, 0, bottom - 1);
	}
	g->translate(-x, -y);
}

void MetalTabbedPaneUI::paintRightTabBorder(int32_t tabIndex, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t btm, int32_t rght, bool isSelected) {
	int32_t tabCount = $nc(this->tabPane)->getTabCount();
	int32_t currentRun = getRunForTab(tabCount, tabIndex);
	int32_t lastIndex = lastTabInRun(tabCount, currentRun);
	int32_t firstIndex = $nc(this->tabRuns)->get(currentRun);
	$nc(g)->translate(x, y);
	int32_t bottom = h - 1;
	int32_t right = w - 1;
	if (tabIndex != firstIndex && this->tabsOpaque) {
		g->setColor($nc(this->tabPane)->getSelectedIndex() == tabIndex - 1 ? this->selectColor : $(getUnselectedBackgroundAt(tabIndex - 1)));
		g->fillRect(right - 5, 0, 5, 3);
		g->fillRect(right - 2, 3, 2, 2);
	}
	g->setColor(isSelected ? this->selectHighlight : this->highlight);
	g->drawLine(right - 6, 1, right - 1, 6);
	g->drawLine(0, 1, right - 6, 1);
	if (!isSelected) {
		g->drawLine(0, 1, 0, bottom);
	}
	if (this->ocean && isSelected) {
		g->setColor(this->oceanSelectedBorderColor);
	} else {
		g->setColor(this->darkShadow);
	}
	if (tabIndex == lastIndex) {
		g->drawLine(0, bottom, right, bottom);
	}
	if (this->ocean && $nc(this->tabPane)->getSelectedIndex() == tabIndex - 1) {
		g->setColor(this->oceanSelectedBorderColor);
	}
	g->drawLine(right - 6, 0, right, 6);
	g->drawLine(0, 0, right - 6, 0);
	if (this->ocean && isSelected) {
		g->drawLine(right, 6, right, bottom);
		if (tabIndex != firstIndex) {
			g->setColor(this->darkShadow);
			g->drawLine(right, 0, right, 5);
		}
	} else if (this->ocean && $nc(this->tabPane)->getSelectedIndex() == tabIndex - 1) {
		g->setColor(this->oceanSelectedBorderColor);
		g->drawLine(right, 0, right, 6);
		g->setColor(this->darkShadow);
		g->drawLine(right, 6, right, bottom);
	} else if (tabIndex != firstIndex) {
		g->drawLine(right, 0, right, bottom);
	} else {
		g->drawLine(right, 6, right, bottom);
	}
	g->translate(-x, -y);
}

void MetalTabbedPaneUI::update($Graphics* g, $JComponent* c) {
	if ($nc(c)->isOpaque()) {
		$nc(g)->setColor(this->tabAreaBackground);
		int32_t var$0 = c->getWidth();
		g->fillRect(0, 0, var$0, c->getHeight());
	}
	paint(g, c);
}

void MetalTabbedPaneUI::paintTabBackground($Graphics* g, int32_t tabPlacement, int32_t tabIndex, int32_t x, int32_t y, int32_t w, int32_t h, bool isSelected) {
	int32_t slantWidth = h / 2;
	if (isSelected) {
		$nc(g)->setColor(this->selectColor);
	} else {
		$nc(g)->setColor($(getUnselectedBackgroundAt(tabIndex)));
	}
	if ($MetalUtils::isLeftToRight(this->tabPane)) {
		switch (tabPlacement) {
		case $SwingConstants::LEFT:
			{
				$nc(g)->fillRect(x + 5, y + 1, w - 5, h - 1);
				$nc(g)->fillRect(x + 2, y + 4, 3, h - 4);
				break;
			}
		case $SwingConstants::BOTTOM:
			{
				$nc(g)->fillRect(x + 2, y, w - 2, h - 4);
				$nc(g)->fillRect(x + 5, y + (h - 1) - 3, w - 5, 3);
				break;
			}
		case $SwingConstants::RIGHT:
			{
				$nc(g)->fillRect(x, y + 2, w - 4, h - 2);
				$nc(g)->fillRect(x + (w - 1) - 3, y + 5, 3, h - 5);
				break;
			}
		case $SwingConstants::TOP:
			{}
		default:
			{
				$nc(g)->fillRect(x + 4, y + 2, (w - 1) - 3, (h - 1) - 1);
				$nc(g)->fillRect(x + 2, y + 5, 2, h - 5);
			}
		}
	} else {
		switch (tabPlacement) {
		case $SwingConstants::LEFT:
			{
				$nc(g)->fillRect(x + 5, y + 1, w - 5, h - 1);
				$nc(g)->fillRect(x + 2, y + 4, 3, h - 4);
				break;
			}
		case $SwingConstants::BOTTOM:
			{
				$nc(g)->fillRect(x, y, w - 5, h - 1);
				$nc(g)->fillRect(x + (w - 1) - 4, y, 4, h - 5);
				$nc(g)->fillRect(x + (w - 1) - 4, y + (h - 1) - 4, 2, 2);
				break;
			}
		case $SwingConstants::RIGHT:
			{
				$nc(g)->fillRect(x + 1, y + 1, w - 5, h - 1);
				$nc(g)->fillRect(x + (w - 1) - 3, y + 5, 3, h - 5);
				break;
			}
		case $SwingConstants::TOP:
			{}
		default:
			{
				$nc(g)->fillRect(x, y + 2, (w - 1) - 3, (h - 1) - 1);
				$nc(g)->fillRect(x + (w - 1) - 3, y + 5, 3, h - 3);
			}
		}
	}
}

int32_t MetalTabbedPaneUI::getTabLabelShiftX(int32_t tabPlacement, int32_t tabIndex, bool isSelected) {
	return 0;
}

int32_t MetalTabbedPaneUI::getTabLabelShiftY(int32_t tabPlacement, int32_t tabIndex, bool isSelected) {
	return 0;
}

int32_t MetalTabbedPaneUI::getBaselineOffset() {
	return 0;
}

void MetalTabbedPaneUI::paint($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	int32_t tabPlacement = $nc(this->tabPane)->getTabPlacement();
	$var($Insets, insets, $nc(c)->getInsets());
	$var($Dimension, size, c->getSize());
	if ($nc(this->tabPane)->isOpaque()) {
		$var($Color, background, c->getBackground());
		if ($instanceOf($UIResource, background) && this->tabAreaBackground != nullptr) {
			$nc(g)->setColor(this->tabAreaBackground);
		} else {
			$nc(g)->setColor(background);
		}
		{
			int32_t totalTabHeight = 0;
			int32_t totalTabWidth = 0;
			switch (tabPlacement) {
			case $SwingConstants::LEFT:
				{
					$nc(g)->fillRect($nc(insets)->left, insets->top, calculateTabAreaWidth(tabPlacement, this->runCount, this->maxTabWidth), $nc(size)->height - insets->bottom - insets->top);
					break;
				}
			case $SwingConstants::BOTTOM:
				{
					totalTabHeight = calculateTabAreaHeight(tabPlacement, this->runCount, this->maxTabHeight);
					$nc(g)->fillRect($nc(insets)->left, $nc(size)->height - insets->bottom - totalTabHeight, size->width - insets->left - insets->right, totalTabHeight);
					break;
				}
			case $SwingConstants::RIGHT:
				{
					totalTabWidth = calculateTabAreaWidth(tabPlacement, this->runCount, this->maxTabWidth);
					$nc(g)->fillRect($nc(size)->width - $nc(insets)->right - totalTabWidth, insets->top, totalTabWidth, size->height - insets->top - insets->bottom);
					break;
				}
			case $SwingConstants::TOP:
				{}
			default:
				{
					$nc(g)->fillRect($nc(insets)->left, insets->top, $nc(size)->width - insets->right - insets->left, calculateTabAreaHeight(tabPlacement, this->runCount, this->maxTabHeight));
					paintHighlightBelowTab();
				}
			}
		}
	}
	$BasicTabbedPaneUI::paint(g, c);
}

void MetalTabbedPaneUI::paintHighlightBelowTab() {
}

void MetalTabbedPaneUI::paintFocusIndicator($Graphics* g, int32_t tabPlacement, $RectangleArray* rects, int32_t tabIndex, $Rectangle* iconRect, $Rectangle* textRect, bool isSelected) {
	if ($nc(this->tabPane)->hasFocus() && isSelected) {
		$var($Rectangle, tabRect, $nc(rects)->get(tabIndex));
		bool lastInRun = isLastInRun(tabIndex);
		$nc(g)->setColor(this->focus);
		g->translate($nc(tabRect)->x, tabRect->y);
		int32_t right = $nc(tabRect)->width - 1;
		int32_t bottom = tabRect->height - 1;
		bool leftToRight = $MetalUtils::isLeftToRight(this->tabPane);
		switch (tabPlacement) {
		case $SwingConstants::RIGHT:
			{
				g->drawLine(right - 6, 2, right - 2, 6);
				g->drawLine(1, 2, right - 6, 2);
				g->drawLine(right - 2, 6, right - 2, bottom);
				g->drawLine(1, 2, 1, bottom);
				g->drawLine(1, bottom, right - 2, bottom);
				break;
			}
		case $SwingConstants::BOTTOM:
			{
				if (leftToRight) {
					g->drawLine(2, bottom - 6, 6, bottom - 2);
					g->drawLine(6, bottom - 2, right, bottom - 2);
					g->drawLine(2, 0, 2, bottom - 6);
					g->drawLine(2, 0, right, 0);
					g->drawLine(right, 0, right, bottom - 2);
				} else {
					g->drawLine(right - 2, bottom - 6, right - 6, bottom - 2);
					g->drawLine(right - 2, 0, right - 2, bottom - 6);
					if (lastInRun) {
						g->drawLine(2, bottom - 2, right - 6, bottom - 2);
						g->drawLine(2, 0, right - 2, 0);
						g->drawLine(2, 0, 2, bottom - 2);
					} else {
						g->drawLine(1, bottom - 2, right - 6, bottom - 2);
						g->drawLine(1, 0, right - 2, 0);
						g->drawLine(1, 0, 1, bottom - 2);
					}
				}
				break;
			}
		case $SwingConstants::LEFT:
			{
				g->drawLine(2, 6, 6, 2);
				g->drawLine(2, 6, 2, bottom - 1);
				g->drawLine(6, 2, right, 2);
				g->drawLine(right, 2, right, bottom - 1);
				g->drawLine(2, bottom - 1, right, bottom - 1);
				break;
			}
		case $SwingConstants::TOP:
			{}
		default:
			{
				if (leftToRight) {
					g->drawLine(2, 6, 6, 2);
					g->drawLine(2, 6, 2, bottom - 1);
					g->drawLine(6, 2, right, 2);
					g->drawLine(right, 2, right, bottom - 1);
					g->drawLine(2, bottom - 1, right, bottom - 1);
				} else {
					g->drawLine(right - 2, 6, right - 6, 2);
					g->drawLine(right - 2, 6, right - 2, bottom - 1);
					if (lastInRun) {
						g->drawLine(right - 6, 2, 2, 2);
						g->drawLine(2, 2, 2, bottom - 1);
						g->drawLine(right - 2, bottom - 1, 2, bottom - 1);
					} else {
						g->drawLine(right - 6, 2, 1, 2);
						g->drawLine(1, 2, 1, bottom - 1);
						g->drawLine(right - 2, bottom - 1, 1, bottom - 1);
					}
				}
			}
		}
		g->translate(-tabRect->x, -tabRect->y);
	}
}

void MetalTabbedPaneUI::paintContentBorderTopEdge($Graphics* g, int32_t tabPlacement, int32_t selectedIndex, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	bool leftToRight = $MetalUtils::isLeftToRight(this->tabPane);
	int32_t right = x + w - 1;
	$var($Rectangle, selRect, selectedIndex < 0 ? ($Rectangle*)nullptr : getTabBounds(selectedIndex, this->calcRect));
	if (this->ocean) {
		$nc(g)->setColor(this->oceanSelectedBorderColor);
	} else {
		$nc(g)->setColor(this->selectHighlight);
	}
	if (tabPlacement != $SwingConstants::TOP || selectedIndex < 0 || ($nc(selRect)->y + selRect->height + 1 < y) || ($nc(selRect)->x < x || $nc(selRect)->x > x + w)) {
		$nc(g)->drawLine(x, y, x + w - 2, y);
		if (this->ocean && tabPlacement == $SwingConstants::TOP) {
			g->setColor($($MetalLookAndFeel::getWhite()));
			g->drawLine(x, y + 1, x + w - 2, y + 1);
		}
	} else {
		bool lastInRun = isLastInRun(selectedIndex);
		if (leftToRight || lastInRun) {
			$nc(g)->drawLine(x, y, selRect->x + 1, y);
		} else {
			$nc(g)->drawLine(x, y, selRect->x, y);
		}
		if (selRect->x + selRect->width < right - 1) {
			if (leftToRight && !lastInRun) {
				$nc(g)->drawLine(selRect->x + selRect->width, y, right - 1, y);
			} else {
				$nc(g)->drawLine(selRect->x + selRect->width - 1, y, right - 1, y);
			}
		} else {
			$nc(g)->setColor(this->shadow);
			g->drawLine(x + w - 2, y, x + w - 2, y);
		}
		if (this->ocean) {
			$nc(g)->setColor($($MetalLookAndFeel::getWhite()));
			if (leftToRight || lastInRun) {
				g->drawLine(x, y + 1, selRect->x + 1, y + 1);
			} else {
				g->drawLine(x, y + 1, selRect->x, y + 1);
			}
			if (selRect->x + selRect->width < right - 1) {
				if (leftToRight && !lastInRun) {
					g->drawLine(selRect->x + selRect->width, y + 1, right - 1, y + 1);
				} else {
					g->drawLine(selRect->x + selRect->width - 1, y + 1, right - 1, y + 1);
				}
			} else {
				g->setColor(this->shadow);
				g->drawLine(x + w - 2, y + 1, x + w - 2, y + 1);
			}
		}
	}
}

void MetalTabbedPaneUI::paintContentBorderBottomEdge($Graphics* g, int32_t tabPlacement, int32_t selectedIndex, int32_t x, int32_t y, int32_t w, int32_t h) {
	bool leftToRight = $MetalUtils::isLeftToRight(this->tabPane);
	int32_t bottom = y + h - 1;
	int32_t right = x + w - 1;
	$var($Rectangle, selRect, selectedIndex < 0 ? ($Rectangle*)nullptr : getTabBounds(selectedIndex, this->calcRect));
	$nc(g)->setColor(this->darkShadow);
	if (tabPlacement != $SwingConstants::BOTTOM || selectedIndex < 0 || ($nc(selRect)->y - 1 > h) || ($nc(selRect)->x < x || $nc(selRect)->x > x + w)) {
		if (this->ocean && tabPlacement == $SwingConstants::BOTTOM) {
			g->setColor(this->oceanSelectedBorderColor);
		}
		g->drawLine(x, y + h - 1, x + w - 1, y + h - 1);
	} else {
		bool lastInRun = isLastInRun(selectedIndex);
		if (this->ocean) {
			g->setColor(this->oceanSelectedBorderColor);
		}
		if (leftToRight || lastInRun) {
			g->drawLine(x, bottom, selRect->x, bottom);
		} else {
			g->drawLine(x, bottom, selRect->x - 1, bottom);
		}
		if (selRect->x + selRect->width < x + w - 2) {
			if (leftToRight && !lastInRun) {
				g->drawLine(selRect->x + selRect->width, bottom, right, bottom);
			} else {
				g->drawLine(selRect->x + selRect->width - 1, bottom, right, bottom);
			}
		}
	}
}

void MetalTabbedPaneUI::paintContentBorderLeftEdge($Graphics* g, int32_t tabPlacement, int32_t selectedIndex, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, selRect, selectedIndex < 0 ? ($Rectangle*)nullptr : getTabBounds(selectedIndex, this->calcRect));
	if (this->ocean) {
		$nc(g)->setColor(this->oceanSelectedBorderColor);
	} else {
		$nc(g)->setColor(this->selectHighlight);
	}
	if (tabPlacement != $SwingConstants::LEFT || selectedIndex < 0 || ($nc(selRect)->x + selRect->width + 1 < x) || ($nc(selRect)->y < y || $nc(selRect)->y > y + h)) {
		$nc(g)->drawLine(x, y + 1, x, y + h - 2);
		if (this->ocean && tabPlacement == $SwingConstants::LEFT) {
			g->setColor($($MetalLookAndFeel::getWhite()));
			g->drawLine(x + 1, y, x + 1, y + h - 2);
		}
	} else {
		$nc(g)->drawLine(x, y, x, selRect->y + 1);
		if (selRect->y + selRect->height < y + h - 2) {
			g->drawLine(x, selRect->y + selRect->height + 1, x, y + h + 2);
		}
		if (this->ocean) {
			g->setColor($($MetalLookAndFeel::getWhite()));
			g->drawLine(x + 1, y + 1, x + 1, selRect->y + 1);
			if (selRect->y + selRect->height < y + h - 2) {
				g->drawLine(x + 1, selRect->y + selRect->height + 1, x + 1, y + h + 2);
			}
		}
	}
}

void MetalTabbedPaneUI::paintContentBorderRightEdge($Graphics* g, int32_t tabPlacement, int32_t selectedIndex, int32_t x, int32_t y, int32_t w, int32_t h) {
	$var($Rectangle, selRect, selectedIndex < 0 ? ($Rectangle*)nullptr : getTabBounds(selectedIndex, this->calcRect));
	$nc(g)->setColor(this->darkShadow);
	if (tabPlacement != $SwingConstants::RIGHT || selectedIndex < 0 || ($nc(selRect)->x - 1 > w) || ($nc(selRect)->y < y || $nc(selRect)->y > y + h)) {
		if (this->ocean && tabPlacement == $SwingConstants::RIGHT) {
			g->setColor(this->oceanSelectedBorderColor);
		}
		g->drawLine(x + w - 1, y, x + w - 1, y + h - 1);
	} else {
		if (this->ocean) {
			g->setColor(this->oceanSelectedBorderColor);
		}
		g->drawLine(x + w - 1, y, x + w - 1, selRect->y);
		if (selRect->y + selRect->height < y + h - 2) {
			g->drawLine(x + w - 1, selRect->y + selRect->height, x + w - 1, y + h - 2);
		}
	}
}

int32_t MetalTabbedPaneUI::calculateMaxTabHeight(int32_t tabPlacement) {
	$useLocalCurrentObjectStackCache();
	$var($FontMetrics, metrics, getFontMetrics());
	int32_t height = $nc(metrics)->getHeight();
	bool tallerIcons = false;
	for (int32_t i = 0; i < $nc(this->tabPane)->getTabCount(); ++i) {
		$var($Icon, icon, $nc(this->tabPane)->getIconAt(i));
		if (icon != nullptr) {
			if (icon->getIconHeight() > height) {
				tallerIcons = true;
				break;
			}
		}
	}
	return $BasicTabbedPaneUI::calculateMaxTabHeight(tabPlacement) - (tallerIcons ? ($nc(this->tabInsets)->top + $nc(this->tabInsets)->bottom) : 0);
}

int32_t MetalTabbedPaneUI::getTabRunOverlay(int32_t tabPlacement) {
	if (tabPlacement == $SwingConstants::LEFT || tabPlacement == $SwingConstants::RIGHT) {
		int32_t maxTabHeight = calculateMaxTabHeight(tabPlacement);
		return maxTabHeight / 2;
	}
	return 0;
}

bool MetalTabbedPaneUI::shouldRotateTabRuns(int32_t tabPlacement, int32_t selectedRun) {
	return false;
}

bool MetalTabbedPaneUI::shouldPadTabRun(int32_t tabPlacement, int32_t run) {
	return this->runCount > 1 && run < this->runCount - 1;
}

bool MetalTabbedPaneUI::isLastInRun(int32_t tabIndex) {
	int32_t run = getRunForTab($nc(this->tabPane)->getTabCount(), tabIndex);
	int32_t lastIndex = lastTabInRun($nc(this->tabPane)->getTabCount(), run);
	return tabIndex == lastIndex;
}

$Color* MetalTabbedPaneUI::getUnselectedBackgroundAt(int32_t index) {
	$var($Color, color, $nc(this->tabPane)->getBackgroundAt(index));
	if ($instanceOf($UIResource, color)) {
		if (this->unselectedBackground != nullptr) {
			return this->unselectedBackground;
		}
	}
	return color;
}

int32_t MetalTabbedPaneUI::getRolloverTabIndex() {
	return getRolloverTab();
}

MetalTabbedPaneUI::MetalTabbedPaneUI() {
}

$Class* MetalTabbedPaneUI::load$($String* name, bool initialize) {
	$loadClass(MetalTabbedPaneUI, name, initialize, &_MetalTabbedPaneUI_ClassInfo_, allocate$MetalTabbedPaneUI);
	return class$;
}

$Class* MetalTabbedPaneUI::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax