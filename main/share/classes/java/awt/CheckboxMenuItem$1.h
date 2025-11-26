#ifndef _java_awt_CheckboxMenuItem$1_h_
#define _java_awt_CheckboxMenuItem$1_h_
//$ class java.awt.CheckboxMenuItem$1
//$ extends sun.awt.AWTAccessor$CheckboxMenuItemAccessor

#include <sun/awt/AWTAccessor$CheckboxMenuItemAccessor.h>

namespace java {
	namespace awt {
		class CheckboxMenuItem;
	}
}

namespace java {
	namespace awt {

class CheckboxMenuItem$1 : public ::sun::awt::AWTAccessor$CheckboxMenuItemAccessor {
	$class(CheckboxMenuItem$1, $NO_CLASS_INIT, ::sun::awt::AWTAccessor$CheckboxMenuItemAccessor)
public:
	CheckboxMenuItem$1();
	void init$();
	virtual bool getState(::java::awt::CheckboxMenuItem* cmi) override;
};

	} // awt
} // java

#endif // _java_awt_CheckboxMenuItem$1_h_