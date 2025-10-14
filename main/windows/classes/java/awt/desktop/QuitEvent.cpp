#include <java/awt/desktop/QuitEvent.h>

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

$FieldInfo _QuitEvent_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(QuitEvent, serialVersionUID)},
	{}
};

$MethodInfo _QuitEvent_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(QuitEvent::*)()>(&QuitEvent::init$))},
	{}
};

$ClassInfo _QuitEvent_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.awt.desktop.QuitEvent",
	"java.awt.desktop.AppEvent",
	nullptr,
	_QuitEvent_FieldInfo_,
	_QuitEvent_MethodInfo_
};

$Object* allocate$QuitEvent($Class* clazz) {
	return $of($alloc(QuitEvent));
}

void QuitEvent::init$() {
	$AppEvent::init$();
}

QuitEvent::QuitEvent() {
}

$Class* QuitEvent::load$($String* name, bool initialize) {
	$loadClass(QuitEvent, name, initialize, &_QuitEvent_ClassInfo_, allocate$QuitEvent);
	return class$;
}

$Class* QuitEvent::class$ = nullptr;

		} // desktop
	} // awt
} // java