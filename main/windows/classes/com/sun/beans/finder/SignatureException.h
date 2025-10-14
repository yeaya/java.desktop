#ifndef _com_sun_beans_finder_SignatureException_h_
#define _com_sun_beans_finder_SignatureException_h_
//$ class com.sun.beans.finder.SignatureException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace lang {
		class NoSuchMethodException;
		class Throwable;
	}
}

namespace com {
	namespace sun {
		namespace beans {
			namespace finder {

class SignatureException : public ::java::lang::RuntimeException {
	$class(SignatureException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	SignatureException();
	void init$($Throwable* cause);
	::java::lang::NoSuchMethodException* toNoSuchMethodException($String* message);
	static const int64_t serialVersionUID = (int64_t)0x3EF375688C7AA749;
	SignatureException(const SignatureException& e);
	SignatureException wrapper$();
	virtual void throwWrapper$() override;
};

			} // finder
		} // beans
	} // sun
} // com

#endif // _com_sun_beans_finder_SignatureException_h_