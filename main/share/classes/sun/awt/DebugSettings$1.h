#ifndef _sun_awt_DebugSettings$1_h_
#define _sun_awt_DebugSettings$1_h_
//$ class sun.awt.DebugSettings$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace awt {
		class DebugSettings;
	}
}

namespace sun {
	namespace awt {

class DebugSettings$1 : public ::java::security::PrivilegedAction {
	$class(DebugSettings$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	DebugSettings$1();
	void init$(::sun::awt::DebugSettings* this$0);
	virtual $Object* run() override;
	::sun::awt::DebugSettings* this$0 = nullptr;
};

	} // awt
} // sun

#endif // _sun_awt_DebugSettings$1_h_