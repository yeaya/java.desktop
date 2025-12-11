#include <com/apple/laf/AquaInternalFrameUI$AquaBorderListener.h>

#include <com/apple/laf/AquaInternalFrameBorder.h>
#include <com/apple/laf/AquaInternalFrameUI.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Cursor.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/beans/PropertyVetoException.h>
#include <javax/swing/DesktopManager.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JDialog.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JLayeredPane.h>
#include <javax/swing/JWindow.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/event/MouseInputAdapter.h>
#include <jcpp.h>

#undef BUTTON1_MASK
#undef DEFAULT_CURSOR
#undef RESIZE_NONE

using $JInternalFrameArray = $Array<::javax::swing::JInternalFrame>;
using $AquaInternalFrameBorder = ::com::apple::laf::AquaInternalFrameBorder;
using $AquaInternalFrameUI = ::com::apple::laf::AquaInternalFrameUI;
using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Cursor = ::java::awt::Cursor;
using $Dimension = ::java::awt::Dimension;
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $InputEvent = ::java::awt::event::InputEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $PropertyVetoException = ::java::beans::PropertyVetoException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DesktopManager = ::javax::swing::DesktopManager;
using $JApplet = ::javax::swing::JApplet;
using $JComponent = ::javax::swing::JComponent;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $JDialog = ::javax::swing::JDialog;
using $JFrame = ::javax::swing::JFrame;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JLayeredPane = ::javax::swing::JLayeredPane;
using $JWindow = ::javax::swing::JWindow;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $MouseInputAdapter = ::javax::swing::event::MouseInputAdapter;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaInternalFrameUI$AquaBorderListener_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaInternalFrameUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaInternalFrameUI$AquaBorderListener, this$0)},
	{"_x", "I", nullptr, 0, $field(AquaInternalFrameUI$AquaBorderListener, _x)},
	{"_y", "I", nullptr, 0, $field(AquaInternalFrameUI$AquaBorderListener, _y)},
	{"__x", "I", nullptr, 0, $field(AquaInternalFrameUI$AquaBorderListener, __x)},
	{"__y", "I", nullptr, 0, $field(AquaInternalFrameUI$AquaBorderListener, __y)},
	{"startingBounds", "Ljava/awt/Rectangle;", nullptr, 0, $field(AquaInternalFrameUI$AquaBorderListener, startingBounds)},
	{"fDraggingFrame", "Z", nullptr, 0, $field(AquaInternalFrameUI$AquaBorderListener, fDraggingFrame)},
	{"resizeDir", "I", nullptr, 0, $field(AquaInternalFrameUI$AquaBorderListener, resizeDir)},
	{"RESIZE_NONE", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(AquaInternalFrameUI$AquaBorderListener, RESIZE_NONE)},
	{"discardRelease", "Z", nullptr, $PRIVATE, $field(AquaInternalFrameUI$AquaBorderListener, discardRelease)},
	{"isTryingToForwardEvent", "Z", nullptr, 0, $field(AquaInternalFrameUI$AquaBorderListener, isTryingToForwardEvent)},
	{}
};

$MethodInfo _AquaInternalFrameUI$AquaBorderListener_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaInternalFrameUI;)V", nullptr, $PROTECTED, $method(static_cast<void(AquaInternalFrameUI$AquaBorderListener::*)($AquaInternalFrameUI*)>(&AquaInternalFrameUI$AquaBorderListener::init$))},
	{"didForwardEvent", "(Ljava/awt/event/MouseEvent;)Z", nullptr, 0},
	{"didForwardEventInternal", "(Ljava/awt/event/MouseEvent;)Z", nullptr, 0},
	{"findComponentToHitBehindMe", "(Ljavax/swing/JDesktopPane;Ljava/awt/Point;)Ljava/awt/Component;", nullptr, 0},
	{"getButtonHit", "(Ljava/awt/event/MouseEvent;)I", nullptr, $PUBLIC},
	{"isEventInWindowShadow", "(Ljava/awt/Point;)Z", nullptr, 0},
	{"isTitleBarDraggableArea", "(Ljava/awt/event/MouseEvent;)Z", nullptr, $PUBLIC},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"repaintButtons", "()V", nullptr, $PUBLIC},
	{"updatePressed", "(Ljava/awt/event/MouseEvent;)Z", nullptr, $PUBLIC},
	{"updateRollover", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaInternalFrameUI$AquaBorderListener_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaInternalFrameUI$AquaBorderListener", "com.apple.laf.AquaInternalFrameUI", "AquaBorderListener", $PROTECTED},
	{}
};

