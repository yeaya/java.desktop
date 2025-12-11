#include <sun/awt/CausedFocusEvent$Cause.h>

#include <java/lang/Enum.h>
#include <sun/awt/CausedFocusEvent.h>
#include <jcpp.h>

#undef ACTIVATION
#undef AUTOMATIC_TRAVERSE
#undef CLEAR_GLOBAL_FOCUS_OWNER
#undef MANUAL_REQUEST
#undef MOUSE_EVENT
#undef NATIVE_SYSTEM
#undef RETARGETED
#undef ROLLBACK
#undef TRAVERSAL
#undef TRAVERSAL_BACKWARD
#undef TRAVERSAL_DOWN
#undef TRAVERSAL_FORWARD
#undef TRAVERSAL_UP
#undef UNKNOWN

using $CausedFocusEvent$CauseArray = $Array<::sun::awt::CausedFocusEvent$Cause>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

$FieldInfo _CausedFocusEvent$Cause_FieldInfo_[] = {
	{"UNKNOWN", "Lsun/awt/CausedFocusEvent$Cause;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CausedFocusEvent$Cause, UNKNOWN)},
	{"MOUSE_EVENT", "Lsun/awt/CausedFocusEvent$Cause;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CausedFocusEvent$Cause, MOUSE_EVENT)},
	{"TRAVERSAL", "Lsun/awt/CausedFocusEvent$Cause;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CausedFocusEvent$Cause, TRAVERSAL)},
	{"TRAVERSAL_UP", "Lsun/awt/CausedFocusEvent$Cause;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CausedFocusEvent$Cause, TRAVERSAL_UP)},
	{"TRAVERSAL_DOWN", "Lsun/awt/CausedFocusEvent$Cause;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CausedFocusEvent$Cause, TRAVERSAL_DOWN)},
	{"TRAVERSAL_FORWARD", "Lsun/awt/CausedFocusEvent$Cause;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CausedFocusEvent$Cause, TRAVERSAL_FORWARD)},
	{"TRAVERSAL_BACKWARD", "Lsun/awt/CausedFocusEvent$Cause;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CausedFocusEvent$Cause, TRAVERSAL_BACKWARD)},
	{"MANUAL_REQUEST", "Lsun/awt/CausedFocusEvent$Cause;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CausedFocusEvent$Cause, MANUAL_REQUEST)},
	{"AUTOMATIC_TRAVERSE", "Lsun/awt/CausedFocusEvent$Cause;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CausedFocusEvent$Cause, AUTOMATIC_TRAVERSE)},
	{"ROLLBACK", "Lsun/awt/CausedFocusEvent$Cause;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CausedFocusEvent$Cause, ROLLBACK)},
	{"NATIVE_SYSTEM", "Lsun/awt/CausedFocusEvent$Cause;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CausedFocusEvent$Cause, NATIVE_SYSTEM)},
	{"ACTIVATION", "Lsun/awt/CausedFocusEvent$Cause;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CausedFocusEvent$Cause, ACTIVATION)},
	{"CLEAR_GLOBAL_FOCUS_OWNER", "Lsun/awt/CausedFocusEvent$Cause;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CausedFocusEvent$Cause, CLEAR_GLOBAL_FOCUS_OWNER)},
	{"RETARGETED", "Lsun/awt/CausedFocusEvent$Cause;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CausedFocusEvent$Cause, RETARGETED)},
	{"$VALUES", "[Lsun/awt/CausedFocusEvent$Cause;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(CausedFocusEvent$Cause, $VALUES)},
	{}
};

$MethodInfo _CausedFocusEvent$Cause_MethodInfo_[] = {
	{"$values", "()[Lsun/awt/CausedFocusEvent$Cause;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$CausedFocusEvent$CauseArray*(*)()>(&CausedFocusEvent$Cause::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(CausedFocusEvent$Cause::*)($String*,int32_t)>(&CausedFocusEvent$Cause::init$))},
	{"valueOf", "(Ljava/lang/String;)Lsun/awt/CausedFocusEvent$Cause;", nullptr, $PUBLIC | $STATIC, $method(static_cast<CausedFocusEvent$Cause*(*)($String*)>(&CausedFocusEvent$Cause::valueOf))},
	{"values", "()[Lsun/awt/CausedFocusEvent$Cause;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$CausedFocusEvent$CauseArray*(*)()>(&CausedFocusEvent$Cause::values))},
	{}
};

$InnerClassInfo _CausedFocusEvent$Cause_InnerClassesInfo_[] = {
	{"sun.awt.CausedFocusEvent$Cause", "sun.awt.CausedFocusEvent", "Cause", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _CausedFocusEvent$Cause_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.awt.CausedFocusEvent$Cause",
	"java.lang.Enum",
	nullptr,
	_CausedFocusEvent$Cause_FieldInfo_,
	_CausedFocusEvent$Cause_MethodInfo_,
	"Ljava/lang/Enum<Lsun/awt/CausedFocusEvent$Cause;>;",
	nullptr,
	_CausedFocusEvent$Cause_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.CausedFocusEvent"
};

$Object* allocate$CausedFocusEvent$Cause($Class* clazz) {
	return $of($alloc(CausedFocusEvent$Cause));
}

CausedFocusEvent$Cause* CausedFocusEvent$Cause::UNKNOWN = nullptr;
CausedFocusEvent$Cause* CausedFocusEvent$Cause::MOUSE_EVENT = nullptr;
CausedFocusEvent$Cause* CausedFocusEvent$Cause::TRAVERSAL = nullptr;
CausedFocusEvent$Cause* CausedFocusEvent$Cause::TRAVERSAL_UP = nullptr;
CausedFocusEvent$Cause* CausedFocusEvent$Cause::TRAVERSAL_DOWN = nullptr;
CausedFocusEvent$Cause* CausedFocusEvent$Cause::TRAVERSAL_FORWARD = nullptr;
CausedFocusEvent$Cause* CausedFocusEvent$Cause::TRAVERSAL_BACKWARD = nullptr;
CausedFocusEvent$Cause* CausedFocusEvent$Cause::MANUAL_REQUEST = nullptr;
CausedFocusEvent$Cause* CausedFocusEvent$Cause::AUTOMATIC_TRAVERSE = nullptr;
CausedFocusEvent$Cause* CausedFocusEvent$Cause::ROLLBACK = nullptr;
CausedFocusEvent$Cause* CausedFocusEvent$Cause::NATIVE_SYSTEM = nullptr;
CausedFocusEvent$Cause* CausedFocusEvent$Cause::ACTIVATION = nullptr;
CausedFocusEvent$Cause* CausedFocusEvent$Cause::CLEAR_GLOBAL_FOCUS_OWNER = nullptr;
CausedFocusEvent$Cause* CausedFocusEvent$Cause::RETARGETED = nullptr;
$CausedFocusEvent$CauseArray* CausedFocusEvent$Cause::$VALUES = nullptr;

$CausedFocusEvent$CauseArray* CausedFocusEvent$Cause::$values() {
	$init(CausedFocusEvent$Cause);
	return $new($CausedFocusEvent$CauseArray, {
		CausedFocusEvent$Cause::UNKNOWN,
		CausedFocusEvent$Cause::MOUSE_EVENT,
		CausedFocusEvent$Cause::TRAVERSAL,
		CausedFocusEvent$Cause::TRAVERSAL_UP,
		CausedFocusEvent$Cause::TRAVERSAL_DOWN,
		CausedFocusEvent$Cause::TRAVERSAL_FORWARD,
		CausedFocusEvent$Cause::TRAVERSAL_BACKWARD,
		CausedFocusEvent$Cause::MANUAL_REQUEST,
		CausedFocusEvent$Cause::AUTOMATIC_TRAVERSE,
		CausedFocusEvent$Cause::ROLLBACK,
		CausedFocusEvent$Cause::NATIVE_SYSTEM,
		CausedFocusEvent$Cause::ACTIVATION,
		CausedFocusEvent$Cause::CLEAR_GLOBAL_FOCUS_OWNER,
		CausedFocusEvent$Cause::RETARGETED
	});
}

$CausedFocusEvent$CauseArray* CausedFocusEvent$Cause::values() {
	$init(CausedFocusEvent$Cause);
	return $cast($CausedFocusEvent$CauseArray, CausedFocusEvent$Cause::$VALUES->clone());
}

CausedFocusEvent$Cause* CausedFocusEvent$Cause::valueOf($String* name) {
	$init(CausedFocusEvent$Cause);
	return $cast(CausedFocusEvent$Cause, $Enum::valueOf(CausedFocusEvent$Cause::class$, name));
}

void CausedFocusEvent$Cause::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$CausedFocusEvent$Cause($Class* class$) {
	$assignStatic(CausedFocusEvent$Cause::UNKNOWN, $new(CausedFocusEvent$Cause, "UNKNOWN"_s, 0));
	$assignStatic(CausedFocusEvent$Cause::MOUSE_EVENT, $new(CausedFocusEvent$Cause, "MOUSE_EVENT"_s, 1));
	$assignStatic(CausedFocusEvent$Cause::TRAVERSAL, $new(CausedFocusEvent$Cause, "TRAVERSAL"_s, 2));
	$assignStatic(CausedFocusEvent$Cause::TRAVERSAL_UP, $new(CausedFocusEvent$Cause, "TRAVERSAL_UP"_s, 3));
	$assignStatic(CausedFocusEvent$Cause::TRAVERSAL_DOWN, $new(CausedFocusEvent$Cause, "TRAVERSAL_DOWN"_s, 4));
	$assignStatic(CausedFocusEvent$Cause::TRAVERSAL_FORWARD, $new(CausedFocusEvent$Cause, "TRAVERSAL_FORWARD"_s, 5));
	$assignStatic(CausedFocusEvent$Cause::TRAVERSAL_BACKWARD, $new(CausedFocusEvent$Cause, "TRAVERSAL_BACKWARD"_s, 6));
	$assignStatic(CausedFocusEvent$Cause::MANUAL_REQUEST, $new(CausedFocusEvent$Cause, "MANUAL_REQUEST"_s, 7));
	$assignStatic(CausedFocusEvent$Cause::AUTOMATIC_TRAVERSE, $new(CausedFocusEvent$Cause, "AUTOMATIC_TRAVERSE"_s, 8));
	$assignStatic(CausedFocusEvent$Cause::ROLLBACK, $new(CausedFocusEvent$Cause, "ROLLBACK"_s, 9));
	$assignStatic(CausedFocusEvent$Cause::NATIVE_SYSTEM, $new(CausedFocusEvent$Cause, "NATIVE_SYSTEM"_s, 10));
	$assignStatic(CausedFocusEvent$Cause::ACTIVATION, $new(CausedFocusEvent$Cause, "ACTIVATION"_s, 11));
	$assignStatic(CausedFocusEvent$Cause::CLEAR_GLOBAL_FOCUS_OWNER, $new(CausedFocusEvent$Cause, "CLEAR_GLOBAL_FOCUS_OWNER"_s, 12));
	$assignStatic(CausedFocusEvent$Cause::RETARGETED, $new(CausedFocusEvent$Cause, "RETARGETED"_s, 13));
	$assignStatic(CausedFocusEvent$Cause::$VALUES, CausedFocusEvent$Cause::$values());
}

CausedFocusEvent$Cause::CausedFocusEvent$Cause() {
}

$Class* CausedFocusEvent$Cause::load$($String* name, bool initialize) {
	$loadClass(CausedFocusEvent$Cause, name, initialize, &_CausedFocusEvent$Cause_ClassInfo_, clinit$CausedFocusEvent$Cause, allocate$CausedFocusEvent$Cause);
	return class$;
}

$Class* CausedFocusEvent$Cause::class$ = nullptr;

	} // awt
} // sun