#ifndef _javax_swing_JDesktopPane$1_h_
#define _javax_swing_JDesktopPane$1_h_
//$ class javax.swing.JDesktopPane$1
//$ extends javax.swing.LayoutFocusTraversalPolicy

#include <javax/swing/LayoutFocusTraversalPolicy.h>

namespace java {
	namespace awt {
		class Component;
		class Container;
	}
}
namespace javax {
	namespace swing {
		class JDesktopPane;
	}
}

namespace javax {
	namespace swing {

class JDesktopPane$1 : public ::javax::swing::LayoutFocusTraversalPolicy {
	$class(JDesktopPane$1, $NO_CLASS_INIT, ::javax::swing::LayoutFocusTraversalPolicy)
public:
	JDesktopPane$1();
	using ::javax::swing::LayoutFocusTraversalPolicy::getInitialComponent;
	void init$(::javax::swing::JDesktopPane* this$0);
	virtual ::java::awt::Component* getDefaultComponent(::java::awt::Container* c) override;
	::javax::swing::JDesktopPane* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JDesktopPane$1_h_