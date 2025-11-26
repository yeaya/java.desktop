#ifndef _sun_print_CUPSPrinter$3_h_
#define _sun_print_CUPSPrinter$3_h_
//$ class sun.print.CUPSPrinter$3
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace net {
		class HttpURLConnection;
	}
}

namespace sun {
	namespace print {

class CUPSPrinter$3 : public ::java::security::PrivilegedAction {
	$class(CUPSPrinter$3, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	CUPSPrinter$3();
	void init$(::java::net::HttpURLConnection* val$urlConnection);
	virtual $Object* run() override;
	::java::net::HttpURLConnection* val$urlConnection = nullptr;
};

	} // print
} // sun

#endif // _sun_print_CUPSPrinter$3_h_