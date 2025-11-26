#ifndef _java_awt_peer_MenuItemPeer_h_
#define _java_awt_peer_MenuItemPeer_h_
//$ interface java.awt.peer.MenuItemPeer
//$ extends java.awt.peer.MenuComponentPeer

#include <java/awt/peer/MenuComponentPeer.h>

namespace java {
	namespace awt {
		namespace peer {

class MenuItemPeer : public ::java::awt::peer::MenuComponentPeer {
	$interface(MenuItemPeer, $NO_CLASS_INIT, ::java::awt::peer::MenuComponentPeer)
public:
	virtual void setEnabled(bool e) {}
	virtual void setLabel($String* label) {}
};

		} // peer
	} // awt
} // java

#endif // _java_awt_peer_MenuItemPeer_h_