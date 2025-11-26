#ifndef _bug7199708$ComponentAction_h_
#define _bug7199708$ComponentAction_h_
//$ interface bug7199708$ComponentAction
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Component;
	}
}

class $export bug7199708$ComponentAction : public ::java::lang::Object {
	$interface(bug7199708$ComponentAction, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool accept(::java::awt::Component* component) {return false;}
	virtual void perform(::java::awt::Component* component) {}
};

#endif // _bug7199708$ComponentAction_h_