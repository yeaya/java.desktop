#ifndef _sun_awt_windows_WMenuBarPeer_h_
#define _sun_awt_windows_WMenuBarPeer_h_
//$ class sun.awt.windows.WMenuBarPeer
//$ extends sun.awt.windows.WMenuPeer
//$ implements java.awt.peer.MenuBarPeer

#include <java/awt/peer/MenuBarPeer.h>
#include <sun/awt/windows/WMenuPeer.h>

namespace java {
	namespace awt {
		class Menu;
		class MenuBar;
	}
}
namespace sun {
	namespace awt {
		namespace windows {
			class WFramePeer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class WMenuBarPeer : public ::sun::awt::windows::WMenuPeer, public ::java::awt::peer::MenuBarPeer {
	$class(WMenuBarPeer, $NO_CLASS_INIT, ::sun::awt::windows::WMenuPeer, ::java::awt::peer::MenuBarPeer)
public:
	WMenuBarPeer();
	using ::sun::awt::windows::WMenuPeer::create;
	virtual $Object* clone() override;
	virtual void dispose() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::MenuBar* target);
	virtual void addHelpMenu(::java::awt::Menu* m) override;
	virtual void addMenu(::java::awt::Menu* m) override;
	void create(::sun::awt::windows::WFramePeer* f);
	virtual void delMenu(int32_t index) override;
	virtual void setFont(::java::awt::Font* f) override;
	virtual $String* toString() override;
	::sun::awt::windows::WFramePeer* framePeer = nullptr;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WMenuBarPeer_h_