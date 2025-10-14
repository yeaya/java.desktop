#ifndef _com_sun_java_swing_plaf_windows_WindowsMenuItemUIAccessor_h_
#define _com_sun_java_swing_plaf_windows_WindowsMenuItemUIAccessor_h_
//$ interface com.sun.java.swing.plaf.windows.WindowsMenuItemUIAccessor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class TMSchema$Part;
						class TMSchema$State;
					}
				}
			}
		}
	}
}
namespace javax {
	namespace swing {
		class JMenuItem;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $export WindowsMenuItemUIAccessor : public ::java::lang::Object {
	$interface(WindowsMenuItemUIAccessor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::javax::swing::JMenuItem* getMenuItem() {return nullptr;}
	virtual ::com::sun::java::swing::plaf::windows::TMSchema$Part* getPart(::javax::swing::JMenuItem* menuItem) {return nullptr;}
	virtual ::com::sun::java::swing::plaf::windows::TMSchema$State* getState(::javax::swing::JMenuItem* menuItem) {return nullptr;}
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsMenuItemUIAccessor_h_