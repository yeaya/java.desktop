#include <javax/swing/plaf/basic/BasicInternalFrameUI$BorderListener.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Cursor.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Window.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/WindowFocusListener.h>
#include <java/beans/PropertyVetoException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <javax/swing/DesktopManager.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/RootPaneContainer.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/event/MouseInputAdapter.h>
#include <javax/swing/plaf/basic/BasicInternalFrameUI.h>
#include <jcpp.h>

#undef BUTTON1_MASK
#undef DEFAULT_CURSOR
#undef EAST
#undef E_RESIZE_CURSOR
#undef NE_RESIZE_CURSOR
#undef NORTH
#undef NORTH_EAST
#undef NORTH_WEST
#undef NW_RESIZE_CURSOR
#undef N_RESIZE_CURSOR
#undef RESIZE_NONE
#undef SE_RESIZE_CURSOR
#undef SOUTH
#undef SOUTH_EAST
#undef SOUTH_WEST
#undef SW_RESIZE_CURSOR
#undef S_RESIZE_CURSOR
#undef WEST
#undef W_RESIZE_CURSOR

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Cursor = ::java::awt::Cursor;
using $Dimension = ::java::awt::Dimension;
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Window = ::java::awt::Window;
using $InputEvent = ::java::awt::event::InputEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $WindowFocusListener = ::java::awt::event::WindowFocusListener;
using $PropertyVetoException = ::java::beans::PropertyVetoException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $DesktopManager = ::javax::swing::DesktopManager;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $RootPaneContainer = ::javax::swing::RootPaneContainer;
using $SwingConstants = ::javax::swing::SwingConstants;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $MouseInputAdapter = ::javax::swing::event::MouseInputAdapter;
using $BasicInternalFrameUI = ::javax::swing::plaf::basic::BasicInternalFrameUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicInternalFrameUI$BorderListener_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicInternalFrameUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicInternalFrameUI$BorderListener, this$0)},
	{"_x", "I", nullptr, 0, $field(BasicInternalFrameUI$BorderListener, _x)},
	{"_y", "I", nullptr, 0, $field(BasicInternalFrameUI$BorderListener, _y)},
	{"__x", "I", nullptr, 0, $field(BasicInternalFrameUI$BorderListener, __x)},
	{"__y", "I", nullptr, 0, $field(BasicInternalFrameUI$BorderListener, __y)},
	{"startingBounds", "Ljava/awt/Rectangle;", nullptr, 0, $field(BasicInternalFrameUI$BorderListener, startingBounds)},
	{"resizeDir", "I", nullptr, 0, $field(BasicInternalFrameUI$BorderListener, resizeDir)},
	{"RESIZE_NONE", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(BasicInternalFrameUI$BorderListener, RESIZE_NONE)},
	{"discardRelease", "Z", nullptr, $PRIVATE, $field(BasicInternalFrameUI$BorderListener, discardRelease)},
	{"resizeCornerSize", "I", nullptr, 0, $field(BasicInternalFrameUI$BorderListener, resizeCornerSize)},
	{}
};

$MethodInfo _BasicInternalFrameUI$BorderListener_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/plaf/basic/BasicInternalFrameUI;)V", nullptr, $PROTECTED, $method(static_cast<void(BasicInternalFrameUI$BorderListener::*)($BasicInternalFrameUI*)>(&BasicInternalFrameUI$BorderListener::init$))},
	{"finishMouseReleased", "()V", nullptr, 0},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicInternalFrameUI$BorderListener_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicInternalFrameUI$BorderListener", "javax.swing.plaf.basic.BasicInternalFrameUI", "BorderListener", $PROTECTED},
	{}
};

$ClassInfo _BasicInternalFrameUI$BorderListener_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicInternalFrameUI$BorderListener",
	"javax.swing.event.MouseInputAdapter",
	"javax.swing.SwingConstants",
	_BasicInternalFrameUI$BorderListener_FieldInfo_,
	_BasicInternalFrameUI$BorderListener_MethodInfo_,
	nullptr,
	nullptr,
	_BasicInternalFrameUI$BorderListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicInternalFrameUI"
};

$Object* allocate$BasicInternalFrameUI$BorderListener($Class* clazz) {
	return $of($alloc(BasicInternalFrameUI$BorderListener));
}

