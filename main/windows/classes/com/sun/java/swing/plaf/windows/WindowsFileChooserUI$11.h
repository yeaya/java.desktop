#ifndef _com_sun_java_swing_plaf_windows_WindowsFileChooserUI$11_h_
#define _com_sun_java_swing_plaf_windows_WindowsFileChooserUI$11_h_
//$ class com.sun.java.swing.plaf.windows.WindowsFileChooserUI$11
//$ extends java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class WindowsFileChooserUI;
					}
				}
			}
		}
	}
}
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

class $export WindowsFileChooserUI$11 : public ::java::beans::PropertyChangeListener {
	$class(WindowsFileChooserUI$11, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	WindowsFileChooserUI$11();
	void init$(::com::sun::java::swing::plaf::windows::WindowsFileChooserUI* this$0);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	::com::sun::java::swing::plaf::windows::WindowsFileChooserUI* this$0 = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsFileChooserUI$11_h_