#ifndef _sun_awt_AWTAccessor$AccessibleContextAccessor_h_
#define _sun_awt_AWTAccessor$AccessibleContextAccessor_h_
//$ interface sun.awt.AWTAccessor$AccessibleContextAccessor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace accessibility {
		class AccessibleContext;
	}
}
namespace sun {
	namespace awt {
		class AppContext;
	}
}

namespace sun {
	namespace awt {

class $export AWTAccessor$AccessibleContextAccessor : public ::java::lang::Object {
	$interface(AWTAccessor$AccessibleContextAccessor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::sun::awt::AppContext* getAppContext(::javax::accessibility::AccessibleContext* accessibleContext) {return nullptr;}
	virtual $Object* getNativeAXResource(::javax::accessibility::AccessibleContext* accessibleContext) {return nullptr;}
	virtual void setAppContext(::javax::accessibility::AccessibleContext* accessibleContext, ::sun::awt::AppContext* appContext) {}
	virtual void setNativeAXResource(::javax::accessibility::AccessibleContext* accessibleContext, Object$* value) {}
};

	} // awt
} // sun

#endif // _sun_awt_AWTAccessor$AccessibleContextAccessor_h_