#ifndef _java_awt_peer_WindowPeer_h_
#define _java_awt_peer_WindowPeer_h_
//$ interface java.awt.peer.WindowPeer
//$ extends java.awt.peer.ContainerPeer

#include <java/awt/peer/ContainerPeer.h>

namespace java {
	namespace awt {
		class Dialog;
	}
}

namespace java {
	namespace awt {
		namespace peer {

class WindowPeer : public ::java::awt::peer::ContainerPeer {
	$interface(WindowPeer, $NO_CLASS_INIT, ::java::awt::peer::ContainerPeer)
public:
	virtual void repositionSecurityWarning() {}
	virtual void setModalBlocked(::java::awt::Dialog* blocker, bool blocked) {}
	virtual void setOpacity(float opacity) {}
	virtual void setOpaque(bool isOpaque) {}
	virtual void toBack() {}
	virtual void toFront() {}
	virtual void updateAlwaysOnTopState() {}
	virtual void updateFocusableWindowState() {}
	virtual void updateIconImages() {}
	virtual void updateMinimumSize() {}
	virtual void updateWindow() {}
};

		} // peer
	} // awt
} // java

#endif // _java_awt_peer_WindowPeer_h_