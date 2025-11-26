#ifndef _java_awt_peer_PopupMenuPeer_h_
#define _java_awt_peer_PopupMenuPeer_h_
//$ interface java.awt.peer.PopupMenuPeer
//$ extends java.awt.peer.MenuPeer

#include <java/awt/peer/MenuPeer.h>

namespace java {
	namespace awt {
		class Event;
	}
}

namespace java {
	namespace awt {
		namespace peer {

class PopupMenuPeer : public ::java::awt::peer::MenuPeer {
	$interface(PopupMenuPeer, $NO_CLASS_INIT, ::java::awt::peer::MenuPeer)
public:
	virtual void show(::java::awt::Event* e) {}
};

		} // peer
	} // awt
} // java

#endif // _java_awt_peer_PopupMenuPeer_h_