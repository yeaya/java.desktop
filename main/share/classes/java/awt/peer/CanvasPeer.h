#ifndef _java_awt_peer_CanvasPeer_h_
#define _java_awt_peer_CanvasPeer_h_
//$ interface java.awt.peer.CanvasPeer
//$ extends java.awt.peer.ComponentPeer

#include <java/awt/peer/ComponentPeer.h>

namespace java {
	namespace awt {
		class GraphicsConfiguration;
	}
}

namespace java {
	namespace awt {
		namespace peer {

class $export CanvasPeer : public ::java::awt::peer::ComponentPeer {
	$interface(CanvasPeer, $NO_CLASS_INIT, ::java::awt::peer::ComponentPeer)
public:
	virtual ::java::awt::GraphicsConfiguration* getAppropriateGraphicsConfiguration(::java::awt::GraphicsConfiguration* gc) {return nullptr;}
};

		} // peer
	} // awt
} // java

#endif // _java_awt_peer_CanvasPeer_h_