#ifndef _sun_awt_KeyboardFocusManagerPeerImpl$KfmAccessor_h_
#define _sun_awt_KeyboardFocusManagerPeerImpl$KfmAccessor_h_
//$ class sun.awt.KeyboardFocusManagerPeerImpl$KfmAccessor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace awt {
		class AWTAccessor$KeyboardFocusManagerAccessor;
	}
}

namespace sun {
	namespace awt {

class KeyboardFocusManagerPeerImpl$KfmAccessor : public ::java::lang::Object {
	$class(KeyboardFocusManagerPeerImpl$KfmAccessor, 0, ::java::lang::Object)
public:
	KeyboardFocusManagerPeerImpl$KfmAccessor();
	void init$();
	static ::sun::awt::AWTAccessor$KeyboardFocusManagerAccessor* instance;
};

	} // awt
} // sun

#endif // _sun_awt_KeyboardFocusManagerPeerImpl$KfmAccessor_h_