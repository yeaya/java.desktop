#ifndef _sun_swing_plaf_WindowsKeybindings_h_
#define _sun_swing_plaf_WindowsKeybindings_h_
//$ class sun.swing.plaf.WindowsKeybindings
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		class UIDefaults;
	}
}

namespace sun {
	namespace swing {
		namespace plaf {

class WindowsKeybindings : public ::java::lang::Object {
	$class(WindowsKeybindings, $NO_CLASS_INIT, ::java::lang::Object)
public:
	WindowsKeybindings();
	void init$();
	static void installKeybindings(::javax::swing::UIDefaults* table);
};

		} // plaf
	} // swing
} // sun

#endif // _sun_swing_plaf_WindowsKeybindings_h_