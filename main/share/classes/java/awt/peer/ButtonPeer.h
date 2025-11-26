#ifndef _java_awt_peer_ButtonPeer_h_
#define _java_awt_peer_ButtonPeer_h_
//$ interface java.awt.peer.ButtonPeer
//$ extends java.awt.peer.ComponentPeer

#include <java/awt/peer/ComponentPeer.h>

namespace java {
	namespace awt {
		namespace peer {

class ButtonPeer : public ::java::awt::peer::ComponentPeer {
	$interface(ButtonPeer, $NO_CLASS_INIT, ::java::awt::peer::ComponentPeer)
public:
	virtual void setLabel($String* label) {}
};

		} // peer
	} // awt
} // java

#endif // _java_awt_peer_ButtonPeer_h_