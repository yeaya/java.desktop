#ifndef _sun_print_PSPrinterJob$PrinterSpooler_h_
#define _sun_print_PSPrinterJob$PrinterSpooler_h_
//$ class sun.print.PSPrinterJob$PrinterSpooler
//$ extends java.security.PrivilegedAction

#include <java/lang/Array.h>
#include <java/security/PrivilegedAction.h>

namespace java {
	namespace awt {
		namespace print {
			class PrinterException;
		}
	}
}
namespace java {
	namespace lang {
		class Process;
	}
}
namespace sun {
	namespace print {
		class PSPrinterJob;
	}
}

namespace sun {
	namespace print {

class PSPrinterJob$PrinterSpooler : public ::java::security::PrivilegedAction {
	$class(PSPrinterJob$PrinterSpooler, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	PSPrinterJob$PrinterSpooler();
	void init$(::sun::print::PSPrinterJob* this$0);
	void handleProcessFailure(::java::lang::Process* failedProcess, $StringArray* execCmd, int32_t result);
	virtual $Object* run() override;
	::sun::print::PSPrinterJob* this$0 = nullptr;
	::java::awt::print::PrinterException* pex = nullptr;
};

	} // print
} // sun

#endif // _sun_print_PSPrinterJob$PrinterSpooler_h_