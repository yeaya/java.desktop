#ifndef _javax_print_event_PrintJobEvent_h_
#define _javax_print_event_PrintJobEvent_h_
//$ class javax.print.event.PrintJobEvent
//$ extends javax.print.event.PrintEvent

#include <javax/print/event/PrintEvent.h>

#pragma push_macro("DATA_TRANSFER_COMPLETE")
#undef DATA_TRANSFER_COMPLETE
#pragma push_macro("JOB_CANCELED")
#undef JOB_CANCELED
#pragma push_macro("JOB_COMPLETE")
#undef JOB_COMPLETE
#pragma push_macro("JOB_FAILED")
#undef JOB_FAILED
#pragma push_macro("NO_MORE_EVENTS")
#undef NO_MORE_EVENTS
#pragma push_macro("REQUIRES_ATTENTION")
#undef REQUIRES_ATTENTION

namespace javax {
	namespace print {
		class DocPrintJob;
	}
}

namespace javax {
	namespace print {
		namespace event {

class $import PrintJobEvent : public ::javax::print::event::PrintEvent {
	$class(PrintJobEvent, $NO_CLASS_INIT, ::javax::print::event::PrintEvent)
public:
	PrintJobEvent();
	void init$(::javax::print::DocPrintJob* source, int32_t reason);
	virtual int32_t getPrintEventType();
	virtual ::javax::print::DocPrintJob* getPrintJob();
	static const int64_t serialVersionUID = (int64_t)0xE83EF91D6A42E55B;
	int32_t reason = 0;
	static const int32_t JOB_CANCELED = 101;
	static const int32_t JOB_COMPLETE = 102;
	static const int32_t JOB_FAILED = 103;
	static const int32_t REQUIRES_ATTENTION = 104;
	static const int32_t NO_MORE_EVENTS = 105;
	static const int32_t DATA_TRANSFER_COMPLETE = 106;
};

		} // event
	} // print
} // javax

#pragma pop_macro("DATA_TRANSFER_COMPLETE")
#pragma pop_macro("JOB_CANCELED")
#pragma pop_macro("JOB_COMPLETE")
#pragma pop_macro("JOB_FAILED")
#pragma pop_macro("NO_MORE_EVENTS")
#pragma pop_macro("REQUIRES_ATTENTION")

#endif // _javax_print_event_PrintJobEvent_h_