#ifndef _java_awt_AWTException_h_
#define _java_awt_AWTException_h_
//$ class java.awt.AWTException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace java {
	namespace awt {

class $import AWTException : public ::java::lang::Exception {
	$class(AWTException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	AWTException();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0xE5A05F535A20D519;
	AWTException(const AWTException& e);
	AWTException wrapper$();
	virtual void throwWrapper$() override;
};

	} // awt
} // java

#endif // _java_awt_AWTException_h_