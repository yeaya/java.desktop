#ifndef _sun_print_Win32PrintJob_h_
#define _sun_print_Win32PrintJob_h_
//$ class sun.print.Win32PrintJob
//$ extends javax.print.CancelablePrintJob

#include <java/lang/Array.h>
#include <javax/print/CancelablePrintJob.h>

#pragma push_macro("PRINTBUFFERLEN")
#undef PRINTBUFFERLEN

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
				class MediaSizeName;
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
		class Win32PrintService;
	}
}

namespace sun {
	namespace print {

class Win32PrintJob : public ::javax::print::CancelablePrintJob {
	$class(Win32PrintJob, $NO_CLASS_INIT, ::javax::print::CancelablePrintJob)
public:
	Win32PrintJob();
	void init$(::sun::print::Win32PrintService* service);
	virtual void addPrintJobAttributeListener(::javax::print::event::PrintJobAttributeListener* listener, ::javax::print::attribute::PrintJobAttributeSet* attributes) override;
	virtual void addPrintJobListener(::javax::print::event::PrintJobListener* listener) override;
	virtual void cancel() override;
	void closeDataStreams();
	bool endPrintRawData();
	void getAttributeValues(::javax::print::DocFlavor* flavor);
	virtual ::javax::print::attribute::PrintJobAttributeSet* getAttributes() override;
	virtual ::javax::print::PrintService* getPrintService() override;
	void initializeAttributeSets(::javax::print::Doc* doc, ::javax::print::attribute::PrintRequestAttributeSet* reqSet);
	void notifyEvent(int32_t reason);
	virtual void pageableJob(::java::awt::print::Pageable* pageable);
	virtual void print(::javax::print::Doc* doc, ::javax::print::attribute::PrintRequestAttributeSet* attributes) override;
	bool printRawData($bytes* data, int32_t count);
	virtual void printableJob(::java::awt::print::Printable* printable);
	virtual void removePrintJobAttributeListener(::javax::print::event::PrintJobAttributeListener* listener) override;
	virtual void removePrintJobListener(::javax::print::event::PrintJobListener* listener) override;
	bool startPrintRawData($String* printerName, $String* jobName);
	::java::util::Vector* jobListeners = nullptr;
	::java::util::Vector* attrListeners = nullptr;
	::java::util::Vector* listenedAttributeSets = nullptr;
	::sun::print::Win32PrintService* service = nullptr;
	bool fidelity = false;
	bool printing = false;
	bool printReturned = false;
	::javax::print::attribute::PrintRequestAttributeSet* reqAttrSet = nullptr;
	::javax::print::attribute::PrintJobAttributeSet* jobAttrSet = nullptr;
	::java::awt::print::PrinterJob* job = nullptr;
	::javax::print::Doc* doc = nullptr;
	$String* mDestination = nullptr;
	::java::io::InputStream* instream = nullptr;
	::java::io::Reader* reader = nullptr;
	$String* jobName = nullptr;
	int32_t copies = 0;
	::javax::print::attribute::standard::MediaSizeName* mediaName = nullptr;
	::javax::print::attribute::standard::MediaSize* mediaSize = nullptr;
	::javax::print::attribute::standard::OrientationRequested* orient = nullptr;
	int64_t hPrintJob = 0;
	static const int32_t PRINTBUFFERLEN = 8192;
};

	} // print
} // sun

#pragma pop_macro("PRINTBUFFERLEN")

#endif // _sun_print_Win32PrintJob_h_