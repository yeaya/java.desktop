#ifndef _java_awt_dnd_InvalidDnDOperationException_h_
#define _java_awt_dnd_InvalidDnDOperationException_h_
//$ class java.awt.dnd.InvalidDnDOperationException
//$ extends java.lang.IllegalStateException

#include <java/lang/IllegalStateException.h>

namespace java {
	namespace awt {
		namespace dnd {

class $import InvalidDnDOperationException : public ::java::lang::IllegalStateException {
	$class(InvalidDnDOperationException, 0, ::java::lang::IllegalStateException)
public:
	InvalidDnDOperationException();
	void init$();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0xABDD6DD9CABF42BA;
	static $String* dft_msg;
	InvalidDnDOperationException(const InvalidDnDOperationException& e);
	InvalidDnDOperationException wrapper$();
	virtual void throwWrapper$() override;
};

		} // dnd
	} // awt
} // java

#endif // _java_awt_dnd_InvalidDnDOperationException_h_