int32_t BasicInternalFrameUI$BorderListener::hashCode() {
	 return this->$MouseInputAdapter::hashCode();
}

bool BasicInternalFrameUI$BorderListener::equals(Object$* arg0) {
	 return this->$MouseInputAdapter::equals(arg0);
}

$Object* BasicInternalFrameUI$BorderListener::clone() {
	 return this->$MouseInputAdapter::clone();
}

$String* BasicInternalFrameUI$BorderListener::toString() {
	 return this->$MouseInputAdapter::toString();
}

void BasicInternalFrameUI$BorderListener::finalize() {
	this->$MouseInputAdapter::finalize();
}

void BasicInternalFrameUI$BorderListener::init$($BasicInternalFrameUI* this$0) {
	$set(this, this$0, this$0);
	$MouseInputAdapter::init$();
	this->discardRelease = false;
	this->resizeCornerSize = 16;
}

void BasicInternalFrameUI$BorderListener::mouseClicked($MouseEvent* e) {
	bool var$0 = $nc(e)->getClickCount() > 1;
	if (var$0) {
		var$0 = $equals(e->getSource(), this->this$0->getNorthPane());
	}
	if (var$0) {
		bool var$1 = $nc(this->this$0->frame)->isIconifiable();
		if (var$1 && $nc(this->this$0->frame)->isIcon()) {
			try {
				$nc(this->this$0->frame)->setIcon(false);
			} catch ($PropertyVetoException&) {
				$catch();
			}
		} else if ($nc(this->this$0->frame)->isMaximizable()) {
			if (!$nc(this->this$0->frame)->isMaximum()) {
				try {
					$nc(this->this$0->frame)->setMaximum(true);
				} catch ($PropertyVetoException&) {
					$catch();
				}
			} else {
				try {
					$nc(this->this$0->frame)->setMaximum(false);
				} catch ($PropertyVetoException&) {
					$catch();
				}
			}
		}
	}
}

void BasicInternalFrameUI$BorderListener::finishMouseReleased() {
	$useLocalCurrentObjectStackCache();
	if (this->discardRelease) {
		this->discardRelease = false;
		return;
	}
	if (this->resizeDir == this->RESIZE_NONE) {
		$nc($(this->this$0->getDesktopManager()))->endDraggingFrame(this->this$0->frame);
		this->this$0->dragging = false;
	} else {
		$var($Window, windowAncestor, $SwingUtilities::getWindowAncestor(this->this$0->frame));
		if (windowAncestor != nullptr) {
			windowAncestor->removeWindowFocusListener($(this->this$0->getWindowFocusListener()));
		}
		$var($Container, c, $nc(this->this$0->frame)->getTopLevelAncestor());
		if ($instanceOf($RootPaneContainer, c)) {
			$var($Component, glassPane, $nc(($cast($RootPaneContainer, c)))->getGlassPane());
			$nc(glassPane)->setCursor($($Cursor::getPredefinedCursor($Cursor::DEFAULT_CURSOR)));
			glassPane->setVisible(false);
		}
		$nc($(this->this$0->getDesktopManager()))->endResizingFrame(this->this$0->frame);
		this->this$0->resizing = false;
		this->this$0->updateFrameCursor();
	}
	this->_x = 0;
	this->_y = 0;
	this->__x = 0;
	this->__y = 0;
	$set(this, startingBounds, nullptr);
	this->resizeDir = this->RESIZE_NONE;
	this->discardRelease = true;
}

void BasicInternalFrameUI$BorderListener::mouseReleased($MouseEvent* e) {
	finishMouseReleased();
}

