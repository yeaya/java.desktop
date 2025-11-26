#include <java/awt/dnd/DragSourceDragEvent.h>

#include <java/awt/dnd/DnDConstants.h>
#include <java/awt/dnd/DragSourceContext.h>
#include <java/awt/dnd/DragSourceEvent.h>
#include <java/awt/event/InputEvent.h>
#include <jcpp.h>

#undef ACTION_NONE
#undef ALT_GRAPH_DOWN_MASK
#undef ALT_GRAPH_MASK
#undef BUTTON1_DOWN_MASK
#undef BUTTON1_MASK
#undef BUTTON2_DOWN_MASK
#undef BUTTON2_MASK
#undef BUTTON3_DOWN_MASK
#undef BUTTON3_MASK
#undef CTRL_DOWN_MASK
#undef CTRL_MASK
#undef JDK_1_3_MODIFIERS
#undef JDK_1_4_MODIFIERS
#undef SHIFT_DOWN_MASK
#undef SHIFT_MASK

using $DnDConstants = ::java::awt::dnd::DnDConstants;
using $DragSourceContext = ::java::awt::dnd::DragSourceContext;
using $DragSourceEvent = ::java::awt::dnd::DragSourceEvent;
using $InputEvent = ::java::awt::event::InputEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace dnd {

$FieldInfo _DragSourceDragEvent_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DragSourceDragEvent, serialVersionUID)},
	{"JDK_1_3_MODIFIERS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DragSourceDragEvent, JDK_1_3_MODIFIERS)},
	{"JDK_1_4_MODIFIERS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DragSourceDragEvent, JDK_1_4_MODIFIERS)},
	{"targetActions", "I", nullptr, $PRIVATE, $field(DragSourceDragEvent, targetActions)},
	{"dropAction", "I", nullptr, $PRIVATE, $field(DragSourceDragEvent, dropAction)},
	{"gestureModifiers", "I", nullptr, $PRIVATE, $field(DragSourceDragEvent, gestureModifiers)},
	{"invalidModifiers", "Z", nullptr, $PRIVATE, $field(DragSourceDragEvent, invalidModifiers)},
	{}
};

$MethodInfo _DragSourceDragEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/dnd/DragSourceContext;III)V", nullptr, $PUBLIC, $method(static_cast<void(DragSourceDragEvent::*)($DragSourceContext*,int32_t,int32_t,int32_t)>(&DragSourceDragEvent::init$))},
	{"<init>", "(Ljava/awt/dnd/DragSourceContext;IIIII)V", nullptr, $PUBLIC, $method(static_cast<void(DragSourceDragEvent::*)($DragSourceContext*,int32_t,int32_t,int32_t,int32_t,int32_t)>(&DragSourceDragEvent::init$))},
	{"getDropAction", "()I", nullptr, $PUBLIC},
	{"getGestureModifiers", "()I", nullptr, $PUBLIC},
	{"getGestureModifiersEx", "()I", nullptr, $PUBLIC},
	{"getTargetActions", "()I", nullptr, $PUBLIC},
	{"getUserAction", "()I", nullptr, $PUBLIC},
	{"setNewModifiers", "()V", nullptr, $PRIVATE, $method(static_cast<void(DragSourceDragEvent::*)()>(&DragSourceDragEvent::setNewModifiers))},
	{"setOldModifiers", "()V", nullptr, $PRIVATE, $method(static_cast<void(DragSourceDragEvent::*)()>(&DragSourceDragEvent::setOldModifiers))},
	{}
};

$ClassInfo _DragSourceDragEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.dnd.DragSourceDragEvent",
	"java.awt.dnd.DragSourceEvent",
	nullptr,
	_DragSourceDragEvent_FieldInfo_,
	_DragSourceDragEvent_MethodInfo_
};

$Object* allocate$DragSourceDragEvent($Class* clazz) {
	return $of($alloc(DragSourceDragEvent));
}

void DragSourceDragEvent::init$($DragSourceContext* dsc, int32_t dropAction, int32_t action, int32_t modifiers) {
	$DragSourceEvent::init$(dsc);
	this->targetActions = $DnDConstants::ACTION_NONE;
	this->dropAction = $DnDConstants::ACTION_NONE;
	this->gestureModifiers = 0;
	this->targetActions = action;
	this->gestureModifiers = modifiers;
	this->dropAction = dropAction;
	if (((int32_t)(modifiers & (uint32_t)~(DragSourceDragEvent::JDK_1_3_MODIFIERS | DragSourceDragEvent::JDK_1_4_MODIFIERS))) != 0) {
		this->invalidModifiers = true;
	} else {
		bool var$1 = (getGestureModifiers() != 0);
		if (var$1 && (getGestureModifiersEx() == 0)) {
			setNewModifiers();
		} else {
			bool var$3 = (getGestureModifiers() == 0);
			if (var$3 && (getGestureModifiersEx() != 0)) {
				setOldModifiers();
			} else {
				this->invalidModifiers = true;
			}
		}
	}
}

