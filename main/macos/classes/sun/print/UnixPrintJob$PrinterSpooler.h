#ifndef _sun_print_UnixPrintJob$PrinterSpooler_h_
#define _sun_print_UnixPrintJob$PrinterSpooler_h_
//$ class sun.print.UnixPrintJob$PrinterSpooler
//$ extends java.security.PrivilegedAction

#include <java/lang/Array.h>
#include <java/security/PrivilegedAction.h>

namespace java {
	namespace lang {
		class Process;
	}
}
namespace javax {
	namespace print {
		class PrintException;
	}
}
namespace sun {
	namespace print {
		class UnixPrintJob;
	}
}

namespace sun {
	namespace print {

class UnixPrintJob$PrinterSpooler : public ::java::security::PrivilegedAction {
	$class(UnixPrintJob$PrinterSpooler, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	UnixPrintJob$PrinterSpooler();
	void init$(::sun::print::UnixPrintJob* this$0);
	void handleProcessFailure(::java::lang::Process* failedProcess, $StringArray* execCmd, int32_t result);
	virtual $Object* run() override;
	::sun::print::UnixPrintJob* this$0 = nullptr;
	::javax::print::PrintException* pex = nullptr;
};

	} // print
} // sun

#endif // _sun_print_UnixPrintJob$PrinterSpooler_h_