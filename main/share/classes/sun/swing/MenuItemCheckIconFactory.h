#ifndef _sun_swing_MenuItemCheckIconFactory_h_
#define _sun_swing_MenuItemCheckIconFactory_h_
//$ interface sun.swing.MenuItemCheckIconFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		class Icon;
		class JMenuItem;
	}
}

namespace sun {
	namespace swing {

class $export MenuItemCheckIconFactory : public ::java::lang::Object {
	$interface(MenuItemCheckIconFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::javax::swing::Icon* getIcon(::javax::swing::JMenuItem* component) {return nullptr;}
	virtual bool isCompatible(Object$* icon, $String* prefix) {return false;}
};

	} // swing
} // sun

#endif // _sun_swing_MenuItemCheckIconFactory_h_