void DragSourceDragEvent::init$($DragSourceContext* dsc, int32_t dropAction, int32_t action, int32_t modifiers, int32_t x, int32_t y) {
	$DragSourceEvent::init$(dsc, x, y);
	this->targetActions = $DnDConstants::ACTION_NONE;
	this->dropAction = $DnDConstants::ACTION_NONE;
	this->gestureModifiers = 0;
	this->targetActions = action;
	this->gestureModifiers = modifiers;
	this->dropAction = dropAction;
	if (((int32_t)(modifiers & (uint32_t)~(DragSourceDragEvent::JDK_1_3_MODIFIERS | DragSourceDragEvent::JDK_1_4_MODIFIERS))) != 0) {
		this->invalidModifiers = true;
	} else {
		bool var$1 = (getGestureModifiers() != 0);
		if (var$1 && (getGestureModifiersEx() == 0)) {
			setNewModifiers();
		} else {
			bool var$3 = (getGestureModifiers() == 0);
			if (var$3 && (getGestureModifiersEx() != 0)) {
				setOldModifiers();
			} else {
				this->invalidModifiers = true;
			}
		}
	}
}

int32_t DragSourceDragEvent::getTargetActions() {
	return this->targetActions;
}

int32_t DragSourceDragEvent::getGestureModifiers() {
	return this->invalidModifiers ? this->gestureModifiers : (int32_t)(this->gestureModifiers & (uint32_t)DragSourceDragEvent::JDK_1_3_MODIFIERS);
}

int32_t DragSourceDragEvent::getGestureModifiersEx() {
	return this->invalidModifiers ? this->gestureModifiers : (int32_t)(this->gestureModifiers & (uint32_t)DragSourceDragEvent::JDK_1_4_MODIFIERS);
}

int32_t DragSourceDragEvent::getUserAction() {
	return this->dropAction;
}

int32_t DragSourceDragEvent::getDropAction() {
	return (int32_t)(this->targetActions & (uint32_t)$nc($(getDragSourceContext()))->getSourceActions());
}

void DragSourceDragEvent::setNewModifiers() {
	if (((int32_t)(this->gestureModifiers & (uint32_t)$InputEvent::BUTTON1_MASK)) != 0) {
		this->gestureModifiers |= $InputEvent::BUTTON1_DOWN_MASK;
	}
	if (((int32_t)(this->gestureModifiers & (uint32_t)$InputEvent::BUTTON2_MASK)) != 0) {
		this->gestureModifiers |= $InputEvent::BUTTON2_DOWN_MASK;
	}
	if (((int32_t)(this->gestureModifiers & (uint32_t)$InputEvent::BUTTON3_MASK)) != 0) {
		this->gestureModifiers |= $InputEvent::BUTTON3_DOWN_MASK;
	}
	if (((int32_t)(this->gestureModifiers & (uint32_t)$InputEvent::SHIFT_MASK)) != 0) {
		this->gestureModifiers |= $InputEvent::SHIFT_DOWN_MASK;
	}
	if (((int32_t)(this->gestureModifiers & (uint32_t)$InputEvent::CTRL_MASK)) != 0) {
		this->gestureModifiers |= $InputEvent::CTRL_DOWN_MASK;
	}
	if (((int32_t)(this->gestureModifiers & (uint32_t)$InputEvent::ALT_GRAPH_MASK)) != 0) {
		this->gestureModifiers |= $InputEvent::ALT_GRAPH_DOWN_MASK;
	}
}

void DragSourceDragEvent::setOldModifiers() {
	if (((int32_t)(this->gestureModifiers & (uint32_t)$InputEvent::BUTTON1_DOWN_MASK)) != 0) {
		this->gestureModifiers |= $InputEvent::BUTTON1_MASK;
	}
	if (((int32_t)(this->gestureModifiers & (uint32_t)$InputEvent::BUTTON2_DOWN_MASK)) != 0) {
		this->gestureModifiers |= $InputEvent::BUTTON2_MASK;
	}
	if (((int32_t)(this->gestureModifiers & (uint32_t)$InputEvent::BUTTON3_DOWN_MASK)) != 0) {
		this->gestureModifiers |= $InputEvent::BUTTON3_MASK;
	}
	if (((int32_t)(this->gestureModifiers & (uint32_t)$InputEvent::SHIFT_DOWN_MASK)) != 0) {
		this->gestureModifiers |= $InputEvent::SHIFT_MASK;
	}
	if (((int32_t)(this->gestureModifiers & (uint32_t)$InputEvent::CTRL_DOWN_MASK)) != 0) {
		this->gestureModifiers |= $InputEvent::CTRL_MASK;
	}
	if (((int32_t)(this->gestureModifiers & (uint32_t)$InputEvent::ALT_GRAPH_DOWN_MASK)) != 0) {
		this->gestureModifiers |= $InputEvent::ALT_GRAPH_MASK;
	}
}

DragSourceDragEvent::DragSourceDragEvent() {
}

$Class* DragSourceDragEvent::load$($String* name, bool initialize) {
	$loadClass(DragSourceDragEvent, name, initialize, &_DragSourceDragEvent_ClassInfo_, allocate$DragSourceDragEvent);
	return class$;
}

$Class* DragSourceDragEvent::class$ = nullptr;

		} // dnd
	} // awt
} // java