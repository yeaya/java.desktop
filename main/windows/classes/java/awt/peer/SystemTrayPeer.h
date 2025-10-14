#ifndef _java_awt_peer_SystemTrayPeer_h_
#define _java_awt_peer_SystemTrayPeer_h_
//$ interface java.awt.peer.SystemTrayPeer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Dimension;
	}
}

namespace java {
	namespace awt {
		namespace peer {

class SystemTrayPeer : public ::java::lang::Object {
	$interface(SystemTrayPeer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::awt::Dimension* getTrayIconSize() {return nullptr;}
};

		} // peer
	} // awt
} // java

#endif // _java_awt_peer_SystemTrayPeer_h_