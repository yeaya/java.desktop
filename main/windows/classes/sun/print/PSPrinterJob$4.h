#ifndef _sun_print_PSPrinterJob$4_h_
#define _sun_print_PSPrinterJob$4_h_
//$ class sun.print.PSPrinterJob$4
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace javax {
	namespace print {
		class PrintService;
	}
}
namespace sun {
	namespace print {
		class PSPrinterJob;
	}
}

namespace sun {
	namespace print {

class PSPrinterJob$4 : public ::java::security::PrivilegedAction {
	$class(PSPrinterJob$4, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	PSPrinterJob$4();
	void init$(::sun::print::PSPrinterJob* this$0, ::javax::print::PrintService* val$pservice);
	virtual $Object* run() override;
	::sun::print::PSPrinterJob* this$0 = nullptr;
	::javax::print::PrintService* val$pservice = nullptr;
};

	} // print
} // sun

#endif // _sun_print_PSPrinterJob$4_h_