#ifndef _javax_swing_DelegatingDefaultFocusManager_h_
#define _javax_swing_DelegatingDefaultFocusManager_h_
//$ class javax.swing.DelegatingDefaultFocusManager
//$ extends javax.swing.DefaultFocusManager

#include <javax/swing/DefaultFocusManager.h>

namespace java {
	namespace awt {
		class AWTEvent;
		class Component;
		class Container;
		class FocusTraversalPolicy;
		class KeyEventDispatcher;
		class KeyboardFocusManager;
		class Window;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class KeyEvent;
		}
	}
}
namespace java {
	namespace beans {
		class PropertyChangeListener;
		class VetoableChangeListener;
	}
}
namespace java {
	namespace util {
		class Set;
	}
}

namespace javax {
	namespace swing {

class DelegatingDefaultFocusManager : public ::javax::swing::DefaultFocusManager {
	$class(DelegatingDefaultFocusManager, $NO_CLASS_INIT, ::javax::swing::DefaultFocusManager)
public:
	DelegatingDefaultFocusManager();
	using ::javax::swing::DefaultFocusManager::focusNextComponent;
	using ::javax::swing::DefaultFocusManager::focusPreviousComponent;
	using ::javax::swing::DefaultFocusManager::downFocusCycle;
	void init$(::java::awt::KeyboardFocusManager* delegate);
	virtual void addKeyEventDispatcher(::java::awt::KeyEventDispatcher* dispatcher) override;
	virtual void addPropertyChangeListener(::java::beans::PropertyChangeListener* listener) override;
	virtual void addPropertyChangeListener($String* propertyName, ::java::beans::PropertyChangeListener* listener) override;
	virtual void addVetoableChangeListener(::java::beans::VetoableChangeListener* listener) override;
	virtual void addVetoableChangeListener($String* propertyName, ::java::beans::VetoableChangeListener* listener) override;
	virtual void clearGlobalFocusOwner() override;
	virtual bool dispatchEvent(::java::awt::AWTEvent* e) override;
	virtual bool dispatchKeyEvent(::java::awt::event::KeyEvent* e) override;
	virtual void downFocusCycle(::java::awt::Container* aContainer) override;
	virtual void focusNextComponent(::java::awt::Component* aComponent) override;
	virtual void focusPreviousComponent(::java::awt::Component* aComponent) override;
	virtual ::java::awt::Window* getActiveWindow() override;
	virtual ::java::awt::Container* getCurrentFocusCycleRoot() override;
	virtual ::java::util::Set* getDefaultFocusTraversalKeys(int32_t id) override;
	virtual ::java::awt::FocusTraversalPolicy* getDefaultFocusTraversalPolicy() override;
	::java::awt::KeyboardFocusManager* getDelegate();
	virtual ::java::awt::Component* getFocusOwner() override;
	virtual ::java::awt::Window* getFocusedWindow() override;
	virtual ::java::awt::Component* getPermanentFocusOwner() override;
	virtual void processKeyEvent(::java::awt::Component* focusedComponent, ::java::awt::event::KeyEvent* e) override;
	virtual void removeKeyEventDispatcher(::java::awt::KeyEventDispatcher* dispatcher) override;
	virtual void removePropertyChangeListener(::java::beans::PropertyChangeListener* listener) override;
	virtual void removePropertyChangeListener($String* propertyName, ::java::beans::PropertyChangeListener* listener) override;
	virtual void removeVetoableChangeListener(::java::beans::VetoableChangeListener* listener) override;
	virtual void removeVetoableChangeListener($String* propertyName, ::java::beans::VetoableChangeListener* listener) override;
	virtual void setDefaultFocusTraversalKeys(int32_t id, ::java::util::Set* keystrokes) override;
	virtual void setDefaultFocusTraversalPolicy(::java::awt::FocusTraversalPolicy* defaultPolicy) override;
	virtual void setGlobalCurrentFocusCycleRoot(::java::awt::Container* newFocusCycleRoot) override;
	using ::javax::swing::DefaultFocusManager::upFocusCycle;
	virtual void upFocusCycle(::java::awt::Component* aComponent) override;
	::java::awt::KeyboardFocusManager* delegate = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_DelegatingDefaultFocusManager_h_