#ifndef _javax_accessibility_AccessibleExtendedComponent_h_
#define _javax_accessibility_AccessibleExtendedComponent_h_
//$ interface javax.accessibility.AccessibleExtendedComponent
//$ extends javax.accessibility.AccessibleComponent

#include <javax/accessibility/AccessibleComponent.h>

namespace javax {
	namespace accessibility {
		class AccessibleKeyBinding;
	}
}

namespace javax {
	namespace accessibility {

class $import AccessibleExtendedComponent : public ::javax::accessibility::AccessibleComponent {
	$interface(AccessibleExtendedComponent, $NO_CLASS_INIT, ::javax::accessibility::AccessibleComponent)
public:
	virtual ::javax::accessibility::AccessibleKeyBinding* getAccessibleKeyBinding() {return nullptr;}
	virtual $String* getTitledBorderText() {return nullptr;}
	virtual $String* getToolTipText() {return nullptr;}
};

	} // accessibility
} // javax

#endif // _javax_accessibility_AccessibleExtendedComponent_h_