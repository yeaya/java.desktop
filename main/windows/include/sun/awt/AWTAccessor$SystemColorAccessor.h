#ifndef _sun_awt_AWTAccessor$SystemColorAccessor_h_
#define _sun_awt_AWTAccessor$SystemColorAccessor_h_
//$ interface sun.awt.AWTAccessor$SystemColorAccessor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace awt {

class $import AWTAccessor$SystemColorAccessor : public ::java::lang::Object {
	$interface(AWTAccessor$SystemColorAccessor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void updateSystemColors() {}
};

	} // awt
} // sun

#endif // _sun_awt_AWTAccessor$SystemColorAccessor_h_