#ifndef _java_awt_Conditional_h_
#define _java_awt_Conditional_h_
//$ interface java.awt.Conditional
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {

class Conditional : public ::java::lang::Object {
	$interface(Conditional, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool evaluate() {return false;}
};

	} // awt
} // java

#endif // _java_awt_Conditional_h_