#include <java/awt/desktop/AppReopenedEvent.h>

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

$FieldInfo _AppReopenedEvent_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AppReopenedEvent, serialVersionUID)},
	{}
};

$MethodInfo _AppReopenedEvent_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AppReopenedEvent::*)()>(&AppReopenedEvent::init$))},
	{}
};

$ClassInfo _AppReopenedEvent_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.awt.desktop.AppReopenedEvent",
	"java.awt.desktop.AppEvent",
	nullptr,
	_AppReopenedEvent_FieldInfo_,
	_AppReopenedEvent_MethodInfo_
};

$Object* allocate$AppReopenedEvent($Class* clazz) {
	return $of($alloc(AppReopenedEvent));
}

void AppReopenedEvent::init$() {
	$AppEvent::init$();
}

AppReopenedEvent::AppReopenedEvent() {
}

$Class* AppReopenedEvent::load$($String* name, bool initialize) {
	$loadClass(AppReopenedEvent, name, initialize, &_AppReopenedEvent_ClassInfo_, allocate$AppReopenedEvent);
	return class$;
}

$Class* AppReopenedEvent::class$ = nullptr;

		} // desktop
	} // awt
} // java