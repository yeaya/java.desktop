#ifndef _com_sun_java_swing_plaf_windows_WindowsComboBoxUI$2_h_
#define _com_sun_java_swing_plaf_windows_WindowsComboBoxUI$2_h_
//$ class com.sun.java.swing.plaf.windows.WindowsComboBoxUI$2
//$ extends java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>

namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $export WindowsComboBoxUI$2 : public ::java::beans::PropertyChangeListener {
	$class(WindowsComboBoxUI$2, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	WindowsComboBoxUI$2();
	void init$();
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsComboBoxUI$2_h_