#ifndef _java_awt_print_PrinterException_h_
#define _java_awt_print_PrinterException_h_
//$ class java.awt.print.PrinterException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace java {
	namespace awt {
		namespace print {

class $import PrinterException : public ::java::lang::Exception {
	$class(PrinterException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	PrinterException();
	void init$();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0xCBDA5BD2197EAC25;
	PrinterException(const PrinterException& e);
	virtual void throw$() override;
	inline PrinterException* operator ->() {
		return (PrinterException*)throwing$;
	}
};

		} // print
	} // awt
} // java

#endif // _java_awt_print_PrinterException_h_