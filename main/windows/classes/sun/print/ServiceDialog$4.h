#ifndef _sun_print_ServiceDialog$4_h_
#define _sun_print_ServiceDialog$4_h_
//$ class sun.print.ServiceDialog$4
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace print {

class ServiceDialog$4 : public ::java::security::PrivilegedAction {
	$class(ServiceDialog$4, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	ServiceDialog$4();
	void init$();
	virtual $Object* run() override;
};

	} // print
} // sun

#endif // _sun_print_ServiceDialog$4_h_