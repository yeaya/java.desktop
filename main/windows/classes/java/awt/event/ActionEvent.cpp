#include <java/awt/event/ActionEvent.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef ACTION_FIRST
#undef ACTION_LAST
#undef ACTION_PERFORMED
#undef ALT_MASK
#undef CTRL_MASK
#undef META_MASK
#undef SHIFT_MASK

using $AWTEvent = ::java::awt::AWTEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace event {

$FieldInfo _ActionEvent_FieldInfo_[] = {
	{"SHIFT_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ActionEvent, SHIFT_MASK)},
	{"CTRL_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ActionEvent, CTRL_MASK)},
	{"META_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ActionEvent, META_MASK)},
	{"ALT_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ActionEvent, ALT_MASK)},
	{"ACTION_FIRST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ActionEvent, ACTION_FIRST)},
	{"ACTION_LAST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ActionEvent, ACTION_LAST)},
	{"ACTION_PERFORMED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ActionEvent, ACTION_PERFORMED)},
	{"actionCommand", "Ljava/lang/String;", nullptr, 0, $field(ActionEvent, actionCommand)},
	{"when", "J", nullptr, 0, $field(ActionEvent, when)},
	{"modifiers", "I", nullptr, 0, $field(ActionEvent, modifiers)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ActionEvent, serialVersionUID)},
	{}
};

$MethodInfo _ActionEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;ILjava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ActionEvent::*)(Object$*,int32_t,$String*)>(&ActionEvent::init$))},
	{"<init>", "(Ljava/lang/Object;ILjava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(ActionEvent::*)(Object$*,int32_t,$String*,int32_t)>(&ActionEvent::init$))},
	{"<init>", "(Ljava/lang/Object;ILjava/lang/String;JI)V", nullptr, $PUBLIC, $method(static_cast<void(ActionEvent::*)(Object$*,int32_t,$String*,int64_t,int32_t)>(&ActionEvent::init$))},
	{"getActionCommand", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getModifiers", "()I", nullptr, $PUBLIC},
	{"getWhen", "()J", nullptr, $PUBLIC},
	{"paramString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ActionEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.event.ActionEvent",
	"java.awt.AWTEvent",
	nullptr,
	_ActionEvent_FieldInfo_,
	_ActionEvent_MethodInfo_
};

$Object* allocate$ActionEvent($Class* clazz) {
	return $of($alloc(ActionEvent));
}

void ActionEvent::init$(Object$* source, int32_t id, $String* command) {
	ActionEvent::init$(source, id, command, 0);
}

void ActionEvent::init$(Object$* source, int32_t id, $String* command, int32_t modifiers) {
	ActionEvent::init$(source, id, command, 0, modifiers);
}

void ActionEvent::init$(Object$* source, int32_t id, $String* command, int64_t when, int32_t modifiers) {
	$AWTEvent::init$(source, id);
	$set(this, actionCommand, command);
	this->when = when;
	this->modifiers = modifiers;
}

$String* ActionEvent::getActionCommand() {
	return this->actionCommand;
}

int64_t ActionEvent::getWhen() {
	return this->when;
}

int32_t ActionEvent::getModifiers() {
	return this->modifiers;
}

$String* ActionEvent::paramString() {
	$var($String, typeStr, nullptr);
	switch (this->id) {
	case ActionEvent::ACTION_PERFORMED:
		{
			$assign(typeStr, "ACTION_PERFORMED"_s);
			break;
		}
	default:
		{
			$assign(typeStr, "unknown type"_s);
		}
	}
	return $str({typeStr, ",cmd="_s, this->actionCommand, ",when="_s, $$str(this->when), ",modifiers="_s, $($KeyEvent::getKeyModifiersText(this->modifiers))});
}

ActionEvent::ActionEvent() {
}

$Class* ActionEvent::load$($String* name, bool initialize) {
	$loadClass(ActionEvent, name, initialize, &_ActionEvent_ClassInfo_, allocate$ActionEvent);
	return class$;
}

$Class* ActionEvent::class$ = nullptr;

		} // event
	} // awt
} // java