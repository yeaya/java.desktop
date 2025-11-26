#ifndef _java_awt_peer_MouseInfoPeer_h_
#define _java_awt_peer_MouseInfoPeer_h_
//$ interface java.awt.peer.MouseInfoPeer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Point;
		class Window;
	}
}

namespace java {
	namespace awt {
		namespace peer {

class MouseInfoPeer : public ::java::lang::Object {
	$interface(MouseInfoPeer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t fillPointWithCoords(::java::awt::Point* point) {return 0;}
	virtual bool isWindowUnderMouse(::java::awt::Window* w) {return false;}
};

		} // peer
	} // awt
} // java

#endif // _java_awt_peer_MouseInfoPeer_h_