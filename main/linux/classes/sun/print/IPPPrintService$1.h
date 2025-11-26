#ifndef _sun_print_IPPPrintService$1_h_
#define _sun_print_IPPPrintService$1_h_
//$ class sun.print.IPPPrintService$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace print {
		class IPPPrintService;
	}
}

namespace sun {
	namespace print {

class IPPPrintService$1 : public ::java::security::PrivilegedAction {
	$class(IPPPrintService$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	IPPPrintService$1();
	void init$(::sun::print::IPPPrintService* this$0);
	virtual $Object* run() override;
	::sun::print::IPPPrintService* this$0 = nullptr;
};

	} // print
} // sun

#endif // _sun_print_IPPPrintService$1_h_