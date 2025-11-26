#ifndef _java_awt_DefaultFocusTraversalPolicy_h_
#define _java_awt_DefaultFocusTraversalPolicy_h_
//$ class java.awt.DefaultFocusTraversalPolicy
//$ extends java.awt.ContainerOrderFocusTraversalPolicy

#include <java/awt/ContainerOrderFocusTraversalPolicy.h>

namespace java {
	namespace awt {
		class Component;
	}
}

namespace java {
	namespace awt {

class $import DefaultFocusTraversalPolicy : public ::java::awt::ContainerOrderFocusTraversalPolicy {
	$class(DefaultFocusTraversalPolicy, $NO_CLASS_INIT, ::java::awt::ContainerOrderFocusTraversalPolicy)
public:
	DefaultFocusTraversalPolicy();
	void init$();
	virtual bool accept(::java::awt::Component* aComponent) override;
	static const int64_t serialVersionUID = (int64_t)0x7B3152052140A6B9;
};

	} // awt
} // java

#endif // _java_awt_DefaultFocusTraversalPolicy_h_