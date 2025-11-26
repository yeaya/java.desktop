#ifndef _java_awt_peer_MenuPeer_h_
#define _java_awt_peer_MenuPeer_h_
//$ interface java.awt.peer.MenuPeer
//$ extends java.awt.peer.MenuItemPeer

#include <java/awt/peer/MenuItemPeer.h>

namespace java {
	namespace awt {
		class MenuItem;
	}
}

namespace java {
	namespace awt {
		namespace peer {

class MenuPeer : public ::java::awt::peer::MenuItemPeer {
	$interface(MenuPeer, $NO_CLASS_INIT, ::java::awt::peer::MenuItemPeer)
public:
	virtual void addItem(::java::awt::MenuItem* item) {}
	virtual void delItem(int32_t index) {}
};

		} // peer
	} // awt
} // java

#endif // _java_awt_peer_MenuPeer_h_