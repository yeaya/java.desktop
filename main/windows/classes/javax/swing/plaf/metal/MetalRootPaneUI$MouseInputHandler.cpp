#include <javax/swing/plaf/metal/MetalRootPaneUI$MouseInputHandler.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Cursor.h>
#include <java/awt/Dialog.h>
#include <java/awt/Dimension.h>
#include <java/awt/Frame.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/util/EventObject.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/plaf/metal/MetalRootPaneUI.h>
#include <jcpp.h>

#undef BUTTON1_MASK
#undef E_RESIZE_CURSOR
#undef MAXIMIZED_BOTH
#undef NE_RESIZE_CURSOR
#undef NONE
#undef NW_RESIZE_CURSOR
#undef N_RESIZE_CURSOR
#undef SE_RESIZE_CURSOR
#undef SW_RESIZE_CURSOR
#undef S_RESIZE_CURSOR
#undef W_RESIZE_CURSOR

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Cursor = ::java::awt::Cursor;
using $Dialog = ::java::awt::Dialog;
using $Dimension = ::java::awt::Dimension;
using $Frame = ::java::awt::Frame;
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $InputEvent = ::java::awt::event::InputEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $JComponent = ::javax::swing::JComponent;
using $JRootPane = ::javax::swing::JRootPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $MouseInputListener = ::javax::swing::event::MouseInputListener;
using $MetalRootPaneUI = ::javax::swing::plaf::metal::MetalRootPaneUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalRootPaneUI$MouseInputHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/metal/MetalRootPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(MetalRootPaneUI$MouseInputHandler, this$0)},
	{"isMovingWindow", "Z", nullptr, $PRIVATE, $field(MetalRootPaneUI$MouseInputHandler, isMovingWindow)},
	{"dragCursor", "I", nullptr, $PRIVATE, $field(MetalRootPaneUI$MouseInputHandler, dragCursor)},
	{"dragOffsetX", "I", nullptr, $PRIVATE, $field(MetalRootPaneUI$MouseInputHandler, dragOffsetX)},
	{"dragOffsetY", "I", nullptr, $PRIVATE, $field(MetalRootPaneUI$MouseInputHandler, dragOffsetY)},
	{"dragWidth", "I", nullptr, $PRIVATE, $field(MetalRootPaneUI$MouseInputHandler, dragWidth)},
	{"dragHeight", "I", nullptr, $PRIVATE, $field(MetalRootPaneUI$MouseInputHandler, dragHeight)},
	{}
};

$MethodInfo _MetalRootPaneUI$MouseInputHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/metal/MetalRootPaneUI;)V", nullptr, $PRIVATE, $method(static_cast<void(MetalRootPaneUI$MouseInputHandler::*)($MetalRootPaneUI*)>(&MetalRootPaneUI$MouseInputHandler::init$))},
	{"adjust", "(Ljava/awt/Rectangle;Ljava/awt/Dimension;IIII)V", nullptr, $PRIVATE, $method(static_cast<void(MetalRootPaneUI$MouseInputHandler::*)($Rectangle*,$Dimension*,int32_t,int32_t,int32_t,int32_t)>(&MetalRootPaneUI$MouseInputHandler::adjust))},
	{"calculateCorner", "(Ljava/awt/Window;II)I", nullptr, $PRIVATE, $method(static_cast<int32_t(MetalRootPaneUI$MouseInputHandler::*)($Window*,int32_t,int32_t)>(&MetalRootPaneUI$MouseInputHandler::calculateCorner))},
	{"calculatePosition", "(II)I", nullptr, $PRIVATE, $method(static_cast<int32_t(MetalRootPaneUI$MouseInputHandler::*)(int32_t,int32_t)>(&MetalRootPaneUI$MouseInputHandler::calculatePosition))},
	{"getCursor", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(MetalRootPaneUI$MouseInputHandler::*)(int32_t)>(&MetalRootPaneUI$MouseInputHandler::getCursor))},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalRootPaneUI$MouseInputHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalRootPaneUI$MouseInputHandler", "javax.swing.plaf.metal.MetalRootPaneUI", "MouseInputHandler", $PRIVATE},
	{}
};

