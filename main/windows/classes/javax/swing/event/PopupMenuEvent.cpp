#include <javax/swing/event/PopupMenuEvent.h>

#include <java/util/EventObject.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;

namespace javax {
	namespace swing {
		namespace event {

$MethodInfo _PopupMenuEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(PopupMenuEvent::*)(Object$*)>(&PopupMenuEvent::init$))},
	{}
};

$ClassInfo _PopupMenuEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.event.PopupMenuEvent",
	"java.util.EventObject",
	nullptr,
	nullptr,
	_PopupMenuEvent_MethodInfo_
};

$Object* allocate$PopupMenuEvent($Class* clazz) {
	return $of($alloc(PopupMenuEvent));
}

void PopupMenuEvent::init$(Object$* source) {
	$EventObject::init$(source);
}

PopupMenuEvent::PopupMenuEvent() {
}

$Class* PopupMenuEvent::load$($String* name, bool initialize) {
	$loadClass(PopupMenuEvent, name, initialize, &_PopupMenuEvent_ClassInfo_, allocate$PopupMenuEvent);
	return class$;
}

$Class* PopupMenuEvent::class$ = nullptr;

		} // event
	} // swing
} // javax