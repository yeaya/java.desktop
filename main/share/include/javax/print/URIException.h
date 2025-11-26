#ifndef _javax_print_URIException_h_
#define _javax_print_URIException_h_
//$ interface javax.print.URIException
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace net {
		class URI;
	}
}

namespace javax {
	namespace print {

class $import URIException : public ::java::lang::Object {
	$interface(URIException, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t getReason() {return 0;}
	virtual ::java::net::URI* getUnsupportedURI() {return nullptr;}
	static const int32_t URIInaccessible = 1;
	static const int32_t URISchemeNotSupported = 2;
	static const int32_t URIOtherProblem = (-1);
};

	} // print
} // javax

#endif // _javax_print_URIException_h_