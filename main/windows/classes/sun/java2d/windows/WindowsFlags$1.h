#ifndef _sun_java2d_windows_WindowsFlags$1_h_
#define _sun_java2d_windows_WindowsFlags$1_h_
//$ class sun.java2d.windows.WindowsFlags$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace java2d {
		namespace windows {

class WindowsFlags$1 : public ::java::security::PrivilegedAction {
	$class(WindowsFlags$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	WindowsFlags$1();
	void init$();
	virtual $Object* run() override;
};

		} // windows
	} // java2d
} // sun

#endif // _sun_java2d_windows_WindowsFlags$1_h_