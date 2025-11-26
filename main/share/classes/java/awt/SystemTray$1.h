#ifndef _java_awt_SystemTray$1_h_
#define _java_awt_SystemTray$1_h_
//$ class java.awt.SystemTray$1
//$ extends sun.awt.AWTAccessor$SystemTrayAccessor

#include <sun/awt/AWTAccessor$SystemTrayAccessor.h>

namespace java {
	namespace awt {
		class SystemTray;
	}
}

namespace java {
	namespace awt {

class SystemTray$1 : public ::sun::awt::AWTAccessor$SystemTrayAccessor {
	$class(SystemTray$1, $NO_CLASS_INIT, ::sun::awt::AWTAccessor$SystemTrayAccessor)
public:
	SystemTray$1();
	void init$();
	virtual void firePropertyChange(::java::awt::SystemTray* tray, $String* propertyName, Object$* oldValue, Object$* newValue) override;
};

	} // awt
} // java

#endif // _java_awt_SystemTray$1_h_