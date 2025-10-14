#ifndef _com_sun_java_swing_plaf_windows_WindowsTextFieldUI$WindowsFieldCaret$SafeScroller_h_
#define _com_sun_java_swing_plaf_windows_WindowsTextFieldUI$WindowsFieldCaret$SafeScroller_h_
//$ class com.sun.java.swing.plaf.windows.WindowsTextFieldUI$WindowsFieldCaret$SafeScroller
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class WindowsTextFieldUI$WindowsFieldCaret;
					}
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		class Rectangle;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $import WindowsTextFieldUI$WindowsFieldCaret$SafeScroller : public ::java::lang::Runnable {
	$class(WindowsTextFieldUI$WindowsFieldCaret$SafeScroller, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	WindowsTextFieldUI$WindowsFieldCaret$SafeScroller();
	void init$(::com::sun::java::swing::plaf::windows::WindowsTextFieldUI$WindowsFieldCaret* this$0, ::java::awt::Rectangle* r);
	virtual void run() override;
	::com::sun::java::swing::plaf::windows::WindowsTextFieldUI$WindowsFieldCaret* this$0 = nullptr;
	::java::awt::Rectangle* r = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsTextFieldUI$WindowsFieldCaret$SafeScroller_h_