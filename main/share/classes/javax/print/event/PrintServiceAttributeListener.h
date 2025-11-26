#ifndef _javax_print_event_PrintServiceAttributeListener_h_
#define _javax_print_event_PrintServiceAttributeListener_h_
//$ interface javax.print.event.PrintServiceAttributeListener
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace print {
		namespace event {
			class PrintServiceAttributeEvent;
		}
	}
}

namespace javax {
	namespace print {
		namespace event {

class $export PrintServiceAttributeListener : public ::java::lang::Object {
	$interface(PrintServiceAttributeListener, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void attributeUpdate(::javax::print::event::PrintServiceAttributeEvent* psae) {}
};

		} // event
	} // print
} // javax

#endif // _javax_print_event_PrintServiceAttributeListener_h_