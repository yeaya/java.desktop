#ifndef _javax_swing_SwingContainerOrderFocusTraversalPolicy_h_
#define _javax_swing_SwingContainerOrderFocusTraversalPolicy_h_
//$ class javax.swing.SwingContainerOrderFocusTraversalPolicy
//$ extends java.awt.ContainerOrderFocusTraversalPolicy

#include <java/awt/ContainerOrderFocusTraversalPolicy.h>

namespace java {
	namespace awt {
		class Component;
	}
}

namespace javax {
	namespace swing {

class SwingContainerOrderFocusTraversalPolicy : public ::java::awt::ContainerOrderFocusTraversalPolicy {
	$class(SwingContainerOrderFocusTraversalPolicy, $NO_CLASS_INIT, ::java::awt::ContainerOrderFocusTraversalPolicy)
public:
	SwingContainerOrderFocusTraversalPolicy();
	void init$();
	virtual bool accept(::java::awt::Component* aComponent) override;
};

	} // swing
} // javax

#endif // _javax_swing_SwingContainerOrderFocusTraversalPolicy_h_