$ClassInfo _MetalRootPaneUI$MouseInputHandler_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalRootPaneUI$MouseInputHandler",
	"java.lang.Object",
	"javax.swing.event.MouseInputListener",
	_MetalRootPaneUI$MouseInputHandler_FieldInfo_,
	_MetalRootPaneUI$MouseInputHandler_MethodInfo_,
	nullptr,
	nullptr,
	_MetalRootPaneUI$MouseInputHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalRootPaneUI"
};

$Object* allocate$MetalRootPaneUI$MouseInputHandler($Class* clazz) {
	return $of($alloc(MetalRootPaneUI$MouseInputHandler));
}

void MetalRootPaneUI$MouseInputHandler::init$($MetalRootPaneUI* this$0) {
	$set(this, this$0, this$0);
}

void MetalRootPaneUI$MouseInputHandler::mousePressed($MouseEvent* ev) {
	$useLocalCurrentObjectStackCache();
	$var($JRootPane, rootPane, this->this$0->getRootPane());
	if ($nc(rootPane)->getWindowDecorationStyle() == $JRootPane::NONE) {
		return;
	}
	$var($Point, dragWindowOffset, $nc(ev)->getPoint());
	$var($Window, w, $cast($Window, ev->getSource()));
	if (w != nullptr) {
		w->toFront();
	}
	$var($Point, convertedDragWindowOffset, $SwingUtilities::convertPoint(w, dragWindowOffset, $(this->this$0->getTitlePane())));
	$var($Frame, f, nullptr);
	$var($Dialog, d, nullptr);
	if ($instanceOf($Frame, w)) {
		$assign(f, $cast($Frame, w));
	} else if ($instanceOf($Dialog, w)) {
		$assign(d, $cast($Dialog, w));
	}
	int32_t frameState = (f != nullptr) ? $nc(f)->getExtendedState() : 0;
	bool var$0 = this->this$0->getTitlePane() != nullptr;
	if (var$0 && $nc($(this->this$0->getTitlePane()))->contains(convertedDragWindowOffset)) {
		if ((f != nullptr && (((int32_t)(frameState & (uint32_t)$Frame::MAXIMIZED_BOTH)) == 0) || (d != nullptr)) && $nc(dragWindowOffset)->y >= 5 && dragWindowOffset->x >= 5 && dragWindowOffset->x < $nc(w)->getWidth() - 5) {
			this->isMovingWindow = true;
			this->dragOffsetX = dragWindowOffset->x;
			this->dragOffsetY = dragWindowOffset->y;
		}
	} else {
		bool var$2 = f != nullptr && f->isResizable() && (((int32_t)(frameState & (uint32_t)$Frame::MAXIMIZED_BOTH)) == 0);
		if (var$2 || (d != nullptr && d->isResizable())) {
			this->dragOffsetX = $nc(dragWindowOffset)->x;
			this->dragOffsetY = dragWindowOffset->y;
			this->dragWidth = $nc(w)->getWidth();
			this->dragHeight = w->getHeight();
			this->dragCursor = getCursor(calculateCorner(w, dragWindowOffset->x, dragWindowOffset->y));
		}
	}
}

void MetalRootPaneUI$MouseInputHandler::mouseReleased($MouseEvent* ev) {
	if (this->dragCursor != 0 && this->this$0->window != nullptr && !$nc(this->this$0->window)->isValid()) {
		$nc(this->this$0->window)->validate();
		$nc($(this->this$0->getRootPane()))->repaint();
	}
	this->isMovingWindow = false;
	this->dragCursor = 0;
}

void MetalRootPaneUI$MouseInputHandler::mouseMoved($MouseEvent* ev) {
	$useLocalCurrentObjectStackCache();
	$var($JRootPane, root, this->this$0->getRootPane());
	if ($nc(root)->getWindowDecorationStyle() == $JRootPane::NONE) {
		return;
	}
	$var($Window, w, $cast($Window, $nc(ev)->getSource()));
	$var($Frame, f, nullptr);
	$var($Dialog, d, nullptr);
	if ($instanceOf($Frame, w)) {
		$assign(f, $cast($Frame, w));
	} else if ($instanceOf($Dialog, w)) {
		$assign(d, $cast($Dialog, w));
	}
	$var($Window, var$0, w);
	int32_t var$1 = ev->getX();
	int32_t cursor = getCursor(calculateCorner(var$0, var$1, ev->getY()));
	bool var$2 = cursor != 0;
	if (var$2) {
		bool var$4 = f != nullptr;
		if (var$4) {
			bool var$5 = f->isResizable();
			var$4 = (var$5 && ((int32_t)(f->getExtendedState() & (uint32_t)$Frame::MAXIMIZED_BOTH)) == 0);
		}
		bool var$3 = (var$4);
		var$2 = (var$3 || (d != nullptr && d->isResizable()));
	}
	if (var$2) {
		$nc(w)->setCursor($($Cursor::getPredefinedCursor(cursor)));
	} else {
		$nc(w)->setCursor(this->this$0->lastCursor);
	}
}

