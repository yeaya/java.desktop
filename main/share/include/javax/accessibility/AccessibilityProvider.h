#ifndef _javax_accessibility_AccessibilityProvider_h_
#define _javax_accessibility_AccessibilityProvider_h_
//$ class javax.accessibility.AccessibilityProvider
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Void;
	}
}

namespace javax {
	namespace accessibility {

class $import AccessibilityProvider : public ::java::lang::Object {
	$class(AccessibilityProvider, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AccessibilityProvider();
	void init$();
	void init$(::java::lang::Void* ignore);
	virtual void activate() {}
	static ::java::lang::Void* checkPermission();
	virtual $String* getName() {return nullptr;}
};

	} // accessibility
} // javax

#endif // _javax_accessibility_AccessibilityProvider_h_