#ifndef _java_awt_peer_FramePeer_h_
#define _java_awt_peer_FramePeer_h_
//$ interface java.awt.peer.FramePeer
//$ extends java.awt.peer.WindowPeer

#include <java/awt/peer/WindowPeer.h>

namespace java {
	namespace awt {
		class MenuBar;
		class Rectangle;
	}
}

namespace java {
	namespace awt {
		namespace peer {

class FramePeer : public ::java::awt::peer::WindowPeer {
	$interface(FramePeer, $NO_CLASS_INIT, ::java::awt::peer::WindowPeer)
public:
	virtual void emulateActivation(bool activate) {}
	virtual ::java::awt::Rectangle* getBoundsPrivate() {return nullptr;}
	virtual int32_t getState() {return 0;}
	virtual void setBoundsPrivate(int32_t x, int32_t y, int32_t width, int32_t height) {}
	virtual void setMaximizedBounds(::java::awt::Rectangle* bounds) {}
	virtual void setMenuBar(::java::awt::MenuBar* mb) {}
	virtual void setResizable(bool resizeable) {}
	virtual void setState(int32_t state) {}
	virtual void setTitle($String* title) {}
};

		} // peer
	} // awt
} // java

#endif // _java_awt_peer_FramePeer_h_