#include <javax/print/event/PrintServiceAttributeListener.h>

#include <javax/print/event/PrintServiceAttributeEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrintServiceAttributeEvent = ::javax::print::event::PrintServiceAttributeEvent;

namespace javax {
	namespace print {
		namespace event {

$MethodInfo _PrintServiceAttributeListener_MethodInfo_[] = {
	{"attributeUpdate", "(Ljavax/print/event/PrintServiceAttributeEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _PrintServiceAttributeListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.print.event.PrintServiceAttributeListener",
	nullptr,
	nullptr,
	nullptr,
	_PrintServiceAttributeListener_MethodInfo_
};

$Object* allocate$PrintServiceAttributeListener($Class* clazz) {
	return $of($alloc(PrintServiceAttributeListener));
}

$Class* PrintServiceAttributeListener::load$($String* name, bool initialize) {
	$loadClass(PrintServiceAttributeListener, name, initialize, &_PrintServiceAttributeListener_ClassInfo_, allocate$PrintServiceAttributeListener);
	return class$;
}

$Class* PrintServiceAttributeListener::class$ = nullptr;

		} // event
	} // print
} // javax