#ifndef _com_sun_java_swing_plaf_windows_WindowsLookAndFeel$XPColorValue$XPColorValueKey_h_
#define _com_sun_java_swing_plaf_windows_WindowsLookAndFeel$XPColorValue$XPColorValueKey_h_
//$ class com.sun.java.swing.plaf.windows.WindowsLookAndFeel$XPColorValue$XPColorValueKey
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class TMSchema$Part;
						class TMSchema$Prop;
						class TMSchema$State;
						class XPStyle$Skin;
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

class $export WindowsLookAndFeel$XPColorValue$XPColorValueKey : public ::java::lang::Object {
	$class(WindowsLookAndFeel$XPColorValue$XPColorValueKey, $NO_CLASS_INIT, ::java::lang::Object)
public:
	WindowsLookAndFeel$XPColorValue$XPColorValueKey();
	void init$(::com::sun::java::swing::plaf::windows::TMSchema$Part* part, ::com::sun::java::swing::plaf::windows::TMSchema$State* state, ::com::sun::java::swing::plaf::windows::TMSchema$Prop* prop);
	::com::sun::java::swing::plaf::windows::XPStyle$Skin* skin = nullptr;
	::com::sun::java::swing::plaf::windows::TMSchema$Prop* prop = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsLookAndFeel$XPColorValue$XPColorValueKey_h_