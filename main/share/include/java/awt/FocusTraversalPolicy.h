#ifndef _java_awt_FocusTraversalPolicy_h_
#define _java_awt_FocusTraversalPolicy_h_
//$ class java.awt.FocusTraversalPolicy
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Component;
		class Container;
		class Window;
	}
}

namespace java {
	namespace awt {

class $import FocusTraversalPolicy : public ::java::lang::Object {
	$class(FocusTraversalPolicy, $NO_CLASS_INIT, ::java::lang::Object)
public:
	FocusTraversalPolicy();
	void init$();
	virtual ::java::awt::Component* getComponentAfter(::java::awt::Container* aContainer, ::java::awt::Component* aComponent) {return nullptr;}
	virtual ::java::awt::Component* getComponentBefore(::java::awt::Container* aContainer, ::java::awt::Component* aComponent) {return nullptr;}
	virtual ::java::awt::Component* getDefaultComponent(::java::awt::Container* aContainer) {return nullptr;}
	virtual ::java::awt::Component* getFirstComponent(::java::awt::Container* aContainer) {return nullptr;}
	virtual ::java::awt::Component* getInitialComponent(::java::awt::Window* window);
	virtual ::java::awt::Component* getLastComponent(::java::awt::Container* aContainer) {return nullptr;}
};

	} // awt
} // java

#endif // _java_awt_FocusTraversalPolicy_h_