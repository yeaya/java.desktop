#include <javax/print/event/PrintEvent.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;

namespace javax {
	namespace print {
		namespace event {

$FieldInfo _PrintEvent_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PrintEvent, serialVersionUID)},
	{}
};

$MethodInfo _PrintEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(PrintEvent::*)(Object$*)>(&PrintEvent::init$))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PrintEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.print.event.PrintEvent",
	"java.util.EventObject",
	nullptr,
	_PrintEvent_FieldInfo_,
	_PrintEvent_MethodInfo_
};

$Object* allocate$PrintEvent($Class* clazz) {
	return $of($alloc(PrintEvent));
}

void PrintEvent::init$(Object$* source) {
	$EventObject::init$(source);
}

$String* PrintEvent::toString() {
	$useLocalCurrentObjectStackCache();
	return ($str({"PrintEvent on "_s, $($nc($of($(getSource())))->toString())}));
}

PrintEvent::PrintEvent() {
}

$Class* PrintEvent::load$($String* name, bool initialize) {
	$loadClass(PrintEvent, name, initialize, &_PrintEvent_ClassInfo_, allocate$PrintEvent);
	return class$;
}

$Class* PrintEvent::class$ = nullptr;

		} // event
	} // print
} // javax