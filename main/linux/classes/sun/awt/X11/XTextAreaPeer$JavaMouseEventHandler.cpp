#include <sun/awt/X11/XTextAreaPeer$JavaMouseEventHandler.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Cursor.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/ScrollBarUI.h>
#include <javax/swing/text/JTextComponent.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/XTextAreaPeer$1.h>
#include <sun/awt/X11/XTextAreaPeer$AWTTextArea.h>
#include <sun/awt/X11/XTextAreaPeer$AWTTextPane.h>
#include <sun/awt/X11/XTextAreaPeer$JavaMouseEventHandler$Pointer$Type.h>
#include <sun/awt/X11/XTextAreaPeer$JavaMouseEventHandler$Pointer.h>
#include <sun/awt/X11/XTextAreaPeer$XAWTScrollBarUI.h>
#include <sun/awt/X11/XTextAreaPeer.h>
#include <sun/awt/X11/XWindow.h>
#include <jcpp.h>

#undef BUTTON
#undef BUTTON1_DOWN_MASK
#undef BUTTON2_DOWN_MASK
#undef BUTTON3_DOWN_MASK
#undef MOUSE_DRAGGED
#undef MOUSE_MOVED
#undef TEXT

using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Cursor = ::java::awt::Cursor;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $InputEvent = ::java::awt::event::InputEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JScrollBar = ::javax::swing::JScrollBar;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTextArea = ::javax::swing::JTextArea;
using $JViewport = ::javax::swing::JViewport;
using $ScrollBarUI = ::javax::swing::plaf::ScrollBarUI;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $SunToolkit = ::sun::awt::SunToolkit;
using $XTextAreaPeer = ::sun::awt::X11::XTextAreaPeer;
using $XTextAreaPeer$1 = ::sun::awt::X11::XTextAreaPeer$1;
using $XTextAreaPeer$AWTTextArea = ::sun::awt::X11::XTextAreaPeer$AWTTextArea;
using $XTextAreaPeer$AWTTextPane = ::sun::awt::X11::XTextAreaPeer$AWTTextPane;
using $XTextAreaPeer$JavaMouseEventHandler$Pointer = ::sun::awt::X11::XTextAreaPeer$JavaMouseEventHandler$Pointer;
using $XTextAreaPeer$JavaMouseEventHandler$Pointer$Type = ::sun::awt::X11::XTextAreaPeer$JavaMouseEventHandler$Pointer$Type;
using $XTextAreaPeer$XAWTScrollBarUI = ::sun::awt::X11::XTextAreaPeer$XAWTScrollBarUI;
using $XWindow = ::sun::awt::X11::XWindow;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XTextAreaPeer$JavaMouseEventHandler_FieldInfo_[] = {
	{"outer", "Lsun/awt/X11/XTextAreaPeer;", nullptr, $PRIVATE | $FINAL, $field(XTextAreaPeer$JavaMouseEventHandler, outer)},
	{"current", "Lsun/awt/X11/XTextAreaPeer$JavaMouseEventHandler$Pointer;", nullptr, $PRIVATE | $FINAL, $field(XTextAreaPeer$JavaMouseEventHandler, current)},
	{"grabbed", "Z", nullptr, $PRIVATE, $field(XTextAreaPeer$JavaMouseEventHandler, grabbed)},
	{}
};

