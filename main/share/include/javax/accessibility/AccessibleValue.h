#ifndef _javax_accessibility_AccessibleValue_h_
#define _javax_accessibility_AccessibleValue_h_
//$ interface javax.accessibility.AccessibleValue
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Number;
	}
}

namespace javax {
	namespace accessibility {

class $import AccessibleValue : public ::java::lang::Object {
	$interface(AccessibleValue, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::lang::Number* getCurrentAccessibleValue() {return nullptr;}
	virtual ::java::lang::Number* getMaximumAccessibleValue() {return nullptr;}
	virtual ::java::lang::Number* getMinimumAccessibleValue() {return nullptr;}
	virtual bool setCurrentAccessibleValue(::java::lang::Number* n) {return false;}
};

	} // accessibility
} // javax

#endif // _javax_accessibility_AccessibleValue_h_