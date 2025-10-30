#ifndef _sun_java2d_InvalidPipeException_h_
#define _sun_java2d_InvalidPipeException_h_
//$ class sun.java2d.InvalidPipeException
//$ extends java.lang.IllegalStateException

#include <java/lang/IllegalStateException.h>

namespace sun {
	namespace java2d {

class InvalidPipeException : public ::java::lang::IllegalStateException {
	$class(InvalidPipeException, $NO_CLASS_INIT, ::java::lang::IllegalStateException)
public:
	InvalidPipeException();
	void init$();
	void init$($String* s);
	InvalidPipeException(const InvalidPipeException& e);
	virtual void throw$() override;
	inline InvalidPipeException* operator ->() {
		return (InvalidPipeException*)throwing$;
	}
};

	} // java2d
} // sun

#endif // _sun_java2d_InvalidPipeException_h_