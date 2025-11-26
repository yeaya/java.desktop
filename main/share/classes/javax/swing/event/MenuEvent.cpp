#include <javax/swing/event/MenuEvent.h>

#include <java/util/EventObject.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;

namespace javax {
	namespace swing {
		namespace event {

$MethodInfo _MenuEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(MenuEvent::*)(Object$*)>(&MenuEvent::init$))},
	{}
};

$ClassInfo _MenuEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.event.MenuEvent",
	"java.util.EventObject",
	nullptr,
	nullptr,
	_MenuEvent_MethodInfo_
};

$Object* allocate$MenuEvent($Class* clazz) {
	return $of($alloc(MenuEvent));
}

void MenuEvent::init$(Object$* source) {
	$EventObject::init$(source);
}

MenuEvent::MenuEvent() {
}

$Class* MenuEvent::load$($String* name, bool initialize) {
	$loadClass(MenuEvent, name, initialize, &_MenuEvent_ClassInfo_, allocate$MenuEvent);
	return class$;
}

$Class* MenuEvent::class$ = nullptr;

		} // event
	} // swing
} // javax