#ifndef _sun_awt_windows_WKeyboardFocusManagerPeer_h_
#define _sun_awt_windows_WKeyboardFocusManagerPeer_h_
//$ class sun.awt.windows.WKeyboardFocusManagerPeer
//$ extends sun.awt.KeyboardFocusManagerPeerImpl

#include <sun/awt/KeyboardFocusManagerPeerImpl.h>

namespace java {
	namespace awt {
		class Component;
		class Window;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class FocusEvent$Cause;
		}
	}
}
namespace java {
	namespace awt {
		namespace peer {
			class ComponentPeer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class WKeyboardFocusManagerPeer : public ::sun::awt::KeyboardFocusManagerPeerImpl {
	$class(WKeyboardFocusManagerPeer, 0, ::sun::awt::KeyboardFocusManagerPeerImpl)
public:
	WKeyboardFocusManagerPeer();
	void init$();
	static bool deliverFocus(::java::awt::Component* lightweightChild, ::java::awt::Component* target, bool temporary, bool focusedWindowChangeAllowed, int64_t time, ::java::awt::event::FocusEvent$Cause* cause);
	virtual ::java::awt::Component* getCurrentFocusOwner() override;
	virtual ::java::awt::Window* getCurrentFocusedWindow() override;
	static ::sun::awt::windows::WKeyboardFocusManagerPeer* getInstance();
	static ::java::awt::Component* getNativeFocusOwner();
	static ::java::awt::Window* getNativeFocusedWindow();
	virtual void setCurrentFocusOwner(::java::awt::Component* comp) override;
	virtual void setCurrentFocusedWindow(::java::awt::Window* win) override;
	static void setNativeFocusOwner(::java::awt::peer::ComponentPeer* peer);
	static ::sun::awt::windows::WKeyboardFocusManagerPeer* inst;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WKeyboardFocusManagerPeer_h_