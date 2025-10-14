#ifndef _javax_print_event_PrintJobListener_h_
#define _javax_print_event_PrintJobListener_h_
//$ interface javax.print.event.PrintJobListener
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace print {
		namespace event {
			class PrintJobEvent;
		}
	}
}

namespace javax {
	namespace print {
		namespace event {

class $export PrintJobListener : public ::java::lang::Object {
	$interface(PrintJobListener, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void printDataTransferCompleted(::javax::print::event::PrintJobEvent* pje) {}
	virtual void printJobCanceled(::javax::print::event::PrintJobEvent* pje) {}
	virtual void printJobCompleted(::javax::print::event::PrintJobEvent* pje) {}
	virtual void printJobFailed(::javax::print::event::PrintJobEvent* pje) {}
	virtual void printJobNoMoreEvents(::javax::print::event::PrintJobEvent* pje) {}
	virtual void printJobRequiresAttention(::javax::print::event::PrintJobEvent* pje) {}
};

		} // event
	} // print
} // javax

#endif // _javax_print_event_PrintJobListener_h_