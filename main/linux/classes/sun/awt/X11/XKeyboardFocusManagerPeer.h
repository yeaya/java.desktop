#ifndef _sun_awt_X11_XKeyboardFocusManagerPeer_h_
#define _sun_awt_X11_XKeyboardFocusManagerPeer_h_
//$ class sun.awt.X11.XKeyboardFocusManagerPeer
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
namespace sun {
	namespace util {
		namespace logging {
			class PlatformLogger;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XKeyboardFocusManagerPeer : public ::sun::awt::KeyboardFocusManagerPeerImpl {
	$class(XKeyboardFocusManagerPeer, 0, ::sun::awt::KeyboardFocusManagerPeerImpl)
public:
	XKeyboardFocusManagerPeer();
	void init$();
	static bool deliverFocus(::java::awt::Component* lightweightChild, ::java::awt::Component* target, bool temporary, bool focusedWindowChangeAllowed, int64_t time, ::java::awt::event::FocusEvent$Cause* cause);
	virtual ::java::awt::Component* getCurrentFocusOwner() override;
	virtual ::java::awt::Window* getCurrentFocusedWindow() override;
	static ::sun::awt::X11::XKeyboardFocusManagerPeer* getInstance();
	virtual void setCurrentFocusOwner(::java::awt::Component* comp) override;
	virtual void setCurrentFocusedWindow(::java::awt::Window* win) override;
	static ::sun::util::logging::PlatformLogger* focusLog;
	static ::sun::awt::X11::XKeyboardFocusManagerPeer* inst;
	::java::awt::Component* currentFocusOwner = nullptr;
	::java::awt::Window* currentFocusedWindow = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XKeyboardFocusManagerPeer_h_