void BasicInternalFrameUI$BorderListener::mousePressed($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($Component, var$0, $cast($Component, $nc(e)->getSource()));
	int32_t var$1 = e->getX();
	$var($Point, p, $SwingUtilities::convertPoint(var$0, var$1, e->getY(), nullptr));
	this->__x = $nc(e)->getX();
	this->__y = e->getY();
	this->_x = $nc(p)->x;
	this->_y = p->y;
	$set(this, startingBounds, $nc(this->this$0->frame)->getBounds());
	this->resizeDir = this->RESIZE_NONE;
	this->discardRelease = false;
	try {
		$nc(this->this$0->frame)->setSelected(true);
	} catch ($PropertyVetoException&) {
		$catch();
	}
	$var($Insets, i, $nc(this->this$0->frame)->getInsets());
	$var($Point, ep, $new($Point, this->__x, this->__y));
	if ($equals(e->getSource(), this->this$0->getNorthPane())) {
		$var($Point, np, $nc($(this->this$0->getNorthPane()))->getLocation());
		ep->x += $nc(np)->x;
		ep->y += np->y;
	}
	if ($equals(e->getSource(), this->this$0->getNorthPane())) {
		if (ep->x > $nc(i)->left && ep->y > i->top && ep->x < $nc(this->this$0->frame)->getWidth() - i->right) {
			$nc($(this->this$0->getDesktopManager()))->beginDraggingFrame(this->this$0->frame);
			this->this$0->dragging = true;
			return;
		}
	}
	if (!$nc(this->this$0->frame)->isResizable()) {
		return;
	}
	bool var$2 = $equals(e->getSource(), this->this$0->frame);
	if (!var$2) {
		var$2 = $equals(e->getSource(), this->this$0->getNorthPane());
	}
	if (var$2) {
		if (ep->x <= $nc(i)->left) {
			if (ep->y < this->resizeCornerSize + i->top) {
				this->resizeDir = $SwingConstants::NORTH_WEST;
			} else if (ep->y > $nc(this->this$0->frame)->getHeight() - this->resizeCornerSize - i->bottom) {
				this->resizeDir = $SwingConstants::SOUTH_WEST;
			} else {
				this->resizeDir = $SwingConstants::WEST;
			}
		} else if (ep->x >= $nc(this->this$0->frame)->getWidth() - i->right) {
			if (ep->y < this->resizeCornerSize + i->top) {
				this->resizeDir = $SwingConstants::NORTH_EAST;
			} else if (ep->y > $nc(this->this$0->frame)->getHeight() - this->resizeCornerSize - i->bottom) {
				this->resizeDir = $SwingConstants::SOUTH_EAST;
			} else {
				this->resizeDir = $SwingConstants::EAST;
			}
		} else if (ep->y <= i->top) {
			if (ep->x < this->resizeCornerSize + i->left) {
				this->resizeDir = $SwingConstants::NORTH_WEST;
			} else if (ep->x > $nc(this->this$0->frame)->getWidth() - this->resizeCornerSize - i->right) {
				this->resizeDir = $SwingConstants::NORTH_EAST;
			} else {
				this->resizeDir = $SwingConstants::NORTH;
			}
		} else if (ep->y >= $nc(this->this$0->frame)->getHeight() - i->bottom) {
			if (ep->x < this->resizeCornerSize + i->left) {
				this->resizeDir = $SwingConstants::SOUTH_WEST;
			} else if (ep->x > $nc(this->this$0->frame)->getWidth() - this->resizeCornerSize - i->right) {
				this->resizeDir = $SwingConstants::SOUTH_EAST;
			} else {
				this->resizeDir = $SwingConstants::SOUTH;
			}
		} else {
			this->discardRelease = true;
			return;
		}
		$var($Cursor, s, $Cursor::getPredefinedCursor($Cursor::DEFAULT_CURSOR));
		switch (this->resizeDir) {
		case $SwingConstants::SOUTH:
			{
				$assign(s, $Cursor::getPredefinedCursor($Cursor::S_RESIZE_CURSOR));
				break;
			}
		case $SwingConstants::NORTH:
			{
				$assign(s, $Cursor::getPredefinedCursor($Cursor::N_RESIZE_CURSOR));
				break;
			}
		case $SwingConstants::WEST:
			{
				$assign(s, $Cursor::getPredefinedCursor($Cursor::W_RESIZE_CURSOR));
				break;
			}
		case $SwingConstants::EAST:
			{
				$assign(s, $Cursor::getPredefinedCursor($Cursor::E_RESIZE_CURSOR));
				break;
			}
		case $SwingConstants::SOUTH_EAST:
			{
				$assign(s, $Cursor::getPredefinedCursor($Cursor::SE_RESIZE_CURSOR));
				break;
			}
		case $SwingConstants::SOUTH_WEST:
			{
				$assign(s, $Cursor::getPredefinedCursor($Cursor::SW_RESIZE_CURSOR));
				break;
			}
		case $SwingConstants::NORTH_WEST:
			{
				$assign(s, $Cursor::getPredefinedCursor($Cursor::NW_RESIZE_CURSOR));
				break;
			}
		case $SwingConstants::NORTH_EAST:
			{
				$assign(s, $Cursor::getPredefinedCursor($Cursor::NE_RESIZE_CURSOR));
				break;
			}
		}
		$var($Container, c, $nc(this->this$0->frame)->getTopLevelAncestor());
		if ($instanceOf($RootPaneContainer, c)) {
			$var($Component, glassPane, $nc(($cast($RootPaneContainer, c)))->getGlassPane());
			$nc(glassPane)->setVisible(true);
			glassPane->setCursor(s);
		}
		$nc($(this->this$0->getDesktopManager()))->beginResizingFrame(this->this$0->frame, this->resizeDir);
		this->this$0->resizing = true;
		$var($Window, windowAncestor, $SwingUtilities::getWindowAncestor(this->this$0->frame));
		if (windowAncestor != nullptr) {
			windowAncestor->addWindowFocusListener($(this->this$0->getWindowFocusListener()));
		}
		return;
	}
}

