#ifndef _javax_print_event_PrintServiceAttributeEvent_h_
#define _javax_print_event_PrintServiceAttributeEvent_h_
//$ class javax.print.event.PrintServiceAttributeEvent
//$ extends javax.print.event.PrintEvent

#include <javax/print/event/PrintEvent.h>

namespace javax {
	namespace print {
		class PrintService;
	}
}
namespace javax {
	namespace print {
		namespace attribute {
			class PrintServiceAttributeSet;
		}
	}
}

namespace javax {
	namespace print {
		namespace event {

class $export PrintServiceAttributeEvent : public ::javax::print::event::PrintEvent {
	$class(PrintServiceAttributeEvent, $NO_CLASS_INIT, ::javax::print::event::PrintEvent)
public:
	PrintServiceAttributeEvent();
	void init$(::javax::print::PrintService* source, ::javax::print::attribute::PrintServiceAttributeSet* attributes);
	virtual ::javax::print::attribute::PrintServiceAttributeSet* getAttributes();
	virtual ::javax::print::PrintService* getPrintService();
	static const int64_t serialVersionUID = (int64_t)0x970036E4B0876538;
	::javax::print::attribute::PrintServiceAttributeSet* attributes = nullptr;
};

		} // event
	} // print
} // javax

#endif // _javax_print_event_PrintServiceAttributeEvent_h_