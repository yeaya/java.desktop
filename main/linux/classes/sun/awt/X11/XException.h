#ifndef _sun_awt_X11_XException_h_
#define _sun_awt_X11_XException_h_
//$ class sun.awt.X11.XException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace sun {
	namespace awt {
		namespace X11 {

class XException : public ::java::lang::RuntimeException {
	$class(XException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	XException();
	void init$();
	void init$($String* message);
	XException(const XException& e);
	virtual void throw$() override;
	inline XException* operator ->() {
		return (XException*)throwing$;
	}
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XException_h_