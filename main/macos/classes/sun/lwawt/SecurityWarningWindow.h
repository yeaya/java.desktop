#ifndef _sun_lwawt_SecurityWarningWindow_h_
#define _sun_lwawt_SecurityWarningWindow_h_
//$ interface sun.lwawt.SecurityWarningWindow
//$ extends sun.lwawt.PlatformWindow

#include <sun/lwawt/PlatformWindow.h>

namespace sun {
	namespace lwawt {

class SecurityWarningWindow : public ::sun::lwawt::PlatformWindow {
	$interface(SecurityWarningWindow, $NO_CLASS_INIT, ::sun::lwawt::PlatformWindow)
public:
	virtual void reposition(int32_t x, int32_t y, int32_t w, int32_t h) {}
	using ::sun::lwawt::PlatformWindow::setVisible;
	virtual void setVisible(bool visible, bool doSchedule) {}
};

	} // lwawt
} // sun

#endif // _sun_lwawt_SecurityWarningWindow_h_