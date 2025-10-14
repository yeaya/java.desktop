#ifndef _java_awt_Container$EventTargetFilter_h_
#define _java_awt_Container$EventTargetFilter_h_
//$ interface java.awt.Container$EventTargetFilter
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Component;
	}
}

namespace java {
	namespace awt {

class $export Container$EventTargetFilter : public ::java::lang::Object {
	$interface(Container$EventTargetFilter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool accept(::java::awt::Component* comp) {return false;}
};

	} // awt
} // java

#endif // _java_awt_Container$EventTargetFilter_h_