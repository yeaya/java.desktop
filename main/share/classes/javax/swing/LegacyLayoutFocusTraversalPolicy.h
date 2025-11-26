#ifndef _javax_swing_LegacyLayoutFocusTraversalPolicy_h_
#define _javax_swing_LegacyLayoutFocusTraversalPolicy_h_
//$ class javax.swing.LegacyLayoutFocusTraversalPolicy
//$ extends javax.swing.LayoutFocusTraversalPolicy

#include <javax/swing/LayoutFocusTraversalPolicy.h>

namespace javax {
	namespace swing {
		class DefaultFocusManager;
	}
}

namespace javax {
	namespace swing {

class LegacyLayoutFocusTraversalPolicy : public ::javax::swing::LayoutFocusTraversalPolicy {
	$class(LegacyLayoutFocusTraversalPolicy, $NO_CLASS_INIT, ::javax::swing::LayoutFocusTraversalPolicy)
public:
	LegacyLayoutFocusTraversalPolicy();
	using ::javax::swing::LayoutFocusTraversalPolicy::getInitialComponent;
	void init$(::javax::swing::DefaultFocusManager* defaultFocusManager);
};

	} // swing
} // javax

#endif // _javax_swing_LegacyLayoutFocusTraversalPolicy_h_