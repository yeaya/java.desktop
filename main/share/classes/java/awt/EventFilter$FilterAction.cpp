#include <java/awt/EventFilter$FilterAction.h>

#include <java/awt/EventFilter.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef ACCEPT
#undef ACCEPT_IMMEDIATELY
#undef REJECT

using $EventFilter$FilterActionArray = $Array<::java::awt::EventFilter$FilterAction>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _EventFilter$FilterAction_FieldInfo_[] = {
	{"ACCEPT", "Ljava/awt/EventFilter$FilterAction;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(EventFilter$FilterAction, ACCEPT)},
	{"REJECT", "Ljava/awt/EventFilter$FilterAction;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(EventFilter$FilterAction, REJECT)},
	{"ACCEPT_IMMEDIATELY", "Ljava/awt/EventFilter$FilterAction;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(EventFilter$FilterAction, ACCEPT_IMMEDIATELY)},
	{"$VALUES", "[Ljava/awt/EventFilter$FilterAction;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(EventFilter$FilterAction, $VALUES)},
	{}
};

$MethodInfo _EventFilter$FilterAction_MethodInfo_[] = {
	{"$values", "()[Ljava/awt/EventFilter$FilterAction;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$EventFilter$FilterActionArray*(*)()>(&EventFilter$FilterAction::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(EventFilter$FilterAction::*)($String*,int32_t)>(&EventFilter$FilterAction::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljava/awt/EventFilter$FilterAction;", nullptr, $PUBLIC | $STATIC, $method(static_cast<EventFilter$FilterAction*(*)($String*)>(&EventFilter$FilterAction::valueOf))},
	{"values", "()[Ljava/awt/EventFilter$FilterAction;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$EventFilter$FilterActionArray*(*)()>(&EventFilter$FilterAction::values))},
	{}
};

$InnerClassInfo _EventFilter$FilterAction_InnerClassesInfo_[] = {
	{"java.awt.EventFilter$FilterAction", "java.awt.EventFilter", "FilterAction", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _EventFilter$FilterAction_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.awt.EventFilter$FilterAction",
	"java.lang.Enum",
	nullptr,
	_EventFilter$FilterAction_FieldInfo_,
	_EventFilter$FilterAction_MethodInfo_,
	"Ljava/lang/Enum<Ljava/awt/EventFilter$FilterAction;>;",
	nullptr,
	_EventFilter$FilterAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.EventFilter"
};

$Object* allocate$EventFilter$FilterAction($Class* clazz) {
	return $of($alloc(EventFilter$FilterAction));
}

EventFilter$FilterAction* EventFilter$FilterAction::ACCEPT = nullptr;
EventFilter$FilterAction* EventFilter$FilterAction::REJECT = nullptr;
EventFilter$FilterAction* EventFilter$FilterAction::ACCEPT_IMMEDIATELY = nullptr;
$EventFilter$FilterActionArray* EventFilter$FilterAction::$VALUES = nullptr;

$EventFilter$FilterActionArray* EventFilter$FilterAction::$values() {
	$init(EventFilter$FilterAction);
	return $new($EventFilter$FilterActionArray, {
		EventFilter$FilterAction::ACCEPT,
		EventFilter$FilterAction::REJECT,
		EventFilter$FilterAction::ACCEPT_IMMEDIATELY
	});
}

$EventFilter$FilterActionArray* EventFilter$FilterAction::values() {
	$init(EventFilter$FilterAction);
	return $cast($EventFilter$FilterActionArray, EventFilter$FilterAction::$VALUES->clone());
}

EventFilter$FilterAction* EventFilter$FilterAction::valueOf($String* name) {
	$init(EventFilter$FilterAction);
	return $cast(EventFilter$FilterAction, $Enum::valueOf(EventFilter$FilterAction::class$, name));
}

void EventFilter$FilterAction::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$EventFilter$FilterAction($Class* class$) {
	$assignStatic(EventFilter$FilterAction::ACCEPT, $new(EventFilter$FilterAction, "ACCEPT"_s, 0));
	$assignStatic(EventFilter$FilterAction::REJECT, $new(EventFilter$FilterAction, "REJECT"_s, 1));
	$assignStatic(EventFilter$FilterAction::ACCEPT_IMMEDIATELY, $new(EventFilter$FilterAction, "ACCEPT_IMMEDIATELY"_s, 2));
	$assignStatic(EventFilter$FilterAction::$VALUES, EventFilter$FilterAction::$values());
}

EventFilter$FilterAction::EventFilter$FilterAction() {
}

$Class* EventFilter$FilterAction::load$($String* name, bool initialize) {
	$loadClass(EventFilter$FilterAction, name, initialize, &_EventFilter$FilterAction_ClassInfo_, clinit$EventFilter$FilterAction, allocate$EventFilter$FilterAction);
	return class$;
}

$Class* EventFilter$FilterAction::class$ = nullptr;

	} // awt
} // java