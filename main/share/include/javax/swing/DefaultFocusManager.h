#ifndef _javax_swing_DefaultFocusManager_h_
#define _javax_swing_DefaultFocusManager_h_
//$ class javax.swing.DefaultFocusManager
//$ extends javax.swing.FocusManager

#include <javax/swing/FocusManager.h>

namespace java {
	namespace awt {
		class Component;
		class Container;
		class FocusTraversalPolicy;
	}
}
namespace javax {
	namespace swing {
		class LayoutComparator;
	}
}

namespace javax {
	namespace swing {

class $import DefaultFocusManager : public ::javax::swing::FocusManager {
	$class(DefaultFocusManager, $NO_CLASS_INIT, ::javax::swing::FocusManager)
public:
	DefaultFocusManager();
	using ::javax::swing::FocusManager::focusPreviousComponent;
	using ::javax::swing::FocusManager::focusNextComponent;
	using ::javax::swing::FocusManager::downFocusCycle;
	void init$();
	virtual bool compareTabOrder(::java::awt::Component* a, ::java::awt::Component* b);
	virtual ::java::awt::Component* getComponentAfter(::java::awt::Container* aContainer, ::java::awt::Component* aComponent);
	virtual ::java::awt::Component* getComponentBefore(::java::awt::Container* aContainer, ::java::awt::Component* aComponent);
	virtual ::java::awt::Component* getFirstComponent(::java::awt::Container* aContainer);
	virtual ::java::awt::Component* getLastComponent(::java::awt::Container* aContainer);
	using ::javax::swing::FocusManager::upFocusCycle;
	::java::awt::FocusTraversalPolicy* gluePolicy = nullptr;
	::java::awt::FocusTraversalPolicy* layoutPolicy = nullptr;
	::javax::swing::LayoutComparator* comparator = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_DefaultFocusManager_h_