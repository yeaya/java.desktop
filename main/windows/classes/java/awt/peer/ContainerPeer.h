#ifndef _java_awt_peer_ContainerPeer_h_
#define _java_awt_peer_ContainerPeer_h_
//$ interface java.awt.peer.ContainerPeer
//$ extends java.awt.peer.ComponentPeer

#include <java/awt/peer/ComponentPeer.h>

namespace java {
	namespace awt {
		class Insets;
	}
}

namespace java {
	namespace awt {
		namespace peer {

class $export ContainerPeer : public ::java::awt::peer::ComponentPeer {
	$interface(ContainerPeer, $NO_CLASS_INIT, ::java::awt::peer::ComponentPeer)
public:
	virtual void beginLayout() {}
	virtual void beginValidate() {}
	virtual void endLayout() {}
	virtual void endValidate() {}
	virtual ::java::awt::Insets* getInsets() {return nullptr;}
};

		} // peer
	} // awt
} // java

#endif // _java_awt_peer_ContainerPeer_h_