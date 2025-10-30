#ifndef _sun_awt_SunToolkit$IllegalThreadException_h_
#define _sun_awt_SunToolkit$IllegalThreadException_h_
//$ class sun.awt.SunToolkit$IllegalThreadException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace sun {
	namespace awt {

class $import SunToolkit$IllegalThreadException : public ::java::lang::RuntimeException {
	$class(SunToolkit$IllegalThreadException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	SunToolkit$IllegalThreadException();
	void init$($String* msg);
	void init$();
	SunToolkit$IllegalThreadException(const SunToolkit$IllegalThreadException& e);
	virtual void throw$() override;
	inline SunToolkit$IllegalThreadException* operator ->() {
		return (SunToolkit$IllegalThreadException*)throwing$;
	}
};

	} // awt
} // sun

#endif // _sun_awt_SunToolkit$IllegalThreadException_h_