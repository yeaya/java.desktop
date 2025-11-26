#ifndef _javax_accessibility_AccessibleContext$1_h_
#define _javax_accessibility_AccessibleContext$1_h_
//$ class javax.accessibility.AccessibleContext$1
//$ extends sun.awt.AWTAccessor$AccessibleContextAccessor

#include <sun/awt/AWTAccessor$AccessibleContextAccessor.h>

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

namespace javax {
	namespace accessibility {

class AccessibleContext$1 : public ::sun::awt::AWTAccessor$AccessibleContextAccessor {
	$class(AccessibleContext$1, $NO_CLASS_INIT, ::sun::awt::AWTAccessor$AccessibleContextAccessor)
public:
	AccessibleContext$1();
	void init$();
	virtual ::sun::awt::AppContext* getAppContext(::javax::accessibility::AccessibleContext* accessibleContext) override;
	virtual $Object* getNativeAXResource(::javax::accessibility::AccessibleContext* accessibleContext) override;
	virtual void setAppContext(::javax::accessibility::AccessibleContext* accessibleContext, ::sun::awt::AppContext* appContext) override;
	virtual void setNativeAXResource(::javax::accessibility::AccessibleContext* accessibleContext, Object$* value) override;
};

	} // accessibility
} // javax

#endif // _javax_accessibility_AccessibleContext$1_h_