#ifndef _java_awt_peer_CheckboxPeer_h_
#define _java_awt_peer_CheckboxPeer_h_
//$ interface java.awt.peer.CheckboxPeer
//$ extends java.awt.peer.ComponentPeer

#include <java/awt/peer/ComponentPeer.h>

namespace java {
	namespace awt {
		class CheckboxGroup;
	}
}

namespace java {
	namespace awt {
		namespace peer {

class CheckboxPeer : public ::java::awt::peer::ComponentPeer {
	$interface(CheckboxPeer, $NO_CLASS_INIT, ::java::awt::peer::ComponentPeer)
public:
	virtual void setCheckboxGroup(::java::awt::CheckboxGroup* g) {}
	virtual void setLabel($String* label) {}
	virtual void setState(bool state) {}
};

		} // peer
	} // awt
} // java

#endif // _java_awt_peer_CheckboxPeer_h_