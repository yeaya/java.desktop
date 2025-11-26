#ifndef _java_awt_MenuContainer_h_
#define _java_awt_MenuContainer_h_
//$ interface java.awt.MenuContainer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Event;
		class Font;
		class MenuComponent;
	}
}

namespace java {
	namespace awt {

class $import MenuContainer : public ::java::lang::Object {
	$interface(MenuContainer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::awt::Font* getFont() {return nullptr;}
	virtual bool postEvent(::java::awt::Event* evt) {return false;}
	virtual void remove(::java::awt::MenuComponent* comp) {}
};

	} // awt
} // java

#endif // _java_awt_MenuContainer_h_