void MetalRootPaneUI$MouseInputHandler::adjust($Rectangle* bounds, $Dimension* min, int32_t deltaX, int32_t deltaY, int32_t deltaWidth, int32_t deltaHeight) {
	$nc(bounds)->x += deltaX;
	bounds->y += deltaY;
	bounds->width += deltaWidth;
	bounds->height += deltaHeight;
	if (min != nullptr) {
		if (bounds->width < min->width) {
			int32_t correction = min->width - bounds->width;
			if (deltaX != 0) {
				bounds->x -= correction;
			}
			bounds->width = min->width;
		}
		if (bounds->height < min->height) {
			int32_t correction = min->height - bounds->height;
			if (deltaY != 0) {
				bounds->y -= correction;
			}
			bounds->height = min->height;
		}
	}
}

void MetalRootPaneUI$MouseInputHandler::mouseDragged($MouseEvent* ev) {
	$useLocalCurrentObjectStackCache();
	$var($Window, w, $cast($Window, $nc(ev)->getSource()));
	$var($Point, pt, ev->getPoint());
	if (this->isMovingWindow) {
		$var($Point, eventLocationOnScreen, ev->getLocationOnScreen());
		$nc(w)->setLocation($nc(eventLocationOnScreen)->x - this->dragOffsetX, eventLocationOnScreen->y - this->dragOffsetY);
	} else if (this->dragCursor != 0) {
		$var($Rectangle, r, $nc(w)->getBounds());
		$var($Rectangle, startBounds, $new($Rectangle, r));
		$var($Dimension, min, w->getMinimumSize());
		switch (this->dragCursor) {
		case $Cursor::E_RESIZE_CURSOR:
			{
				adjust(r, min, 0, 0, $nc(pt)->x + (this->dragWidth - this->dragOffsetX) - $nc(r)->width, 0);
				break;
			}
		case $Cursor::S_RESIZE_CURSOR:
			{
				adjust(r, min, 0, 0, 0, $nc(pt)->y + (this->dragHeight - this->dragOffsetY) - $nc(r)->height);
				break;
			}
		case $Cursor::N_RESIZE_CURSOR:
			{
				adjust(r, min, 0, $nc(pt)->y - this->dragOffsetY, 0, -(pt->y - this->dragOffsetY));
				break;
			}
		case $Cursor::W_RESIZE_CURSOR:
			{
				adjust(r, min, $nc(pt)->x - this->dragOffsetX, 0, -(pt->x - this->dragOffsetX), 0);
				break;
			}
		case $Cursor::NE_RESIZE_CURSOR:
			{
				adjust(r, min, 0, $nc(pt)->y - this->dragOffsetY, pt->x + (this->dragWidth - this->dragOffsetX) - $nc(r)->width, -(pt->y - this->dragOffsetY));
				break;
			}
		case $Cursor::SE_RESIZE_CURSOR:
			{
				adjust(r, min, 0, 0, $nc(pt)->x + (this->dragWidth - this->dragOffsetX) - $nc(r)->width, pt->y + (this->dragHeight - this->dragOffsetY) - r->height);
				break;
			}
		case $Cursor::NW_RESIZE_CURSOR:
			{
				adjust(r, min, $nc(pt)->x - this->dragOffsetX, pt->y - this->dragOffsetY, -(pt->x - this->dragOffsetX), -(pt->y - this->dragOffsetY));
				break;
			}
		case $Cursor::SW_RESIZE_CURSOR:
			{
				adjust(r, min, $nc(pt)->x - this->dragOffsetX, 0, -(pt->x - this->dragOffsetX), pt->y + (this->dragHeight - this->dragOffsetY) - $nc(r)->height);
				break;
			}
		default:
			{
				break;
			}
		}
		if (!$nc(r)->equals(startBounds)) {
			w->setBounds(r);
			if ($nc($($Toolkit::getDefaultToolkit()))->isDynamicLayoutActive()) {
				w->validate();
				$nc($(this->this$0->getRootPane()))->repaint();
			}
		}
	}
}

