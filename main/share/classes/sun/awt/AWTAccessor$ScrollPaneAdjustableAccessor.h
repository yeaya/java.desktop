#ifndef _sun_awt_AWTAccessor$ScrollPaneAdjustableAccessor_h_
#define _sun_awt_AWTAccessor$ScrollPaneAdjustableAccessor_h_
//$ interface sun.awt.AWTAccessor$ScrollPaneAdjustableAccessor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class ScrollPaneAdjustable;
	}
}

namespace sun {
	namespace awt {

class $export AWTAccessor$ScrollPaneAdjustableAccessor : public ::java::lang::Object {
	$interface(AWTAccessor$ScrollPaneAdjustableAccessor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void setTypedValue(::java::awt::ScrollPaneAdjustable* adj, int32_t v, int32_t type) {}
};

	} // awt
} // sun

#endif // _sun_awt_AWTAccessor$ScrollPaneAdjustableAccessor_h_