$ClassInfo _AquaInternalFrameUI$AquaBorderListener_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaInternalFrameUI$AquaBorderListener",
	"javax.swing.event.MouseInputAdapter",
	nullptr,
	_AquaInternalFrameUI$AquaBorderListener_FieldInfo_,
	_AquaInternalFrameUI$AquaBorderListener_MethodInfo_,
	nullptr,
	nullptr,
	_AquaInternalFrameUI$AquaBorderListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaInternalFrameUI"
};

$Object* allocate$AquaInternalFrameUI$AquaBorderListener($Class* clazz) {
	return $of($alloc(AquaInternalFrameUI$AquaBorderListener));
}

void AquaInternalFrameUI$AquaBorderListener::init$($AquaInternalFrameUI* this$0) {
	$set(this, this$0, this$0);
	$MouseInputAdapter::init$();
	this->discardRelease = false;
	this->isTryingToForwardEvent = false;
}

void AquaInternalFrameUI$AquaBorderListener::mouseClicked($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (didForwardEvent(e)) {
		return;
	}
	bool var$0 = $nc(e)->getClickCount() <= 1;
	if (!var$0) {
		var$0 = !$equals($nc(e)->getSource(), this->this$0->getNorthPane());
	}
	if (var$0) {
		return;
	}
	bool var$1 = $nc($($AquaInternalFrameUI::access$000(this->this$0)))->isIconifiable();
	if (var$1 && $nc($($AquaInternalFrameUI::access$100(this->this$0)))->isIcon()) {
		try {
			$nc($($AquaInternalFrameUI::access$200(this->this$0)))->setIcon(false);
		} catch ($PropertyVetoException& e2) {
		}
	} else if ($nc($($AquaInternalFrameUI::access$300(this->this$0)))->isMaximizable()) {
		if (!$nc($($AquaInternalFrameUI::access$400(this->this$0)))->isMaximum()) {
			try {
				$nc($($AquaInternalFrameUI::access$500(this->this$0)))->setMaximum(true);
			} catch ($PropertyVetoException& e2) {
			}
		} else {
			try {
				$nc($($AquaInternalFrameUI::access$600(this->this$0)))->setMaximum(false);
			} catch ($PropertyVetoException& e3) {
			}
		}
	}
}

void AquaInternalFrameUI$AquaBorderListener::updateRollover($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	bool oldRollover = this->this$0->fRollover;
	$var($Insets, i, $nc($($AquaInternalFrameUI::access$700(this->this$0)))->getInsets());
	bool var$0 = isTitleBarDraggableArea(e);
	if (var$0) {
		$var($Insets, var$1, i);
		int32_t var$2 = $nc(e)->getX();
		var$0 = $nc(this->this$0->fAquaBorder)->getWithinRolloverArea(var$1, var$2, e->getY());
	}
	this->this$0->fRollover = (var$0);
	if (this->this$0->fRollover != oldRollover) {
		repaintButtons();
	}
}

void AquaInternalFrameUI$AquaBorderListener::repaintButtons() {
	$nc(this->this$0->fAquaBorder)->repaintButtonArea($($AquaInternalFrameUI::access$800(this->this$0)));
}

