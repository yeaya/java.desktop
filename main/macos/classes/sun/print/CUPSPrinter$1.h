#ifndef _sun_print_CUPSPrinter$1_h_
#define _sun_print_CUPSPrinter$1_h_
//$ class sun.print.CUPSPrinter$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace print {

class CUPSPrinter$1 : public ::java::security::PrivilegedAction {
	$class(CUPSPrinter$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	CUPSPrinter$1();
	void init$();
	virtual $Object* run() override;
};

	} // print
} // sun

#endif // _sun_print_CUPSPrinter$1_h_