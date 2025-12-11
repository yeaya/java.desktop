#include <sun/awt/X11/XMouseDragGestureRecognizer.h>

#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/dnd/DnDConstants.h>
#include <java/awt/dnd/DragGestureListener.h>
#include <java/awt/dnd/DragGestureRecognizer.h>
#include <java/awt/dnd/DragSource.h>
#include <java/awt/dnd/MouseDragGestureRecognizer.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/lang/Math.h>
#include <java/util/ArrayList.h>
#include <sun/awt/dnd/SunDragSourceContextPeer.h>
#include <jcpp.h>

#undef ACTION_NONE
#undef BUTTON1_DOWN_MASK
#undef BUTTON2_DOWN_MASK

using $Component = ::java::awt::Component;
using $Point = ::java::awt::Point;
using $DnDConstants = ::java::awt::dnd::DnDConstants;
using $DragGestureListener = ::java::awt::dnd::DragGestureListener;
using $DragSource = ::java::awt::dnd::DragSource;
using $MouseDragGestureRecognizer = ::java::awt::dnd::MouseDragGestureRecognizer;
using $InputEvent = ::java::awt::event::InputEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $SunDragSourceContextPeer = ::sun::awt::dnd::SunDragSourceContextPeer;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XMouseDragGestureRecognizer_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMouseDragGestureRecognizer, serialVersionUID)},
	{"motionThreshold", "I", nullptr, $PROTECTED | $STATIC, $staticField(XMouseDragGestureRecognizer, motionThreshold)},
	{"ButtonMask", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XMouseDragGestureRecognizer, ButtonMask)},
	{}
};

$MethodInfo _XMouseDragGestureRecognizer_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/dnd/DragSource;Ljava/awt/Component;ILjava/awt/dnd/DragGestureListener;)V", nullptr, $PROTECTED, $method(static_cast<void(XMouseDragGestureRecognizer::*)($DragSource*,$Component*,int32_t,$DragGestureListener*)>(&XMouseDragGestureRecognizer::init$))},
	{"<init>", "(Ljava/awt/dnd/DragSource;Ljava/awt/Component;I)V", nullptr, $PROTECTED, $method(static_cast<void(XMouseDragGestureRecognizer::*)($DragSource*,$Component*,int32_t)>(&XMouseDragGestureRecognizer::init$))},
	{"<init>", "(Ljava/awt/dnd/DragSource;Ljava/awt/Component;)V", nullptr, $PROTECTED, $method(static_cast<void(XMouseDragGestureRecognizer::*)($DragSource*,$Component*)>(&XMouseDragGestureRecognizer::init$))},
	{"<init>", "(Ljava/awt/dnd/DragSource;)V", nullptr, $PROTECTED, $method(static_cast<void(XMouseDragGestureRecognizer::*)($DragSource*)>(&XMouseDragGestureRecognizer::init$))},
	{"mapDragOperationFromModifiers", "(Ljava/awt/event/MouseEvent;)I", nullptr, $PROTECTED},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XMouseDragGestureRecognizer_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XMouseDragGestureRecognizer",
	"java.awt.dnd.MouseDragGestureRecognizer",
	nullptr,
	_XMouseDragGestureRecognizer_FieldInfo_,
	_XMouseDragGestureRecognizer_MethodInfo_
};

$Object* allocate$XMouseDragGestureRecognizer($Class* clazz) {
	return $of($alloc(XMouseDragGestureRecognizer));
}

int32_t XMouseDragGestureRecognizer::motionThreshold = 0;

void XMouseDragGestureRecognizer::init$($DragSource* ds, $Component* c, int32_t act, $DragGestureListener* dgl) {
	$MouseDragGestureRecognizer::init$(ds, c, act, dgl);
}

void XMouseDragGestureRecognizer::init$($DragSource* ds, $Component* c, int32_t act) {
	XMouseDragGestureRecognizer::init$(ds, c, act, nullptr);
}

void XMouseDragGestureRecognizer::init$($DragSource* ds, $Component* c) {
	XMouseDragGestureRecognizer::init$(ds, c, $DnDConstants::ACTION_NONE);
}

void XMouseDragGestureRecognizer::init$($DragSource* ds) {
	XMouseDragGestureRecognizer::init$(ds, nullptr);
}

int32_t XMouseDragGestureRecognizer::mapDragOperationFromModifiers($MouseEvent* e) {
	int32_t mods = $nc(e)->getModifiersEx();
	int32_t btns = (int32_t)(mods & (uint32_t)XMouseDragGestureRecognizer::ButtonMask);
	if (!(btns == $InputEvent::BUTTON1_DOWN_MASK || btns == $InputEvent::BUTTON2_DOWN_MASK)) {
		return $DnDConstants::ACTION_NONE;
	}
	return $SunDragSourceContextPeer::convertModifiersToDropAction(mods, getSourceActions());
}

void XMouseDragGestureRecognizer::mouseClicked($MouseEvent* e) {
}

void XMouseDragGestureRecognizer::mousePressed($MouseEvent* e) {
	$nc(this->events)->clear();
	if (mapDragOperationFromModifiers(e) != $DnDConstants::ACTION_NONE) {
		try {
			XMouseDragGestureRecognizer::motionThreshold = $DragSource::getDragThreshold();
		} catch ($Exception& exc) {
			XMouseDragGestureRecognizer::motionThreshold = 5;
		}
		appendEvent(e);
	}
}

void XMouseDragGestureRecognizer::mouseReleased($MouseEvent* e) {
	$nc(this->events)->clear();
}

void XMouseDragGestureRecognizer::mouseEntered($MouseEvent* e) {
	$nc(this->events)->clear();
}

void XMouseDragGestureRecognizer::mouseExited($MouseEvent* e) {
	if (!$nc(this->events)->isEmpty()) {
		int32_t dragAction = mapDragOperationFromModifiers(e);
		if (dragAction == $DnDConstants::ACTION_NONE) {
			$nc(this->events)->clear();
		}
	}
}

void XMouseDragGestureRecognizer::mouseDragged($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(this->events)->isEmpty()) {
		int32_t dop = mapDragOperationFromModifiers(e);
		if (dop == $DnDConstants::ACTION_NONE) {
			return;
		}
		$var($MouseEvent, trigger, $cast($MouseEvent, $nc(this->events)->get(0)));
		$var($Point, origin, $nc(trigger)->getPoint());
		$var($Point, current, $nc(e)->getPoint());
		int32_t dx = $Math::abs($nc(origin)->x - $nc(current)->x);
		int32_t dy = $Math::abs($nc(origin)->y - $nc(current)->y);
		if (dx > XMouseDragGestureRecognizer::motionThreshold || dy > XMouseDragGestureRecognizer::motionThreshold) {
			fireDragGestureRecognized(dop, $($nc(($cast($MouseEvent, $(getTriggerEvent()))))->getPoint()));
		} else {
			appendEvent(e);
		}
	}
}

void XMouseDragGestureRecognizer::mouseMoved($MouseEvent* e) {
}

XMouseDragGestureRecognizer::XMouseDragGestureRecognizer() {
}

$Class* XMouseDragGestureRecognizer::load$($String* name, bool initialize) {
	$loadClass(XMouseDragGestureRecognizer, name, initialize, &_XMouseDragGestureRecognizer_ClassInfo_, allocate$XMouseDragGestureRecognizer);
	return class$;
}

$Class* XMouseDragGestureRecognizer::class$ = nullptr;

		} // X11
	} // awt
} // sun