void AquaInternalFrameUI$AquaBorderListener::mouseReleased($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (didForwardEvent(e)) {
		return;
	}
	this->fDraggingFrame = false;
	if (this->this$0->fWhichButtonPressed != -1) {
		$var($JInternalFrame, var$0, $AquaInternalFrameUI::access$900(this->this$0));
		int32_t var$1 = $nc(e)->getX();
		int32_t newButton = $nc(this->this$0->fAquaBorder)->getWhichButtonHit(var$0, var$1, e->getY());
		int32_t buttonPresed = this->this$0->fWhichButtonPressed;
		this->this$0->fWhichButtonPressed = -1;
		this->this$0->fMouseOverPressedButton = false;
		if (buttonPresed == newButton) {
			this->this$0->fMouseOverPressedButton = false;
			this->this$0->fRollover = false;
			$nc(this->this$0->fAquaBorder)->doButtonAction($($AquaInternalFrameUI::access$1000(this->this$0)), buttonPresed);
		}
		updateRollover(e);
		repaintButtons();
		return;
	}
	if (this->discardRelease) {
		this->discardRelease = false;
		return;
	}
	if (this->resizeDir == AquaInternalFrameUI$AquaBorderListener::RESIZE_NONE) {
		$nc($($AquaInternalFrameUI::access$1200(this->this$0)))->endDraggingFrame($($AquaInternalFrameUI::access$1100(this->this$0)));
	} else {
		$var($Container, c, $nc($($AquaInternalFrameUI::access$1300(this->this$0)))->getTopLevelAncestor());
		if ($instanceOf($JFrame, c)) {
			$nc($($nc(($cast($JFrame, $($nc($($AquaInternalFrameUI::access$1400(this->this$0)))->getTopLevelAncestor()))))->getGlassPane()))->setCursor($($Cursor::getPredefinedCursor($Cursor::DEFAULT_CURSOR)));
			$nc($($nc(($cast($JFrame, $($nc($($AquaInternalFrameUI::access$1500(this->this$0)))->getTopLevelAncestor()))))->getGlassPane()))->setVisible(false);
		} else if ($instanceOf($JApplet, c)) {
			$nc($($nc(($cast($JApplet, c)))->getGlassPane()))->setCursor($($Cursor::getPredefinedCursor($Cursor::DEFAULT_CURSOR)));
			$nc($($nc(($cast($JApplet, c)))->getGlassPane()))->setVisible(false);
		} else if ($instanceOf($JWindow, c)) {
			$nc($($nc(($cast($JWindow, c)))->getGlassPane()))->setCursor($($Cursor::getPredefinedCursor($Cursor::DEFAULT_CURSOR)));
			$nc($($nc(($cast($JWindow, c)))->getGlassPane()))->setVisible(false);
		} else if ($instanceOf($JDialog, c)) {
			$nc($($nc(($cast($JDialog, c)))->getGlassPane()))->setCursor($($Cursor::getPredefinedCursor($Cursor::DEFAULT_CURSOR)));
			$nc($($nc(($cast($JDialog, c)))->getGlassPane()))->setVisible(false);
		}
		$nc($($AquaInternalFrameUI::access$1700(this->this$0)))->endResizingFrame($($AquaInternalFrameUI::access$1600(this->this$0)));
	}
	this->_x = 0;
	this->_y = 0;
	this->__x = 0;
	this->__y = 0;
	$set(this, startingBounds, nullptr);
	this->resizeDir = AquaInternalFrameUI$AquaBorderListener::RESIZE_NONE;
}

void AquaInternalFrameUI$AquaBorderListener::mousePressed($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (didForwardEvent(e)) {
		return;
	}
	$var($Component, var$0, $cast($Component, $nc(e)->getSource()));
	int32_t var$1 = e->getX();
	$var($Point, p, $SwingUtilities::convertPoint(var$0, var$1, e->getY(), nullptr));
	this->__x = $nc(e)->getX();
	this->__y = e->getY();
	this->_x = $nc(p)->x;
	this->_y = p->y;
	$set(this, startingBounds, $nc($($AquaInternalFrameUI::access$1800(this->this$0)))->getBounds());
	this->resizeDir = AquaInternalFrameUI$AquaBorderListener::RESIZE_NONE;
	if (updatePressed(e)) {
		return;
	}
	if (!$nc($($AquaInternalFrameUI::access$1900(this->this$0)))->isSelected()) {
		try {
			$nc($($AquaInternalFrameUI::access$2000(this->this$0)))->setSelected(true);
		} catch ($PropertyVetoException& e1) {
		}
	}
	if (isTitleBarDraggableArea(e)) {
		$nc($($AquaInternalFrameUI::access$2200(this->this$0)))->beginDraggingFrame($($AquaInternalFrameUI::access$2100(this->this$0)));
		this->fDraggingFrame = true;
		return;
	}
	if ($equals(e->getSource(), this->this$0->getNorthPane())) {
		$nc($($AquaInternalFrameUI::access$2400(this->this$0)))->beginDraggingFrame($($AquaInternalFrameUI::access$2300(this->this$0)));
		return;
	}
	if (!$nc($($AquaInternalFrameUI::access$2500(this->this$0)))->isResizable()) {
		return;
	}
	if ($equals(e->getSource(), $AquaInternalFrameUI::access$2600(this->this$0))) {
		this->discardRelease = true;
		return;
	}
}

