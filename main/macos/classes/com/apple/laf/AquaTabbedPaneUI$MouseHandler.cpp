#include <com/apple/laf/AquaTabbedPaneUI$MouseHandler.h>

#include <com/apple/laf/AquaTabbedPaneTabState.h>
#include <com/apple/laf/AquaTabbedPaneUI$MouseHandler$1.h>
#include <com/apple/laf/AquaTabbedPaneUI$MouseHandler$2.h>
#include <com/apple/laf/AquaTabbedPaneUI$MouseHandler$3.h>
#include <com/apple/laf/AquaTabbedPaneUI.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/MouseEvent.h>
#include <java/util/EventObject.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/Timer.h>
#include <javax/swing/event/MouseInputAdapter.h>
#include <javax/swing/event/PopupMenuListener.h>
#include <javax/swing/plaf/UIResource.h>
#include <jcpp.h>

using $AquaTabbedPaneTabState = ::com::apple::laf::AquaTabbedPaneTabState;
using $AquaTabbedPaneUI = ::com::apple::laf::AquaTabbedPaneUI;
using $AquaTabbedPaneUI$MouseHandler$1 = ::com::apple::laf::AquaTabbedPaneUI$MouseHandler$1;
using $AquaTabbedPaneUI$MouseHandler$2 = ::com::apple::laf::AquaTabbedPaneUI$MouseHandler$2;
using $AquaTabbedPaneUI$MouseHandler$3 = ::com::apple::laf::AquaTabbedPaneUI$MouseHandler$3;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $Timer = ::javax::swing::Timer;
using $MouseInputAdapter = ::javax::swing::event::MouseInputAdapter;
using $PopupMenuListener = ::javax::swing::event::PopupMenuListener;
using $UIResource = ::javax::swing::plaf::UIResource;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaTabbedPaneUI$MouseHandler_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaTabbedPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTabbedPaneUI$MouseHandler, this$0)},
	{"trackingTab", "I", nullptr, 0, $field(AquaTabbedPaneUI$MouseHandler, trackingTab)},
	{"popupTimer", "Ljavax/swing/Timer;", nullptr, $PRIVATE | $FINAL, $field(AquaTabbedPaneUI$MouseHandler, popupTimer)},
	{}
};

$MethodInfo _AquaTabbedPaneUI$MouseHandler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/apple/laf/AquaTabbedPaneUI;)V", nullptr, 0, $method(static_cast<void(AquaTabbedPaneUI$MouseHandler::*)($AquaTabbedPaneUI*)>(&AquaTabbedPaneUI$MouseHandler::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"createMenuItem", "(I)Ljavax/swing/JMenuItem;", nullptr, 0},
	{"dispose", "()V", nullptr, 0},
	{"getCurrentTab", "(Ljavax/swing/JTabbedPane;Ljava/awt/Point;)I", nullptr, 0},
	{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"repaint", "(Ljavax/swing/JTabbedPane;I)V", nullptr, 0},
	{"showFullPopup", "(Z)V", nullptr, 0},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaTabbedPaneUI$MouseHandler_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaTabbedPaneUI$MouseHandler", "com.apple.laf.AquaTabbedPaneUI", "MouseHandler", 0},
	{"com.apple.laf.AquaTabbedPaneUI$MouseHandler$3", nullptr, nullptr, 0},
	{"com.apple.laf.AquaTabbedPaneUI$MouseHandler$2", nullptr, nullptr, 0},
	{"com.apple.laf.AquaTabbedPaneUI$MouseHandler$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaTabbedPaneUI$MouseHandler_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaTabbedPaneUI$MouseHandler",
	"javax.swing.event.MouseInputAdapter",
	"java.awt.event.ActionListener",
	_AquaTabbedPaneUI$MouseHandler_FieldInfo_,
	_AquaTabbedPaneUI$MouseHandler_MethodInfo_,
	nullptr,
	nullptr,
	_AquaTabbedPaneUI$MouseHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaTabbedPaneUI"
};

$Object* allocate$AquaTabbedPaneUI$MouseHandler($Class* clazz) {
	return $of($alloc(AquaTabbedPaneUI$MouseHandler));
}

int32_t AquaTabbedPaneUI$MouseHandler::hashCode() {
	 return this->$MouseInputAdapter::hashCode();
}

bool AquaTabbedPaneUI$MouseHandler::equals(Object$* arg0) {
	 return this->$MouseInputAdapter::equals(arg0);
}

