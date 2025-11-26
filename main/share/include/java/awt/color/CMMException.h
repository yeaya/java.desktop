#ifndef _java_awt_color_CMMException_h_
#define _java_awt_color_CMMException_h_
//$ class java.awt.color.CMMException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace awt {
		namespace color {

class $import CMMException : public ::java::lang::RuntimeException {
	$class(CMMException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	CMMException();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0x5026E770E0CB0615;
	CMMException(const CMMException& e);
	virtual void throw$() override;
	inline CMMException* operator ->() {
		return (CMMException*)throwing$;
	}
};

		} // color
	} // awt
} // java

#endif // _java_awt_color_CMMException_h_