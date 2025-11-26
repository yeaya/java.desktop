#ifndef _javax_print_CancelablePrintJob_h_
#define _javax_print_CancelablePrintJob_h_
//$ interface javax.print.CancelablePrintJob
//$ extends javax.print.DocPrintJob

#include <javax/print/DocPrintJob.h>

namespace javax {
	namespace print {

class $import CancelablePrintJob : public ::javax::print::DocPrintJob {
	$interface(CancelablePrintJob, $NO_CLASS_INIT, ::javax::print::DocPrintJob)
public:
	virtual void cancel() {}
};

	} // print
} // javax

#endif // _javax_print_CancelablePrintJob_h_