#ifndef _com_sun_java_swing_plaf_windows_WindowsLookAndFeel$XPBorderValue_h_
#define _com_sun_java_swing_plaf_windows_WindowsLookAndFeel$XPBorderValue_h_
//$ class com.sun.java.swing.plaf.windows.WindowsLookAndFeel$XPBorderValue
//$ extends com.sun.java.swing.plaf.windows.WindowsLookAndFeel$XPValue

#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$XPValue.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class TMSchema$Part;
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
namespace javax {
	namespace swing {
		namespace border {
			class Border;
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $import WindowsLookAndFeel$XPBorderValue : public ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$XPValue {
	$class(WindowsLookAndFeel$XPBorderValue, $NO_CLASS_INIT, ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$XPValue)
public:
	WindowsLookAndFeel$XPBorderValue();
	void init$(::com::sun::java::swing::plaf::windows::TMSchema$Part* xpValue, Object$* classicValue);
	void init$(::com::sun::java::swing::plaf::windows::TMSchema$Part* xpValue, Object$* classicValue, ::javax::swing::border::Border* extraMargin);
	virtual $Object* getXPValue(::javax::swing::UIDefaults* table) override;
	::javax::swing::border::Border* extraMargin = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsLookAndFeel$XPBorderValue_h_