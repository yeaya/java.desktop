#ifndef _com_sun_java_swing_plaf_windows_WindowsLookAndFeel$XPColorValue_h_
#define _com_sun_java_swing_plaf_windows_WindowsLookAndFeel$XPColorValue_h_
//$ class com.sun.java.swing.plaf.windows.WindowsLookAndFeel$XPColorValue
//$ extends com.sun.java.swing.plaf.windows.WindowsLookAndFeel$XPValue

#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$XPValue.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class TMSchema$Part;
						class TMSchema$Prop;
						class TMSchema$State;
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

class $export WindowsLookAndFeel$XPColorValue : public ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$XPValue {
	$class(WindowsLookAndFeel$XPColorValue, $NO_CLASS_INIT, ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$XPValue)
public:
	WindowsLookAndFeel$XPColorValue();
	void init$(::com::sun::java::swing::plaf::windows::TMSchema$Part* part, ::com::sun::java::swing::plaf::windows::TMSchema$State* state, ::com::sun::java::swing::plaf::windows::TMSchema$Prop* prop, Object$* classicValue);
	virtual $Object* getXPValue(::javax::swing::UIDefaults* table) override;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsLookAndFeel$XPColorValue_h_