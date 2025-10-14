#include <javax/swing/JLayer$LayerEventController.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/ContainerEvent.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/HierarchyEvent.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/InputMethodEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/ArrayList.h>
#include <java/util/EventObject.h>
#include <java/util/Iterator.h>
#include <javax/swing/JLayer$LayerEventController$1.h>
#include <javax/swing/JLayer$LayerEventController$2.h>
#include <javax/swing/JLayer.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/LayerUI.h>
#include <jcpp.h>

#undef ACCEPTED_EVENTS
#undef ANCESTOR_MOVED
#undef ANCESTOR_RESIZED
#undef COMPONENT_EVENT_MASK
#undef COMPONENT_FIRST
#undef COMPONENT_LAST
#undef CONTAINER_EVENT_MASK
#undef CONTAINER_FIRST
#undef CONTAINER_LAST
#undef FOCUS_EVENT_MASK
#undef FOCUS_FIRST
#undef FOCUS_LAST
#undef HIERARCHY_BOUNDS_EVENT_MASK
#undef HIERARCHY_CHANGED
#undef HIERARCHY_EVENT_MASK
#undef INPUT_METHOD_EVENT_MASK
#undef INPUT_METHOD_FIRST
#undef INPUT_METHOD_LAST
#undef KEY_EVENT_MASK
#undef KEY_FIRST
#undef KEY_LAST
#undef MOUSE_DRAGGED
#undef MOUSE_EVENT_MASK
#undef MOUSE_FIRST
#undef MOUSE_LAST
#undef MOUSE_MOTION_EVENT_MASK
#undef MOUSE_MOVED
#undef MOUSE_WHEEL
#undef MOUSE_WHEEL_EVENT_MASK

using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $AWTEventListener = ::java::awt::event::AWTEventListener;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $ContainerEvent = ::java::awt::event::ContainerEvent;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $HierarchyEvent = ::java::awt::event::HierarchyEvent;
using $InputEvent = ::java::awt::event::InputEvent;
using $InputMethodEvent = ::java::awt::event::InputMethodEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ArrayList = ::java::util::ArrayList;
using $EventObject = ::java::util::EventObject;
using $Iterator = ::java::util::Iterator;
using $JLayer = ::javax::swing::JLayer;
using $JLayer$LayerEventController$1 = ::javax::swing::JLayer$LayerEventController$1;
using $JLayer$LayerEventController$2 = ::javax::swing::JLayer$LayerEventController$2;
using $LayerUI = ::javax::swing::plaf::LayerUI;

namespace javax {
	namespace swing {

$FieldInfo _JLayer$LayerEventController_FieldInfo_[] = {
	{"layerMaskList", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljava/lang/Long;>;", $PRIVATE, $field(JLayer$LayerEventController, layerMaskList)},
	{"currentEventMask", "J", nullptr, $PRIVATE, $field(JLayer$LayerEventController, currentEventMask)},
	{"ACCEPTED_EVENTS", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JLayer$LayerEventController, ACCEPTED_EVENTS)},
	{}
};

$MethodInfo _JLayer$LayerEventController_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(JLayer$LayerEventController::*)()>(&JLayer$LayerEventController::init$))},
	{"addAWTEventListener", "(J)V", nullptr, $PRIVATE, $method(static_cast<void(JLayer$LayerEventController::*)(int64_t)>(&JLayer$LayerEventController::addAWTEventListener))},
	{"eventDispatched", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{"getCurrentEventMask", "()J", nullptr, $PRIVATE, $method(static_cast<int64_t(JLayer$LayerEventController::*)()>(&JLayer$LayerEventController::getCurrentEventMask))},
	{"isEventEnabled", "(JI)Z", nullptr, $PRIVATE, $method(static_cast<bool(JLayer$LayerEventController::*)(int64_t,int32_t)>(&JLayer$LayerEventController::isEventEnabled))},
	{"removeAWTEventListener", "()V", nullptr, $PRIVATE, $method(static_cast<void(JLayer$LayerEventController::*)()>(&JLayer$LayerEventController::removeAWTEventListener))},
	{"updateAWTEventListener", "(JJ)V", nullptr, $PRIVATE, $method(static_cast<void(JLayer$LayerEventController::*)(int64_t,int64_t)>(&JLayer$LayerEventController::updateAWTEventListener))},
	{}
};

