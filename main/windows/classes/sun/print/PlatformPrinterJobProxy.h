#ifndef _sun_print_PlatformPrinterJobProxy_h_
#define _sun_print_PlatformPrinterJobProxy_h_
//$ class sun.print.PlatformPrinterJobProxy
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		namespace print {
			class PrinterJob;
		}
	}
}

namespace sun {
	namespace print {

class PlatformPrinterJobProxy : public ::java::lang::Object {
	$class(PlatformPrinterJobProxy, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PlatformPrinterJobProxy();
	void init$();
	static ::java::awt::print::PrinterJob* getPrinterJob();
};

	} // print
} // sun

#endif // _sun_print_PlatformPrinterJobProxy_h_