#ifndef _sun_lwawt_macosx_CPrinterJob$5_h_
#define _sun_lwawt_macosx_CPrinterJob$5_h_
//$ class sun.lwawt.macosx.CPrinterJob$5
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		namespace print {
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

class CPrinterJob$5 : public ::java::lang::Runnable {
	$class(CPrinterJob$5, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	CPrinterJob$5();
	void init$(::sun::lwawt::macosx::CPrinterJob* this$0, $ObjectArray* val$ret, int32_t val$pageIndex, ::java::awt::print::PrinterJob* val$printerJob);
	virtual void run() override;
	::sun::lwawt::macosx::CPrinterJob* this$0 = nullptr;
	::java::awt::print::PrinterJob* val$printerJob = nullptr;
	int32_t val$pageIndex = 0;
	$ObjectArray* val$ret = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CPrinterJob$5_h_