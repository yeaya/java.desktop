#include <java/awt/desktop/PreferencesEvent.h>

#include <java/awt/desktop/AppEvent.h>
#include <jcpp.h>

using $AppEvent = ::java::awt::desktop::AppEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace desktop {

$FieldInfo _PreferencesEvent_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PreferencesEvent, serialVersionUID)},
	{}
};

$MethodInfo _PreferencesEvent_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PreferencesEvent::*)()>(&PreferencesEvent::init$))},
	{}
};

$ClassInfo _PreferencesEvent_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.awt.desktop.PreferencesEvent",
	"java.awt.desktop.AppEvent",
	nullptr,
	_PreferencesEvent_FieldInfo_,
	_PreferencesEvent_MethodInfo_
};

$Object* allocate$PreferencesEvent($Class* clazz) {
	return $of($alloc(PreferencesEvent));
}

void PreferencesEvent::init$() {
	$AppEvent::init$();
}

PreferencesEvent::PreferencesEvent() {
}

$Class* PreferencesEvent::load$($String* name, bool initialize) {
	$loadClass(PreferencesEvent, name, initialize, &_PreferencesEvent_ClassInfo_, allocate$PreferencesEvent);
	return class$;
}

$Class* PreferencesEvent::class$ = nullptr;

		} // desktop
	} // awt
} // java