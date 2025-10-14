#ifndef _javax_accessibility_AccessibleBundle$1_h_
#define _javax_accessibility_AccessibleBundle$1_h_
//$ class javax.accessibility.AccessibleBundle$1
//$ extends sun.awt.AWTAccessor$AccessibleBundleAccessor

#include <sun/awt/AWTAccessor$AccessibleBundleAccessor.h>

namespace javax {
	namespace accessibility {
		class AccessibleBundle;
	}
}

namespace javax {
	namespace accessibility {

class AccessibleBundle$1 : public ::sun::awt::AWTAccessor$AccessibleBundleAccessor {
	$class(AccessibleBundle$1, $NO_CLASS_INIT, ::sun::awt::AWTAccessor$AccessibleBundleAccessor)
public:
	AccessibleBundle$1();
	void init$();
	virtual $String* getKey(::javax::accessibility::AccessibleBundle* accessibleBundle) override;
};

	} // accessibility
} // javax

#endif // _javax_accessibility_AccessibleBundle$1_h_