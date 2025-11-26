#ifndef _java_awt_peer_KeyboardFocusManagerPeer_h_
#define _java_awt_peer_KeyboardFocusManagerPeer_h_
//$ interface java.awt.peer.KeyboardFocusManagerPeer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Component;
		class Window;
	}
}

namespace java {
	namespace awt {
		namespace peer {

class $import KeyboardFocusManagerPeer : public ::java::lang::Object {
	$interface(KeyboardFocusManagerPeer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void clearGlobalFocusOwner(::java::awt::Window* activeWindow) {}
	virtual ::java::awt::Component* getCurrentFocusOwner() {return nullptr;}
	virtual ::java::awt::Window* getCurrentFocusedWindow() {return nullptr;}
	virtual void setCurrentFocusOwner(::java::awt::Component* comp) {}
	virtual void setCurrentFocusedWindow(::java::awt::Window* win) {}
};

		} // peer
	} // awt
} // java

#endif // _java_awt_peer_KeyboardFocusManagerPeer_h_