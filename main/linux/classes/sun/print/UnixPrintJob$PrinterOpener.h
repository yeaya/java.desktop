#ifndef _sun_print_UnixPrintJob$PrinterOpener_h_
#define _sun_print_UnixPrintJob$PrinterOpener_h_
//$ class sun.print.UnixPrintJob$PrinterOpener
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace io {
		class OutputStream;
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

class UnixPrintJob$PrinterOpener : public ::java::security::PrivilegedAction {
	$class(UnixPrintJob$PrinterOpener, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	UnixPrintJob$PrinterOpener();
	void init$(::sun::print::UnixPrintJob* this$0);
	virtual $Object* run() override;
	::sun::print::UnixPrintJob* this$0 = nullptr;
	::javax::print::PrintException* pex = nullptr;
	::java::io::OutputStream* result = nullptr;
};

	} // print
} // sun

#endif // _sun_print_UnixPrintJob$PrinterOpener_h_