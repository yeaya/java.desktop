#ifndef _sun_lwawt_LWMouseInfoPeer_h_
#define _sun_lwawt_LWMouseInfoPeer_h_
//$ class sun.lwawt.LWMouseInfoPeer
//$ extends java.awt.peer.MouseInfoPeer

#include <java/awt/peer/MouseInfoPeer.h>

namespace java {
	namespace awt {
		class Point;
		class Window;
	}
}

namespace sun {
	namespace lwawt {

class LWMouseInfoPeer : public ::java::awt::peer::MouseInfoPeer {
	$class(LWMouseInfoPeer, $NO_CLASS_INIT, ::java::awt::peer::MouseInfoPeer)
public:
	LWMouseInfoPeer();
	void init$();
	virtual int32_t fillPointWithCoords(::java::awt::Point* point) override;
	virtual bool isWindowUnderMouse(::java::awt::Window* w) override;
};

	} // lwawt
} // sun

#endif // _sun_lwawt_LWMouseInfoPeer_h_