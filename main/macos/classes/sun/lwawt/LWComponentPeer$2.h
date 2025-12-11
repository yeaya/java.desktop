#ifndef _sun_lwawt_LWComponentPeer$2_h_
#define _sun_lwawt_LWComponentPeer$2_h_
//$ class sun.lwawt.LWComponentPeer$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace lwawt {
		class LWComponentPeer;
	}
}

namespace sun {
	namespace lwawt {

class LWComponentPeer$2 : public ::java::security::PrivilegedAction {
	$class(LWComponentPeer$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	LWComponentPeer$2();
	void init$(::sun::lwawt::LWComponentPeer* this$0);
	virtual $Object* run() override;
	::sun::lwawt::LWComponentPeer* this$0 = nullptr;
};

	} // lwawt
} // sun

#endif // _sun_lwawt_LWComponentPeer$2_h_