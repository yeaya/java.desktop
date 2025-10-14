#ifndef _sun_print_PSPrinterJob$3_h_
#define _sun_print_PSPrinterJob$3_h_
//$ class sun.print.PSPrinterJob$3
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace print {
		class PSPrinterJob;
	}
}

namespace sun {
	namespace print {

class PSPrinterJob$3 : public ::java::security::PrivilegedAction {
	$class(PSPrinterJob$3, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	PSPrinterJob$3();
	void init$(::sun::print::PSPrinterJob* this$0);
	virtual $Object* run() override;
	::sun::print::PSPrinterJob* this$0 = nullptr;
};

	} // print
} // sun

#endif // _sun_print_PSPrinterJob$3_h_