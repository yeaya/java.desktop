#ifndef _java_awt_print_PrinterJob_h_
#define _java_awt_print_PrinterJob_h_
//$ class java.awt.print.PrinterJob
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		namespace print {
			class PageFormat;
			class Pageable;
			class Printable;
		}
	}
}
namespace javax {
	namespace print {
		class PrintService;
		class StreamPrintServiceFactory;
	}
}
namespace javax {
	namespace print {
		namespace attribute {
			class PrintRequestAttributeSet;
		}
	}
}

namespace java {
	namespace awt {
		namespace print {

class $export PrinterJob : public ::java::lang::Object {
	$class(PrinterJob, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PrinterJob();
	void init$();
	virtual void cancel() {}
	virtual ::java::awt::print::PageFormat* defaultPage(::java::awt::print::PageFormat* page) {return nullptr;}
	virtual ::java::awt::print::PageFormat* defaultPage();
	virtual int32_t getCopies() {return 0;}
	virtual $String* getJobName() {return nullptr;}
	virtual ::java::awt::print::PageFormat* getPageFormat(::javax::print::attribute::PrintRequestAttributeSet* attributes);
	virtual ::javax::print::PrintService* getPrintService();
	static ::java::awt::print::PrinterJob* getPrinterJob();
	virtual $String* getUserName() {return nullptr;}
	virtual bool isCancelled() {return false;}
	static $Array<::javax::print::PrintService>* lookupPrintServices();
	static $Array<::javax::print::StreamPrintServiceFactory>* lookupStreamPrintServices($String* mimeType);
	virtual ::java::awt::print::PageFormat* pageDialog(::java::awt::print::PageFormat* page) {return nullptr;}
	virtual ::java::awt::print::PageFormat* pageDialog(::javax::print::attribute::PrintRequestAttributeSet* attributes);
	virtual void print() {}
	virtual void print(::javax::print::attribute::PrintRequestAttributeSet* attributes);
	virtual bool printDialog() {return false;}
	virtual bool printDialog(::javax::print::attribute::PrintRequestAttributeSet* attributes);
	virtual void setCopies(int32_t copies) {}
	virtual void setJobName($String* jobName) {}
	virtual void setPageable(::java::awt::print::Pageable* document) {}
	virtual void setPrintService(::javax::print::PrintService* service);
	virtual void setPrintable(::java::awt::print::Printable* painter) {}
	virtual void setPrintable(::java::awt::print::Printable* painter, ::java::awt::print::PageFormat* format) {}
	virtual ::java::awt::print::PageFormat* validatePage(::java::awt::print::PageFormat* page) {return nullptr;}
};

		} // print
	} // awt
} // java

#endif // _java_awt_print_PrinterJob_h_