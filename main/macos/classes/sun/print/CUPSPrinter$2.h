#ifndef _sun_print_CUPSPrinter$2_h_
#define _sun_print_CUPSPrinter$2_h_
//$ class sun.print.CUPSPrinter$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace net {
		class HttpURLConnection;
	}
}

namespace sun {
	namespace print {

class CUPSPrinter$2 : public ::java::security::PrivilegedAction {
	$class(CUPSPrinter$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	CUPSPrinter$2();
	void init$(::java::net::HttpURLConnection* val$urlConnection);
	virtual $Object* run() override;
	::java::net::HttpURLConnection* val$urlConnection = nullptr;
};

	} // print
} // sun

#endif // _sun_print_CUPSPrinter$2_h_