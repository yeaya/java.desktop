#include <java/awt/desktop/UserSessionEvent$Reason.h>

#include <java/awt/desktop/UserSessionEvent.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef CONSOLE
#undef LOCK
#undef REMOTE
#undef UNSPECIFIED

using $UserSessionEvent$ReasonArray = $Array<::java::awt::desktop::UserSessionEvent$Reason>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace desktop {

$FieldInfo _UserSessionEvent$Reason_FieldInfo_[] = {
	{"UNSPECIFIED", "Ljava/awt/desktop/UserSessionEvent$Reason;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UserSessionEvent$Reason, UNSPECIFIED)},
	{"CONSOLE", "Ljava/awt/desktop/UserSessionEvent$Reason;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UserSessionEvent$Reason, CONSOLE)},
	{"REMOTE", "Ljava/awt/desktop/UserSessionEvent$Reason;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UserSessionEvent$Reason, REMOTE)},
	{"LOCK", "Ljava/awt/desktop/UserSessionEvent$Reason;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UserSessionEvent$Reason, LOCK)},
	{"$VALUES", "[Ljava/awt/desktop/UserSessionEvent$Reason;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(UserSessionEvent$Reason, $VALUES)},
	{}
};

$MethodInfo _UserSessionEvent$Reason_MethodInfo_[] = {
	{"$values", "()[Ljava/awt/desktop/UserSessionEvent$Reason;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$UserSessionEvent$ReasonArray*(*)()>(&UserSessionEvent$Reason::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(UserSessionEvent$Reason::*)($String*,int32_t)>(&UserSessionEvent$Reason::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljava/awt/desktop/UserSessionEvent$Reason;", nullptr, $PUBLIC | $STATIC, $method(static_cast<UserSessionEvent$Reason*(*)($String*)>(&UserSessionEvent$Reason::valueOf))},
	{"values", "()[Ljava/awt/desktop/UserSessionEvent$Reason;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$UserSessionEvent$ReasonArray*(*)()>(&UserSessionEvent$Reason::values))},
	{}
};

$InnerClassInfo _UserSessionEvent$Reason_InnerClassesInfo_[] = {
	{"java.awt.desktop.UserSessionEvent$Reason", "java.awt.desktop.UserSessionEvent", "Reason", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _UserSessionEvent$Reason_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.awt.desktop.UserSessionEvent$Reason",
	"java.lang.Enum",
	nullptr,
	_UserSessionEvent$Reason_FieldInfo_,
	_UserSessionEvent$Reason_MethodInfo_,
	"Ljava/lang/Enum<Ljava/awt/desktop/UserSessionEvent$Reason;>;",
	nullptr,
	_UserSessionEvent$Reason_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.desktop.UserSessionEvent"
};

$Object* allocate$UserSessionEvent$Reason($Class* clazz) {
	return $of($alloc(UserSessionEvent$Reason));
}

UserSessionEvent$Reason* UserSessionEvent$Reason::UNSPECIFIED = nullptr;
UserSessionEvent$Reason* UserSessionEvent$Reason::CONSOLE = nullptr;
UserSessionEvent$Reason* UserSessionEvent$Reason::REMOTE = nullptr;
UserSessionEvent$Reason* UserSessionEvent$Reason::LOCK = nullptr;
$UserSessionEvent$ReasonArray* UserSessionEvent$Reason::$VALUES = nullptr;

$UserSessionEvent$ReasonArray* UserSessionEvent$Reason::$values() {
	$init(UserSessionEvent$Reason);
	return $new($UserSessionEvent$ReasonArray, {
		UserSessionEvent$Reason::UNSPECIFIED,
		UserSessionEvent$Reason::CONSOLE,
		UserSessionEvent$Reason::REMOTE,
		UserSessionEvent$Reason::LOCK
	});
}

$UserSessionEvent$ReasonArray* UserSessionEvent$Reason::values() {
	$init(UserSessionEvent$Reason);
	return $cast($UserSessionEvent$ReasonArray, UserSessionEvent$Reason::$VALUES->clone());
}

UserSessionEvent$Reason* UserSessionEvent$Reason::valueOf($String* name) {
	$init(UserSessionEvent$Reason);
	return $cast(UserSessionEvent$Reason, $Enum::valueOf(UserSessionEvent$Reason::class$, name));
}

void UserSessionEvent$Reason::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$UserSessionEvent$Reason($Class* class$) {
	$assignStatic(UserSessionEvent$Reason::UNSPECIFIED, $new(UserSessionEvent$Reason, "UNSPECIFIED"_s, 0));
	$assignStatic(UserSessionEvent$Reason::CONSOLE, $new(UserSessionEvent$Reason, "CONSOLE"_s, 1));
	$assignStatic(UserSessionEvent$Reason::REMOTE, $new(UserSessionEvent$Reason, "REMOTE"_s, 2));
	$assignStatic(UserSessionEvent$Reason::LOCK, $new(UserSessionEvent$Reason, "LOCK"_s, 3));
	$assignStatic(UserSessionEvent$Reason::$VALUES, UserSessionEvent$Reason::$values());
}

UserSessionEvent$Reason::UserSessionEvent$Reason() {
}

$Class* UserSessionEvent$Reason::load$($String* name, bool initialize) {
	$loadClass(UserSessionEvent$Reason, name, initialize, &_UserSessionEvent$Reason_ClassInfo_, clinit$UserSessionEvent$Reason, allocate$UserSessionEvent$Reason);
	return class$;
}

$Class* UserSessionEvent$Reason::class$ = nullptr;

		} // desktop
	} // awt
} // java