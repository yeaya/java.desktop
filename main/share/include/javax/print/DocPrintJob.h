#ifndef _javax_print_DocPrintJob_h_
#define _javax_print_DocPrintJob_h_
//$ interface javax.print.DocPrintJob
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace print {
		class Doc;
		class PrintService;
	}
}
namespace javax {
	namespace print {
		namespace attribute {
			class PrintJobAttributeSet;
			class PrintRequestAttributeSet;
		}
	}
}
namespace javax {
	namespace print {
		namespace event {
			class PrintJobAttributeListener;
			class PrintJobListener;
		}
	}
}

namespace javax {
	namespace print {

class $import DocPrintJob : public ::java::lang::Object {
	$interface(DocPrintJob, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void addPrintJobAttributeListener(::javax::print::event::PrintJobAttributeListener* listener, ::javax::print::attribute::PrintJobAttributeSet* attributes) {}
	virtual void addPrintJobListener(::javax::print::event::PrintJobListener* listener) {}
	virtual ::javax::print::attribute::PrintJobAttributeSet* getAttributes() {return nullptr;}
	virtual ::javax::print::PrintService* getPrintService() {return nullptr;}
	virtual void print(::javax::print::Doc* doc, ::javax::print::attribute::PrintRequestAttributeSet* attributes) {}
	virtual void removePrintJobAttributeListener(::javax::print::event::PrintJobAttributeListener* listener) {}
	virtual void removePrintJobListener(::javax::print::event::PrintJobListener* listener) {}
};

	} // print
} // javax

#endif // _javax_print_DocPrintJob_h_