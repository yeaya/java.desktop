#ifndef _sun_awt_AWTAccessor$MenuItemAccessor_h_
#define _sun_awt_AWTAccessor$MenuItemAccessor_h_
//$ interface sun.awt.AWTAccessor$MenuItemAccessor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class MenuItem;
		class MenuShortcut;
	}
}

namespace sun {
	namespace awt {

class $import AWTAccessor$MenuItemAccessor : public ::java::lang::Object {
	$interface(AWTAccessor$MenuItemAccessor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $String* getActionCommandImpl(::java::awt::MenuItem* item) {return nullptr;}
	virtual $String* getLabel(::java::awt::MenuItem* item) {return nullptr;}
	virtual ::java::awt::MenuShortcut* getShortcut(::java::awt::MenuItem* item) {return nullptr;}
	virtual bool isEnabled(::java::awt::MenuItem* item) {return false;}
	virtual bool isItemEnabled(::java::awt::MenuItem* item) {return false;}
};

	} // awt
} // sun

#endif // _sun_awt_AWTAccessor$MenuItemAccessor_h_