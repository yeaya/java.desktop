#include <java/awt/desktop/AppForegroundEvent.h>

#include <java/awt/desktop/AppEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $AppEvent = ::java::awt::desktop::AppEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace desktop {

$FieldInfo _AppForegroundEvent_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AppForegroundEvent, serialVersionUID)},
	{}
};

$MethodInfo _AppForegroundEvent_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AppForegroundEvent::*)()>(&AppForegroundEvent::init$))},
	{}
};

$ClassInfo _AppForegroundEvent_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.awt.desktop.AppForegroundEvent",
	"java.awt.desktop.AppEvent",
	nullptr,
	_AppForegroundEvent_FieldInfo_,
	_AppForegroundEvent_MethodInfo_
};

$Object* allocate$AppForegroundEvent($Class* clazz) {
	return $of($alloc(AppForegroundEvent));
}

void AppForegroundEvent::init$() {
	$AppEvent::init$();
}

AppForegroundEvent::AppForegroundEvent() {
}

$Class* AppForegroundEvent::load$($String* name, bool initialize) {
	$loadClass(AppForegroundEvent, name, initialize, &_AppForegroundEvent_ClassInfo_, allocate$AppForegroundEvent);
	return class$;
}

$Class* AppForegroundEvent::class$ = nullptr;

		} // desktop
	} // awt
} // java