#ifndef _javax_print_event_PrintJobAttributeEvent_h_
#define _javax_print_event_PrintJobAttributeEvent_h_
//$ class javax.print.event.PrintJobAttributeEvent
//$ extends javax.print.event.PrintEvent

#include <javax/print/event/PrintEvent.h>

namespace javax {
	namespace print {
		class DocPrintJob;
	}
}
namespace javax {
	namespace print {
		namespace attribute {
			class PrintJobAttributeSet;
		}
	}
}

namespace javax {
	namespace print {
		namespace event {

class $import PrintJobAttributeEvent : public ::javax::print::event::PrintEvent {
	$class(PrintJobAttributeEvent, $NO_CLASS_INIT, ::javax::print::event::PrintEvent)
public:
	PrintJobAttributeEvent();
	void init$(::javax::print::DocPrintJob* source, ::javax::print::attribute::PrintJobAttributeSet* attributes);
	virtual ::javax::print::attribute::PrintJobAttributeSet* getAttributes();
	virtual ::javax::print::DocPrintJob* getPrintJob();
	static const int64_t serialVersionUID = (int64_t)0xA550E643002870AB;
	::javax::print::attribute::PrintJobAttributeSet* attributes = nullptr;
};

		} // event
	} // print
} // javax

#endif // _javax_print_event_PrintJobAttributeEvent_h_