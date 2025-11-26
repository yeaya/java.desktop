#ifndef _sun_print_PSStreamPrintJob_h_
#define _sun_print_PSStreamPrintJob_h_
//$ class sun.print.PSStreamPrintJob
//$ extends javax.print.CancelablePrintJob

#include <javax/print/CancelablePrintJob.h>

namespace java {
	namespace awt {
		namespace print {
			class Pageable;
			class Printable;
			class PrinterJob;
		}
	}
}
namespace java {
	namespace io {
		class InputStream;
		class Reader;
	}
}
namespace java {
	namespace util {
		class Vector;
	}
}
namespace javax {
	namespace print {
		class Doc;
		class DocFlavor;
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
		namespace attribute {
			namespace standard {
				class MediaSize;
				class OrientationRequested;
			}
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
namespace sun {
	namespace print {
		class PSStreamPrintService;
	}
}

namespace sun {
	namespace print {

class PSStreamPrintJob : public ::javax::print::CancelablePrintJob {
	$class(PSStreamPrintJob, $NO_CLASS_INIT, ::javax::print::CancelablePrintJob)
public:
	PSStreamPrintJob();
	void init$(::sun::print::PSStreamPrintService* service);
	virtual void addPrintJobAttributeListener(::javax::print::event::PrintJobAttributeListener* listener, ::javax::print::attribute::PrintJobAttributeSet* attributes) override;
	virtual void addPrintJobListener(::javax::print::event::PrintJobListener* listener) override;
	virtual void cancel() override;
	void closeDataStreams();
	void getAttributeValues(::javax::print::DocFlavor* flavor);
	virtual ::javax::print::attribute::PrintJobAttributeSet* getAttributes() override;
	virtual ::javax::print::PrintService* getPrintService() override;
	void initializeAttributeSets(::javax::print::Doc* doc, ::javax::print::attribute::PrintRequestAttributeSet* reqSet);
	void notifyEvent(int32_t reason);
	virtual void pageableJob(::java::awt::print::Pageable* pageable, ::javax::print::attribute::PrintRequestAttributeSet* attributes);
	virtual void print(::javax::print::Doc* doc, ::javax::print::attribute::PrintRequestAttributeSet* attributes) override;
	virtual void printableJob(::java::awt::print::Printable* printable, ::javax::print::attribute::PrintRequestAttributeSet* attributes);
	virtual void removePrintJobAttributeListener(::javax::print::event::PrintJobAttributeListener* listener) override;
	virtual void removePrintJobListener(::javax::print::event::PrintJobListener* listener) override;
	::java::util::Vector* jobListeners = nullptr;
	::java::util::Vector* attrListeners = nullptr;
	::java::util::Vector* listenedAttributeSets = nullptr;
	::sun::print::PSStreamPrintService* service = nullptr;
	bool fidelity = false;
	bool printing = false;
	bool printReturned = false;
	::javax::print::attribute::PrintRequestAttributeSet* reqAttrSet = nullptr;
	::javax::print::attribute::PrintJobAttributeSet* jobAttrSet = nullptr;
	::java::awt::print::PrinterJob* job = nullptr;
	::javax::print::Doc* doc = nullptr;
	::java::io::InputStream* instream = nullptr;
	::java::io::Reader* reader = nullptr;
	$String* jobName = nullptr;
	int32_t copies = 0;
	::javax::print::attribute::standard::MediaSize* mediaSize = nullptr;
	::javax::print::attribute::standard::OrientationRequested* orient = nullptr;
};

	} // print
} // sun

#endif // _sun_print_PSStreamPrintJob_h_