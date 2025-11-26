#include <java/awt/desktop/AboutEvent.h>

#include <java/awt/desktop/AppEvent.h>
#include <jcpp.h>

using $AppEvent = ::java::awt::desktop::AppEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace desktop {

$FieldInfo _AboutEvent_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AboutEvent, serialVersionUID)},
	{}
};

$MethodInfo _AboutEvent_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AboutEvent::*)()>(&AboutEvent::init$))},
	{}
};

$ClassInfo _AboutEvent_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.awt.desktop.AboutEvent",
	"java.awt.desktop.AppEvent",
	nullptr,
	_AboutEvent_FieldInfo_,
	_AboutEvent_MethodInfo_
};

$Object* allocate$AboutEvent($Class* clazz) {
	return $of($alloc(AboutEvent));
}

void AboutEvent::init$() {
	$AppEvent::init$();
}

AboutEvent::AboutEvent() {
}

$Class* AboutEvent::load$($String* name, bool initialize) {
	$loadClass(AboutEvent, name, initialize, &_AboutEvent_ClassInfo_, allocate$AboutEvent);
	return class$;
}

$Class* AboutEvent::class$ = nullptr;

		} // desktop
	} // awt
} // java