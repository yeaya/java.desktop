#include <com/apple/eawt/event/SwipeEvent.h>

#include <com/apple/eawt/event/GestureEvent.h>
#include <jcpp.h>

using $GestureEvent = ::com::apple::eawt::event::GestureEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace eawt {
			namespace event {

$MethodInfo _SwipeEvent_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SwipeEvent::*)()>(&SwipeEvent::init$))},
	{}
};

$ClassInfo _SwipeEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.eawt.event.SwipeEvent",
	"com.apple.eawt.event.GestureEvent",
	nullptr,
	nullptr,
	_SwipeEvent_MethodInfo_
};

$Object* allocate$SwipeEvent($Class* clazz) {
	return $of($alloc(SwipeEvent));
}

void SwipeEvent::init$() {
	$GestureEvent::init$();
}

SwipeEvent::SwipeEvent() {
}

$Class* SwipeEvent::load$($String* name, bool initialize) {
	$loadClass(SwipeEvent, name, initialize, &_SwipeEvent_ClassInfo_, allocate$SwipeEvent);
	return class$;
}

$Class* SwipeEvent::class$ = nullptr;

			} // event
		} // eawt
	} // apple
} // com