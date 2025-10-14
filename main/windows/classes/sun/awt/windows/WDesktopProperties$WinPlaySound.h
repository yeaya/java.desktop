#ifndef _sun_awt_windows_WDesktopProperties$WinPlaySound_h_
#define _sun_awt_windows_WDesktopProperties$WinPlaySound_h_
//$ class sun.awt.windows.WDesktopProperties$WinPlaySound
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace awt {
		namespace windows {
			class WDesktopProperties;
		}
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class WDesktopProperties$WinPlaySound : public ::java::lang::Runnable {
	$class(WDesktopProperties$WinPlaySound, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	WDesktopProperties$WinPlaySound();
	void init$(::sun::awt::windows::WDesktopProperties* this$0, $String* winEventName);
	virtual bool equals(Object$* o) override;
	virtual int32_t hashCode() override;
	virtual void run() override;
	virtual $String* toString() override;
	::sun::awt::windows::WDesktopProperties* this$0 = nullptr;
	$String* winEventName = nullptr;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WDesktopProperties$WinPlaySound_h_