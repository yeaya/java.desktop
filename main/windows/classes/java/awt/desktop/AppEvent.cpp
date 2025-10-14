#include <java/awt/desktop/AppEvent.h>

#include <java/awt/Desktop.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <jcpp.h>

using $Desktop = ::java::awt::Desktop;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;

namespace java {
	namespace awt {
		namespace desktop {

$FieldInfo _AppEvent_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AppEvent, serialVersionUID)},
	{}
};

$MethodInfo _AppEvent_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AppEvent::*)()>(&AppEvent::init$))},
	{}
};

$ClassInfo _AppEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.desktop.AppEvent",
	"java.util.EventObject",
	nullptr,
	_AppEvent_FieldInfo_,
	_AppEvent_MethodInfo_
};

$Object* allocate$AppEvent($Class* clazz) {
	return $of($alloc(AppEvent));
}

void AppEvent::init$() {
	$EventObject::init$($($Desktop::getDesktop()));
}

AppEvent::AppEvent() {
}

$Class* AppEvent::load$($String* name, bool initialize) {
	$loadClass(AppEvent, name, initialize, &_AppEvent_ClassInfo_, allocate$AppEvent);
	return class$;
}

$Class* AppEvent::class$ = nullptr;

		} // desktop
	} // awt
} // java