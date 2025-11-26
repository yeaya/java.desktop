#include <com/sun/java/swing/plaf/motif/MotifTabbedPaneUI.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/lang/Math.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TabbedPaneUI.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI.h>
#include <jcpp.h>

#undef BOTTOM
#undef LEFT
#undef RIGHT
#undef TOP

using $RectangleArray = $Array<::java::awt::Rectangle>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $SwingConstants = ::javax::swing::SwingConstants;
using $UIManager = ::javax::swing::UIManager;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TabbedPaneUI = ::javax::swing::plaf::TabbedPaneUI;
using $BasicTabbedPaneUI = ::javax::swing::plaf::basic::BasicTabbedPaneUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifTabbedPaneUI_FieldInfo_[] = {
	{"unselectedTabBackground", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(MotifTabbedPaneUI, unselectedTabBackground)},
	{"unselectedTabForeground", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(MotifTabbedPaneUI, unselectedTabForeground)},
	{"unselectedTabShadow", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(MotifTabbedPaneUI, unselectedTabShadow)},
	{"unselectedTabHighlight", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(MotifTabbedPaneUI, unselectedTabHighlight)},
	{}
};

$MethodInfo _MotifTabbedPaneUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MotifTabbedPaneUI::*)()>(&MotifTabbedPaneUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MotifTabbedPaneUI::createUI))},
	{"getTabRunIndent", "(II)I", nullptr, $PROTECTED},
	{"getTabRunOverlay", "(I)I", nullptr, $PROTECTED},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"paintContentBorderBottomEdge", "(Ljava/awt/Graphics;IIIIII)V", nullptr, $PROTECTED},
	{"paintContentBorderRightEdge", "(Ljava/awt/Graphics;IIIIII)V", nullptr, $PROTECTED},
	{"paintContentBorderTopEdge", "(Ljava/awt/Graphics;IIIIII)V", nullptr, $PROTECTED},
	{"paintFocusIndicator", "(Ljava/awt/Graphics;I[Ljava/awt/Rectangle;ILjava/awt/Rectangle;Ljava/awt/Rectangle;Z)V", nullptr, $PROTECTED},
	{"paintTabBackground", "(Ljava/awt/Graphics;IIIIIIZ)V", nullptr, $PROTECTED},
	{"paintTabBorder", "(Ljava/awt/Graphics;IIIIIIZ)V", nullptr, $PROTECTED},
	{"uninstallDefaults", "()V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _MotifTabbedPaneUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifTabbedPaneUI",
	"javax.swing.plaf.basic.BasicTabbedPaneUI",
	nullptr,
	_MotifTabbedPaneUI_FieldInfo_,
	_MotifTabbedPaneUI_MethodInfo_
};

$Object* allocate$MotifTabbedPaneUI($Class* clazz) {
	return $of($alloc(MotifTabbedPaneUI));
}

void MotifTabbedPaneUI::init$() {
	$BasicTabbedPaneUI::init$();
}

$ComponentUI* MotifTabbedPaneUI::createUI($JComponent* tabbedPane) {
	$init(MotifTabbedPaneUI);
	return $new(MotifTabbedPaneUI);
}

void MotifTabbedPaneUI::installDefaults() {
	$BasicTabbedPaneUI::installDefaults();
	$set(this, unselectedTabBackground, $UIManager::getColor("TabbedPane.unselectedTabBackground"_s));
	$set(this, unselectedTabForeground, $UIManager::getColor("TabbedPane.unselectedTabForeground"_s));
	$set(this, unselectedTabShadow, $UIManager::getColor("TabbedPane.unselectedTabShadow"_s));
	$set(this, unselectedTabHighlight, $UIManager::getColor("TabbedPane.unselectedTabHighlight"_s));
}

void MotifTabbedPaneUI::uninstallDefaults() {
	$BasicTabbedPaneUI::uninstallDefaults();
	$set(this, unselectedTabBackground, nullptr);
	$set(this, unselectedTabForeground, nullptr);
	$set(this, unselectedTabShadow, nullptr);
	$set(this, unselectedTabHighlight, nullptr);
}

void MotifTabbedPaneUI::paintContentBorderTopEdge($Graphics* g, int32_t tabPlacement, int32_t selectedIndex, int32_t x, int32_t y, int32_t w, int32_t h) {
	$var($Rectangle, selRect, selectedIndex < 0 ? ($Rectangle*)nullptr : getTabBounds(selectedIndex, this->calcRect));
	$nc(g)->setColor(this->lightHighlight);
	if (tabPlacement != $SwingConstants::TOP || selectedIndex < 0 || ($nc(selRect)->x < x || $nc(selRect)->x > x + w)) {
		g->drawLine(x, y, x + w - 2, y);
	} else {
		g->drawLine(x, y, selRect->x - 1, y);
		if (selRect->x + selRect->width < x + w - 2) {
			g->drawLine(selRect->x + selRect->width, y, x + w - 2, y);
		}
	}
}

