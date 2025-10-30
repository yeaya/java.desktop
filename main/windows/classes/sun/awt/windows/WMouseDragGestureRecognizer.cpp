#include <sun/awt/windows/WMouseDragGestureRecognizer.h>

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
#undef BUTTON3_DOWN_MASK

using $Component = ::java::awt::Component;
using $Point = ::java::awt::Point;
using $DnDConstants = ::java::awt::dnd::DnDConstants;
using $DragGestureListener = ::java::awt::dnd::DragGestureListener;
using $DragGestureRecognizer = ::java::awt::dnd::DragGestureRecognizer;
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
		namespace windows {

$FieldInfo _WMouseDragGestureRecognizer_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WMouseDragGestureRecognizer, serialVersionUID)},
	{"motionThreshold", "I", nullptr, $PROTECTED | $STATIC, $staticField(WMouseDragGestureRecognizer, motionThreshold)},
	{"ButtonMask", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(WMouseDragGestureRecognizer, ButtonMask)},
	{}
};

$MethodInfo _WMouseDragGestureRecognizer_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/dnd/DragSource;Ljava/awt/Component;ILjava/awt/dnd/DragGestureListener;)V", nullptr, $PROTECTED, $method(static_cast<void(WMouseDragGestureRecognizer::*)($DragSource*,$Component*,int32_t,$DragGestureListener*)>(&WMouseDragGestureRecognizer::init$))},
	{"<init>", "(Ljava/awt/dnd/DragSource;Ljava/awt/Component;I)V", nullptr, $PROTECTED, $method(static_cast<void(WMouseDragGestureRecognizer::*)($DragSource*,$Component*,int32_t)>(&WMouseDragGestureRecognizer::init$))},
	{"<init>", "(Ljava/awt/dnd/DragSource;Ljava/awt/Component;)V", nullptr, $PROTECTED, $method(static_cast<void(WMouseDragGestureRecognizer::*)($DragSource*,$Component*)>(&WMouseDragGestureRecognizer::init$))},
	{"<init>", "(Ljava/awt/dnd/DragSource;)V", nullptr, $PROTECTED, $method(static_cast<void(WMouseDragGestureRecognizer::*)($DragSource*)>(&WMouseDragGestureRecognizer::init$))},
	{"mapDragOperationFromModifiers", "(Ljava/awt/event/MouseEvent;)I", nullptr, $PROTECTED, $method(static_cast<int32_t(WMouseDragGestureRecognizer::*)($MouseEvent*)>(&WMouseDragGestureRecognizer::mapDragOperationFromModifiers))},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _WMouseDragGestureRecognizer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.windows.WMouseDragGestureRecognizer",
	"java.awt.dnd.MouseDragGestureRecognizer",
	nullptr,
	_WMouseDragGestureRecognizer_FieldInfo_,
	_WMouseDragGestureRecognizer_MethodInfo_
};

$Object* allocate$WMouseDragGestureRecognizer($Class* clazz) {
	return $of($alloc(WMouseDragGestureRecognizer));
}

int32_t WMouseDragGestureRecognizer::motionThreshold = 0;

void WMouseDragGestureRecognizer::init$($DragSource* ds, $Component* c, int32_t act, $DragGestureListener* dgl) {
	$MouseDragGestureRecognizer::init$(ds, c, act, dgl);
}

void WMouseDragGestureRecognizer::init$($DragSource* ds, $Component* c, int32_t act) {
	WMouseDragGestureRecognizer::init$(ds, c, act, nullptr);
}

void WMouseDragGestureRecognizer::init$($DragSource* ds, $Component* c) {
	WMouseDragGestureRecognizer::init$(ds, c, $DnDConstants::ACTION_NONE);
}

void WMouseDragGestureRecognizer::init$($DragSource* ds) {
	WMouseDragGestureRecognizer::init$(ds, nullptr);
}

int32_t WMouseDragGestureRecognizer::mapDragOperationFromModifiers($MouseEvent* e) {
	int32_t mods = $nc(e)->getModifiersEx();
	int32_t btns = (int32_t)(mods & (uint32_t)WMouseDragGestureRecognizer::ButtonMask);
	if (!(btns == $InputEvent::BUTTON1_DOWN_MASK || btns == $InputEvent::BUTTON2_DOWN_MASK || btns == $InputEvent::BUTTON3_DOWN_MASK)) {
		return $DnDConstants::ACTION_NONE;
	}
	return $SunDragSourceContextPeer::convertModifiersToDropAction(mods, getSourceActions());
}

void WMouseDragGestureRecognizer::mouseClicked($MouseEvent* e) {
}

void WMouseDragGestureRecognizer::mousePressed($MouseEvent* e) {
	$nc(this->events)->clear();
	if (mapDragOperationFromModifiers(e) != $DnDConstants::ACTION_NONE) {
		try {
			WMouseDragGestureRecognizer::motionThreshold = $DragSource::getDragThreshold();
		} catch ($Exception& exc) {
			WMouseDragGestureRecognizer::motionThreshold = 5;
		}
		appendEvent(e);
	}
}

void WMouseDragGestureRecognizer::mouseReleased($MouseEvent* e) {
	$nc(this->events)->clear();
}

void WMouseDragGestureRecognizer::mouseEntered($MouseEvent* e) {
	$nc(this->events)->clear();
}

void WMouseDragGestureRecognizer::mouseExited($MouseEvent* e) {
	if (!$nc(this->events)->isEmpty()) {
		int32_t dragAction = mapDragOperationFromModifiers(e);
		if (dragAction == $DnDConstants::ACTION_NONE) {
			$nc(this->events)->clear();
		}
	}
}

void WMouseDragGestureRecognizer::mouseDragged($MouseEvent* e) {
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
		if (dx > WMouseDragGestureRecognizer::motionThreshold || dy > WMouseDragGestureRecognizer::motionThreshold) {
			fireDragGestureRecognized(dop, $($nc(($cast($MouseEvent, $(getTriggerEvent()))))->getPoint()));
		} else {
			appendEvent(e);
		}
	}
}

void WMouseDragGestureRecognizer::mouseMoved($MouseEvent* e) {
}

WMouseDragGestureRecognizer::WMouseDragGestureRecognizer() {
}

$Class* WMouseDragGestureRecognizer::load$($String* name, bool initialize) {
	$loadClass(WMouseDragGestureRecognizer, name, initialize, &_WMouseDragGestureRecognizer_ClassInfo_, allocate$WMouseDragGestureRecognizer);
	return class$;
}

$Class* WMouseDragGestureRecognizer::class$ = nullptr;

		} // windows
	} // awt
} // sun