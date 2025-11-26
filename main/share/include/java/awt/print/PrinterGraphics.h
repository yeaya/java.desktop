#ifndef _java_awt_print_PrinterGraphics_h_
#define _java_awt_print_PrinterGraphics_h_
//$ interface java.awt.print.PrinterGraphics
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		namespace print {
			class PrinterJob;
		}
	}
}

namespace java {
	namespace awt {
		namespace print {

class $import PrinterGraphics : public ::java::lang::Object {
	$interface(PrinterGraphics, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::awt::print::PrinterJob* getPrinterJob() {return nullptr;}
};

		} // print
	} // awt
} // java

#endif // _java_awt_print_PrinterGraphics_h_