#ifndef _com_sun_java_swing_plaf_windows_WindowsComboBoxUI$WindowsComboBoxRenderer$WindowsComboBoxDashedBorder_h_
#define _com_sun_java_swing_plaf_windows_WindowsComboBoxUI$WindowsComboBoxRenderer$WindowsComboBoxDashedBorder_h_
//$ class com.sun.java.swing.plaf.windows.WindowsComboBoxUI$WindowsComboBoxRenderer$WindowsComboBoxDashedBorder
//$ extends com.sun.java.swing.plaf.windows.WindowsBorders$DashedBorder

#include <com/sun/java/swing/plaf/windows/WindowsBorders$DashedBorder.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class WindowsComboBoxUI$WindowsComboBoxRenderer;
					}
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		class Color;
		class Component;
		class Insets;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $import WindowsComboBoxUI$WindowsComboBoxRenderer$WindowsComboBoxDashedBorder : public ::com::sun::java::swing::plaf::windows::WindowsBorders$DashedBorder {
	$class(WindowsComboBoxUI$WindowsComboBoxRenderer$WindowsComboBoxDashedBorder, $NO_CLASS_INIT, ::com::sun::java::swing::plaf::windows::WindowsBorders$DashedBorder)
public:
	WindowsComboBoxUI$WindowsComboBoxRenderer$WindowsComboBoxDashedBorder();
	using ::com::sun::java::swing::plaf::windows::WindowsBorders$DashedBorder::getBorderInsets;
	void init$(::com::sun::java::swing::plaf::windows::WindowsComboBoxUI$WindowsComboBoxRenderer* this$0, ::java::awt::Color* color, int32_t thickness);
	void init$(::com::sun::java::swing::plaf::windows::WindowsComboBoxUI$WindowsComboBoxRenderer* this$0, ::java::awt::Color* color);
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c, ::java::awt::Insets* i) override;
	::com::sun::java::swing::plaf::windows::WindowsComboBoxUI$WindowsComboBoxRenderer* this$0 = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsComboBoxUI$WindowsComboBoxRenderer$WindowsComboBoxDashedBorder_h_