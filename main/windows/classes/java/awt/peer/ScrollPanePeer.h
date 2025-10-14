#ifndef _java_awt_peer_ScrollPanePeer_h_
#define _java_awt_peer_ScrollPanePeer_h_
//$ interface java.awt.peer.ScrollPanePeer
//$ extends java.awt.peer.ContainerPeer

#include <java/awt/peer/ContainerPeer.h>

namespace java {
	namespace awt {
		class Adjustable;
	}
}

namespace java {
	namespace awt {
		namespace peer {

class ScrollPanePeer : public ::java::awt::peer::ContainerPeer {
	$interface(ScrollPanePeer, $NO_CLASS_INIT, ::java::awt::peer::ContainerPeer)
public:
	virtual void childResized(int32_t w, int32_t h) {}
	virtual int32_t getHScrollbarHeight() {return 0;}
	virtual int32_t getVScrollbarWidth() {return 0;}
	virtual void setScrollPosition(int32_t x, int32_t y) {}
	virtual void setUnitIncrement(::java::awt::Adjustable* adj, int32_t u) {}
	virtual void setValue(::java::awt::Adjustable* adj, int32_t v) {}
};

		} // peer
	} // awt
} // java

#endif // _java_awt_peer_ScrollPanePeer_h_