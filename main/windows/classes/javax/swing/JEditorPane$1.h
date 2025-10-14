#ifndef _javax_swing_JEditorPane$1_h_
#define _javax_swing_JEditorPane$1_h_
//$ class javax.swing.JEditorPane$1
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
		class JEditorPane;
	}
}

namespace javax {
	namespace swing {

class JEditorPane$1 : public ::javax::swing::LayoutFocusTraversalPolicy {
	$class(JEditorPane$1, $NO_CLASS_INIT, ::javax::swing::LayoutFocusTraversalPolicy)
public:
	JEditorPane$1();
	using ::javax::swing::LayoutFocusTraversalPolicy::getInitialComponent;
	void init$(::javax::swing::JEditorPane* this$0);
	virtual bool accept(::java::awt::Component* aComponent) override;
	virtual ::java::awt::Component* getComponentAfter(::java::awt::Container* focusCycleRoot, ::java::awt::Component* aComponent) override;
	virtual ::java::awt::Component* getComponentBefore(::java::awt::Container* focusCycleRoot, ::java::awt::Component* aComponent) override;
	virtual ::java::awt::Component* getDefaultComponent(::java::awt::Container* focusCycleRoot) override;
	::javax::swing::JEditorPane* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JEditorPane$1_h_