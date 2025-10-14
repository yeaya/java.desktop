#ifndef _sun_awt_Win32FontManager$2_h_
#define _sun_awt_Win32FontManager$2_h_
//$ class sun.awt.Win32FontManager$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace awt {
		class Win32FontManager;
	}
}

namespace sun {
	namespace awt {

class Win32FontManager$2 : public ::java::security::PrivilegedAction {
	$class(Win32FontManager$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	Win32FontManager$2();
	void init$(::sun::awt::Win32FontManager* this$0);
	virtual $Object* run() override;
	::sun::awt::Win32FontManager* this$0 = nullptr;
};

	} // awt
} // sun

#endif // _sun_awt_Win32FontManager$2_h_