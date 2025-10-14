#ifndef _sun_print_PSPrinterJob$PrinterOpener_h_
#define _sun_print_PSPrinterJob$PrinterOpener_h_
//$ class sun.print.PSPrinterJob$PrinterOpener
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace awt {
		namespace print {
			class PrinterException;
		}
	}
}
namespace java {
	namespace io {
		class OutputStream;
	}
}
namespace sun {
	namespace print {
		class PSPrinterJob;
	}
}

namespace sun {
	namespace print {

class PSPrinterJob$PrinterOpener : public ::java::security::PrivilegedAction {
	$class(PSPrinterJob$PrinterOpener, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	PSPrinterJob$PrinterOpener();
	void init$(::sun::print::PSPrinterJob* this$0);
	virtual $Object* run() override;
	::sun::print::PSPrinterJob* this$0 = nullptr;
	::java::awt::print::PrinterException* pex = nullptr;
	::java::io::OutputStream* result = nullptr;
};

	} // print
} // sun

#endif // _sun_print_PSPrinterJob$PrinterOpener_h_