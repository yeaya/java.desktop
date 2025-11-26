#ifndef _java_awt_IllegalComponentStateException_h_
#define _java_awt_IllegalComponentStateException_h_
//$ class java.awt.IllegalComponentStateException
//$ extends java.lang.IllegalStateException

#include <java/lang/IllegalStateException.h>

namespace java {
	namespace awt {

class $import IllegalComponentStateException : public ::java::lang::IllegalStateException {
	$class(IllegalComponentStateException, $NO_CLASS_INIT, ::java::lang::IllegalStateException)
public:
	IllegalComponentStateException();
	void init$();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0xE5C7B7A7D4601A92;
	IllegalComponentStateException(const IllegalComponentStateException& e);
	virtual void throw$() override;
	inline IllegalComponentStateException* operator ->() {
		return (IllegalComponentStateException*)throwing$;
	}
};

	} // awt
} // java

#endif // _java_awt_IllegalComponentStateException_h_