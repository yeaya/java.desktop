#ifndef _java_awt_color_ProfileDataException_h_
#define _java_awt_color_ProfileDataException_h_
//$ class java.awt.color.ProfileDataException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace awt {
		namespace color {

class $import ProfileDataException : public ::java::lang::RuntimeException {
	$class(ProfileDataException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	ProfileDataException();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0x651D9288C30377C2;
	ProfileDataException(const ProfileDataException& e);
	virtual void throw$() override;
	inline ProfileDataException* operator ->() {
		return (ProfileDataException*)throwing$;
	}
};

		} // color
	} // awt
} // java

#endif // _java_awt_color_ProfileDataException_h_