#ifndef _java_awt_Font$3_h_
#define _java_awt_Font$3_h_
//$ class java.awt.Font$3
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

namespace java {
	namespace io {
		class File;
	}
}

namespace java {
	namespace awt {

class Font$3 : public ::java::security::PrivilegedExceptionAction {
	$class(Font$3, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	Font$3();
	void init$(::java::io::File* val$tFile);
	virtual $Object* run() override;
	::java::io::File* val$tFile = nullptr;
};

	} // awt
} // java

#endif // _java_awt_Font$3_h_