$InnerClassInfo _JLayer$LayerEventController_InnerClassesInfo_[] = {
	{"javax.swing.JLayer$LayerEventController", "javax.swing.JLayer", "LayerEventController", $PRIVATE | $STATIC},
	{"javax.swing.JLayer$LayerEventController$2", nullptr, nullptr, 0},
	{"javax.swing.JLayer$LayerEventController$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JLayer$LayerEventController_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JLayer$LayerEventController",
	"java.lang.Object",
	"java.awt.event.AWTEventListener",
	_JLayer$LayerEventController_FieldInfo_,
	_JLayer$LayerEventController_MethodInfo_,
	nullptr,
	nullptr,
	_JLayer$LayerEventController_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JLayer"
};

$Object* allocate$JLayer$LayerEventController($Class* clazz) {
	return $of($alloc(JLayer$LayerEventController));
}

void JLayer$LayerEventController::init$() {
	$set(this, layerMaskList, $new($ArrayList));
}

void JLayer$LayerEventController::eventDispatched($AWTEvent* event) {
	$var($Object, source, $nc(event)->getSource());
	if ($instanceOf($Component, source)) {
		$var($Component, component, $cast($Component, source));
		while (component != nullptr) {
			if ($instanceOf($JLayer, component)) {
				$var($JLayer, l, $cast($JLayer, component));
				$var($LayerUI, ui, $cast($LayerUI, l->getUI()));
				bool var$1 = ui != nullptr;
				if (var$1) {
					int64_t var$2 = l->getLayerEventMask();
					var$1 = isEventEnabled(var$2, event->getID());
				}
				bool var$0 = var$1;
				if (var$0 && (!($instanceOf($InputEvent, event)) || !$nc(($cast($InputEvent, event)))->isConsumed())) {
					$nc(ui)->eventDispatched(event, l);
				}
			}
			$assign(component, component->getParent());
		}
	}
}

void JLayer$LayerEventController::updateAWTEventListener(int64_t oldEventMask, int64_t newEventMask) {
	if (oldEventMask != 0) {
		$nc(this->layerMaskList)->remove($($of($Long::valueOf(oldEventMask))));
	}
	if (newEventMask != 0) {
		$nc(this->layerMaskList)->add($($Long::valueOf(newEventMask)));
	}
	int64_t combinedMask = 0;
	{
		$var($Iterator, i$, $nc(this->layerMaskList)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Long, mask, $cast($Long, i$->next()));
			{
				combinedMask |= $nc(mask)->longValue();
			}
		}
	}
	combinedMask &= (uint64_t)JLayer$LayerEventController::ACCEPTED_EVENTS;
	if (combinedMask == 0) {
		removeAWTEventListener();
	} else if (getCurrentEventMask() != combinedMask) {
		removeAWTEventListener();
		addAWTEventListener(combinedMask);
	}
	this->currentEventMask = combinedMask;
}

int64_t JLayer$LayerEventController::getCurrentEventMask() {
	return this->currentEventMask;
}

void JLayer$LayerEventController::addAWTEventListener(int64_t eventMask) {
	$beforeCallerSensitive();
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($JLayer$LayerEventController$1, this, eventMask)));
}

void JLayer$LayerEventController::removeAWTEventListener() {
	$beforeCallerSensitive();
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($JLayer$LayerEventController$2, this)));
}

bool JLayer$LayerEventController::isEventEnabled(int64_t eventMask, int32_t id) {
	return ((((int64_t)(eventMask & (uint64_t)$AWTEvent::COMPONENT_EVENT_MASK)) != 0 && id >= $ComponentEvent::COMPONENT_FIRST && id <= $ComponentEvent::COMPONENT_LAST) || (((int64_t)(eventMask & (uint64_t)$AWTEvent::CONTAINER_EVENT_MASK)) != 0 && id >= $ContainerEvent::CONTAINER_FIRST && id <= $ContainerEvent::CONTAINER_LAST) || (((int64_t)(eventMask & (uint64_t)$AWTEvent::FOCUS_EVENT_MASK)) != 0 && id >= $FocusEvent::FOCUS_FIRST && id <= $FocusEvent::FOCUS_LAST) || (((int64_t)(eventMask & (uint64_t)$AWTEvent::KEY_EVENT_MASK)) != 0 && id >= $KeyEvent::KEY_FIRST && id <= $KeyEvent::KEY_LAST) || (((int64_t)(eventMask & (uint64_t)$AWTEvent::MOUSE_WHEEL_EVENT_MASK)) != 0 && id == $MouseEvent::MOUSE_WHEEL) || (((int64_t)(eventMask & (uint64_t)$AWTEvent::MOUSE_MOTION_EVENT_MASK)) != 0 && (id == $MouseEvent::MOUSE_MOVED || id == $MouseEvent::MOUSE_DRAGGED)) || (((int64_t)(eventMask & (uint64_t)$AWTEvent::MOUSE_EVENT_MASK)) != 0 && id != $MouseEvent::MOUSE_MOVED && id != $MouseEvent::MOUSE_DRAGGED && id != $MouseEvent::MOUSE_WHEEL && id >= $MouseEvent::MOUSE_FIRST && id <= $MouseEvent::MOUSE_LAST) || (((int64_t)(eventMask & (uint64_t)$AWTEvent::INPUT_METHOD_EVENT_MASK)) != 0 && id >= $InputMethodEvent::INPUT_METHOD_FIRST && id <= $InputMethodEvent::INPUT_METHOD_LAST) || (((int64_t)(eventMask & (uint64_t)$AWTEvent::HIERARCHY_EVENT_MASK)) != 0 && id == $HierarchyEvent::HIERARCHY_CHANGED) || (((int64_t)(eventMask & (uint64_t)$AWTEvent::HIERARCHY_BOUNDS_EVENT_MASK)) != 0 && (id == $HierarchyEvent::ANCESTOR_MOVED || id == $HierarchyEvent::ANCESTOR_RESIZED)));
}

JLayer$LayerEventController::JLayer$LayerEventController() {
}

$Class* JLayer$LayerEventController::load$($String* name, bool initialize) {
	$loadClass(JLayer$LayerEventController, name, initialize, &_JLayer$LayerEventController_ClassInfo_, allocate$JLayer$LayerEventController);
	return class$;
}

$Class* JLayer$LayerEventController::class$ = nullptr;

	} // swing
} // javax