void BasicInternalFrameUI$BorderListener::mouseDragged($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (this->startingBounds == nullptr) {
		return;
	}
	$var($Component, var$0, $cast($Component, $nc(e)->getSource()));
	int32_t var$1 = e->getX();
	$var($Point, p, $SwingUtilities::convertPoint(var$0, var$1, e->getY(), nullptr));
	int32_t deltaX = this->_x - $nc(p)->x;
	int32_t deltaY = this->_y - p->y;
	$var($Dimension, min, $nc(this->this$0->frame)->getMinimumSize());
	$var($Dimension, max, $nc(this->this$0->frame)->getMaximumSize());
	int32_t newX = 0;
	int32_t newY = 0;
	int32_t newW = 0;
	int32_t newH = 0;
	$var($Insets, i, $nc(this->this$0->frame)->getInsets());
	if (this->this$0->dragging) {
		bool var$2 = $nc(this->this$0->frame)->isMaximum();
		if (var$2 || (((int32_t)($nc(e)->getModifiers() & (uint32_t)$InputEvent::BUTTON1_MASK)) != $InputEvent::BUTTON1_MASK)) {
			return;
		}
		int32_t pWidth = 0;
		int32_t pHeight = 0;
		$var($Dimension, s, $nc($($nc(this->this$0->frame)->getParent()))->getSize());
		pWidth = $nc(s)->width;
		pHeight = s->height;
		newX = $nc(this->startingBounds)->x - deltaX;
		newY = $nc(this->startingBounds)->y - deltaY;
		if (newX + $nc(i)->left <= -this->__x) {
			newX = -this->__x - i->left + 1;
		}
		if (newY + $nc(i)->top <= -this->__y) {
			newY = -this->__y - i->top + 1;
		}
		if (newX + this->__x + $nc(i)->right >= pWidth) {
			newX = pWidth - this->__x - i->right - 1;
		}
		if (newY + this->__y + $nc(i)->bottom >= pHeight) {
			newY = pHeight - this->__y - i->bottom - 1;
		}
		$nc($(this->this$0->getDesktopManager()))->dragFrame(this->this$0->frame, newX, newY);
		return;
	}
	if (!$nc(this->this$0->frame)->isResizable()) {
		return;
	}
	newX = $nc(this->this$0->frame)->getX();
	newY = $nc(this->this$0->frame)->getY();
	newW = $nc(this->this$0->frame)->getWidth();
	newH = $nc(this->this$0->frame)->getHeight();
	$set(this->this$0, parentBounds, $nc($($nc(this->this$0->frame)->getParent()))->getBounds());
	switch (this->resizeDir) {
	case this->RESIZE_NONE:
		{
			return;
		}
	case $SwingConstants::NORTH:
		{
			if ($nc(this->startingBounds)->height + deltaY < $nc(min)->height) {
				deltaY = -($nc(this->startingBounds)->height - min->height);
			} else if ($nc(this->startingBounds)->height + deltaY > $nc(max)->height) {
				deltaY = max->height - $nc(this->startingBounds)->height;
			}
			if ($nc(this->startingBounds)->y - deltaY < 0) {
				deltaY = $nc(this->startingBounds)->y;
			}
			newX = $nc(this->startingBounds)->x;
			newY = $nc(this->startingBounds)->y - deltaY;
			newW = $nc(this->startingBounds)->width;
			newH = $nc(this->startingBounds)->height + deltaY;
			break;
		}
	case $SwingConstants::NORTH_EAST:
		{
			if ($nc(this->startingBounds)->height + deltaY < $nc(min)->height) {
				deltaY = -($nc(this->startingBounds)->height - min->height);
			} else if ($nc(this->startingBounds)->height + deltaY > $nc(max)->height) {
				deltaY = max->height - $nc(this->startingBounds)->height;
			}
			if ($nc(this->startingBounds)->y - deltaY < 0) {
				deltaY = $nc(this->startingBounds)->y;
			}
			if ($nc(this->startingBounds)->width - deltaX < $nc(min)->width) {
				deltaX = $nc(this->startingBounds)->width - min->width;
			} else if ($nc(this->startingBounds)->width - deltaX > $nc(max)->width) {
				deltaX = -(max->width - $nc(this->startingBounds)->width);
			}
			if ($nc(this->startingBounds)->x + $nc(this->startingBounds)->width - deltaX > $nc(this->this$0->parentBounds)->width) {
				deltaX = $nc(this->startingBounds)->x + $nc(this->startingBounds)->width - $nc(this->this$0->parentBounds)->width;
			}
			newX = $nc(this->startingBounds)->x;
			newY = $nc(this->startingBounds)->y - deltaY;
			newW = $nc(this->startingBounds)->width - deltaX;
			newH = $nc(this->startingBounds)->height + deltaY;
			break;
		}
	case $SwingConstants::EAST:
		{
			if ($nc(this->startingBounds)->width - deltaX < $nc(min)->width) {
				deltaX = $nc(this->startingBounds)->width - min->width;
			} else if ($nc(this->startingBounds)->width - deltaX > $nc(max)->width) {
				deltaX = -(max->width - $nc(this->startingBounds)->width);
			}
			if ($nc(this->startingBounds)->x + $nc(this->startingBounds)->width - deltaX > $nc(this->this$0->parentBounds)->width) {
				deltaX = $nc(this->startingBounds)->x + $nc(this->startingBounds)->width - $nc(this->this$0->parentBounds)->width;
			}
			newW = $nc(this->startingBounds)->width - deltaX;
			newH = $nc(this->startingBounds)->height;
			break;
		}
	case $SwingConstants::SOUTH_EAST:
		{
			if ($nc(this->startingBounds)->width - deltaX < $nc(min)->width) {
				deltaX = $nc(this->startingBounds)->width - min->width;
			} else if ($nc(this->startingBounds)->width - deltaX > $nc(max)->width) {
				deltaX = -(max->width - $nc(this->startingBounds)->width);
			}
			if ($nc(this->startingBounds)->x + $nc(this->startingBounds)->width - deltaX > $nc(this->this$0->parentBounds)->width) {
				deltaX = $nc(this->startingBounds)->x + $nc(this->startingBounds)->width - $nc(this->this$0->parentBounds)->width;
			}
			if ($nc(this->startingBounds)->height - deltaY < $nc(min)->height) {
				deltaY = $nc(this->startingBounds)->height - min->height;
			} else if ($nc(this->startingBounds)->height - deltaY > $nc(max)->height) {
				deltaY = -(max->height - $nc(this->startingBounds)->height);
			}
			if ($nc(this->startingBounds)->y + $nc(this->startingBounds)->height - deltaY > $nc(this->this$0->parentBounds)->height) {
				deltaY = $nc(this->startingBounds)->y + $nc(this->startingBounds)->height - $nc(this->this$0->parentBounds)->height;
			}
			newW = $nc(this->startingBounds)->width - deltaX;
			newH = $nc(this->startingBounds)->height - deltaY;
			break;
		}
	case $SwingConstants::SOUTH:
		{
			if ($nc(this->startingBounds)->height - deltaY < $nc(min)->height) {
				deltaY = $nc(this->startingBounds)->height - min->height;
			} else if ($nc(this->startingBounds)->height - deltaY > $nc(max)->height) {
				deltaY = -(max->height - $nc(this->startingBounds)->height);
			}
			if ($nc(this->startingBounds)->y + $nc(this->startingBounds)->height - deltaY > $nc(this->this$0->parentBounds)->height) {
				deltaY = $nc(this->startingBounds)->y + $nc(this->startingBounds)->height - $nc(this->this$0->parentBounds)->height;
			}
			newW = $nc(this->startingBounds)->width;
			newH = $nc(this->startingBounds)->height - deltaY;
			break;
		}
	case $SwingConstants::SOUTH_WEST:
		{
			if ($nc(this->startingBounds)->height - deltaY < $nc(min)->height) {
				deltaY = $nc(this->startingBounds)->height - min->height;
			} else if ($nc(this->startingBounds)->height - deltaY > $nc(max)->height) {
				deltaY = -(max->height - $nc(this->startingBounds)->height);
			}
			if ($nc(this->startingBounds)->y + $nc(this->startingBounds)->height - deltaY > $nc(this->this$0->parentBounds)->height) {
				deltaY = $nc(this->startingBounds)->y + $nc(this->startingBounds)->height - $nc(this->this$0->parentBounds)->height;
			}
			if ($nc(this->startingBounds)->width + deltaX < $nc(min)->width) {
				deltaX = -($nc(this->startingBounds)->width - min->width);
			} else if ($nc(this->startingBounds)->width + deltaX > $nc(max)->width) {
				deltaX = max->width - $nc(this->startingBounds)->width;
			}
			if ($nc(this->startingBounds)->x - deltaX < 0) {
				deltaX = $nc(this->startingBounds)->x;
			}
			newX = $nc(this->startingBounds)->x - deltaX;
			newY = $nc(this->startingBounds)->y;
			newW = $nc(this->startingBounds)->width + deltaX;
			newH = $nc(this->startingBounds)->height - deltaY;
			break;
		}
	case $SwingConstants::WEST:
		{
			if ($nc(this->startingBounds)->width + deltaX < $nc(min)->width) {
				deltaX = -($nc(this->startingBounds)->width - min->width);
			} else if ($nc(this->startingBounds)->width + deltaX > $nc(max)->width) {
				deltaX = max->width - $nc(this->startingBounds)->width;
			}
			if ($nc(this->startingBounds)->x - deltaX < 0) {
				deltaX = $nc(this->startingBounds)->x;
			}
			newX = $nc(this->startingBounds)->x - deltaX;
			newY = $nc(this->startingBounds)->y;
			newW = $nc(this->startingBounds)->width + deltaX;
			newH = $nc(this->startingBounds)->height;
			break;
		}
	case $SwingConstants::NORTH_WEST:
		{
			if ($nc(this->startingBounds)->width + deltaX < $nc(min)->width) {
				deltaX = -($nc(this->startingBounds)->width - min->width);
			} else if ($nc(this->startingBounds)->width + deltaX > $nc(max)->width) {
				deltaX = max->width - $nc(this->startingBounds)->width;
			}
			if ($nc(this->startingBounds)->x - deltaX < 0) {
				deltaX = $nc(this->startingBounds)->x;
			}
			if ($nc(this->startingBounds)->height + deltaY < $nc(min)->height) {
				deltaY = -($nc(this->startingBounds)->height - min->height);
			} else if ($nc(this->startingBounds)->height + deltaY > $nc(max)->height) {
				deltaY = max->height - $nc(this->startingBounds)->height;
			}
			if ($nc(this->startingBounds)->y - deltaY < 0) {
				deltaY = $nc(this->startingBounds)->y;
			}
			newX = $nc(this->startingBounds)->x - deltaX;
			newY = $nc(this->startingBounds)->y - deltaY;
			newW = $nc(this->startingBounds)->width + deltaX;
			newH = $nc(this->startingBounds)->height + deltaY;
			break;
		}
	default:
		{
			return;
		}
	}
	$nc($(this->this$0->getDesktopManager()))->resizeFrame(this->this$0->frame, newX, newY, newW, newH);
}

