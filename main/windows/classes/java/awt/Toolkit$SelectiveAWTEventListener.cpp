#include <java/awt/Toolkit$SelectiveAWTEventListener.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/AWTEventListener.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/AdjustmentEvent.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/ContainerEvent.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/HierarchyEvent.h>
#include <java/awt/event/InputMethodEvent.h>
#include <java/awt/event/InvocationEvent.h>
#include <java/awt/event/ItemEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/event/TextEvent.h>
#include <java/awt/event/WindowEvent.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/UngrabEvent.h>
#include <jcpp.h>

#undef ACTION_EVENT_MASK
#undef ACTION_FIRST
#undef ACTION_LAST
#undef ADJUSTMENT_EVENT_MASK
#undef ADJUSTMENT_FIRST
#undef ADJUSTMENT_LAST
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
#undef GRAB_EVENT_MASK
#undef HIERARCHY_BOUNDS_EVENT_MASK
#undef HIERARCHY_CHANGED
#undef HIERARCHY_EVENT_MASK
#undef INPUT_METHOD_EVENT_MASK
#undef INPUT_METHOD_FIRST
#undef INPUT_METHOD_LAST
#undef INVOCATION_EVENT_MASK
#undef INVOCATION_FIRST
#undef INVOCATION_LAST
#undef ITEM_EVENT_MASK
#undef ITEM_FIRST
#undef ITEM_LAST
#undef KEY_EVENT_MASK
#undef KEY_FIRST
#undef KEY_LAST
#undef LONG_BITS
#undef MOUSE_DRAGGED
#undef MOUSE_EVENT_MASK
#undef MOUSE_FIRST
#undef MOUSE_LAST
#undef MOUSE_MOTION_EVENT_MASK
#undef MOUSE_MOVED
#undef MOUSE_WHEEL
#undef MOUSE_WHEEL_EVENT_MASK
#undef PAINT_EVENT_MASK
#undef PAINT_FIRST
#undef PAINT_LAST
#undef TEXT_EVENT_MASK
#undef TEXT_FIRST
#undef TEXT_LAST
#undef WINDOW_EVENT_MASK
#undef WINDOW_FIRST
#undef WINDOW_FOCUS_EVENT_MASK
#undef WINDOW_GAINED_FOCUS
#undef WINDOW_LAST
#undef WINDOW_LOST_FOCUS
#undef WINDOW_STATE_CHANGED
#undef WINDOW_STATE_EVENT_MASK

using $AWTEvent = ::java::awt::AWTEvent;
using $Toolkit = ::java::awt::Toolkit;
using $AWTEventListener = ::java::awt::event::AWTEventListener;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $AdjustmentEvent = ::java::awt::event::AdjustmentEvent;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $ContainerEvent = ::java::awt::event::ContainerEvent;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $HierarchyEvent = ::java::awt::event::HierarchyEvent;
using $InputMethodEvent = ::java::awt::event::InputMethodEvent;
using $InvocationEvent = ::java::awt::event::InvocationEvent;
using $ItemEvent = ::java::awt::event::ItemEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $TextEvent = ::java::awt::event::TextEvent;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunToolkit = ::sun::awt::SunToolkit;
using $UngrabEvent = ::sun::awt::UngrabEvent;

