#ifndef _java_awt_HeadlessException_h_
#define _java_awt_HeadlessException_h_
//$ class java.awt.HeadlessException
//$ extends java.lang.UnsupportedOperationException

#include <java/lang/UnsupportedOperationException.h>

namespace java {
	namespace awt {

class $export HeadlessException : public ::java::lang::UnsupportedOperationException {
	$class(HeadlessException, $NO_CLASS_INIT, ::java::lang::UnsupportedOperationException)
public:
	HeadlessException();
	void init$();
	void init$($String* msg);
	virtual $String* getMessage() override;
	static const int64_t serialVersionUID = (int64_t)0x0251F4A3A929DCA3;
	HeadlessException(const HeadlessException& e);
	virtual void throw$() override;
	inline HeadlessException* operator ->() {
		return (HeadlessException*)throwing$;
	}
};

	} // awt
} // java

#endif // _java_awt_HeadlessException_h_