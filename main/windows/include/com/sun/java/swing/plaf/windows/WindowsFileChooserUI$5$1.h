#ifndef _com_sun_java_swing_plaf_windows_WindowsFileChooserUI$5$1_h_
#define _com_sun_java_swing_plaf_windows_WindowsFileChooserUI$5$1_h_
//$ class com.sun.java.swing.plaf.windows.WindowsFileChooserUI$5$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class WindowsFileChooserUI$5;
					}
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $import WindowsFileChooserUI$5$1 : public ::java::lang::Runnable {
	$class(WindowsFileChooserUI$5$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	WindowsFileChooserUI$5$1();
	void init$(::com::sun::java::swing::plaf::windows::WindowsFileChooserUI$5* this$1);
	virtual void run() override;
	::com::sun::java::swing::plaf::windows::WindowsFileChooserUI$5* this$1 = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsFileChooserUI$5$1_h_