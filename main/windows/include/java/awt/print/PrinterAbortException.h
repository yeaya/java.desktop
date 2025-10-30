#ifndef _java_awt_print_PrinterAbortException_h_
#define _java_awt_print_PrinterAbortException_h_
//$ class java.awt.print.PrinterAbortException
//$ extends java.awt.print.PrinterException

#include <java/awt/print/PrinterException.h>

namespace java {
	namespace awt {
		namespace print {

class $import PrinterAbortException : public ::java::awt::print::PrinterException {
	$class(PrinterAbortException, $NO_CLASS_INIT, ::java::awt::print::PrinterException)
public:
	PrinterAbortException();
	void init$();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0x41932C31C3078DF8;
	PrinterAbortException(const PrinterAbortException& e);
	virtual void throw$() override;
	inline PrinterAbortException* operator ->() {
		return (PrinterAbortException*)throwing$;
	}
};

		} // print
	} // awt
} // java

#endif // _java_awt_print_PrinterAbortException_h_