void MetalRootPaneUI$MouseInputHandler::mouseEntered($MouseEvent* ev) {
	$var($Window, w, $cast($Window, $nc(ev)->getSource()));
	$set(this->this$0, lastCursor, $nc(w)->getCursor());
	mouseMoved(ev);
}

void MetalRootPaneUI$MouseInputHandler::mouseExited($MouseEvent* ev) {
	$var($Window, w, $cast($Window, $nc(ev)->getSource()));
	$nc(w)->setCursor(this->this$0->lastCursor);
}

void MetalRootPaneUI$MouseInputHandler::mouseClicked($MouseEvent* ev) {
	$useLocalCurrentObjectStackCache();
	$var($Window, w, $cast($Window, $nc(ev)->getSource()));
	$var($Frame, f, nullptr);
	if ($instanceOf($Frame, w)) {
		$assign(f, $cast($Frame, w));
	} else {
		return;
	}
	$var($Component, var$0, static_cast<$Component*>(w));
	$var($Point, var$1, ev->getPoint());
	$var($Point, convertedPoint, $SwingUtilities::convertPoint(var$0, var$1, $(this->this$0->getTitlePane())));
	int32_t state = $nc(f)->getExtendedState();
	bool var$2 = this->this$0->getTitlePane() != nullptr;
	if (var$2 && $nc($(this->this$0->getTitlePane()))->contains(convertedPoint)) {
		bool var$3 = (ev->getClickCount() % 2) == 0;
		if (var$3 && (((int32_t)(ev->getModifiers() & (uint32_t)$InputEvent::BUTTON1_MASK)) != 0)) {
			if (f->isResizable()) {
				if (((int32_t)(state & (uint32_t)$Frame::MAXIMIZED_BOTH)) != 0) {
					f->setExtendedState((int32_t)(state & (uint32_t)~$Frame::MAXIMIZED_BOTH));
				} else {
					f->setExtendedState(state | $Frame::MAXIMIZED_BOTH);
				}
				return;
			}
		}
	}
}

int32_t MetalRootPaneUI$MouseInputHandler::calculateCorner($Window* w, int32_t x, int32_t y) {
	$var($Insets, insets, $nc(w)->getInsets());
	int32_t xPosition = calculatePosition(x - $nc(insets)->left, w->getWidth() - insets->left - insets->right);
	int32_t yPosition = calculatePosition(y - $nc(insets)->top, w->getHeight() - insets->top - insets->bottom);
	if (xPosition == -1 || yPosition == -1) {
		return -1;
	}
	return yPosition * 5 + xPosition;
}

int32_t MetalRootPaneUI$MouseInputHandler::getCursor(int32_t corner) {
	if (corner == -1) {
		return 0;
	}
	$init($MetalRootPaneUI);
	return $nc($MetalRootPaneUI::cursorMapping)->get(corner);
}

int32_t MetalRootPaneUI$MouseInputHandler::calculatePosition(int32_t spot, int32_t width) {
	if (spot < 5) {
		return 0;
	}
	if (spot < 16) {
		return 1;
	}
	if (spot >= (width - 5)) {
		return 4;
	}
	if (spot >= (width - 16)) {
		return 3;
	}
	return 2;
}

MetalRootPaneUI$MouseInputHandler::MetalRootPaneUI$MouseInputHandler() {
}

$Class* MetalRootPaneUI$MouseInputHandler::load$($String* name, bool initialize) {
	$loadClass(MetalRootPaneUI$MouseInputHandler, name, initialize, &_MetalRootPaneUI$MouseInputHandler_ClassInfo_, allocate$MetalRootPaneUI$MouseInputHandler);
	return class$;
}

$Class* MetalRootPaneUI$MouseInputHandler::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax