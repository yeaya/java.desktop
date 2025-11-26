#ifndef _sun_awt_X11_XMouseInfoPeer_h_
#define _sun_awt_X11_XMouseInfoPeer_h_
//$ class sun.awt.X11.XMouseInfoPeer
//$ extends java.awt.peer.MouseInfoPeer

#include <java/awt/peer/MouseInfoPeer.h>

namespace java {
	namespace awt {
		class Point;
		class Window;
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XMouseInfoPeer : public ::java::awt::peer::MouseInfoPeer {
	$class(XMouseInfoPeer, 0, ::java::awt::peer::MouseInfoPeer)
public:
	XMouseInfoPeer();
	void init$();
	virtual int32_t fillPointWithCoords(::java::awt::Point* point) override;
	virtual bool isWindowUnderMouse(::java::awt::Window* w) override;
	static bool $assertionsDisabled;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XMouseInfoPeer_h_