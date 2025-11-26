#ifndef _sun_awt_AWTAccessor$AccessibleBundleAccessor_h_
#define _sun_awt_AWTAccessor$AccessibleBundleAccessor_h_
//$ interface sun.awt.AWTAccessor$AccessibleBundleAccessor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace accessibility {
		class AccessibleBundle;
	}
}

namespace sun {
	namespace awt {

class $export AWTAccessor$AccessibleBundleAccessor : public ::java::lang::Object {
	$interface(AWTAccessor$AccessibleBundleAccessor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $String* getKey(::javax::accessibility::AccessibleBundle* accessibleBundle) {return nullptr;}
};

	} // awt
} // sun

#endif // _sun_awt_AWTAccessor$AccessibleBundleAccessor_h_