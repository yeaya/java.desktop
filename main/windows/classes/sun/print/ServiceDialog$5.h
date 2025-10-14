#ifndef _sun_print_ServiceDialog$5_h_
#define _sun_print_ServiceDialog$5_h_
//$ class sun.print.ServiceDialog$5
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace print {

class ServiceDialog$5 : public ::java::security::PrivilegedAction {
	$class(ServiceDialog$5, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	ServiceDialog$5();
	void init$($String* val$key);
	virtual $Object* run() override;
	$String* val$key = nullptr;
};

	} // print
} // sun

#endif // _sun_print_ServiceDialog$5_h_