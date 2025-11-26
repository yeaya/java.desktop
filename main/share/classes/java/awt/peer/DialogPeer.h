#ifndef _java_awt_peer_DialogPeer_h_
#define _java_awt_peer_DialogPeer_h_
//$ interface java.awt.peer.DialogPeer
//$ extends java.awt.peer.WindowPeer

#include <java/awt/peer/WindowPeer.h>

namespace java {
	namespace util {
		class List;
	}
}

namespace java {
	namespace awt {
		namespace peer {

class DialogPeer : public ::java::awt::peer::WindowPeer {
	$interface(DialogPeer, $NO_CLASS_INIT, ::java::awt::peer::WindowPeer)
public:
	virtual void blockWindows(::java::util::List* windows) {}
	virtual void setResizable(bool resizeable) {}
	virtual void setTitle($String* title) {}
};

		} // peer
	} // awt
} // java

#endif // _java_awt_peer_DialogPeer_h_