#ifndef _sun_awt_AWTAccessor$TrayIconAccessor_h_
#define _sun_awt_AWTAccessor$TrayIconAccessor_h_
//$ interface sun.awt.AWTAccessor$TrayIconAccessor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class TrayIcon;
	}
}

namespace sun {
	namespace awt {

class $export AWTAccessor$TrayIconAccessor : public ::java::lang::Object {
	$interface(AWTAccessor$TrayIconAccessor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void addNotify(::java::awt::TrayIcon* trayIcon) {}
	virtual void removeNotify(::java::awt::TrayIcon* trayIcon) {}
};

	} // awt
} // sun

#endif // _sun_awt_AWTAccessor$TrayIconAccessor_h_