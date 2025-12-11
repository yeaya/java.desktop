#include <com/apple/eawt/event/RotationEvent.h>

#include <com/apple/eawt/event/GestureEvent.h>
#include <jcpp.h>

using $GestureEvent = ::com::apple::eawt::event::GestureEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace eawt {
			namespace event {

$FieldInfo _RotationEvent_FieldInfo_[] = {
	{"rotation", "D", nullptr, $FINAL, $field(RotationEvent, rotation)},
	{}
};

$MethodInfo _RotationEvent_MethodInfo_[] = {
	{"<init>", "(D)V", nullptr, 0, $method(static_cast<void(RotationEvent::*)(double)>(&RotationEvent::init$))},
	{"getRotation", "()D", nullptr, $PUBLIC},
	{}
};

$ClassInfo _RotationEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.eawt.event.RotationEvent",
	"com.apple.eawt.event.GestureEvent",
	nullptr,
	_RotationEvent_FieldInfo_,
	_RotationEvent_MethodInfo_
};

$Object* allocate$RotationEvent($Class* clazz) {
	return $of($alloc(RotationEvent));
}

void RotationEvent::init$(double rotation) {
	$GestureEvent::init$();
	this->rotation = rotation;
}

double RotationEvent::getRotation() {
	return this->rotation;
}

RotationEvent::RotationEvent() {
}

$Class* RotationEvent::load$($String* name, bool initialize) {
	$loadClass(RotationEvent, name, initialize, &_RotationEvent_ClassInfo_, allocate$RotationEvent);
	return class$;
}

$Class* RotationEvent::class$ = nullptr;

			} // event
		} // eawt
	} // apple
} // com