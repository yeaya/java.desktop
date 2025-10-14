#ifndef _sun_swing_plaf_GTKKeybindings_h_
#define _sun_swing_plaf_GTKKeybindings_h_
//$ class sun.swing.plaf.GTKKeybindings
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

class GTKKeybindings : public ::java::lang::Object {
	$class(GTKKeybindings, $NO_CLASS_INIT, ::java::lang::Object)
public:
	GTKKeybindings();
	void init$();
	static void installKeybindings(::javax::swing::UIDefaults* table);
};

		} // plaf
	} // swing
} // sun

#endif // _sun_swing_plaf_GTKKeybindings_h_