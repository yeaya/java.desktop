#include <javax/print/event/PrintJobAttributeListener.h>

#include <javax/print/event/PrintJobAttributeEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrintJobAttributeEvent = ::javax::print::event::PrintJobAttributeEvent;

namespace javax {
	namespace print {
		namespace event {

$MethodInfo _PrintJobAttributeListener_MethodInfo_[] = {
	{"attributeUpdate", "(Ljavax/print/event/PrintJobAttributeEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _PrintJobAttributeListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.print.event.PrintJobAttributeListener",
	nullptr,
	nullptr,
	nullptr,
	_PrintJobAttributeListener_MethodInfo_
};

$Object* allocate$PrintJobAttributeListener($Class* clazz) {
	return $of($alloc(PrintJobAttributeListener));
}

$Class* PrintJobAttributeListener::load$($String* name, bool initialize) {
	$loadClass(PrintJobAttributeListener, name, initialize, &_PrintJobAttributeListener_ClassInfo_, allocate$PrintJobAttributeListener);
	return class$;
}

$Class* PrintJobAttributeListener::class$ = nullptr;

		} // event
	} // print
} // javax