#ifndef _com_sun_java_swing_plaf_windows_WindowsInternalFrameTitlePane$WindowsPropertyChangeHandler_h_
#define _com_sun_java_swing_plaf_windows_WindowsInternalFrameTitlePane$WindowsPropertyChangeHandler_h_
//$ class com.sun.java.swing.plaf.windows.WindowsInternalFrameTitlePane$WindowsPropertyChangeHandler
//$ extends javax.swing.plaf.basic.BasicInternalFrameTitlePane$PropertyChangeHandler

#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane$PropertyChangeHandler.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class WindowsInternalFrameTitlePane;
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

class $export WindowsInternalFrameTitlePane$WindowsPropertyChangeHandler : public ::javax::swing::plaf::basic::BasicInternalFrameTitlePane$PropertyChangeHandler {
	$class(WindowsInternalFrameTitlePane$WindowsPropertyChangeHandler, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicInternalFrameTitlePane$PropertyChangeHandler)
public:
	WindowsInternalFrameTitlePane$WindowsPropertyChangeHandler();
	void init$(::com::sun::java::swing::plaf::windows::WindowsInternalFrameTitlePane* this$0);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* evt) override;
	::com::sun::java::swing::plaf::windows::WindowsInternalFrameTitlePane* this$0 = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsInternalFrameTitlePane$WindowsPropertyChangeHandler_h_