bool AquaInternalFrameUI$AquaBorderListener::updatePressed($MouseEvent* e) {
	this->this$0->fWhichButtonPressed = getButtonHit(e);
	this->this$0->fMouseOverPressedButton = true;
	repaintButtons();
	return (this->this$0->fWhichButtonPressed >= 0);
}

int32_t AquaInternalFrameUI$AquaBorderListener::getButtonHit($MouseEvent* e) {
	$var($JInternalFrame, var$0, $AquaInternalFrameUI::access$2700(this->this$0));
	int32_t var$1 = $nc(e)->getX();
	return $nc(this->this$0->fAquaBorder)->getWhichButtonHit(var$0, var$1, e->getY());
}

bool AquaInternalFrameUI$AquaBorderListener::isTitleBarDraggableArea($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (!$equals($nc(e)->getSource(), $AquaInternalFrameUI::access$2800(this->this$0))) {
		return false;
	}
	$var($Point, point, $nc(e)->getPoint());
	$var($Insets, insets, $nc($($AquaInternalFrameUI::access$2900(this->this$0)))->getInsets());
	if ($nc(point)->y < $nc(insets)->top - $nc(this->this$0->fAquaBorder)->getTitleHeight()) {
		return false;
	}
	if ($nc(point)->y > $nc(insets)->top) {
		return false;
	}
	if ($nc(point)->x < $nc(insets)->left) {
		return false;
	}
	if ($nc(point)->x > $nc($($AquaInternalFrameUI::access$3000(this->this$0)))->getWidth() - $nc(insets)->left - insets->right) {
		return false;
	}
	return true;
}

void AquaInternalFrameUI$AquaBorderListener::mouseDragged($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (this->startingBounds == nullptr) {
		return;
	}
	if (this->this$0->fWhichButtonPressed != -1) {
		int32_t newButton = getButtonHit(e);
		this->this$0->fMouseOverPressedButton = (this->this$0->fWhichButtonPressed == newButton);
		repaintButtons();
		return;
	}
	$var($Component, var$0, $cast($Component, $nc(e)->getSource()));
	int32_t var$1 = e->getX();
	$var($Point, p, $SwingUtilities::convertPoint(var$0, var$1, e->getY(), nullptr));
	int32_t deltaX = this->_x - $nc(p)->x;
	int32_t deltaY = this->_y - p->y;
	int32_t newX = 0;
	int32_t newY = 0;
	bool var$2 = !this->fDraggingFrame;
	if (var$2) {
		var$2 = !$equals($nc(e)->getSource(), this->this$0->getNorthPane());
	}
	if (var$2) {
		return;
	}
	bool var$3 = $nc($($AquaInternalFrameUI::access$3100(this->this$0)))->isMaximum();
	if (var$3 || (((int32_t)($nc(e)->getModifiers() & (uint32_t)$InputEvent::BUTTON1_MASK)) != $InputEvent::BUTTON1_MASK)) {
		return;
	}
	$var($Dimension, s, $nc($($nc($($AquaInternalFrameUI::access$3200(this->this$0)))->getParent()))->getSize());
	int32_t pWidth = $nc(s)->width;
	int32_t pHeight = s->height;
	$var($Insets, i, $nc($($AquaInternalFrameUI::access$3300(this->this$0)))->getInsets());
	newX = $nc(this->startingBounds)->x - deltaX;
	newY = $nc(this->startingBounds)->y - deltaY;
	if (newX + $nc(i)->left <= -this->__x) {
		newX = -this->__x - i->left;
	}
	if (newY + $nc(i)->top <= -this->__y) {
		newY = -this->__y - i->top;
	}
	if (newX + this->__x + $nc(i)->right > pWidth) {
		newX = pWidth - this->__x - i->right;
	}
	if (newY + this->__y + $nc(i)->bottom > pHeight) {
		newY = pHeight - this->__y - i->bottom;
	}
	$nc($($AquaInternalFrameUI::access$3500(this->this$0)))->dragFrame($($AquaInternalFrameUI::access$3400(this->this$0)), newX, newY);
	return;
}

