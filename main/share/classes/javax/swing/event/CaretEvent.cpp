#include <javax/swing/event/CaretEvent.h>

#include <java/util/EventObject.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;

namespace javax {
	namespace swing {
		namespace event {

$MethodInfo _CaretEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(CaretEvent::*)(Object$*)>(&CaretEvent::init$))},
	{"getDot", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getMark", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _CaretEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.event.CaretEvent",
	"java.util.EventObject",
	nullptr,
	nullptr,
	_CaretEvent_MethodInfo_
};

$Object* allocate$CaretEvent($Class* clazz) {
	return $of($alloc(CaretEvent));
}

void CaretEvent::init$(Object$* source) {
	$EventObject::init$(source);
}

CaretEvent::CaretEvent() {
}

$Class* CaretEvent::load$($String* name, bool initialize) {
	$loadClass(CaretEvent, name, initialize, &_CaretEvent_ClassInfo_, allocate$CaretEvent);
	return class$;
}

$Class* CaretEvent::class$ = nullptr;

		} // event
	} // swing
} // javax