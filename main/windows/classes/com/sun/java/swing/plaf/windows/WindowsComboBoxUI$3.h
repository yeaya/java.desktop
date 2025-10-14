#ifndef _com_sun_java_swing_plaf_windows_WindowsComboBoxUI$3_h_
#define _com_sun_java_swing_plaf_windows_WindowsComboBoxUI$3_h_
//$ class com.sun.java.swing.plaf.windows.WindowsComboBoxUI$3
//$ extends javax.swing.plaf.basic.BasicComboBoxUI$ComboBoxLayoutManager

#include <javax/swing/plaf/basic/BasicComboBoxUI$ComboBoxLayoutManager.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class WindowsComboBoxUI;
					}
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		class Container;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $export WindowsComboBoxUI$3 : public ::javax::swing::plaf::basic::BasicComboBoxUI$ComboBoxLayoutManager {
	$class(WindowsComboBoxUI$3, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicComboBoxUI$ComboBoxLayoutManager)
public:
	WindowsComboBoxUI$3();
	void init$(::com::sun::java::swing::plaf::windows::WindowsComboBoxUI* this$0);
	virtual void layoutContainer(::java::awt::Container* parent) override;
	::com::sun::java::swing::plaf::windows::WindowsComboBoxUI* this$0 = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsComboBoxUI$3_h_