#ifndef _sun_awt_windows_WMouseInfoPeer_h_
#define _sun_awt_windows_WMouseInfoPeer_h_
//$ class sun.awt.windows.WMouseInfoPeer
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
		namespace windows {

class WMouseInfoPeer : public ::java::awt::peer::MouseInfoPeer {
	$class(WMouseInfoPeer, 0, ::java::awt::peer::MouseInfoPeer)
public:
	WMouseInfoPeer();
	void init$();
	virtual int32_t fillPointWithCoords(::java::awt::Point* point) override;
	virtual bool isWindowUnderMouse(::java::awt::Window* w) override;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WMouseInfoPeer_h_