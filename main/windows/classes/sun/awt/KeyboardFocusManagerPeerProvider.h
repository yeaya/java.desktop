#ifndef _sun_awt_KeyboardFocusManagerPeerProvider_h_
#define _sun_awt_KeyboardFocusManagerPeerProvider_h_
//$ interface sun.awt.KeyboardFocusManagerPeerProvider
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		namespace peer {
			class KeyboardFocusManagerPeer;
		}
	}
}

namespace sun {
	namespace awt {

class $export KeyboardFocusManagerPeerProvider : public ::java::lang::Object {
	$interface(KeyboardFocusManagerPeerProvider, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::awt::peer::KeyboardFocusManagerPeer* getKeyboardFocusManagerPeer() {return nullptr;}
};

	} // awt
} // sun

#endif // _sun_awt_KeyboardFocusManagerPeerProvider_h_