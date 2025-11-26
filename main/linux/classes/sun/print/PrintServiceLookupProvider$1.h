#ifndef _sun_print_PrintServiceLookupProvider$1_h_
#define _sun_print_PrintServiceLookupProvider$1_h_
//$ class sun.print.PrintServiceLookupProvider$1
//$ extends java.security.PrivilegedExceptionAction

#include <java/lang/Array.h>
#include <java/security/PrivilegedExceptionAction.h>

namespace sun {
	namespace print {

class PrintServiceLookupProvider$1 : public ::java::security::PrivilegedExceptionAction {
	$class(PrintServiceLookupProvider$1, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	PrintServiceLookupProvider$1();
	void init$($StringArray* val$cmd);
	virtual $Object* run() override;
	$StringArray* val$cmd = nullptr;
};

	} // print
} // sun

#endif // _sun_print_PrintServiceLookupProvider$1_h_