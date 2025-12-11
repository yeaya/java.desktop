#ifndef _sun_lwawt_LWComponentPeer$3_h_
#define _sun_lwawt_LWComponentPeer$3_h_
//$ class sun.lwawt.LWComponentPeer$3
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace awt {
		namespace event {
			class AWTEventListener;
		}
	}
}
namespace sun {
	namespace lwawt {
		class LWComponentPeer;
	}
}

namespace sun {
	namespace lwawt {

class LWComponentPeer$3 : public ::java::security::PrivilegedAction {
	$class(LWComponentPeer$3, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	LWComponentPeer$3();
	void init$(::sun::lwawt::LWComponentPeer* this$0, ::java::awt::event::AWTEventListener* val$listener);
	virtual $Object* run() override;
	::sun::lwawt::LWComponentPeer* this$0 = nullptr;
	::java::awt::event::AWTEventListener* val$listener = nullptr;
};

	} // lwawt
} // sun

#endif // _sun_lwawt_LWComponentPeer$3_h_