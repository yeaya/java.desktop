#include <com/apple/eawt/event/GestureEvent.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace eawt {
			namespace event {

$FieldInfo _GestureEvent_FieldInfo_[] = {
	{"consumed", "Z", nullptr, 0, $field(GestureEvent, consumed)},
	{}
};

$MethodInfo _GestureEvent_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(GestureEvent::*)()>(&GestureEvent::init$))},
	{"consume", "()V", nullptr, $PUBLIC},
	{"isConsumed", "()Z", nullptr, $PROTECTED},
	{}
};

$ClassInfo _GestureEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.apple.eawt.event.GestureEvent",
	"java.lang.Object",
	nullptr,
	_GestureEvent_FieldInfo_,
	_GestureEvent_MethodInfo_
};

$Object* allocate$GestureEvent($Class* clazz) {
	return $of($alloc(GestureEvent));
}

void GestureEvent::init$() {
}

void GestureEvent::consume() {
	this->consumed = true;
}

bool GestureEvent::isConsumed() {
	return this->consumed;
}

GestureEvent::GestureEvent() {
}

$Class* GestureEvent::load$($String* name, bool initialize) {
	$loadClass(GestureEvent, name, initialize, &_GestureEvent_ClassInfo_, allocate$GestureEvent);
	return class$;
}

$Class* GestureEvent::class$ = nullptr;

			} // event
		} // eawt
	} // apple
} // com