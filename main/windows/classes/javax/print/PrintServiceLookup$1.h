#ifndef _javax_print_PrintServiceLookup$1_h_
#define _javax_print_PrintServiceLookup$1_h_
//$ class javax.print.PrintServiceLookup$1
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

namespace javax {
	namespace print {

class PrintServiceLookup$1 : public ::java::security::PrivilegedExceptionAction {
	$class(PrintServiceLookup$1, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	PrintServiceLookup$1();
	void init$();
	virtual $Object* run() override;
};

	} // print
} // javax

#endif // _javax_print_PrintServiceLookup$1_h_