#ifndef _sun_awt_AWTAccessor$SystemTrayAccessor_h_
#define _sun_awt_AWTAccessor$SystemTrayAccessor_h_
//$ interface sun.awt.AWTAccessor$SystemTrayAccessor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class SystemTray;
	}
}

namespace sun {
	namespace awt {

class $export AWTAccessor$SystemTrayAccessor : public ::java::lang::Object {
	$interface(AWTAccessor$SystemTrayAccessor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void firePropertyChange(::java::awt::SystemTray* tray, $String* propertyName, Object$* oldValue, Object$* newValue) {}
};

	} // awt
} // sun

#endif // _sun_awt_AWTAccessor$SystemTrayAccessor_h_