void BasicInternalFrameUI$BorderListener::mouseMoved($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(this->this$0->frame)->isResizable()) {
		return;
	}
	bool var$0 = $equals($nc(e)->getSource(), this->this$0->frame);
	if (!var$0) {
		var$0 = $equals($nc(e)->getSource(), this->this$0->getNorthPane());
	}
	if (var$0) {
		$var($Insets, i, $nc(this->this$0->frame)->getInsets());
		int32_t var$1 = e->getX();
		$var($Point, ep, $new($Point, var$1, e->getY()));
		if ($equals(e->getSource(), this->this$0->getNorthPane())) {
			$var($Point, np, $nc($(this->this$0->getNorthPane()))->getLocation());
			ep->x += $nc(np)->x;
			ep->y += np->y;
		}
		if (ep->x <= $nc(i)->left) {
			if (ep->y < this->resizeCornerSize + i->top) {
				$nc(this->this$0->frame)->setCursor($($Cursor::getPredefinedCursor($Cursor::NW_RESIZE_CURSOR)));
			} else if (ep->y > $nc(this->this$0->frame)->getHeight() - this->resizeCornerSize - i->bottom) {
				$nc(this->this$0->frame)->setCursor($($Cursor::getPredefinedCursor($Cursor::SW_RESIZE_CURSOR)));
			} else {
				$nc(this->this$0->frame)->setCursor($($Cursor::getPredefinedCursor($Cursor::W_RESIZE_CURSOR)));
			}
		} else if (ep->x >= $nc(this->this$0->frame)->getWidth() - i->right) {
			if (e->getY() < this->resizeCornerSize + i->top) {
				$nc(this->this$0->frame)->setCursor($($Cursor::getPredefinedCursor($Cursor::NE_RESIZE_CURSOR)));
			} else if (ep->y > $nc(this->this$0->frame)->getHeight() - this->resizeCornerSize - i->bottom) {
				$nc(this->this$0->frame)->setCursor($($Cursor::getPredefinedCursor($Cursor::SE_RESIZE_CURSOR)));
			} else {
				$nc(this->this$0->frame)->setCursor($($Cursor::getPredefinedCursor($Cursor::E_RESIZE_CURSOR)));
			}
		} else if (ep->y <= i->top) {
			if (ep->x < this->resizeCornerSize + i->left) {
				$nc(this->this$0->frame)->setCursor($($Cursor::getPredefinedCursor($Cursor::NW_RESIZE_CURSOR)));
			} else if (ep->x > $nc(this->this$0->frame)->getWidth() - this->resizeCornerSize - i->right) {
				$nc(this->this$0->frame)->setCursor($($Cursor::getPredefinedCursor($Cursor::NE_RESIZE_CURSOR)));
			} else {
				$nc(this->this$0->frame)->setCursor($($Cursor::getPredefinedCursor($Cursor::N_RESIZE_CURSOR)));
			}
		} else if (ep->y >= $nc(this->this$0->frame)->getHeight() - i->bottom) {
			if (ep->x < this->resizeCornerSize + i->left) {
				$nc(this->this$0->frame)->setCursor($($Cursor::getPredefinedCursor($Cursor::SW_RESIZE_CURSOR)));
			} else if (ep->x > $nc(this->this$0->frame)->getWidth() - this->resizeCornerSize - i->right) {
				$nc(this->this$0->frame)->setCursor($($Cursor::getPredefinedCursor($Cursor::SE_RESIZE_CURSOR)));
			} else {
				$nc(this->this$0->frame)->setCursor($($Cursor::getPredefinedCursor($Cursor::S_RESIZE_CURSOR)));
			}
		} else {
			this->this$0->updateFrameCursor();
		}
		return;
	}
	this->this$0->updateFrameCursor();
}

void BasicInternalFrameUI$BorderListener::mouseEntered($MouseEvent* e) {
	this->this$0->updateFrameCursor();
}

void BasicInternalFrameUI$BorderListener::mouseExited($MouseEvent* e) {
	this->this$0->updateFrameCursor();
}

BasicInternalFrameUI$BorderListener::BasicInternalFrameUI$BorderListener() {
}

$Class* BasicInternalFrameUI$BorderListener::load$($String* name, bool initialize) {
	$loadClass(BasicInternalFrameUI$BorderListener, name, initialize, &_BasicInternalFrameUI$BorderListener_ClassInfo_, allocate$BasicInternalFrameUI$BorderListener);
	return class$;
}

$Class* BasicInternalFrameUI$BorderListener::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax