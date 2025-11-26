#ifndef _sun_print_ServiceDialog$IconRadioButton$1_h_
#define _sun_print_ServiceDialog$IconRadioButton$1_h_
//$ class sun.print.ServiceDialog$IconRadioButton$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace net {
		class URL;
	}
}
namespace sun {
	namespace print {
		class ServiceDialog;
		class ServiceDialog$IconRadioButton;
	}
}

namespace sun {
	namespace print {

class ServiceDialog$IconRadioButton$1 : public ::java::security::PrivilegedAction {
	$class(ServiceDialog$IconRadioButton$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	ServiceDialog$IconRadioButton$1();
	void init$(::sun::print::ServiceDialog$IconRadioButton* this$1, ::sun::print::ServiceDialog* val$this$0, ::java::net::URL* val$imgURL);
	virtual $Object* run() override;
	::sun::print::ServiceDialog$IconRadioButton* this$1 = nullptr;
	::java::net::URL* val$imgURL = nullptr;
	::sun::print::ServiceDialog* val$this$0 = nullptr;
};

	} // print
} // sun

#endif // _sun_print_ServiceDialog$IconRadioButton$1_h_