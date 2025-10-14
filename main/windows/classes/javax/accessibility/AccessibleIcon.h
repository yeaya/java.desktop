#ifndef _javax_accessibility_AccessibleIcon_h_
#define _javax_accessibility_AccessibleIcon_h_
//$ interface javax.accessibility.AccessibleIcon
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace accessibility {

class $export AccessibleIcon : public ::java::lang::Object {
	$interface(AccessibleIcon, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $String* getAccessibleIconDescription() {return nullptr;}
	virtual int32_t getAccessibleIconHeight() {return 0;}
	virtual int32_t getAccessibleIconWidth() {return 0;}
	virtual void setAccessibleIconDescription($String* description) {}
};

	} // accessibility
} // javax

#endif // _javax_accessibility_AccessibleIcon_h_