$Object* AquaTabbedPaneUI$MouseHandler::clone() {
	 return this->$MouseInputAdapter::clone();
}

$String* AquaTabbedPaneUI$MouseHandler::toString() {
	 return this->$MouseInputAdapter::toString();
}

void AquaTabbedPaneUI$MouseHandler::finalize() {
	this->$MouseInputAdapter::finalize();
}

void AquaTabbedPaneUI$MouseHandler::init$($AquaTabbedPaneUI* this$0) {
	$set(this, this$0, this$0);
	$MouseInputAdapter::init$();
	this->trackingTab = -3;
	$set(this, popupTimer, $new($Timer, 500, this));
	$nc(this->popupTimer)->setRepeats(false);
}

void AquaTabbedPaneUI$MouseHandler::dispose() {
	$nc(this->popupTimer)->removeActionListener(this);
	$nc(this->popupTimer)->stop();
}

void AquaTabbedPaneUI$MouseHandler::mousePressed($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JTabbedPane, pane, $cast($JTabbedPane, $nc(e)->getSource()));
	if (!$nc(pane)->isEnabled()) {
		this->trackingTab = -3;
		return;
	}
	$var($Point, p, e->getPoint());
	this->trackingTab = getCurrentTab(pane, p);
	bool var$0 = this->trackingTab == -3;
	if (!var$0) {
		bool var$1 = !this->this$0->shouldRepaintSelectedTabOnMouseDown();
		var$0 = (var$1 && this->trackingTab == $nc(pane)->getSelectedIndex());
	}
	if (var$0) {
		this->trackingTab = -3;
		return;
	}
	if (this->trackingTab < 0 && this->trackingTab > -3) {
		$nc(this->popupTimer)->start();
	}
	this->this$0->pressedTab = this->trackingTab;
	repaint(pane, this->this$0->pressedTab);
}

void AquaTabbedPaneUI$MouseHandler::mouseDragged($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (this->trackingTab < -2) {
		return;
	}
	$var($JTabbedPane, pane, $cast($JTabbedPane, $nc(e)->getSource()));
	int32_t currentTab = getCurrentTab(pane, $(e->getPoint()));
	if (currentTab != this->trackingTab) {
		this->this$0->pressedTab = -3;
	} else {
		this->this$0->pressedTab = this->trackingTab;
	}
	if (this->trackingTab < 0 && this->trackingTab > -3) {
		$nc(this->popupTimer)->start();
	}
	repaint(pane, this->trackingTab);
}

void AquaTabbedPaneUI$MouseHandler::mouseReleased($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (this->trackingTab < -2) {
		return;
	}
	$nc(this->popupTimer)->stop();
	$var($JTabbedPane, pane, $cast($JTabbedPane, $nc(e)->getSource()));
	$var($Point, p, e->getPoint());
	int32_t currentTab = getCurrentTab(pane, p);
	if (this->trackingTab == -1 && currentTab == -1) {
		$nc(pane)->setSelectedIndex(pane->getSelectedIndex() + 1);
	}
	if (this->trackingTab == -2 && currentTab == -2) {
		$nc(pane)->setSelectedIndex(pane->getSelectedIndex() - 1);
	}
	if (this->trackingTab >= 0 && currentTab == this->trackingTab) {
		$nc(pane)->setSelectedIndex(this->trackingTab);
	}
	repaint(pane, this->trackingTab);
	this->this$0->pressedTab = -3;
	this->trackingTab = -3;
}

void AquaTabbedPaneUI$MouseHandler::actionPerformed($ActionEvent* e) {
	if (this->trackingTab != this->this$0->pressedTab) {
		return;
	}
	if (this->trackingTab == -1) {
		showFullPopup(false);
		this->trackingTab = -3;
	}
	if (this->trackingTab == -2) {
		showFullPopup(true);
		this->trackingTab = -3;
	}
}

