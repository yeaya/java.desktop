#include <sun/awt/X11/XChoicePeer$UnfurledChoice.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Choice.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/MouseEvent.h>
#include <java/lang/Math.h>
#include <sun/awt/X11/ListHelper.h>
#include <sun/awt/X11/XBaseWindow.h>
#include <sun/awt/X11/XChoicePeer.h>
#include <sun/awt/X11/XChoicePeerListener.h>
#include <sun/awt/X11/XComponentPeer.h>
#include <sun/awt/X11/XCreateWindowParams.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XWindow.h>
#include <sun/awt/X11GraphicsConfig.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef BOUNDS
#undef FINE
#undef MOUSE_DRAGGED
#undef MOUSE_PRESSED
#undef MOUSE_RELEASED
#undef OVERRIDE_REDIRECT
#undef PARENT_WINDOW
#undef TRUE

using $ColorArray = $Array<::java::awt::Color>;
using $Choice = ::java::awt::Choice;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListHelper = ::sun::awt::X11::ListHelper;
using $XBaseWindow = ::sun::awt::X11::XBaseWindow;
using $XChoicePeer = ::sun::awt::X11::XChoicePeer;
using $XChoicePeerListener = ::sun::awt::X11::XChoicePeerListener;
using $XComponentPeer = ::sun::awt::X11::XComponentPeer;
using $XCreateWindowParams = ::sun::awt::X11::XCreateWindowParams;
using $XEvent = ::sun::awt::X11::XEvent;
using $XWindow = ::sun::awt::X11::XWindow;
using $X11GraphicsConfig = ::sun::awt::X11GraphicsConfig;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XChoicePeer$UnfurledChoice_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/XChoicePeer;", nullptr, $FINAL | $SYNTHETIC, $field(XChoicePeer$UnfurledChoice, this$0)},
	{}
};

$MethodInfo _XChoicePeer$UnfurledChoice_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XChoicePeer;Ljava/awt/Component;)V", nullptr, $PUBLIC, $method(static_cast<void(XChoicePeer$UnfurledChoice::*)($XChoicePeer*,$Component*)>(&XChoicePeer$UnfurledChoice::init$))},
	{"handleConfigureNotifyEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{"handleMapNotifyEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{"handleUnmapNotifyEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{"isMouseEventInside", "(Ljava/awt/event/MouseEvent;)Z", nullptr, $PRIVATE, $method(static_cast<bool(XChoicePeer$UnfurledChoice::*)($MouseEvent*)>(&XChoicePeer$UnfurledChoice::isMouseEventInside))},
	{"isMouseInListArea", "(Ljava/awt/event/MouseEvent;)Z", nullptr, $PRIVATE, $method(static_cast<bool(XChoicePeer$UnfurledChoice::*)($MouseEvent*)>(&XChoicePeer$UnfurledChoice::isMouseInListArea))},
	{"paintBackground", "()V", nullptr, $PUBLIC, $method(static_cast<void(XChoicePeer$UnfurledChoice::*)()>(&XChoicePeer$UnfurledChoice::paintBackground))},
	{"paintPeer", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"placeOnScreen", "()Ljava/awt/Rectangle;", nullptr, 0, $method(static_cast<$Rectangle*(XChoicePeer$UnfurledChoice::*)()>(&XChoicePeer$UnfurledChoice::placeOnScreen))},
	{"preInit", "(Lsun/awt/X11/XCreateWindowParams;)V", nullptr, $PUBLIC},
	{"repaint", "()V", nullptr, $PUBLIC},
	{"setVisible", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(XChoicePeer$UnfurledChoice::*)(bool)>(&XChoicePeer$UnfurledChoice::setVisible))},
	{"toFront", "()V", nullptr, $PUBLIC},
	{"toLocalCoords", "(Ljava/awt/event/MouseEvent;)Ljava/awt/Point;", nullptr, $PRIVATE, $method(static_cast<$Point*(XChoicePeer$UnfurledChoice::*)($MouseEvent*)>(&XChoicePeer$UnfurledChoice::toLocalCoords))},
	{"trackMouse", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $method(static_cast<void(XChoicePeer$UnfurledChoice::*)($MouseEvent*)>(&XChoicePeer$UnfurledChoice::trackMouse))},
	{"trackSelection", "(II)V", nullptr, $PRIVATE, $method(static_cast<void(XChoicePeer$UnfurledChoice::*)(int32_t,int32_t)>(&XChoicePeer$UnfurledChoice::trackSelection))},
	{}
};

$InnerClassInfo _XChoicePeer$UnfurledChoice_InnerClassesInfo_[] = {
	{"sun.awt.X11.XChoicePeer$UnfurledChoice", "sun.awt.X11.XChoicePeer", "UnfurledChoice", $FINAL},
	{}
};

