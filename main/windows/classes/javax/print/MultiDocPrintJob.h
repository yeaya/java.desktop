#ifndef _javax_print_MultiDocPrintJob_h_
#define _javax_print_MultiDocPrintJob_h_
//$ interface javax.print.MultiDocPrintJob
//$ extends javax.print.DocPrintJob

#include <javax/print/DocPrintJob.h>

namespace javax {
	namespace print {
		class MultiDoc;
	}
}
namespace javax {
	namespace print {
		namespace attribute {
			class PrintRequestAttributeSet;
		}
	}
}

namespace javax {
	namespace print {

class $export MultiDocPrintJob : public ::javax::print::DocPrintJob {
	$interface(MultiDocPrintJob, $NO_CLASS_INIT, ::javax::print::DocPrintJob)
public:
	using ::javax::print::DocPrintJob::print;
	virtual void print(::javax::print::MultiDoc* multiDoc, ::javax::print::attribute::PrintRequestAttributeSet* attributes) {}
};

	} // print
} // javax

#endif // _javax_print_MultiDocPrintJob_h_