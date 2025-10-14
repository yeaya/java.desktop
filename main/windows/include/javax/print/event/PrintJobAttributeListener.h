#ifndef _javax_print_event_PrintJobAttributeListener_h_
#define _javax_print_event_PrintJobAttributeListener_h_
//$ interface javax.print.event.PrintJobAttributeListener
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace print {
		namespace event {
			class PrintJobAttributeEvent;
		}
	}
}

namespace javax {
	namespace print {
		namespace event {

class $import PrintJobAttributeListener : public ::java::lang::Object {
	$interface(PrintJobAttributeListener, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void attributeUpdate(::javax::print::event::PrintJobAttributeEvent* pjae) {}
};

		} // event
	} // print
} // javax

#endif // _javax_print_event_PrintJobAttributeListener_h_