$ClassInfo _XChoicePeer$UnfurledChoice_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.X11.XChoicePeer$UnfurledChoice",
	"sun.awt.X11.XWindow",
	nullptr,
	_XChoicePeer$UnfurledChoice_FieldInfo_,
	_XChoicePeer$UnfurledChoice_MethodInfo_,
	nullptr,
	nullptr,
	_XChoicePeer$UnfurledChoice_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XChoicePeer"
};

$Object* allocate$XChoicePeer$UnfurledChoice($Class* clazz) {
	return $of($alloc(XChoicePeer$UnfurledChoice));
}

void XChoicePeer$UnfurledChoice::init$($XChoicePeer* this$0, $Component* target) {
	$set(this, this$0, this$0);
	$XWindow::init$(target);
}

void XChoicePeer$UnfurledChoice::preInit($XCreateWindowParams* params) {
	$init($XBaseWindow);
	$nc(params)->delete$($XBaseWindow::PARENT_WINDOW);
	$XWindow::preInit(params);
	params->remove($XBaseWindow::BOUNDS);
	$init($Boolean);
	params->add($of($XBaseWindow::OVERRIDE_REDIRECT), $of($Boolean::TRUE));
}

$Rectangle* XChoicePeer$UnfurledChoice::placeOnScreen() {
	$useLocalCurrentObjectStackCache();
	int32_t numItemsDisplayed = 0;
	if ($nc(this->this$0->helper)->isEmpty()) {
		numItemsDisplayed = 1;
	} else {
		int32_t numItems = $nc(this->this$0->helper)->getItemCount();
		numItemsDisplayed = $Math::min(10, numItems);
	}
	$var($Point, global, this->this$0->toGlobal(0, 0));
	$var($Rectangle, screenBounds, $nc(this->graphicsConfig)->getBounds());
	if (this->this$0->alignUnder != nullptr) {
		$var($Rectangle, choiceRec, this->this$0->getBounds());
		$nc(choiceRec)->setLocation(0, 0);
		$assign(choiceRec, this->this$0->toGlobal(choiceRec));
		$var($Point, var$0, $nc(this->this$0->alignUnder)->getLocationOnScreen());
		$var($Rectangle, alignUnderRec, $new($Rectangle, var$0, $($nc(this->this$0->alignUnder)->getSize())));
		$var($Rectangle, result, choiceRec->union$(alignUnderRec));
		this->width = $nc(result)->width;
		this->x = result->x;
		this->y = result->y + result->height;
		this->height = 2 * 1 + numItemsDisplayed * ($nc(this->this$0->helper)->getItemHeight() + 2 * 1);
	} else {
		this->x = $nc(global)->x;
		this->y = global->y + this->this$0->height;
		int32_t var$1 = $nc(this->this$0->helper)->getMaxItemWidth() + 2 * (1 + 1 + 1);
		this->width = $Math::max(this->this$0->width, var$1 + ($nc(this->this$0->helper)->isVSBVisible() ? 15 : 0));
		this->height = 2 * 1 + numItemsDisplayed * ($nc(this->this$0->helper)->getItemHeight() + 2 * 1);
	}
	if (this->x < $nc(screenBounds)->x) {
		this->x = screenBounds->x;
	} else if (this->x + this->width > screenBounds->x + screenBounds->width) {
		this->x = screenBounds->x + screenBounds->width - this->width;
	}
	if (this->y + this->height > $nc(screenBounds)->y + screenBounds->height) {
		this->y = $nc(global)->y - this->height;
	}
	if (this->y < $nc(screenBounds)->y) {
		this->y = screenBounds->y;
	}
	return $new($Rectangle, this->x, this->y, this->width, this->height);
}

void XChoicePeer$UnfurledChoice::toFront() {
	if (this->this$0->choiceListener != nullptr) {
		$nc(this->this$0->choiceListener)->unfurledChoiceOpening(this->this$0->helper);
	}
	$var($Rectangle, r, placeOnScreen());
	reshape($nc(r)->x, r->y, r->width, r->height);
	$XWindow::toFront();
	setVisible(true);
}

void XChoicePeer$UnfurledChoice::trackMouse($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($Point, local, toLocalCoords(e));
	switch ($nc(e)->getID()) {
	case $MouseEvent::MOUSE_PRESSED:
		{
			if ($nc(this->this$0->helper)->isInVertSB($(getBounds()), $nc(local)->x, local->y)) {
				this->this$0->mouseInSB = true;
				$nc(this->this$0->helper)->handleVSBEvent(e, $(getBounds()), $nc(local)->x, local->y);
			} else {
				trackSelection($nc(local)->x, local->y);
			}
			break;
		}
	case $MouseEvent::MOUSE_RELEASED:
		{
			if (this->this$0->mouseInSB) {
				this->this$0->mouseInSB = false;
				$nc(this->this$0->helper)->handleVSBEvent(e, $(getBounds()), $nc(local)->x, local->y);
			} else {
				$nc(this->this$0->helper)->trackMouseReleasedScroll();
			}
			break;
		}
	case $MouseEvent::MOUSE_DRAGGED:
		{
			if (this->this$0->mouseInSB) {
				$nc(this->this$0->helper)->handleVSBEvent(e, $(getBounds()), $nc(local)->x, local->y);
			} else {
				$nc(this->this$0->helper)->trackMouseDraggedScroll($nc(local)->x, local->y, this->width, this->height);
				trackSelection($nc(local)->x, local->y);
			}
			break;
		}
	}
}