namespace java {
	namespace awt {

$FieldInfo _Toolkit$SelectiveAWTEventListener_FieldInfo_[] = {
	{"this$0", "Ljava/awt/Toolkit;", nullptr, $FINAL | $SYNTHETIC, $field(Toolkit$SelectiveAWTEventListener, this$0)},
	{"listener", "Ljava/awt/event/AWTEventListener;", nullptr, 0, $field(Toolkit$SelectiveAWTEventListener, listener)},
	{"eventMask", "J", nullptr, $PRIVATE, $field(Toolkit$SelectiveAWTEventListener, eventMask)},
	{"calls", "[I", nullptr, 0, $field(Toolkit$SelectiveAWTEventListener, calls)},
	{}
};

$MethodInfo _Toolkit$SelectiveAWTEventListener_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Toolkit;Ljava/awt/event/AWTEventListener;J)V", nullptr, 0, $method(static_cast<void(Toolkit$SelectiveAWTEventListener::*)($Toolkit*,$AWTEventListener*,int64_t)>(&Toolkit$SelectiveAWTEventListener::init$))},
	{"eventDispatched", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{"getCalls", "()[I", nullptr, $PUBLIC},
	{"getEventMask", "()J", nullptr, $PUBLIC},
	{"getListener", "()Ljava/awt/event/AWTEventListener;", nullptr, $PUBLIC},
	{"orEventMasks", "(J)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Toolkit$SelectiveAWTEventListener_InnerClassesInfo_[] = {
	{"java.awt.Toolkit$SelectiveAWTEventListener", "java.awt.Toolkit", "SelectiveAWTEventListener", $PRIVATE},
	{}
};

$ClassInfo _Toolkit$SelectiveAWTEventListener_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.Toolkit$SelectiveAWTEventListener",
	"java.lang.Object",
	"java.awt.event.AWTEventListener",
	_Toolkit$SelectiveAWTEventListener_FieldInfo_,
	_Toolkit$SelectiveAWTEventListener_MethodInfo_,
	nullptr,
	nullptr,
	_Toolkit$SelectiveAWTEventListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Toolkit"
};

$Object* allocate$Toolkit$SelectiveAWTEventListener($Class* clazz) {
	return $of($alloc(Toolkit$SelectiveAWTEventListener));
}

$AWTEventListener* Toolkit$SelectiveAWTEventListener::getListener() {
	return this->listener;
}

int64_t Toolkit$SelectiveAWTEventListener::getEventMask() {
	return this->eventMask;
}

$ints* Toolkit$SelectiveAWTEventListener::getCalls() {
	return this->calls;
}

void Toolkit$SelectiveAWTEventListener::orEventMasks(int64_t mask) {
	this->eventMask |= mask;
	for (int32_t i = 0; i < $Toolkit::LONG_BITS; ++i) {
		if (mask == 0) {
			break;
		}
		if (((int64_t)(mask & (uint64_t)(int64_t)1)) != 0) {
			++(*$nc(this->calls))[i];
		}
		$usrAssign(mask, 1);
	}
}

void Toolkit$SelectiveAWTEventListener::init$($Toolkit* this$0, $AWTEventListener* l, int64_t mask) {
	$set(this, this$0, this$0);
	$set(this, calls, $new($ints, $Toolkit::LONG_BITS));
	$set(this, listener, l);
	this->eventMask = mask;
}

void Toolkit$SelectiveAWTEventListener::eventDispatched($AWTEvent* event) {
	int64_t eventBit = 0;
	bool var$18 = ((eventBit = (int64_t)(this->eventMask & (uint64_t)$AWTEvent::COMPONENT_EVENT_MASK)) != 0 && $nc(event)->id >= $ComponentEvent::COMPONENT_FIRST && event->id <= $ComponentEvent::COMPONENT_LAST);
	bool var$17 = var$18 || ((eventBit = (int64_t)(this->eventMask & (uint64_t)$AWTEvent::CONTAINER_EVENT_MASK)) != 0 && $nc(event)->id >= $ContainerEvent::CONTAINER_FIRST && event->id <= $ContainerEvent::CONTAINER_LAST);
	bool var$16 = var$17 || ((eventBit = (int64_t)(this->eventMask & (uint64_t)$AWTEvent::FOCUS_EVENT_MASK)) != 0 && $nc(event)->id >= $FocusEvent::FOCUS_FIRST && event->id <= $FocusEvent::FOCUS_LAST);
	bool var$15 = var$16 || ((eventBit = (int64_t)(this->eventMask & (uint64_t)$AWTEvent::KEY_EVENT_MASK)) != 0 && $nc(event)->id >= $KeyEvent::KEY_FIRST && event->id <= $KeyEvent::KEY_LAST);
	bool var$14 = var$15 || ((eventBit = (int64_t)(this->eventMask & (uint64_t)$AWTEvent::MOUSE_WHEEL_EVENT_MASK)) != 0 && $nc(event)->id == $MouseEvent::MOUSE_WHEEL);
	bool var$13 = var$14 || ((eventBit = (int64_t)(this->eventMask & (uint64_t)$AWTEvent::MOUSE_MOTION_EVENT_MASK)) != 0 && ($nc(event)->id == $MouseEvent::MOUSE_MOVED || $nc(event)->id == $MouseEvent::MOUSE_DRAGGED));
	bool var$12 = var$13 || ((eventBit = (int64_t)(this->eventMask & (uint64_t)$AWTEvent::MOUSE_EVENT_MASK)) != 0 && $nc(event)->id != $MouseEvent::MOUSE_MOVED && event->id != $MouseEvent::MOUSE_DRAGGED && event->id != $MouseEvent::MOUSE_WHEEL && event->id >= $MouseEvent::MOUSE_FIRST && event->id <= $MouseEvent::MOUSE_LAST);
	bool var$11 = var$12 || ((eventBit = (int64_t)(this->eventMask & (uint64_t)$AWTEvent::WINDOW_EVENT_MASK)) != 0 && ($nc(event)->id >= $WindowEvent::WINDOW_FIRST && event->id <= $WindowEvent::WINDOW_LAST));
	bool var$10 = var$11 || ((eventBit = (int64_t)(this->eventMask & (uint64_t)$AWTEvent::ACTION_EVENT_MASK)) != 0 && $nc(event)->id >= $ActionEvent::ACTION_FIRST && event->id <= $ActionEvent::ACTION_LAST);
	bool var$9 = var$10 || ((eventBit = (int64_t)(this->eventMask & (uint64_t)$AWTEvent::ADJUSTMENT_EVENT_MASK)) != 0 && $nc(event)->id >= $AdjustmentEvent::ADJUSTMENT_FIRST && event->id <= $AdjustmentEvent::ADJUSTMENT_LAST);
	bool var$8 = var$9 || ((eventBit = (int64_t)(this->eventMask & (uint64_t)$AWTEvent::ITEM_EVENT_MASK)) != 0 && $nc(event)->id >= $ItemEvent::ITEM_FIRST && event->id <= $ItemEvent::ITEM_LAST);
	bool var$7 = var$8 || ((eventBit = (int64_t)(this->eventMask & (uint64_t)$AWTEvent::TEXT_EVENT_MASK)) != 0 && $nc(event)->id >= $TextEvent::TEXT_FIRST && event->id <= $TextEvent::TEXT_LAST);
	bool var$6 = var$7 || ((eventBit = (int64_t)(this->eventMask & (uint64_t)$AWTEvent::INPUT_METHOD_EVENT_MASK)) != 0 && $nc(event)->id >= $InputMethodEvent::INPUT_METHOD_FIRST && event->id <= $InputMethodEvent::INPUT_METHOD_LAST);
	bool var$5 = var$6 || ((eventBit = (int64_t)(this->eventMask & (uint64_t)$AWTEvent::PAINT_EVENT_MASK)) != 0 && $nc(event)->id >= $PaintEvent::PAINT_FIRST && event->id <= $PaintEvent::PAINT_LAST);
	bool var$4 = var$5 || ((eventBit = (int64_t)(this->eventMask & (uint64_t)$AWTEvent::INVOCATION_EVENT_MASK)) != 0 && $nc(event)->id >= $InvocationEvent::INVOCATION_FIRST && event->id <= $InvocationEvent::INVOCATION_LAST);
	bool var$3 = var$4 || ((eventBit = (int64_t)(this->eventMask & (uint64_t)$AWTEvent::HIERARCHY_EVENT_MASK)) != 0 && $nc(event)->id == $HierarchyEvent::HIERARCHY_CHANGED);
	bool var$2 = var$3 || ((eventBit = (int64_t)(this->eventMask & (uint64_t)$AWTEvent::HIERARCHY_BOUNDS_EVENT_MASK)) != 0 && ($nc(event)->id == $HierarchyEvent::ANCESTOR_MOVED || $nc(event)->id == $HierarchyEvent::ANCESTOR_RESIZED));
	bool var$1 = var$2 || ((eventBit = (int64_t)(this->eventMask & (uint64_t)$AWTEvent::WINDOW_STATE_EVENT_MASK)) != 0 && $nc(event)->id == $WindowEvent::WINDOW_STATE_CHANGED);
	bool var$0 = var$1 || ((eventBit = (int64_t)(this->eventMask & (uint64_t)$AWTEvent::WINDOW_FOCUS_EVENT_MASK)) != 0 && ($nc(event)->id == $WindowEvent::WINDOW_GAINED_FOCUS || $nc(event)->id == $WindowEvent::WINDOW_LOST_FOCUS));
	if (var$0 || ((eventBit = (int64_t)(this->eventMask & (uint64_t)(int64_t)$SunToolkit::GRAB_EVENT_MASK)) != 0 && ($instanceOf($UngrabEvent, event)))) {
		int32_t ci = 0;
		for (int64_t eMask = eventBit; eMask != 0; $usrAssign(eMask, 1), ++ci) {
		}
		--ci;
		for (int32_t i = 0; i < $nc(this->calls)->get(ci); ++i) {
			$nc(this->listener)->eventDispatched(event);
		}
	}
}

Toolkit$SelectiveAWTEventListener::Toolkit$SelectiveAWTEventListener() {
}

$Class* Toolkit$SelectiveAWTEventListener::load$($String* name, bool initialize) {
	$loadClass(Toolkit$SelectiveAWTEventListener, name, initialize, &_Toolkit$SelectiveAWTEventListener_ClassInfo_, allocate$Toolkit$SelectiveAWTEventListener);
	return class$;
}

$Class* Toolkit$SelectiveAWTEventListener::class$ = nullptr;

	} // awt
} // java