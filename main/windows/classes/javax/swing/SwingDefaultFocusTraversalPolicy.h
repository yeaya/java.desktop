#ifndef _javax_swing_SwingDefaultFocusTraversalPolicy_h_
#define _javax_swing_SwingDefaultFocusTraversalPolicy_h_
//$ class javax.swing.SwingDefaultFocusTraversalPolicy
//$ extends java.awt.DefaultFocusTraversalPolicy

#include <java/awt/DefaultFocusTraversalPolicy.h>

namespace java {
	namespace awt {
		class Component;
	}
}

namespace javax {
	namespace swing {

class SwingDefaultFocusTraversalPolicy : public ::java::awt::DefaultFocusTraversalPolicy {
	$class(SwingDefaultFocusTraversalPolicy, $NO_CLASS_INIT, ::java::awt::DefaultFocusTraversalPolicy)
public:
	SwingDefaultFocusTraversalPolicy();
	void init$();
	virtual bool accept(::java::awt::Component* aComponent) override;
};

	} // swing
} // javax

#endif // _javax_swing_SwingDefaultFocusTraversalPolicy_h_