void AquaInternalFrameUI$AquaBorderListener::mouseMoved($MouseEvent* e) {
	if (didForwardEvent(e)) {
		return;
	}
	updateRollover(e);
}

bool AquaInternalFrameUI$AquaBorderListener::didForwardEvent($MouseEvent* e) {
	if (this->isTryingToForwardEvent) {
		return true;
	}
	this->isTryingToForwardEvent = true;
	bool didForwardEvent = didForwardEventInternal(e);
	this->isTryingToForwardEvent = false;
	return didForwardEvent;
}

bool AquaInternalFrameUI$AquaBorderListener::didForwardEventInternal($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (this->fDraggingFrame) {
		return false;
	}
	$var($Point, originalPoint, $nc(e)->getPoint());
	if (!isEventInWindowShadow(originalPoint)) {
		return false;
	}
	$var($Container, parent, $nc($($AquaInternalFrameUI::access$3600(this->this$0)))->getParent());
	if (!($instanceOf($JDesktopPane, parent))) {
		return false;
	}
	$var($JDesktopPane, pane, $cast($JDesktopPane, parent));
	$var($Point, parentPoint, $SwingUtilities::convertPoint($($AquaInternalFrameUI::access$3700(this->this$0)), originalPoint, parent));
	$var($Component, hitComponent, findComponentToHitBehindMe(pane, parentPoint));
	if (hitComponent == nullptr || $equals(hitComponent, $AquaInternalFrameUI::access$3800(this->this$0))) {
		return false;
	}
	$var($Point, hitComponentPoint, $SwingUtilities::convertPoint(pane, parentPoint, hitComponent));
	$var($Component, var$0, hitComponent);
	int32_t var$1 = e->getID();
	int64_t var$2 = e->getWhen();
	int32_t var$3 = e->getModifiers();
	int32_t var$4 = $nc(hitComponentPoint)->x;
	int32_t var$5 = hitComponentPoint->y;
	int32_t var$6 = e->getClickCount();
	bool var$7 = e->isPopupTrigger();
	$nc(hitComponent)->dispatchEvent($$new($MouseEvent, var$0, var$1, var$2, var$3, var$4, var$5, var$6, var$7, e->getButton()));
	return true;
}

$Component* AquaInternalFrameUI$AquaBorderListener::findComponentToHitBehindMe($JDesktopPane* pane, $Point* parentPoint) {
	$useLocalCurrentObjectStackCache();
	$var($JInternalFrameArray, allFrames, $nc(pane)->getAllFrames());
	bool foundSelf = false;
	{
		$var($JInternalFrameArray, arr$, allFrames);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($JInternalFrame, f, arr$->get(i$));
			{
				if (f == $AquaInternalFrameUI::access$3900(this->this$0)) {
					foundSelf = true;
					continue;
				}
				if (!foundSelf) {
					continue;
				}
				$var($Rectangle, bounds, $nc(f)->getBounds());
				if ($nc(bounds)->contains(parentPoint)) {
					return f;
				}
			}
		}
	}
	return pane;
}

bool AquaInternalFrameUI$AquaBorderListener::isEventInWindowShadow($Point* point) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, bounds, $nc($($AquaInternalFrameUI::access$4000(this->this$0)))->getBounds());
	$var($Insets, insets, $nc($($AquaInternalFrameUI::access$4100(this->this$0)))->getInsets());
	$nc(insets)->top -= $nc(this->this$0->fAquaBorder)->getTitleHeight();
	if ($nc(point)->x < insets->left) {
		return true;
	}
	if ($nc(point)->x > $nc(bounds)->width - insets->right) {
		return true;
	}
	if ($nc(point)->y < insets->top) {
		return true;
	}
	if ($nc(point)->y > $nc(bounds)->height - insets->bottom) {
		return true;
	}
	return false;
}

AquaInternalFrameUI$AquaBorderListener::AquaInternalFrameUI$AquaBorderListener() {
}

$Class* AquaInternalFrameUI$AquaBorderListener::load$($String* name, bool initialize) {
	$loadClass(AquaInternalFrameUI$AquaBorderListener, name, initialize, &_AquaInternalFrameUI$AquaBorderListener_ClassInfo_, allocate$AquaInternalFrameUI$AquaBorderListener);
	return class$;
}

$Class* AquaInternalFrameUI$AquaBorderListener::class$ = nullptr;

		} // laf
	} // apple
} // com