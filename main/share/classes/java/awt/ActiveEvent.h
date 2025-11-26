#ifndef _java_awt_ActiveEvent_h_
#define _java_awt_ActiveEvent_h_
//$ interface java.awt.ActiveEvent
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {

class $export ActiveEvent : public ::java::lang::Object {
	$interface(ActiveEvent, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void dispatch() {}
};

	} // awt
} // java

#endif // _java_awt_ActiveEvent_h_