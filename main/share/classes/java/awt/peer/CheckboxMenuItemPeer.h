#ifndef _java_awt_peer_CheckboxMenuItemPeer_h_
#define _java_awt_peer_CheckboxMenuItemPeer_h_
//$ interface java.awt.peer.CheckboxMenuItemPeer
//$ extends java.awt.peer.MenuItemPeer

#include <java/awt/peer/MenuItemPeer.h>

namespace java {
	namespace awt {
		namespace peer {

class CheckboxMenuItemPeer : public ::java::awt::peer::MenuItemPeer {
	$interface(CheckboxMenuItemPeer, $NO_CLASS_INIT, ::java::awt::peer::MenuItemPeer)
public:
	virtual void setState(bool state) {}
};

		} // peer
	} // awt
} // java

#endif // _java_awt_peer_CheckboxMenuItemPeer_h_