void MotifTabbedPaneUI::paintContentBorderBottomEdge($Graphics* g, int32_t tabPlacement, int32_t selectedIndex, int32_t x, int32_t y, int32_t w, int32_t h) {
	$var($Rectangle, selRect, selectedIndex < 0 ? ($Rectangle*)nullptr : getTabBounds(selectedIndex, this->calcRect));
	$nc(g)->setColor(this->shadow);
	if (tabPlacement != $SwingConstants::BOTTOM || selectedIndex < 0 || ($nc(selRect)->x < x || $nc(selRect)->x > x + w)) {
		g->drawLine(x + 1, y + h - 1, x + w - 1, y + h - 1);
	} else {
		g->drawLine(x + 1, y + h - 1, selRect->x - 1, y + h - 1);
		if (selRect->x + selRect->width < x + w - 2) {
			g->drawLine(selRect->x + selRect->width, y + h - 1, x + w - 2, y + h - 1);
		}
	}
}

void MotifTabbedPaneUI::paintContentBorderRightEdge($Graphics* g, int32_t tabPlacement, int32_t selectedIndex, int32_t x, int32_t y, int32_t w, int32_t h) {
	$var($Rectangle, selRect, selectedIndex < 0 ? ($Rectangle*)nullptr : getTabBounds(selectedIndex, this->calcRect));
	$nc(g)->setColor(this->shadow);
	if (tabPlacement != $SwingConstants::RIGHT || selectedIndex < 0 || ($nc(selRect)->y < y || $nc(selRect)->y > y + h)) {
		g->drawLine(x + w - 1, y + 1, x + w - 1, y + h - 1);
	} else {
		g->drawLine(x + w - 1, y + 1, x + w - 1, selRect->y - 1);
		if (selRect->y + selRect->height < y + h - 2) {
			g->drawLine(x + w - 1, selRect->y + selRect->height, x + w - 1, y + h - 2);
		}
	}
}

void MotifTabbedPaneUI::paintTabBackground($Graphics* g, int32_t tabPlacement, int32_t tabIndex, int32_t x, int32_t y, int32_t w, int32_t h, bool isSelected) {
	$nc(g)->setColor(isSelected ? $($nc(this->tabPane)->getBackgroundAt(tabIndex)) : this->unselectedTabBackground);
	switch (tabPlacement) {
	case $SwingConstants::LEFT:
		{
			g->fillRect(x + 1, y + 1, w - 1, h - 2);
			break;
		}
	case $SwingConstants::RIGHT:
		{
			g->fillRect(x, y + 1, w - 1, h - 2);
			break;
		}
	case $SwingConstants::BOTTOM:
		{
			g->fillRect(x + 1, y, w - 2, h - 3);
			g->drawLine(x + 2, y + h - 3, x + w - 3, y + h - 3);
			g->drawLine(x + 3, y + h - 2, x + w - 4, y + h - 2);
			break;
		}
	case $SwingConstants::TOP:
		{}
	default:
		{
			g->fillRect(x + 1, y + 3, w - 2, h - 3);
			g->drawLine(x + 2, y + 2, x + w - 3, y + 2);
			g->drawLine(x + 3, y + 1, x + w - 4, y + 1);
		}
	}
}

void MotifTabbedPaneUI::paintTabBorder($Graphics* g, int32_t tabPlacement, int32_t tabIndex, int32_t x, int32_t y, int32_t w, int32_t h, bool isSelected) {
	$nc(g)->setColor(isSelected ? this->lightHighlight : this->unselectedTabHighlight);
	switch (tabPlacement) {
	case $SwingConstants::LEFT:
		{
			g->drawLine(x, y + 2, x, y + h - 3);
			g->drawLine(x + 1, y + 1, x + 1, y + 2);
			g->drawLine(x + 2, y, x + 2, y + 1);
			g->drawLine(x + 3, y, x + w - 1, y);
			g->setColor(isSelected ? this->shadow : this->unselectedTabShadow);
			g->drawLine(x + 1, y + h - 3, x + 1, y + h - 2);
			g->drawLine(x + 2, y + h - 2, x + 2, y + h - 1);
			g->drawLine(x + 3, y + h - 1, x + w - 1, y + h - 1);
			break;
		}
	case $SwingConstants::RIGHT:
		{
			g->drawLine(x, y, x + w - 3, y);
			g->setColor(isSelected ? this->shadow : this->unselectedTabShadow);
			g->drawLine(x + w - 3, y, x + w - 3, y + 1);
			g->drawLine(x + w - 2, y + 1, x + w - 2, y + 2);
			g->drawLine(x + w - 1, y + 2, x + w - 1, y + h - 3);
			g->drawLine(x + w - 2, y + h - 3, x + w - 2, y + h - 2);
			g->drawLine(x + w - 3, y + h - 2, x + w - 3, y + h - 1);
			g->drawLine(x, y + h - 1, x + w - 3, y + h - 1);
			break;
		}
	case $SwingConstants::BOTTOM:
		{
			g->drawLine(x, y, x, y + h - 3);
			g->drawLine(x + 1, y + h - 3, x + 1, y + h - 2);
			g->drawLine(x + 2, y + h - 2, x + 2, y + h - 1);
			g->setColor(isSelected ? this->shadow : this->unselectedTabShadow);
			g->drawLine(x + 3, y + h - 1, x + w - 4, y + h - 1);
			g->drawLine(x + w - 3, y + h - 2, x + w - 3, y + h - 1);
			g->drawLine(x + w - 2, y + h - 3, x + w - 2, y + h - 2);
			g->drawLine(x + w - 1, y, x + w - 1, y + h - 3);
			break;
		}
	case $SwingConstants::TOP:
		{}
	default:
		{
			g->drawLine(x, y + 2, x, y + h - 1);
			g->drawLine(x + 1, y + 1, x + 1, y + 2);
			g->drawLine(x + 2, y, x + 2, y + 1);
			g->drawLine(x + 3, y, x + w - 4, y);
			g->setColor(isSelected ? this->shadow : this->unselectedTabShadow);
			g->drawLine(x + w - 3, y, x + w - 3, y + 1);
			g->drawLine(x + w - 2, y + 1, x + w - 2, y + 2);
			g->drawLine(x + w - 1, y + 2, x + w - 1, y + h - 1);
		}
	}
}

