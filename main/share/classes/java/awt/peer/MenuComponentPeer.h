#ifndef _java_awt_peer_MenuComponentPeer_h_
#define _java_awt_peer_MenuComponentPeer_h_
//$ interface java.awt.peer.MenuComponentPeer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Font;
	}
}

namespace java {
	namespace awt {
		namespace peer {

class MenuComponentPeer : public ::java::lang::Object {
	$interface(MenuComponentPeer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void dispose() {}
	virtual void setFont(::java::awt::Font* f) {}
};

		} // peer
	} // awt
} // java

#endif // _java_awt_peer_MenuComponentPeer_h_