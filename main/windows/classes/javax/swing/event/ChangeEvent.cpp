#include <javax/swing/event/ChangeEvent.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;

namespace javax {
	namespace swing {
		namespace event {

$MethodInfo _ChangeEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(ChangeEvent::*)(Object$*)>(&ChangeEvent::init$))},
	{}
};

$ClassInfo _ChangeEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.event.ChangeEvent",
	"java.util.EventObject",
	nullptr,
	nullptr,
	_ChangeEvent_MethodInfo_
};

$Object* allocate$ChangeEvent($Class* clazz) {
	return $of($alloc(ChangeEvent));
}

void ChangeEvent::init$(Object$* source) {
	$EventObject::init$(source);
}

ChangeEvent::ChangeEvent() {
}

$Class* ChangeEvent::load$($String* name, bool initialize) {
	$loadClass(ChangeEvent, name, initialize, &_ChangeEvent_ClassInfo_, allocate$ChangeEvent);
	return class$;
}

$Class* ChangeEvent::class$ = nullptr;

		} // event
	} // swing
} // javax