#ifndef _com_sun_java_swing_plaf_windows_WindowsLookAndFeel$XPDLUValue_h_
#define _com_sun_java_swing_plaf_windows_WindowsLookAndFeel$XPDLUValue_h_
//$ class com.sun.java.swing.plaf.windows.WindowsLookAndFeel$XPDLUValue
//$ extends com.sun.java.swing.plaf.windows.WindowsLookAndFeel$XPValue

#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$XPValue.h>

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

class $export WindowsLookAndFeel$XPDLUValue : public ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$XPValue {
	$class(WindowsLookAndFeel$XPDLUValue, $NO_CLASS_INIT, ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$XPValue)
public:
	WindowsLookAndFeel$XPDLUValue();
	void init$(::com::sun::java::swing::plaf::windows::WindowsLookAndFeel* this$0, int32_t xpdlu, int32_t classicdlu, int32_t direction);
	virtual $Object* getClassicValue(::javax::swing::UIDefaults* table) override;
	virtual $Object* getXPValue(::javax::swing::UIDefaults* table) override;
	::com::sun::java::swing::plaf::windows::WindowsLookAndFeel* this$0 = nullptr;
	int32_t direction = 0;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsLookAndFeel$XPDLUValue_h_