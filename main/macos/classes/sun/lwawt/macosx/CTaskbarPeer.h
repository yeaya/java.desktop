#ifndef _sun_lwawt_macosx_CTaskbarPeer_h_
#define _sun_lwawt_macosx_CTaskbarPeer_h_
//$ class sun.lwawt.macosx.CTaskbarPeer
//$ extends java.awt.peer.TaskbarPeer

#include <java/awt/peer/TaskbarPeer.h>

namespace java {
	namespace awt {
		class Image;
		class PopupMenu;
		class Taskbar$Feature;
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CTaskbarPeer : public ::java::awt::peer::TaskbarPeer {
	$class(CTaskbarPeer, $NO_CLASS_INIT, ::java::awt::peer::TaskbarPeer)
public:
	CTaskbarPeer();
	void init$();
	virtual ::java::awt::Image* getIconImage() override;
	virtual ::java::awt::PopupMenu* getMenu() override;
	virtual bool isSupported(::java::awt::Taskbar$Feature* feature) override;
	virtual void requestUserAttention(bool enabled, bool critical) override;
	virtual void setIconBadge($String* badge) override;
	virtual void setIconImage(::java::awt::Image* image) override;
	virtual void setMenu(::java::awt::PopupMenu* menu) override;
	virtual void setProgressValue(int32_t value) override;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CTaskbarPeer_h_