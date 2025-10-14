#include <java/awt/desktop/SystemSleepEvent.h>

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

$FieldInfo _SystemSleepEvent_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SystemSleepEvent, serialVersionUID)},
	{}
};

$MethodInfo _SystemSleepEvent_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SystemSleepEvent::*)()>(&SystemSleepEvent::init$))},
	{}
};

$ClassInfo _SystemSleepEvent_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.awt.desktop.SystemSleepEvent",
	"java.awt.desktop.AppEvent",
	nullptr,
	_SystemSleepEvent_FieldInfo_,
	_SystemSleepEvent_MethodInfo_
};

$Object* allocate$SystemSleepEvent($Class* clazz) {
	return $of($alloc(SystemSleepEvent));
}

void SystemSleepEvent::init$() {
	$AppEvent::init$();
}

SystemSleepEvent::SystemSleepEvent() {
}

$Class* SystemSleepEvent::load$($String* name, bool initialize) {
	$loadClass(SystemSleepEvent, name, initialize, &_SystemSleepEvent_ClassInfo_, allocate$SystemSleepEvent);
	return class$;
}

$Class* SystemSleepEvent::class$ = nullptr;

		} // desktop
	} // awt
} // java