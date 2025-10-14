#ifndef _sun_awt_AWTAccessor$InvocationEventAccessor_h_
#define _sun_awt_AWTAccessor$InvocationEventAccessor_h_
//$ interface sun.awt.AWTAccessor$InvocationEventAccessor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		namespace event {
			class InvocationEvent;
		}
	}
}

namespace sun {
	namespace awt {

class $export AWTAccessor$InvocationEventAccessor : public ::java::lang::Object {
	$interface(AWTAccessor$InvocationEventAccessor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void dispose(::java::awt::event::InvocationEvent* event) {}
};

	} // awt
} // sun

#endif // _sun_awt_AWTAccessor$InvocationEventAccessor_h_