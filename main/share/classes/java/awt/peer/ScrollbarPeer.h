#ifndef _java_awt_peer_ScrollbarPeer_h_
#define _java_awt_peer_ScrollbarPeer_h_
//$ interface java.awt.peer.ScrollbarPeer
//$ extends java.awt.peer.ComponentPeer

#include <java/awt/peer/ComponentPeer.h>

namespace java {
	namespace awt {
		namespace peer {

class ScrollbarPeer : public ::java::awt::peer::ComponentPeer {
	$interface(ScrollbarPeer, $NO_CLASS_INIT, ::java::awt::peer::ComponentPeer)
public:
	virtual void setLineIncrement(int32_t l) {}
	virtual void setPageIncrement(int32_t l) {}
	virtual void setValues(int32_t value, int32_t visible, int32_t minimum, int32_t maximum) {}
};

		} // peer
	} // awt
} // java

#endif // _java_awt_peer_ScrollbarPeer_h_