#ifndef _javax_accessibility_AccessibleKeyBinding_h_
#define _javax_accessibility_AccessibleKeyBinding_h_
//$ interface javax.accessibility.AccessibleKeyBinding
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace accessibility {

class $import AccessibleKeyBinding : public ::java::lang::Object {
	$interface(AccessibleKeyBinding, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* getAccessibleKeyBinding(int32_t i) {return nullptr;}
	virtual int32_t getAccessibleKeyBindingCount() {return 0;}
};

	} // accessibility
} // javax

#endif // _javax_accessibility_AccessibleKeyBinding_h_