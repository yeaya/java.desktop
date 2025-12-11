#ifndef _sun_lwawt_LWKeyboardFocusManagerPeer_h_
#define _sun_lwawt_LWKeyboardFocusManagerPeer_h_
//$ class sun.lwawt.LWKeyboardFocusManagerPeer
//$ extends sun.awt.KeyboardFocusManagerPeerImpl

#include <sun/awt/KeyboardFocusManagerPeerImpl.h>

namespace java {
	namespace awt {
		class Component;
		class Window;
	}
}

namespace sun {
	namespace lwawt {

class LWKeyboardFocusManagerPeer : public ::sun::awt::KeyboardFocusManagerPeerImpl {
	$class(LWKeyboardFocusManagerPeer, 0, ::sun::awt::KeyboardFocusManagerPeerImpl)
public:
	LWKeyboardFocusManagerPeer();
	void init$();
	virtual ::java::awt::Component* getCurrentFocusOwner() override;
	virtual ::java::awt::Window* getCurrentFocusedWindow() override;
	static ::sun::lwawt::LWKeyboardFocusManagerPeer* getInstance();
	virtual void setCurrentFocusOwner(::java::awt::Component* comp) override;
	virtual void setCurrentFocusedWindow(::java::awt::Window* win) override;
	static ::sun::lwawt::LWKeyboardFocusManagerPeer* inst;
	::java::awt::Window* focusedWindow = nullptr;
	::java::awt::Component* focusOwner = nullptr;
};

	} // lwawt
} // sun

#endif // _sun_lwawt_LWKeyboardFocusManagerPeer_h_