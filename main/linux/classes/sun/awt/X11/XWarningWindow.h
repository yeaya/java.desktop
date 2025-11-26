#ifndef _sun_awt_X11_XWarningWindow_h_
#define _sun_awt_X11_XWarningWindow_h_
//$ class sun.awt.X11.XWarningWindow
//$ extends sun.awt.X11.XWindow

#include <java/lang/Array.h>
#include <sun/awt/X11/XWindow.h>

#pragma push_macro("HIDING_DELAY")
#undef HIDING_DELAY
#pragma push_macro("OWNER")
#undef OWNER
#pragma push_macro("SHOWING_DELAY")
#undef SHOWING_DELAY

namespace java {
	namespace awt {
		class Color;
		class Font;
		class Graphics;
		class Window;
	}
}
namespace java {
	namespace lang {
		class Runnable;
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class WeakReference;
		}
	}
}
namespace sun {
	namespace awt {
		class IconInfo;
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class InfoWindow$Tooltip;
			class XCreateWindowParams;
			class XEvent;
			class XWindowPeer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XWarningWindow : public ::sun::awt::X11::XWindow {
	$class(XWarningWindow, 0, ::sun::awt::X11::XWindow)
public:
	XWarningWindow();
	using ::sun::awt::X11::XWindow::getGraphics;
	void init$(::java::awt::Window* ownerWindow, int64_t parentWindow, ::sun::awt::X11::XWindowPeer* ownerPeer);
	virtual void enterNotify(int64_t window) override;
	virtual ::java::awt::Color* getBackground();
	virtual ::java::awt::Color* getColor();
	virtual ::java::awt::Font* getFont();
	virtual ::java::awt::Graphics* getGraphics() override;
	virtual int32_t getHeight() override;
	static ::sun::awt::IconInfo* getSecurityIconInfo(int32_t size, int32_t num);
	::sun::awt::IconInfo* getSecurityIconInfo();
	virtual $String* getWMName() override;
	virtual $String* getWarningString();
	virtual int32_t getWidth() override;
	virtual void handleExposeEvent(::sun::awt::X11::XEvent* xev) override;
	virtual bool isEventDisabled(::sun::awt::X11::XEvent* e) override;
	virtual void leaveNotify(int64_t window) override;
	using ::sun::awt::X11::XWindow::paint;
	virtual void paint(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height);
	using ::sun::awt::X11::XWindow::postInit;
	virtual void postInit(::sun::awt::X11::XCreateWindowParams* params) override;
	using ::sun::awt::X11::XWindow::preInit;
	using ::sun::awt::X11::XWindow::repaint;
	virtual void repaint() override;
	virtual void reposition(int32_t x, int32_t y, int32_t w, int32_t h);
	void requestNoTaskbar();
	virtual void setMouseAbove(bool above) override;
	virtual void setSecurityWarningVisible(bool visible, bool doSchedule);
	virtual void stateChanged(int64_t time, int32_t oldState, int32_t newState) override;
	void updateIconSize();
	void withdraw();
	virtual void xSetVisible(bool visible) override;
	static const int32_t SHOWING_DELAY = 330;
	static const int32_t HIDING_DELAY = 2000;
	::java::awt::Window* ownerWindow = nullptr;
	::java::lang::ref::WeakReference* ownerPeer = nullptr;
	int64_t parentWindow = 0;
	static $String* OWNER;
	::sun::awt::X11::InfoWindow$Tooltip* tooltip = nullptr;
	$volatile(int32_t) currentIcon = 0;
	int32_t currentSize = 0;
	static $Array<::sun::awt::IconInfo, 2>* icons;
	::java::lang::Runnable* hidingTask = nullptr;
	::java::lang::Runnable* showingTask = nullptr;
};

		} // X11
	} // awt
} // sun

#pragma pop_macro("HIDING_DELAY")
#pragma pop_macro("OWNER")
#pragma pop_macro("SHOWING_DELAY")

#endif // _sun_awt_X11_XWarningWindow_h_