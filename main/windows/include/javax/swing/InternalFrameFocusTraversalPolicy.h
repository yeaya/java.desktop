#ifndef _javax_swing_InternalFrameFocusTraversalPolicy_h_
#define _javax_swing_InternalFrameFocusTraversalPolicy_h_
//$ class javax.swing.InternalFrameFocusTraversalPolicy
//$ extends java.awt.FocusTraversalPolicy

#include <java/awt/FocusTraversalPolicy.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace javax {
	namespace swing {
		class JInternalFrame;
	}
}

namespace javax {
	namespace swing {

class $import InternalFrameFocusTraversalPolicy : public ::java::awt::FocusTraversalPolicy {
	$class(InternalFrameFocusTraversalPolicy, $NO_CLASS_INIT, ::java::awt::FocusTraversalPolicy)
public:
	InternalFrameFocusTraversalPolicy();
	using ::java::awt::FocusTraversalPolicy::getInitialComponent;
	void init$();
	virtual ::java::awt::Component* getInitialComponent(::javax::swing::JInternalFrame* frame);
};

	} // swing
} // javax

#endif // _javax_swing_InternalFrameFocusTraversalPolicy_h_