#ifndef _java_awt_peer_LabelPeer_h_
#define _java_awt_peer_LabelPeer_h_
//$ interface java.awt.peer.LabelPeer
//$ extends java.awt.peer.ComponentPeer

#include <java/awt/peer/ComponentPeer.h>

namespace java {
	namespace awt {
		namespace peer {

class LabelPeer : public ::java::awt::peer::ComponentPeer {
	$interface(LabelPeer, $NO_CLASS_INIT, ::java::awt::peer::ComponentPeer)
public:
	virtual void setAlignment(int32_t alignment) {}
	virtual void setText($String* label) {}
};

		} // peer
	} // awt
} // java

#endif // _java_awt_peer_LabelPeer_h_