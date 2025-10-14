#ifndef _sun_awt_Win32FontManager$3_h_
#define _sun_awt_Win32FontManager$3_h_
//$ class sun.awt.Win32FontManager$3
//$ extends java.security.PrivilegedAction

#include <java/lang/Array.h>
#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace awt {
		class Win32FontManager;
	}
}

namespace sun {
	namespace awt {

class Win32FontManager$3 : public ::java::security::PrivilegedAction {
	$class(Win32FontManager$3, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	Win32FontManager$3();
	void init$(::sun::awt::Win32FontManager* this$0, $StringArray* val$dirs);
	virtual $Object* run() override;
	::sun::awt::Win32FontManager* this$0 = nullptr;
	$StringArray* val$dirs = nullptr;
};

	} // awt
} // sun

#endif // _sun_awt_Win32FontManager$3_h_