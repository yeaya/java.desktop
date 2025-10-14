#ifndef _sun_awt_Win32FontManager$1_h_
#define _sun_awt_Win32FontManager$1_h_
//$ class sun.awt.Win32FontManager$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace awt {

class Win32FontManager$1 : public ::java::security::PrivilegedAction {
	$class(Win32FontManager$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	Win32FontManager$1();
	void init$();
	virtual $Object* run() override;
};

	} // awt
} // sun

#endif // _sun_awt_Win32FontManager$1_h_