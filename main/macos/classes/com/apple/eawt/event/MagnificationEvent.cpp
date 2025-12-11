#include <com/apple/eawt/event/MagnificationEvent.h>

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

$FieldInfo _MagnificationEvent_FieldInfo_[] = {
	{"magnification", "D", nullptr, $FINAL, $field(MagnificationEvent, magnification)},
	{}
};

$MethodInfo _MagnificationEvent_MethodInfo_[] = {
	{"<init>", "(D)V", nullptr, 0, $method(static_cast<void(MagnificationEvent::*)(double)>(&MagnificationEvent::init$))},
	{"getMagnification", "()D", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MagnificationEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.eawt.event.MagnificationEvent",
	"com.apple.eawt.event.GestureEvent",
	nullptr,
	_MagnificationEvent_FieldInfo_,
	_MagnificationEvent_MethodInfo_
};

$Object* allocate$MagnificationEvent($Class* clazz) {
	return $of($alloc(MagnificationEvent));
}

void MagnificationEvent::init$(double magnification) {
	$GestureEvent::init$();
	this->magnification = magnification;
}

double MagnificationEvent::getMagnification() {
	return this->magnification;
}

MagnificationEvent::MagnificationEvent() {
}

$Class* MagnificationEvent::load$($String* name, bool initialize) {
	$loadClass(MagnificationEvent, name, initialize, &_MagnificationEvent_ClassInfo_, allocate$MagnificationEvent);
	return class$;
}

$Class* MagnificationEvent::class$ = nullptr;

			} // event
		} // eawt
	} // apple
} // com