void XChoicePeer$UnfurledChoice::trackSelection(int32_t transX, int32_t transY) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(this->this$0->helper)->isEmpty()) {
		if (transX > 0 && transX < this->width && transY > 0 && transY < this->height) {
			int32_t newIdx = $nc(this->this$0->helper)->y2index(transY);
			$init($XChoicePeer);
			$init($PlatformLogger$Level);
			if ($nc($XChoicePeer::log)->isLoggable($PlatformLogger$Level::FINE)) {
				$nc($XChoicePeer::log)->fine($$str({"transX="_s, $$str(transX), ", transY="_s, $$str(transY), ",width="_s, $$str(this->width), ", height="_s, $$str(this->height), ", newIdx="_s, $$str(newIdx), " on "_s, this->target}));
			}
			bool var$0 = (newIdx >= 0) && (newIdx < $nc(this->this$0->helper)->getItemCount());
			if (var$0 && (newIdx != $nc(this->this$0->helper)->getSelectedIndex())) {
				$nc(this->this$0->helper)->select(newIdx);
				$nc(this->this$0->unfurledChoice)->repaint();
			}
		}
	}
}

void XChoicePeer$UnfurledChoice::paintBackground() {
	$useLocalCurrentObjectStackCache();
	$var($Graphics, g, getGraphics());
	if (g != nullptr) {
		{
			$var($Throwable, var$0, nullptr);
			try {
				g->setColor($(this->this$0->getPeerBackground()));
				g->fillRect(0, 0, this->width, this->height);
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				g->dispose();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void XChoicePeer$UnfurledChoice::repaint() {
	if (!isVisible()) {
		return;
	}
	if ($nc(this->this$0->helper)->checkVsbVisibilityChangedAndReset()) {
		paintBackground();
	}
	$XWindow::repaint();
}

void XChoicePeer$UnfurledChoice::paintPeer($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($Choice, choice, $cast($Choice, this->target));
	$var($ColorArray, colors, this->this$0->getGUIcolors());
	this->this$0->draw3DRect(g, $($XComponentPeer::getSystemColors()), 0, 0, this->width - 1, this->height - 1, true);
	this->this$0->draw3DRect(g, $($XComponentPeer::getSystemColors()), 1, 1, this->width - 3, this->height - 3, true);
	$nc(this->this$0->helper)->paintAllItems(g, colors, $(getBounds()));
}

void XChoicePeer$UnfurledChoice::setVisible(bool vis) {
	xSetVisible(vis);
	if (!vis && this->this$0->alignUnder != nullptr) {
		$nc(this->this$0->alignUnder)->requestFocusInWindow();
	}
}

$Point* XChoicePeer$UnfurledChoice::toLocalCoords($MouseEvent* e) {
	$var($Point, global, $nc(e)->getLocationOnScreen());
	$nc(global)->x -= this->x;
	global->y -= this->y;
	return global;
}

bool XChoicePeer$UnfurledChoice::isMouseEventInside($MouseEvent* e) {
	$var($Point, local, toLocalCoords(e));
	if ($nc(local)->x > 0 && local->x < this->width && local->y > 0 && local->y < this->height) {
		return true;
	}
	return false;
}

bool XChoicePeer$UnfurledChoice::isMouseInListArea($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (isMouseEventInside(e)) {
		$var($Point, local, toLocalCoords(e));
		$var($Rectangle, bounds, getBounds());
		if (!$nc(this->this$0->helper)->isInVertSB(bounds, $nc(local)->x, local->y)) {
			return true;
		}
	}
	return false;
}

void XChoicePeer$UnfurledChoice::handleConfigureNotifyEvent($XEvent* xev) {
}

void XChoicePeer$UnfurledChoice::handleMapNotifyEvent($XEvent* xev) {
}

void XChoicePeer$UnfurledChoice::handleUnmapNotifyEvent($XEvent* xev) {
}

XChoicePeer$UnfurledChoice::XChoicePeer$UnfurledChoice() {
}

$Class* XChoicePeer$UnfurledChoice::load$($String* name, bool initialize) {
	$loadClass(XChoicePeer$UnfurledChoice, name, initialize, &_XChoicePeer$UnfurledChoice_ClassInfo_, allocate$XChoicePeer$UnfurledChoice);
	return class$;
}

$Class* XChoicePeer$UnfurledChoice::class$ = nullptr;

		} // X11
	} // awt
} // sun