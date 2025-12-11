#ifndef _sun_lwawt_macosx_CSystemTray_h_
#define _sun_lwawt_macosx_CSystemTray_h_
//$ class sun.lwawt.macosx.CSystemTray
//$ extends java.awt.peer.SystemTrayPeer

#include <java/awt/peer/SystemTrayPeer.h>

namespace java {
	namespace awt {
		class Dimension;
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CSystemTray : public ::java::awt::peer::SystemTrayPeer {
	$class(CSystemTray, $NO_CLASS_INIT, ::java::awt::peer::SystemTrayPeer)
public:
	CSystemTray();
	void init$();
	virtual ::java::awt::Dimension* getTrayIconSize() override;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CSystemTray_h_