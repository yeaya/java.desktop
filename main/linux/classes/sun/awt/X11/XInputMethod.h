#ifndef _sun_awt_X11_XInputMethod_h_
#define _sun_awt_X11_XInputMethod_h_
//$ class sun.awt.X11.XInputMethod
//$ extends sun.awt.X11InputMethod

#include <sun/awt/X11InputMethod.h>

namespace java {
	namespace awt {
		class Component;
		class Container;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace im {
			namespace spi {
				class InputMethodContext;
			}
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
	namespace util {
		namespace logging {
			class PlatformLogger;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XInputMethod : public ::sun::awt::X11InputMethod {
	$class(XInputMethod, 0, ::sun::awt::X11InputMethod)
public:
	XInputMethod();
	void init$();
	void adjustStatusWindow(int64_t window);
	virtual void awtLock() override;
	virtual void awtUnlock() override;
	virtual bool createXIC() override;
	bool createXICNative(int64_t window);
	virtual void disposeImpl() override;
	virtual int64_t getCurrentParentWindow();
	virtual ::java::awt::Container* getParent(::java::awt::Component* client) override;
	virtual ::java::awt::peer::ComponentPeer* getPeer(::java::awt::Component* client) override;
	static int64_t getXICFocus();
	virtual void notifyClientWindowChange(::java::awt::Rectangle* location) override;
	virtual bool openXIM() override;
	bool openXIMNative(int64_t display);
	virtual void setInputMethodContext(::java::awt::im::spi::InputMethodContext* context) override;
	virtual void setXICFocus(::java::awt::peer::ComponentPeer* peer, bool value, bool active) override;
	void setXICFocusNative(int64_t window, bool value, bool active);
	static ::sun::util::logging::PlatformLogger* log;
	static $volatile(int64_t) xicFocus;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XInputMethod_h_