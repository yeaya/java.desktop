#ifndef _java_awt_MenuItem$1_h_
#define _java_awt_MenuItem$1_h_
//$ class java.awt.MenuItem$1
//$ extends sun.awt.AWTAccessor$MenuItemAccessor

#include <sun/awt/AWTAccessor$MenuItemAccessor.h>

namespace java {
	namespace awt {
		class MenuItem;
		class MenuShortcut;
	}
}

namespace java {
	namespace awt {

class MenuItem$1 : public ::sun::awt::AWTAccessor$MenuItemAccessor {
	$class(MenuItem$1, $NO_CLASS_INIT, ::sun::awt::AWTAccessor$MenuItemAccessor)
public:
	MenuItem$1();
	void init$();
	virtual $String* getActionCommandImpl(::java::awt::MenuItem* item) override;
	virtual $String* getLabel(::java::awt::MenuItem* item) override;
	virtual ::java::awt::MenuShortcut* getShortcut(::java::awt::MenuItem* item) override;
	virtual bool isEnabled(::java::awt::MenuItem* item) override;
	virtual bool isItemEnabled(::java::awt::MenuItem* item) override;
};

	} // awt
} // java

#endif // _java_awt_MenuItem$1_h_