#ifndef _sun_awt_AWTAccessor$CheckboxMenuItemAccessor_h_
#define _sun_awt_AWTAccessor$CheckboxMenuItemAccessor_h_
//$ interface sun.awt.AWTAccessor$CheckboxMenuItemAccessor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class CheckboxMenuItem;
	}
}

namespace sun {
	namespace awt {

class $import AWTAccessor$CheckboxMenuItemAccessor : public ::java::lang::Object {
	$interface(AWTAccessor$CheckboxMenuItemAccessor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool getState(::java::awt::CheckboxMenuItem* cmi) {return false;}
};

	} // awt
} // sun

#endif // _sun_awt_AWTAccessor$CheckboxMenuItemAccessor_h_