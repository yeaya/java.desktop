#include <java/awt/desktop/ScreenSleepEvent.h>

#include <java/awt/desktop/AppEvent.h>
#include <jcpp.h>

using $AppEvent = ::java::awt::desktop::AppEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace desktop {

$FieldInfo _ScreenSleepEvent_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ScreenSleepEvent, serialVersionUID)},
	{}
};

$MethodInfo _ScreenSleepEvent_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ScreenSleepEvent::*)()>(&ScreenSleepEvent::init$))},
	{}
};

$ClassInfo _ScreenSleepEvent_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.awt.desktop.ScreenSleepEvent",
	"java.awt.desktop.AppEvent",
	nullptr,
	_ScreenSleepEvent_FieldInfo_,
	_ScreenSleepEvent_MethodInfo_
};

$Object* allocate$ScreenSleepEvent($Class* clazz) {
	return $of($alloc(ScreenSleepEvent));
}

void ScreenSleepEvent::init$() {
	$AppEvent::init$();
}

ScreenSleepEvent::ScreenSleepEvent() {
}

$Class* ScreenSleepEvent::load$($String* name, bool initialize) {
	$loadClass(ScreenSleepEvent, name, initialize, &_ScreenSleepEvent_ClassInfo_, allocate$ScreenSleepEvent);
	return class$;
}

$Class* ScreenSleepEvent::class$ = nullptr;

		} // desktop
	} // awt
} // java