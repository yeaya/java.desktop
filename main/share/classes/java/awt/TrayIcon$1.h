#ifndef _java_awt_TrayIcon$1_h_
#define _java_awt_TrayIcon$1_h_
//$ class java.awt.TrayIcon$1
//$ extends sun.awt.AWTAccessor$TrayIconAccessor

#include <sun/awt/AWTAccessor$TrayIconAccessor.h>

namespace java {
	namespace awt {
		class TrayIcon;
	}
}

namespace java {
	namespace awt {

class TrayIcon$1 : public ::sun::awt::AWTAccessor$TrayIconAccessor {
	$class(TrayIcon$1, $NO_CLASS_INIT, ::sun::awt::AWTAccessor$TrayIconAccessor)
public:
	TrayIcon$1();
	void init$();
	virtual void addNotify(::java::awt::TrayIcon* trayIcon) override;
	virtual void removeNotify(::java::awt::TrayIcon* trayIcon) override;
};

	} // awt
} // java

#endif // _java_awt_TrayIcon$1_h_