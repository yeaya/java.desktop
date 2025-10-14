#ifndef _com_sun_java_swing_plaf_windows_WindowsInternalFrameTitlePane$2_h_
#define _com_sun_java_swing_plaf_windows_WindowsInternalFrameTitlePane$2_h_
//$ class com.sun.java.swing.plaf.windows.WindowsInternalFrameTitlePane$2
//$ extends java.awt.event.MouseAdapter

#include <java/awt/event/MouseAdapter.h>

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
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $import WindowsInternalFrameTitlePane$2 : public ::java::awt::event::MouseAdapter {
	$class(WindowsInternalFrameTitlePane$2, $NO_CLASS_INIT, ::java::awt::event::MouseAdapter)
public:
	WindowsInternalFrameTitlePane$2();
	void init$(::com::sun::java::swing::plaf::windows::WindowsInternalFrameTitlePane* this$0);
	virtual void mouseClicked(::java::awt::event::MouseEvent* e) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	::com::sun::java::swing::plaf::windows::WindowsInternalFrameTitlePane* this$0 = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsInternalFrameTitlePane$2_h_