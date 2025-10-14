#ifndef _sun_awt_Win32FontManager$4_h_
#define _sun_awt_Win32FontManager$4_h_
//$ class sun.awt.Win32FontManager$4
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace awt {

class Win32FontManager$4 : public ::java::security::PrivilegedAction {
	$class(Win32FontManager$4, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	Win32FontManager$4();
	void init$($String* val$pathName);
	virtual $Object* run() override;
	$String* val$pathName = nullptr;
};

	} // awt
} // sun

#endif // _sun_awt_Win32FontManager$4_h_