int32_t AquaTabbedPaneUI$MouseHandler::getCurrentTab($JTabbedPane* pane, $Point* p) {
	$useLocalCurrentObjectStackCache();
	int32_t tabIndex = this->this$0->tabForCoordinate(pane, $nc(p)->x, p->y);
	if (tabIndex >= 0 && $nc(pane)->isEnabledAt(tabIndex)) {
		return tabIndex;
	}
	bool var$0 = $nc(this->this$0->visibleTabState)->needsLeftScrollTab();
	if (var$0 && $nc($($nc(this->this$0->visibleTabState)->getLeftScrollTabRect()))->contains(p)) {
		return -2;
	}
	bool var$1 = $nc(this->this$0->visibleTabState)->needsRightScrollTab();
	if (var$1 && $nc($($nc(this->this$0->visibleTabState)->getRightScrollTabRect()))->contains(p)) {
		return -1;
	}
	return -3;
}

void AquaTabbedPaneUI$MouseHandler::repaint($JTabbedPane* pane, int32_t tab) {
	$useLocalCurrentObjectStackCache();
	switch (tab) {
	case -1:
		{
			$nc(pane)->repaint($($nc(this->this$0->visibleTabState)->getRightScrollTabRect()));
			return;
		}
	case -2:
		{
			$nc(pane)->repaint($($nc(this->this$0->visibleTabState)->getLeftScrollTabRect()));
			return;
		}
	default:
		{
			if (this->trackingTab >= 0) {
				$nc(pane)->repaint($nc(this->this$0->rects)->get(this->trackingTab));
			}
			return;
		}
	}
}

void AquaTabbedPaneUI$MouseHandler::showFullPopup(bool firstTab) {
	$useLocalCurrentObjectStackCache();
	$var($JPopupMenu, popup, $new($JPopupMenu));
	for (int32_t i = 0; i < $nc(this->this$0->tabPane)->getTabCount(); ++i) {
		if (firstTab ? $nc(this->this$0->visibleTabState)->isBefore(i) : $nc(this->this$0->visibleTabState)->isAfter(i)) {
			popup->add($(createMenuItem(i)));
		}
	}
	if (firstTab) {
		$var($Rectangle, leftScrollTabRect, $nc(this->this$0->visibleTabState)->getLeftScrollTabRect());
		$var($Dimension, popupRect, popup->getPreferredSize());
		popup->show(this->this$0->tabPane, $nc(leftScrollTabRect)->x - $nc(popupRect)->width, leftScrollTabRect->y + 7);
	} else {
		$var($Rectangle, rightScrollTabRect, $nc(this->this$0->visibleTabState)->getRightScrollTabRect());
		popup->show(this->this$0->tabPane, $nc(rightScrollTabRect)->x + rightScrollTabRect->width, rightScrollTabRect->y + 7);
	}
	popup->addPopupMenuListener($$new($AquaTabbedPaneUI$MouseHandler$1, this));
}

$JMenuItem* AquaTabbedPaneUI$MouseHandler::createMenuItem(int32_t i) {
	$useLocalCurrentObjectStackCache();
	$var($Component, component, this->this$0->getTabComponentAt(i));
	$var($JMenuItem, menuItem, nullptr);
	if (component == nullptr) {
		$var($String, var$0, $nc(this->this$0->tabPane)->getTitleAt(i));
		$assign(menuItem, $new($JMenuItem, var$0, $($nc(this->this$0->tabPane)->getIconAt(i))));
	} else {
		$var($JMenuItem, tmp, $new($AquaTabbedPaneUI$MouseHandler$2, this, component));
		$assign(menuItem, tmp);
	}
	$var($Color, background, $nc(this->this$0->tabPane)->getBackgroundAt(i));
	if (!($instanceOf($UIResource, background))) {
		$nc(menuItem)->setBackground(background);
	}
	$nc(menuItem)->setForeground($($nc(this->this$0->tabPane)->getForegroundAt(i)));
	if (!$nc(this->this$0->tabPane)->isEnabledAt(i)) {
		menuItem->setEnabled(false);
	}
	int32_t fOffset = i;
	menuItem->addActionListener($$new($AquaTabbedPaneUI$MouseHandler$3, this, fOffset));
	return menuItem;
}

AquaTabbedPaneUI$MouseHandler::AquaTabbedPaneUI$MouseHandler() {
}

$Class* AquaTabbedPaneUI$MouseHandler::load$($String* name, bool initialize) {
	$loadClass(AquaTabbedPaneUI$MouseHandler, name, initialize, &_AquaTabbedPaneUI$MouseHandler_ClassInfo_, allocate$AquaTabbedPaneUI$MouseHandler);
	return class$;
}

$Class* AquaTabbedPaneUI$MouseHandler::class$ = nullptr;

		} // laf
	} // apple
} // com