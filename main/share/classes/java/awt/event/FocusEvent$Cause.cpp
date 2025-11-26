#include <java/awt/event/FocusEvent$Cause.h>

#include <java/awt/event/FocusEvent.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef ACTIVATION
#undef CLEAR_GLOBAL_FOCUS_OWNER
#undef MOUSE_EVENT
#undef ROLLBACK
#undef TRAVERSAL
#undef TRAVERSAL_BACKWARD
#undef TRAVERSAL_DOWN
#undef TRAVERSAL_FORWARD
#undef TRAVERSAL_UP
#undef UNEXPECTED
#undef UNKNOWN

using $FocusEvent$CauseArray = $Array<::java::awt::event::FocusEvent$Cause>;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace event {

$FieldInfo _FocusEvent$Cause_FieldInfo_[] = {
	{"UNKNOWN", "Ljava/awt/event/FocusEvent$Cause;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FocusEvent$Cause, UNKNOWN)},
	{"MOUSE_EVENT", "Ljava/awt/event/FocusEvent$Cause;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FocusEvent$Cause, MOUSE_EVENT)},
	{"TRAVERSAL", "Ljava/awt/event/FocusEvent$Cause;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FocusEvent$Cause, TRAVERSAL)},
	{"TRAVERSAL_UP", "Ljava/awt/event/FocusEvent$Cause;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FocusEvent$Cause, TRAVERSAL_UP)},
	{"TRAVERSAL_DOWN", "Ljava/awt/event/FocusEvent$Cause;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FocusEvent$Cause, TRAVERSAL_DOWN)},
	{"TRAVERSAL_FORWARD", "Ljava/awt/event/FocusEvent$Cause;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FocusEvent$Cause, TRAVERSAL_FORWARD)},
	{"TRAVERSAL_BACKWARD", "Ljava/awt/event/FocusEvent$Cause;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FocusEvent$Cause, TRAVERSAL_BACKWARD)},
	{"ROLLBACK", "Ljava/awt/event/FocusEvent$Cause;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FocusEvent$Cause, ROLLBACK)},
	{"UNEXPECTED", "Ljava/awt/event/FocusEvent$Cause;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FocusEvent$Cause, UNEXPECTED)},
	{"ACTIVATION", "Ljava/awt/event/FocusEvent$Cause;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FocusEvent$Cause, ACTIVATION)},
	{"CLEAR_GLOBAL_FOCUS_OWNER", "Ljava/awt/event/FocusEvent$Cause;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FocusEvent$Cause, CLEAR_GLOBAL_FOCUS_OWNER)},
	{"$VALUES", "[Ljava/awt/event/FocusEvent$Cause;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(FocusEvent$Cause, $VALUES)},
	{}
};

$MethodInfo _FocusEvent$Cause_MethodInfo_[] = {
	{"$values", "()[Ljava/awt/event/FocusEvent$Cause;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$FocusEvent$CauseArray*(*)()>(&FocusEvent$Cause::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(FocusEvent$Cause::*)($String*,int32_t)>(&FocusEvent$Cause::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljava/awt/event/FocusEvent$Cause;", nullptr, $PUBLIC | $STATIC, $method(static_cast<FocusEvent$Cause*(*)($String*)>(&FocusEvent$Cause::valueOf))},
	{"values", "()[Ljava/awt/event/FocusEvent$Cause;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$FocusEvent$CauseArray*(*)()>(&FocusEvent$Cause::values))},
	{}
};

$InnerClassInfo _FocusEvent$Cause_InnerClassesInfo_[] = {
	{"java.awt.event.FocusEvent$Cause", "java.awt.event.FocusEvent", "Cause", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _FocusEvent$Cause_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.awt.event.FocusEvent$Cause",
	"java.lang.Enum",
	nullptr,
	_FocusEvent$Cause_FieldInfo_,
	_FocusEvent$Cause_MethodInfo_,
	"Ljava/lang/Enum<Ljava/awt/event/FocusEvent$Cause;>;",
	nullptr,
	_FocusEvent$Cause_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.event.FocusEvent"
};

$Object* allocate$FocusEvent$Cause($Class* clazz) {
	return $of($alloc(FocusEvent$Cause));
}

FocusEvent$Cause* FocusEvent$Cause::UNKNOWN = nullptr;
FocusEvent$Cause* FocusEvent$Cause::MOUSE_EVENT = nullptr;
FocusEvent$Cause* FocusEvent$Cause::TRAVERSAL = nullptr;
FocusEvent$Cause* FocusEvent$Cause::TRAVERSAL_UP = nullptr;
FocusEvent$Cause* FocusEvent$Cause::TRAVERSAL_DOWN = nullptr;
FocusEvent$Cause* FocusEvent$Cause::TRAVERSAL_FORWARD = nullptr;
FocusEvent$Cause* FocusEvent$Cause::TRAVERSAL_BACKWARD = nullptr;
FocusEvent$Cause* FocusEvent$Cause::ROLLBACK = nullptr;
FocusEvent$Cause* FocusEvent$Cause::UNEXPECTED = nullptr;
FocusEvent$Cause* FocusEvent$Cause::ACTIVATION = nullptr;
FocusEvent$Cause* FocusEvent$Cause::CLEAR_GLOBAL_FOCUS_OWNER = nullptr;
$FocusEvent$CauseArray* FocusEvent$Cause::$VALUES = nullptr;

$FocusEvent$CauseArray* FocusEvent$Cause::$values() {
	$init(FocusEvent$Cause);
	return $new($FocusEvent$CauseArray, {
		FocusEvent$Cause::UNKNOWN,
		FocusEvent$Cause::MOUSE_EVENT,
		FocusEvent$Cause::TRAVERSAL,
		FocusEvent$Cause::TRAVERSAL_UP,
		FocusEvent$Cause::TRAVERSAL_DOWN,
		FocusEvent$Cause::TRAVERSAL_FORWARD,
		FocusEvent$Cause::TRAVERSAL_BACKWARD,
		FocusEvent$Cause::ROLLBACK,
		FocusEvent$Cause::UNEXPECTED,
		FocusEvent$Cause::ACTIVATION,
		FocusEvent$Cause::CLEAR_GLOBAL_FOCUS_OWNER
	});
}

$FocusEvent$CauseArray* FocusEvent$Cause::values() {
	$init(FocusEvent$Cause);
	return $cast($FocusEvent$CauseArray, FocusEvent$Cause::$VALUES->clone());
}

FocusEvent$Cause* FocusEvent$Cause::valueOf($String* name) {
	$init(FocusEvent$Cause);
	return $cast(FocusEvent$Cause, $Enum::valueOf(FocusEvent$Cause::class$, name));
}

void FocusEvent$Cause::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$FocusEvent$Cause($Class* class$) {
	$assignStatic(FocusEvent$Cause::UNKNOWN, $new(FocusEvent$Cause, "UNKNOWN"_s, 0));
	$assignStatic(FocusEvent$Cause::MOUSE_EVENT, $new(FocusEvent$Cause, "MOUSE_EVENT"_s, 1));
	$assignStatic(FocusEvent$Cause::TRAVERSAL, $new(FocusEvent$Cause, "TRAVERSAL"_s, 2));
	$assignStatic(FocusEvent$Cause::TRAVERSAL_UP, $new(FocusEvent$Cause, "TRAVERSAL_UP"_s, 3));
	$assignStatic(FocusEvent$Cause::TRAVERSAL_DOWN, $new(FocusEvent$Cause, "TRAVERSAL_DOWN"_s, 4));
	$assignStatic(FocusEvent$Cause::TRAVERSAL_FORWARD, $new(FocusEvent$Cause, "TRAVERSAL_FORWARD"_s, 5));
	$assignStatic(FocusEvent$Cause::TRAVERSAL_BACKWARD, $new(FocusEvent$Cause, "TRAVERSAL_BACKWARD"_s, 6));
	$assignStatic(FocusEvent$Cause::ROLLBACK, $new(FocusEvent$Cause, "ROLLBACK"_s, 7));
	$assignStatic(FocusEvent$Cause::UNEXPECTED, $new(FocusEvent$Cause, "UNEXPECTED"_s, 8));
	$assignStatic(FocusEvent$Cause::ACTIVATION, $new(FocusEvent$Cause, "ACTIVATION"_s, 9));
	$assignStatic(FocusEvent$Cause::CLEAR_GLOBAL_FOCUS_OWNER, $new(FocusEvent$Cause, "CLEAR_GLOBAL_FOCUS_OWNER"_s, 10));
	$assignStatic(FocusEvent$Cause::$VALUES, FocusEvent$Cause::$values());
}

FocusEvent$Cause::FocusEvent$Cause() {
}

$Class* FocusEvent$Cause::load$($String* name, bool initialize) {
	$loadClass(FocusEvent$Cause, name, initialize, &_FocusEvent$Cause_ClassInfo_, clinit$FocusEvent$Cause, allocate$FocusEvent$Cause);
	return class$;
}

$Class* FocusEvent$Cause::class$ = nullptr;

		} // event
	} // awt
} // java