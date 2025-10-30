#include <java/awt/desktop/UserSessionEvent.h>

#include <java/awt/desktop/AppEvent.h>
#include <java/awt/desktop/UserSessionEvent$Reason.h>
#include <jcpp.h>

using $AppEvent = ::java::awt::desktop::AppEvent;
using $UserSessionEvent$Reason = ::java::awt::desktop::UserSessionEvent$Reason;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace desktop {

$FieldInfo _UserSessionEvent_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UserSessionEvent, serialVersionUID)},
	{"reason", "Ljava/awt/desktop/UserSessionEvent$Reason;", nullptr, $PRIVATE | $FINAL, $field(UserSessionEvent, reason)},
	{}
};

$MethodInfo _UserSessionEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/desktop/UserSessionEvent$Reason;)V", nullptr, $PUBLIC, $method(static_cast<void(UserSessionEvent::*)($UserSessionEvent$Reason*)>(&UserSessionEvent::init$))},
	{"getReason", "()Ljava/awt/desktop/UserSessionEvent$Reason;", nullptr, $PUBLIC, $method(static_cast<$UserSessionEvent$Reason*(UserSessionEvent::*)()>(&UserSessionEvent::getReason))},
	{}
};

$InnerClassInfo _UserSessionEvent_InnerClassesInfo_[] = {
	{"java.awt.desktop.UserSessionEvent$Reason", "java.awt.desktop.UserSessionEvent", "Reason", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _UserSessionEvent_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.awt.desktop.UserSessionEvent",
	"java.awt.desktop.AppEvent",
	nullptr,
	_UserSessionEvent_FieldInfo_,
	_UserSessionEvent_MethodInfo_,
	nullptr,
	nullptr,
	_UserSessionEvent_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.desktop.UserSessionEvent$Reason"
};

$Object* allocate$UserSessionEvent($Class* clazz) {
	return $of($alloc(UserSessionEvent));
}

void UserSessionEvent::init$($UserSessionEvent$Reason* reason) {
	$AppEvent::init$();
	$set(this, reason, reason);
}

$UserSessionEvent$Reason* UserSessionEvent::getReason() {
	return this->reason;
}

UserSessionEvent::UserSessionEvent() {
}

$Class* UserSessionEvent::load$($String* name, bool initialize) {
	$loadClass(UserSessionEvent, name, initialize, &_UserSessionEvent_ClassInfo_, allocate$UserSessionEvent);
	return class$;
}

$Class* UserSessionEvent::class$ = nullptr;

		} // desktop
	} // awt
} // java