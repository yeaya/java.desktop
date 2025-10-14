#ifndef _java_awt_peer_ChoicePeer_h_
#define _java_awt_peer_ChoicePeer_h_
//$ interface java.awt.peer.ChoicePeer
//$ extends java.awt.peer.ComponentPeer

#include <java/awt/peer/ComponentPeer.h>

namespace java {
	namespace awt {
		namespace peer {

class ChoicePeer : public ::java::awt::peer::ComponentPeer {
	$interface(ChoicePeer, $NO_CLASS_INIT, ::java::awt::peer::ComponentPeer)
public:
	virtual void add($String* item, int32_t index) {}
	virtual void remove(int32_t index) {}
	virtual void removeAll() {}
	virtual void select(int32_t index) {}
};

		} // peer
	} // awt
} // java

#endif // _java_awt_peer_ChoicePeer_h_