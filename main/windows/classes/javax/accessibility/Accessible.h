#ifndef _javax_accessibility_Accessible_h_
#define _javax_accessibility_Accessible_h_
//$ interface javax.accessibility.Accessible
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace accessibility {
		class AccessibleContext;
	}
}

namespace javax {
	namespace accessibility {

class $export Accessible : public ::java::lang::Object {
	$interface(Accessible, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() {return nullptr;}
};

	} // accessibility
} // javax

#endif // _javax_accessibility_Accessible_h_