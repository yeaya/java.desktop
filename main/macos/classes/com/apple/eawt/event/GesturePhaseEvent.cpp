#include <com/apple/eawt/event/GesturePhaseEvent.h>

#include <com/apple/eawt/event/GestureEvent.h>
#include <jcpp.h>

using $GestureEvent = ::com::apple::eawt::event::GestureEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace eawt {
			namespace event {

$MethodInfo _GesturePhaseEvent_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(GesturePhaseEvent::*)()>(&GesturePhaseEvent::init$))},
	{}
};

$ClassInfo _GesturePhaseEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.eawt.event.GesturePhaseEvent",
	"com.apple.eawt.event.GestureEvent",
	nullptr,
	nullptr,
	_GesturePhaseEvent_MethodInfo_
};

$Object* allocate$GesturePhaseEvent($Class* clazz) {
	return $of($alloc(GesturePhaseEvent));
}

void GesturePhaseEvent::init$() {
	$GestureEvent::init$();
}

GesturePhaseEvent::GesturePhaseEvent() {
}

$Class* GesturePhaseEvent::load$($String* name, bool initialize) {
	$loadClass(GesturePhaseEvent, name, initialize, &_GesturePhaseEvent_ClassInfo_, allocate$GesturePhaseEvent);
	return class$;
}

$Class* GesturePhaseEvent::class$ = nullptr;

			} // event
		} // eawt
	} // apple
} // com