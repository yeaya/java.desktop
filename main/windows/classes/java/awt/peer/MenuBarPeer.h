#ifndef _java_awt_peer_MenuBarPeer_h_
#define _java_awt_peer_MenuBarPeer_h_
//$ interface java.awt.peer.MenuBarPeer
//$ extends java.awt.peer.MenuComponentPeer

#include <java/awt/peer/MenuComponentPeer.h>

namespace java {
	namespace awt {
		class Menu;
	}
}

namespace java {
	namespace awt {
		namespace peer {

class MenuBarPeer : public ::java::awt::peer::MenuComponentPeer {
	$interface(MenuBarPeer, $NO_CLASS_INIT, ::java::awt::peer::MenuComponentPeer)
public:
	virtual void addHelpMenu(::java::awt::Menu* m) {}
	virtual void addMenu(::java::awt::Menu* m) {}
	virtual void delMenu(int32_t index) {}
};

		} // peer
	} // awt
} // java

#endif // _java_awt_peer_MenuBarPeer_h_