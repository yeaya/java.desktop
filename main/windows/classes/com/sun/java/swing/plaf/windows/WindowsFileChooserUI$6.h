#ifndef _com_sun_java_swing_plaf_windows_WindowsFileChooserUI$6_h_
#define _com_sun_java_swing_plaf_windows_WindowsFileChooserUI$6_h_
//$ class com.sun.java.swing.plaf.windows.WindowsFileChooserUI$6
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
namespace javax {
	namespace swing {
		class JRadioButtonMenuItem;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $export WindowsFileChooserUI$6 : public ::java::beans::PropertyChangeListener {
	$class(WindowsFileChooserUI$6, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	WindowsFileChooserUI$6();
	void init$(::com::sun::java::swing::plaf::windows::WindowsFileChooserUI* this$0, ::javax::swing::JRadioButtonMenuItem* val$listViewMenuItem, ::javax::swing::JRadioButtonMenuItem* val$detailsViewMenuItem);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	::com::sun::java::swing::plaf::windows::WindowsFileChooserUI* this$0 = nullptr;
	::javax::swing::JRadioButtonMenuItem* val$detailsViewMenuItem = nullptr;
	::javax::swing::JRadioButtonMenuItem* val$listViewMenuItem = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsFileChooserUI$6_h_