void MotifTabbedPaneUI::paintFocusIndicator($Graphics* g, int32_t tabPlacement, $RectangleArray* rects, int32_t tabIndex, $Rectangle* iconRect, $Rectangle* textRect, bool isSelected) {
	$var($Rectangle, tabRect, $nc(rects)->get(tabIndex));
	if ($nc(this->tabPane)->hasFocus() && isSelected) {
		int32_t x = 0;
		int32_t y = 0;
		int32_t w = 0;
		int32_t h = 0;
		$nc(g)->setColor(this->focus);
		switch (tabPlacement) {
		case $SwingConstants::LEFT:
			{
				x = $nc(tabRect)->x + 3;
				y = $nc(tabRect)->y + 3;
				w = $nc(tabRect)->width - 6;
				h = $nc(tabRect)->height - 7;
				break;
			}
		case $SwingConstants::RIGHT:
			{
				x = $nc(tabRect)->x + 2;
				y = $nc(tabRect)->y + 3;
				w = $nc(tabRect)->width - 6;
				h = $nc(tabRect)->height - 7;
				break;
			}
		case $SwingConstants::BOTTOM:
			{
				x = $nc(tabRect)->x + 3;
				y = $nc(tabRect)->y + 2;
				w = $nc(tabRect)->width - 7;
				h = $nc(tabRect)->height - 6;
				break;
			}
		case $SwingConstants::TOP:
			{}
		default:
			{
				x = $nc(tabRect)->x + 3;
				y = $nc(tabRect)->y + 3;
				w = $nc(tabRect)->width - 7;
				h = $nc(tabRect)->height - 6;
			}
		}
		g->drawRect(x, y, w, h);
	}
}

int32_t MotifTabbedPaneUI::getTabRunIndent(int32_t tabPlacement, int32_t run) {
	return run * 3;
}

int32_t MotifTabbedPaneUI::getTabRunOverlay(int32_t tabPlacement) {
	this->tabRunOverlay = (tabPlacement == $SwingConstants::LEFT || tabPlacement == $SwingConstants::RIGHT) ? (int32_t)$Math::round((float)this->maxTabWidth * 0.1) : (int32_t)$Math::round((float)this->maxTabHeight * 0.22);
	switch (tabPlacement) {
	case $SwingConstants::LEFT:
		{
			if (this->tabRunOverlay > $nc(this->tabInsets)->right - 2) {
				this->tabRunOverlay = $nc(this->tabInsets)->right - 2;
			}
			break;
		}
	case $SwingConstants::RIGHT:
		{
			if (this->tabRunOverlay > $nc(this->tabInsets)->left - 2) {
				this->tabRunOverlay = $nc(this->tabInsets)->left - 2;
			}
			break;
		}
	case $SwingConstants::TOP:
		{
			if (this->tabRunOverlay > $nc(this->tabInsets)->bottom - 2) {
				this->tabRunOverlay = $nc(this->tabInsets)->bottom - 2;
			}
			break;
		}
	case $SwingConstants::BOTTOM:
		{
			if (this->tabRunOverlay > $nc(this->tabInsets)->top - 2) {
				this->tabRunOverlay = $nc(this->tabInsets)->top - 2;
			}
			break;
		}
	}
	return this->tabRunOverlay;
}

MotifTabbedPaneUI::MotifTabbedPaneUI() {
}

$Class* MotifTabbedPaneUI::load$($String* name, bool initialize) {
	$loadClass(MotifTabbedPaneUI, name, initialize, &_MotifTabbedPaneUI_ClassInfo_, allocate$MotifTabbedPaneUI);
	return class$;
}

$Class* MotifTabbedPaneUI::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com