#ifndef _javax_print_event_PrintJobAdapter_h_
#define _javax_print_event_PrintJobAdapter_h_
//$ class javax.print.event.PrintJobAdapter
//$ extends javax.print.event.PrintJobListener

#include <javax/print/event/PrintJobListener.h>

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

class $import PrintJobAdapter : public ::javax::print::event::PrintJobListener {
	$class(PrintJobAdapter, $NO_CLASS_INIT, ::javax::print::event::PrintJobListener)
public:
	PrintJobAdapter();
	void init$();
	virtual void printDataTransferCompleted(::javax::print::event::PrintJobEvent* pje) override;
	virtual void printJobCanceled(::javax::print::event::PrintJobEvent* pje) override;
	virtual void printJobCompleted(::javax::print::event::PrintJobEvent* pje) override;
	virtual void printJobFailed(::javax::print::event::PrintJobEvent* pje) override;
	virtual void printJobNoMoreEvents(::javax::print::event::PrintJobEvent* pje) override;
	virtual void printJobRequiresAttention(::javax::print::event::PrintJobEvent* pje) override;
};

		} // event
	} // print
} // javax

#endif // _javax_print_event_PrintJobAdapter_h_