$MethodInfo _XTextAreaPeer$JavaMouseEventHandler_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XTextAreaPeer;)V", nullptr, 0, $method(static_cast<void(XTextAreaPeer$JavaMouseEventHandler::*)($XTextAreaPeer*)>(&XTextAreaPeer$JavaMouseEventHandler::init$))},
	{"dispatch", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(XTextAreaPeer$JavaMouseEventHandler::*)($MouseEvent*)>(&XTextAreaPeer$JavaMouseEventHandler::dispatch))},
	{"grabbed_update", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(XTextAreaPeer$JavaMouseEventHandler::*)($MouseEvent*)>(&XTextAreaPeer$JavaMouseEventHandler::grabbed_update))},
	{"handle", "(Ljava/awt/event/MouseEvent;)V", nullptr, 0, $method(static_cast<void(XTextAreaPeer$JavaMouseEventHandler::*)($MouseEvent*)>(&XTextAreaPeer$JavaMouseEventHandler::handle))},
	{"newMouseEvent", "(Ljava/awt/Component;Ljava/awt/Point;Ljava/awt/event/MouseEvent;)Ljava/awt/event/MouseEvent;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$MouseEvent*(*)($Component*,$Point*,$MouseEvent*)>(&XTextAreaPeer$JavaMouseEventHandler::newMouseEvent))},
	{"setCursor", "()V", nullptr, $PRIVATE, $method(static_cast<void(XTextAreaPeer$JavaMouseEventHandler::*)()>(&XTextAreaPeer$JavaMouseEventHandler::setCursor))},
	{"setPointerIfPointOverButton", "(Ljavax/swing/JButton;Ljava/awt/Point;)Z", nullptr, $PRIVATE, $method(static_cast<bool(XTextAreaPeer$JavaMouseEventHandler::*)($JButton*,$Point*)>(&XTextAreaPeer$JavaMouseEventHandler::setPointerIfPointOverButton))},
	{"setPointerIfPointOverScrollbar", "(Ljavax/swing/JScrollBar;Ljava/awt/Point;)Z", nullptr, $PRIVATE, $method(static_cast<bool(XTextAreaPeer$JavaMouseEventHandler::*)($JScrollBar*,$Point*)>(&XTextAreaPeer$JavaMouseEventHandler::setPointerIfPointOverScrollbar))},
	{"setPointerToUnderPoint", "(Ljava/awt/Point;)V", nullptr, $PRIVATE, $method(static_cast<void(XTextAreaPeer$JavaMouseEventHandler::*)($Point*)>(&XTextAreaPeer$JavaMouseEventHandler::setPointerToUnderPoint))},
	{"toLocalSpace", "(Ljava/awt/Component;Ljava/awt/Point;)Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Point*(*)($Component*,$Point*)>(&XTextAreaPeer$JavaMouseEventHandler::toLocalSpace))},
	{"toViewportChildLocalSpace", "(Ljavax/swing/JViewport;Ljava/awt/Point;)Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Point*(*)($JViewport*,$Point*)>(&XTextAreaPeer$JavaMouseEventHandler::toViewportChildLocalSpace))},
	{}
};

$InnerClassInfo _XTextAreaPeer$JavaMouseEventHandler_InnerClassesInfo_[] = {
	{"sun.awt.X11.XTextAreaPeer$JavaMouseEventHandler", "sun.awt.X11.XTextAreaPeer", "JavaMouseEventHandler", $PRIVATE | $STATIC | $FINAL},
	{"sun.awt.X11.XTextAreaPeer$JavaMouseEventHandler$Pointer", "sun.awt.X11.XTextAreaPeer$JavaMouseEventHandler", "Pointer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _XTextAreaPeer$JavaMouseEventHandler_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.X11.XTextAreaPeer$JavaMouseEventHandler",
	"java.lang.Object",
	nullptr,
	_XTextAreaPeer$JavaMouseEventHandler_FieldInfo_,
	_XTextAreaPeer$JavaMouseEventHandler_MethodInfo_,
	nullptr,
	nullptr,
	_XTextAreaPeer$JavaMouseEventHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XTextAreaPeer"
};

$Object* allocate$XTextAreaPeer$JavaMouseEventHandler($Class* clazz) {
	return $of($alloc(XTextAreaPeer$JavaMouseEventHandler));
}

void XTextAreaPeer$JavaMouseEventHandler::init$($XTextAreaPeer* outer) {
	$set(this, current, $new($XTextAreaPeer$JavaMouseEventHandler$Pointer));
	this->grabbed = false;
	$set(this, outer, outer);
}

void XTextAreaPeer$JavaMouseEventHandler::handle($MouseEvent* event) {
	$useLocalCurrentObjectStackCache();
	if (!this->grabbed) {
		setPointerToUnderPoint($($nc(event)->getPoint()));
	}
	dispatch(event);
	bool wasGrabbed = this->grabbed;
	grabbed_update(event);
	if (wasGrabbed && !this->grabbed) {
		setPointerToUnderPoint($($nc(event)->getPoint()));
	}
	setCursor();
}

void XTextAreaPeer$JavaMouseEventHandler::dispatch($MouseEvent* event) {
	$useLocalCurrentObjectStackCache();
	$init($XTextAreaPeer$1);
	{
		$var($Point, point, nullptr)
		$var($XTextAreaPeer$AWTTextArea, jtext, nullptr)
		$var($MouseEvent, newEvent, nullptr)
		int32_t id = 0;
		$var($Component, c, nullptr)
		$var($Point, p, nullptr)
		switch ($nc($XTextAreaPeer$1::$SwitchMap$sun$awt$X11$XTextAreaPeer$JavaMouseEventHandler$Pointer$Type)->get($nc(($($nc(this->current)->getType())))->ordinal())) {
		case 1:
			{
				$var($JViewport, var$0, $nc($nc(this->outer)->textPane)->getViewport());
				$assign(point, toViewportChildLocalSpace(var$0, $($nc(event)->getPoint())));
				$assign(jtext, $nc(this->outer)->jtext);
				$assign(newEvent, newMouseEvent(jtext, point, event));
				id = $nc(newEvent)->getID();
				if (id == $MouseEvent::MOUSE_MOVED || id == $MouseEvent::MOUSE_DRAGGED) {
					$nc(jtext)->processMouseMotionEventPublic(newEvent);
				} else {
					$nc(jtext)->processMouseEventPublic(newEvent);
				}
				break;
			}
		case 2:
			{}
		case 3:
			{
				$assign(c, $nc(this->current)->getBar());
				$assign(p, toLocalSpace(c, $($nc(event)->getPoint())));
				$init($XTextAreaPeer$JavaMouseEventHandler$Pointer$Type);
				if ($nc(this->current)->getType() == $XTextAreaPeer$JavaMouseEventHandler$Pointer$Type::BUTTON) {
					$assign(c, $nc(this->current)->getButton());
					$assign(p, toLocalSpace(c, p));
				}
				$nc($($AWTAccessor::getComponentAccessor()))->processEvent(c, $(newMouseEvent(c, p, event)));
				break;
			}
		}
	}
}

$MouseEvent* XTextAreaPeer$JavaMouseEventHandler::newMouseEvent($Component* source, $Point* point, $MouseEvent* template$) {
	$useLocalCurrentObjectStackCache();
	$var($MouseEvent, e, template$);
	$var($Component, var$0, source);
	int32_t var$1 = $nc(e)->getID();
	int64_t var$2 = e->getWhen();
	int32_t var$4 = e->getModifiersEx();
	int32_t var$3 = var$4 | e->getModifiers();
	int32_t var$5 = $nc(point)->x;
	int32_t var$6 = point->y;
	int32_t var$7 = e->getXOnScreen();
	int32_t var$8 = e->getYOnScreen();
	int32_t var$9 = e->getClickCount();
	bool var$10 = e->isPopupTrigger();
	$var($MouseEvent, nme, $new($MouseEvent, var$0, var$1, var$2, var$3, var$5, var$6, var$7, var$8, var$9, var$10, e->getButton()));
	$SunToolkit::setSystemGenerated(nme);
	return nme;
}

void XTextAreaPeer$JavaMouseEventHandler::setCursor() {
	$useLocalCurrentObjectStackCache();
	$init($XTextAreaPeer$JavaMouseEventHandler$Pointer$Type);
	if ($nc(this->current)->getType() == $XTextAreaPeer$JavaMouseEventHandler$Pointer$Type::TEXT) {
		$nc(this->outer)->pSetCursor($($nc($nc(this->outer)->target)->getCursor()), true);
	} else {
		$nc(this->outer)->pSetCursor($($nc($nc(this->outer)->textPane)->getCursor()), true);
	}
}

void XTextAreaPeer$JavaMouseEventHandler::grabbed_update($MouseEvent* event) {
	int32_t allButtonsMask = ($MouseEvent::BUTTON1_DOWN_MASK | $MouseEvent::BUTTON2_DOWN_MASK) | $MouseEvent::BUTTON3_DOWN_MASK;
	this->grabbed = (((int32_t)($nc(event)->getModifiersEx() & (uint32_t)allButtonsMask)) != 0);
}

$Point* XTextAreaPeer$JavaMouseEventHandler::toLocalSpace($Component* local, $Point* inParentSpace) {
	$useLocalCurrentObjectStackCache();
	$var($Point, p, inParentSpace);
	$var($Point, l, $nc(local)->getLocation());
	return $new($Point, $nc(p)->x - $nc(l)->x, p->y - l->y);
}

$Point* XTextAreaPeer$JavaMouseEventHandler::toViewportChildLocalSpace($JViewport* v, $Point* inViewportParentSpace) {
	$useLocalCurrentObjectStackCache();
	$var($Point, l, toLocalSpace(v, inViewportParentSpace));
	$var($Point, p, $nc(v)->getViewPosition());
	$nc(l)->x += $nc(p)->x;
	l->y += p->y;
	return l;
}

void XTextAreaPeer$JavaMouseEventHandler::setPointerToUnderPoint($Point* point) {
	$useLocalCurrentObjectStackCache();
	if ($nc($($nc($($nc($nc(this->outer)->textPane)->getViewport()))->getBounds()))->contains(point)) {
		$nc(this->current)->setText();
	} else if (!setPointerIfPointOverScrollbar($($nc($nc(this->outer)->textPane)->getVerticalScrollBar()), point)) {
		if (!setPointerIfPointOverScrollbar($($nc($nc(this->outer)->textPane)->getHorizontalScrollBar()), point)) {
			$nc(this->current)->setNone();
		}
	}
}

bool XTextAreaPeer$JavaMouseEventHandler::setPointerIfPointOverScrollbar($JScrollBar* bar, $Point* point) {
	$useLocalCurrentObjectStackCache();
	if (!$nc($($nc(bar)->getBounds()))->contains(point)) {
		return false;
	}
	$nc(this->current)->setBar(bar);
	$var($Point, local, toLocalSpace(bar, point));
	$var($XTextAreaPeer$XAWTScrollBarUI, ui, $cast($XTextAreaPeer$XAWTScrollBarUI, $cast($ScrollBarUI, $nc(bar)->getUI())));
	if (!setPointerIfPointOverButton($($nc(ui)->getIncreaseButton()), local)) {
		setPointerIfPointOverButton($($nc(ui)->getDecreaseButton()), local);
	}
	return true;
}

bool XTextAreaPeer$JavaMouseEventHandler::setPointerIfPointOverButton($JButton* button, $Point* point) {
	if (!$nc($($nc(button)->getBounds()))->contains(point)) {
		return false;
	}
	$nc(this->current)->setButton(button);
	return true;
}

XTextAreaPeer$JavaMouseEventHandler::XTextAreaPeer$JavaMouseEventHandler() {
}

$Class* XTextAreaPeer$JavaMouseEventHandler::load$($String* name, bool initialize) {
	$loadClass(XTextAreaPeer$JavaMouseEventHandler, name, initialize, &_XTextAreaPeer$JavaMouseEventHandler_ClassInfo_, allocate$XTextAreaPeer$JavaMouseEventHandler);
	return class$;
}

$Class* XTextAreaPeer$JavaMouseEventHandler::class$ = nullptr;

		} // X11
	} // awt
} // sun