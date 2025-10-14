#ifndef _java_awt_FontFormatException_h_
#define _java_awt_FontFormatException_h_
//$ class java.awt.FontFormatException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace java {
	namespace awt {

class $export FontFormatException : public ::java::lang::Exception {
	$class(FontFormatException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	FontFormatException();
	void init$($String* reason);
	static const int64_t serialVersionUID = (int64_t)0xC1CF425A7C3EFE08;
	FontFormatException(const FontFormatException& e);
	FontFormatException wrapper$();
	virtual void throwWrapper$() override;
};

	} // awt
} // java

#endif // _java_awt_FontFormatException_h_