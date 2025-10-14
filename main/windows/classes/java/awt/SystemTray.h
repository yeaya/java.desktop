#ifndef _java_awt_SystemTray_h_
#define _java_awt_SystemTray_h_
//$ class java.awt.SystemTray
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("EMPTY_TRAY_ARRAY")
#undef EMPTY_TRAY_ARRAY

namespace java {
	namespace awt {
		class Dimension;
		class TrayIcon;
	}
}
namespace java {
	namespace awt {
		namespace peer {
			class SystemTrayPeer;
		}
	}
}
namespace java {
	namespace beans {
		class PropertyChangeListener;
		class PropertyChangeSupport;
	}
}

namespace java {
	namespace awt {

class $export SystemTray : public ::java::lang::Object {
	$class(SystemTray, 0, ::java::lang::Object)
public:
	SystemTray();
	void init$();
	virtual void add(::java::awt::TrayIcon* trayIcon);
	virtual void addNotify();
	virtual void addPropertyChangeListener($String* propertyName, ::java::beans::PropertyChangeListener* listener);
	static void checkSystemTrayAllowed();
	void firePropertyChange($String* propertyName, Object$* oldValue, Object$* newValue);
	::java::beans::PropertyChangeSupport* getCurrentChangeSupport();
	virtual $Array<::java::beans::PropertyChangeListener>* getPropertyChangeListeners($String* propertyName);
	static ::java::awt::SystemTray* getSystemTray();
	virtual ::java::awt::Dimension* getTrayIconSize();
	virtual $Array<::java::awt::TrayIcon>* getTrayIcons();
	static void initializeSystemTrayIfNeeded();
	static bool isSupported();
	virtual void remove(::java::awt::TrayIcon* trayIcon);
	virtual void removePropertyChangeListener($String* propertyName, ::java::beans::PropertyChangeListener* listener);
	static ::java::awt::SystemTray* systemTray;
	int32_t currentIconID = 0;
	::java::awt::peer::SystemTrayPeer* peer = nullptr;
	static $Array<::java::awt::TrayIcon>* EMPTY_TRAY_ARRAY;
};

	} // awt
} // java

#pragma pop_macro("EMPTY_TRAY_ARRAY")

#endif // _java_awt_SystemTray_h_