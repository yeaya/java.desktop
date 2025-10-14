#include <java/awt/desktop/AppHiddenEvent.h>

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

$FieldInfo _AppHiddenEvent_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AppHiddenEvent, serialVersionUID)},
	{}
};

$MethodInfo _AppHiddenEvent_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AppHiddenEvent::*)()>(&AppHiddenEvent::init$))},
	{}
};

$ClassInfo _AppHiddenEvent_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.awt.desktop.AppHiddenEvent",
	"java.awt.desktop.AppEvent",
	nullptr,
	_AppHiddenEvent_FieldInfo_,
	_AppHiddenEvent_MethodInfo_
};

$Object* allocate$AppHiddenEvent($Class* clazz) {
	return $of($alloc(AppHiddenEvent));
}

void AppHiddenEvent::init$() {
	$AppEvent::init$();
}

AppHiddenEvent::AppHiddenEvent() {
}

$Class* AppHiddenEvent::load$($String* name, bool initialize) {
	$loadClass(AppHiddenEvent, name, initialize, &_AppHiddenEvent_ClassInfo_, allocate$AppHiddenEvent);
	return class$;
}

$Class* AppHiddenEvent::class$ = nullptr;

		} // desktop
	} // awt
} // java