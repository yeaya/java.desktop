#ifndef _java_awt_print_PrinterIOException_h_
#define _java_awt_print_PrinterIOException_h_
//$ class java.awt.print.PrinterIOException
//$ extends java.awt.print.PrinterException

#include <java/awt/print/PrinterException.h>

namespace java {
	namespace io {
		class IOException;
	}
}
namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace awt {
		namespace print {

class $import PrinterIOException : public ::java::awt::print::PrinterException {
	$class(PrinterIOException, $NO_CLASS_INIT, ::java::awt::print::PrinterException)
public:
	PrinterIOException();
	void init$(::java::io::IOException* exception);
	virtual $Throwable* getCause() override;
	virtual ::java::io::IOException* getIOException();
	static const int64_t serialVersionUID = (int64_t)0x513277E9D700C52E;
	::java::io::IOException* mException = nullptr;
	PrinterIOException(const PrinterIOException& e);
	virtual void throw$() override;
	inline PrinterIOException* operator ->() {
		return (PrinterIOException*)throwing$;
	}
};

		} // print
	} // awt
} // java

#endif // _java_awt_print_PrinterIOException_h_