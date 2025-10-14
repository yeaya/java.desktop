#ifndef _javax_print_MultiDocPrintService_h_
#define _javax_print_MultiDocPrintService_h_
//$ interface javax.print.MultiDocPrintService
//$ extends javax.print.PrintService

#include <javax/print/PrintService.h>

namespace javax {
	namespace print {
		class MultiDocPrintJob;
	}
}

namespace javax {
	namespace print {

class $export MultiDocPrintService : public ::javax::print::PrintService {
	$interface(MultiDocPrintService, $NO_CLASS_INIT, ::javax::print::PrintService)
public:
	virtual ::javax::print::MultiDocPrintJob* createMultiDocPrintJob() {return nullptr;}
};

	} // print
} // javax

#endif // _javax_print_MultiDocPrintService_h_