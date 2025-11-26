#ifndef _sun_print_UnixPrintJob_h_
#define _sun_print_UnixPrintJob_h_
//$ class sun.print.UnixPrintJob
//$ extends javax.print.CancelablePrintJob

#include <java/lang/Array.h>
#include <javax/print/CancelablePrintJob.h>

#pragma push_macro("DESTFILE")
#undef DESTFILE
#pragma push_macro("DESTPRINTER")
#undef DESTPRINTER

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
		class File;
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
				class NumberUp;
				class OrientationRequested;
				class Sides;
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
		class CustomMediaTray;
	}
}

namespace sun {
	namespace print {

class UnixPrintJob : public ::javax::print::CancelablePrintJob {
	$class(UnixPrintJob, 0, ::javax::print::CancelablePrintJob)
public:
	UnixPrintJob();
	void init$(::javax::print::PrintService* service);
	virtual void addPrintJobAttributeListener(::javax::print::event::PrintJobAttributeListener* listener, ::javax::print::attribute::PrintJobAttributeSet* attributes) override;
	virtual void addPrintJobListener(::javax::print::event::PrintJobListener* listener) override;
	virtual void cancel() override;
	void closeDataStreams();
	void getAttributeValues(::javax::print::DocFlavor* flavor);
	virtual ::javax::print::attribute::PrintJobAttributeSet* getAttributes() override;
	virtual ::javax::print::PrintService* getPrintService() override;
	void initializeAttributeSets(::javax::print::Doc* doc, ::javax::print::attribute::PrintRequestAttributeSet* reqSet);
	void notifyEvent(int32_t reason);
	virtual void pageableJob(::java::awt::print::Pageable* pageable);
	virtual void print(::javax::print::Doc* doc, ::javax::print::attribute::PrintRequestAttributeSet* attributes) override;
	$StringArray* printExecCmd($String* printer, $String* options, bool noJobSheet, $String* jobTitle, int32_t copies, $String* spoolFile);
	virtual void printableJob(::java::awt::print::Printable* printable);
	virtual void removePrintJobAttributeListener(::javax::print::event::PrintJobAttributeListener* listener) override;
	virtual void removePrintJobListener(::javax::print::event::PrintJobListener* listener) override;
	static $String* debugPrefix;
	::java::util::Vector* jobListeners = nullptr;
	::java::util::Vector* attrListeners = nullptr;
	::java::util::Vector* listenedAttributeSets = nullptr;
	::javax::print::PrintService* service = nullptr;
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
	::javax::print::attribute::standard::MediaSizeName* mediaName = nullptr;
	::javax::print::attribute::standard::MediaSize* mediaSize = nullptr;
	::sun::print::CustomMediaTray* customTray = nullptr;
	::javax::print::attribute::standard::OrientationRequested* orient = nullptr;
	::javax::print::attribute::standard::NumberUp* nUp = nullptr;
	::javax::print::attribute::standard::Sides* sides = nullptr;
	static int32_t DESTPRINTER;
	static int32_t DESTFILE;
	int32_t mDestType = 0;
	::java::io::File* spoolFile = nullptr;
	$String* mDestination = nullptr;
	$String* mOptions = nullptr;
	bool mNoJobSheet = false;
};

	} // print
} // sun

#pragma pop_macro("DESTFILE")
#pragma pop_macro("DESTPRINTER")

#endif // _sun_print_UnixPrintJob_h_