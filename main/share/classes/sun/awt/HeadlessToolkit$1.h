#ifndef _sun_awt_HeadlessToolkit$1_h_
#define _sun_awt_HeadlessToolkit$1_h_
//$ class sun.awt.HeadlessToolkit$1
//$ extends java.awt.peer.KeyboardFocusManagerPeer

#include <java/awt/peer/KeyboardFocusManagerPeer.h>

namespace java {
	namespace awt {
		class Component;
		class Window;
	}
}

namespace sun {
	namespace awt {

class HeadlessToolkit$1 : public ::java::awt::peer::KeyboardFocusManagerPeer {
	$class(HeadlessToolkit$1, $NO_CLASS_INIT, ::java::awt::peer::KeyboardFocusManagerPeer)
public:
	HeadlessToolkit$1();
	void init$();
	virtual void clearGlobalFocusOwner(::java::awt::Window* activeWindow) override;
	virtual ::java::awt::Component* getCurrentFocusOwner() override;
	virtual ::java::awt::Window* getCurrentFocusedWindow() override;
	virtual void setCurrentFocusOwner(::java::awt::Component* comp) override;
	virtual void setCurrentFocusedWindow(::java::awt::Window* win) override;
};

	} // awt
} // sun

#endif // _sun_awt_HeadlessToolkit$1_h_