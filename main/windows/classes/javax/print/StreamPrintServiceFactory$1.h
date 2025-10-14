#ifndef _javax_print_StreamPrintServiceFactory$1_h_
#define _javax_print_StreamPrintServiceFactory$1_h_
//$ class javax.print.StreamPrintServiceFactory$1
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

namespace javax {
	namespace print {

class StreamPrintServiceFactory$1 : public ::java::security::PrivilegedExceptionAction {
	$class(StreamPrintServiceFactory$1, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	StreamPrintServiceFactory$1();
	void init$();
	virtual $Object* run() override;
};

	} // print
} // javax

#endif // _javax_print_StreamPrintServiceFactory$1_h_