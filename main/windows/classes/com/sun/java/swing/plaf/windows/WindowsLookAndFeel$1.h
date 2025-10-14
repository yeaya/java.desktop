#ifndef _com_sun_java_swing_plaf_windows_WindowsLookAndFeel$1_h_
#define _com_sun_java_swing_plaf_windows_WindowsLookAndFeel$1_h_
//$ class com.sun.java.swing.plaf.windows.WindowsLookAndFeel$1
//$ extends javax.swing.UIDefaults$ActiveValue

#include <javax/swing/UIDefaults$ActiveValue.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class WindowsLookAndFeel;
					}
				}
			}
		}
	}
}
namespace javax {
	namespace swing {
		class UIDefaults;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $export WindowsLookAndFeel$1 : public ::javax::swing::UIDefaults$ActiveValue {
	$class(WindowsLookAndFeel$1, $NO_CLASS_INIT, ::javax::swing::UIDefaults$ActiveValue)
public:
	WindowsLookAndFeel$1();
	void init$(::com::sun::java::swing::plaf::windows::WindowsLookAndFeel* this$0);
	virtual $Object* createValue(::javax::swing::UIDefaults* table) override;
	::com::sun::java::swing::plaf::windows::WindowsLookAndFeel* this$0 = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsLookAndFeel$1_h_