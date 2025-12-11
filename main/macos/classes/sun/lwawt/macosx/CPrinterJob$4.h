#ifndef _sun_lwawt_macosx_CPrinterJob$4_h_
#define _sun_lwawt_macosx_CPrinterJob$4_h_
//$ class sun.lwawt.macosx.CPrinterJob$4
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		namespace print {
			class PageFormat;
			class Printable;
			class PrinterJob;
		}
	}
}
namespace sun {
	namespace lwawt {
		namespace macosx {
			class CPrinterJob;
		}
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CPrinterJob$4 : public ::java::lang::Runnable {
	$class(CPrinterJob$4, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	CPrinterJob$4();
	void init$(::sun::lwawt::macosx::CPrinterJob* this$0, ::java::awt::print::PageFormat* val$page, int64_t val$context, ::java::awt::print::PrinterJob* val$printerJob, ::java::awt::print::Printable* val$painter, int32_t val$pageIndex);
	virtual void run() override;
	::sun::lwawt::macosx::CPrinterJob* this$0 = nullptr;
	int32_t val$pageIndex = 0;
	::java::awt::print::Printable* val$painter = nullptr;
	::java::awt::print::PrinterJob* val$printerJob = nullptr;
	int64_t val$context = 0;
	::java::awt::print::PageFormat* val$page = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CPrinterJob$4_h_