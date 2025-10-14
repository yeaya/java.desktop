#ifndef _java_awt_KeyboardFocusManager_h_
#define _java_awt_KeyboardFocusManager_h_
//$ class java.awt.KeyboardFocusManager
//$ extends java.awt.KeyEventDispatcher
//$ implements java.awt.KeyEventPostProcessor

#include <java/awt/KeyEventDispatcher.h>
#include <java/awt/KeyEventPostProcessor.h>
#include <java/lang/Array.h>

#pragma push_macro("BACKWARD_TRAVERSAL_KEYS")
#undef BACKWARD_TRAVERSAL_KEYS
#pragma push_macro("DOWN_CYCLE_TRAVERSAL_KEYS")
#undef DOWN_CYCLE_TRAVERSAL_KEYS
#pragma push_macro("FORWARD_TRAVERSAL_KEYS")
#undef FORWARD_TRAVERSAL_KEYS
#pragma push_macro("SNFH_FAILURE")
#undef SNFH_FAILURE
#pragma push_macro("SNFH_SUCCESS_HANDLED")
#undef SNFH_SUCCESS_HANDLED
#pragma push_macro("SNFH_SUCCESS_PROCEED")
#undef SNFH_SUCCESS_PROCEED
#pragma push_macro("TRAVERSAL_KEY_LENGTH")
#undef TRAVERSAL_KEY_LENGTH
#pragma push_macro("UP_CYCLE_TRAVERSAL_KEYS")
#undef UP_CYCLE_TRAVERSAL_KEYS

namespace java {
	namespace awt {
		class AWTEvent;
		class AWTPermission;
		class Component;
		class Container;
		class FocusTraversalPolicy;
		class KeyboardFocusManager$HeavyweightFocusRequest;
		class SequencedEvent;
		class Window;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class FocusEvent;
			class FocusEvent$Cause;
			class KeyEvent;
		}
	}
}
namespace java {
	namespace awt {
		namespace peer {
			class KeyboardFocusManagerPeer;
		}
	}
}
namespace java {
	namespace beans {
		class PropertyChangeListener;
		class PropertyChangeSupport;
		class VetoableChangeListener;
		class VetoableChangeSupport;
	}
}
namespace java {
	namespace lang {
		class Throwable;
	}
}
namespace java {
	namespace util {
		class LinkedList;
		class List;
		class Map;
		class Set;
	}
}
namespace sun {
	namespace awt {
		class AppContext;
	}
}
namespace sun {
	namespace util {
		namespace logging {
			class PlatformLogger;
		}
	}
}

namespace java {
	namespace awt {

class $import KeyboardFocusManager : public ::java::awt::KeyEventDispatcher, public ::java::awt::KeyEventPostProcessor {
	$class(KeyboardFocusManager, 0, ::java::awt::KeyEventDispatcher, ::java::awt::KeyEventPostProcessor)
public:
	KeyboardFocusManager();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool dispatchKeyEvent(::java::awt::event::KeyEvent* e) override {return false;}
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void _clearGlobalFocusOwner();
	virtual void addKeyEventDispatcher(::java::awt::KeyEventDispatcher* dispatcher);
	virtual void addKeyEventPostProcessor(::java::awt::KeyEventPostProcessor* processor);
	virtual void addPropertyChangeListener(::java::beans::PropertyChangeListener* listener);
	virtual void addPropertyChangeListener($String* propertyName, ::java::beans::PropertyChangeListener* listener);
	virtual void addVetoableChangeListener(::java::beans::VetoableChangeListener* listener);
	virtual void addVetoableChangeListener($String* propertyName, ::java::beans::VetoableChangeListener* listener);
	void checkKFMSecurity();
	static void checkReplaceKFMPermission();
	virtual void clearFocusOwner();
	virtual void clearGlobalFocusOwner();
	virtual void clearGlobalFocusOwnerPriv();
	virtual void clearMarkers();
	static void clearMostRecentFocusOwner(::java::awt::Component* comp);
	virtual void dequeueKeyEvents(int64_t after, ::java::awt::Component* untilFocused) {}
	virtual void discardKeyEvents(::java::awt::Component* comp) {}
	static $Throwable* dispatchAndCatchException($Throwable* ex, ::java::awt::Component* comp, ::java::awt::event::FocusEvent* event);
	virtual bool dispatchEvent(::java::awt::AWTEvent* e) {return false;}
	virtual void downFocusCycle(::java::awt::Container* aContainer) {}
	void downFocusCycle();
	virtual void dumpRequests();
	virtual void enqueueKeyEvents(int64_t after, ::java::awt::Component* untilFocused) {}
	virtual void firePropertyChange($String* propertyName, Object$* oldValue, Object$* newValue);
	virtual void fireVetoableChange($String* propertyName, Object$* oldValue, Object$* newValue);
	virtual void focusNextComponent(::java::awt::Component* aComponent) {}
	void focusNextComponent();
	virtual void focusPreviousComponent(::java::awt::Component* aComponent) {}
	void focusPreviousComponent();
	static bool focusedWindowChanged(::java::awt::Component* to, ::java::awt::Component* from);
	virtual ::java::awt::Window* getActiveWindow();
	virtual ::java::awt::Container* getCurrentFocusCycleRoot();
	static ::java::awt::KeyboardFocusManager* getCurrentKeyboardFocusManager();
	static ::java::awt::KeyboardFocusManager* getCurrentKeyboardFocusManager(::sun::awt::AppContext* appcontext);
	::java::awt::SequencedEvent* getCurrentSequencedEvent();
	virtual ::java::awt::Component* getCurrentWaitingRequest(::java::awt::Component* parent);
	virtual ::java::util::Set* getDefaultFocusTraversalKeys(int32_t id);
	virtual ::java::awt::FocusTraversalPolicy* getDefaultFocusTraversalPolicy();
	static ::java::awt::KeyboardFocusManager$HeavyweightFocusRequest* getFirstHWRequest();
	virtual ::java::awt::Component* getFocusOwner();
	virtual ::java::awt::Window* getFocusedWindow();
	virtual ::java::awt::Window* getGlobalActiveWindow();
	virtual ::java::awt::Container* getGlobalCurrentFocusCycleRoot();
	virtual ::java::awt::Component* getGlobalFocusOwner();
	virtual ::java::awt::Window* getGlobalFocusedWindow();
	virtual ::java::awt::Component* getGlobalPermanentFocusOwner();
	static ::java::awt::Component* getHeavyweight(::java::awt::Component* comp);
	virtual ::java::util::List* getKeyEventDispatchers();
	virtual ::java::util::List* getKeyEventPostProcessors();
	static ::java::awt::KeyboardFocusManager$HeavyweightFocusRequest* getLastHWRequest();
	static ::java::awt::Component* getMostRecentFocusOwner(::java::awt::Window* window);
	virtual ::java::awt::Component* getNativeFocusOwner();
	virtual ::java::awt::Window* getNativeFocusedWindow();
	virtual ::java::awt::Component* getPermanentFocusOwner();
	virtual $Array<::java::beans::PropertyChangeListener>* getPropertyChangeListeners();
	virtual $Array<::java::beans::PropertyChangeListener>* getPropertyChangeListeners($String* propertyName);
	virtual $Array<::java::beans::VetoableChangeListener>* getVetoableChangeListeners();
	virtual $Array<::java::beans::VetoableChangeListener>* getVetoableChangeListeners($String* propertyName);
	static void handleException($Throwable* ex);
	static ::java::util::Set* initFocusTraversalKeysSet($String* value, ::java::util::Set* targetSet);
	static void initIDs();
	void initPeer();
	static bool isAutoFocusTransferEnabled();
	static bool isAutoFocusTransferEnabledFor(::java::awt::Component* comp);
	static bool isProxyActive(::java::awt::event::KeyEvent* e);
	static bool isProxyActiveImpl(::java::awt::event::KeyEvent* e);
	static bool isTemporary(::java::awt::Component* to, ::java::awt::Component* from);
	static ::java::awt::Window* markClearGlobalFocusOwner();
	virtual bool postProcessKeyEvent(::java::awt::event::KeyEvent* e) override {return false;}
	static void processCurrentLightweightRequests();
	virtual void processKeyEvent(::java::awt::Component* focusedComponent, ::java::awt::event::KeyEvent* e) {}
	static bool processSynchronousLightweightTransfer(::java::awt::Component* heavyweight, ::java::awt::Component* descendant, bool temporary, bool focusedWindowChangeAllowed, int64_t time);
	void redispatchEvent(::java::awt::Component* target, ::java::awt::AWTEvent* e);
	static bool removeFirstRequest();
	virtual void removeKeyEventDispatcher(::java::awt::KeyEventDispatcher* dispatcher);
	virtual void removeKeyEventPostProcessor(::java::awt::KeyEventPostProcessor* processor);
	static void removeLastFocusRequest(::java::awt::Component* heavyweight);
	virtual void removePropertyChangeListener(::java::beans::PropertyChangeListener* listener);
	virtual void removePropertyChangeListener($String* propertyName, ::java::beans::PropertyChangeListener* listener);
	virtual void removeVetoableChangeListener(::java::beans::VetoableChangeListener* listener);
	virtual void removeVetoableChangeListener($String* propertyName, ::java::beans::VetoableChangeListener* listener);
	static ::java::awt::AWTEvent* retargetFocusEvent(::java::awt::AWTEvent* event);
	static ::java::awt::event::FocusEvent* retargetFocusGained(::java::awt::event::FocusEvent* fe);
	static ::java::awt::event::FocusEvent* retargetFocusLost(::java::awt::event::FocusEvent* fe);
	static ::java::awt::event::FocusEvent* retargetUnexpectedFocusEvent(::java::awt::event::FocusEvent* fe);
	static void setCurrentKeyboardFocusManager(::java::awt::KeyboardFocusManager* newManager);
	void setCurrentSequencedEvent(::java::awt::SequencedEvent* current);
	virtual void setDefaultFocusTraversalKeys(int32_t id, ::java::util::Set* keystrokes);
	virtual void setDefaultFocusTraversalPolicy(::java::awt::FocusTraversalPolicy* defaultPolicy);
	virtual void setGlobalActiveWindow(::java::awt::Window* activeWindow);
	virtual void setGlobalCurrentFocusCycleRoot(::java::awt::Container* newFocusCycleRoot);
	virtual void setGlobalCurrentFocusCycleRootPriv(::java::awt::Container* newFocusCycleRoot);
	virtual void setGlobalFocusOwner(::java::awt::Component* focusOwner);
	virtual void setGlobalFocusedWindow(::java::awt::Window* focusedWindow);
	virtual void setGlobalPermanentFocusOwner(::java::awt::Component* permanentFocusOwner);
	static void setMostRecentFocusOwner(::java::awt::Component* component);
	static void setMostRecentFocusOwner(::java::awt::Window* window, ::java::awt::Component* component);
	virtual void setNativeFocusOwner(::java::awt::Component* comp);
	static int32_t shouldNativelyFocusHeavyweight(::java::awt::Component* heavyweight, ::java::awt::Component* descendant, bool temporary, bool focusedWindowChangeAllowed, int64_t time, ::java::awt::event::FocusEvent$Cause* cause);
	virtual $String* toString() override;
	virtual void upFocusCycle(::java::awt::Component* aComponent) {}
	void upFocusCycle();
	static bool $assertionsDisabled;
	static ::sun::util::logging::PlatformLogger* focusLog;
	::java::awt::peer::KeyboardFocusManagerPeer* peer = nullptr;
	static ::sun::util::logging::PlatformLogger* log;
	static const int32_t FORWARD_TRAVERSAL_KEYS = 0;
	static const int32_t BACKWARD_TRAVERSAL_KEYS = 1;
	static const int32_t UP_CYCLE_TRAVERSAL_KEYS = 2;
	static const int32_t DOWN_CYCLE_TRAVERSAL_KEYS = 3;
	static const int32_t TRAVERSAL_KEY_LENGTH = 4; // DOWN_CYCLE_TRAVERSAL_KEYS + 1
	static ::java::awt::Component* focusOwner;
	static ::java::awt::Component* permanentFocusOwner;
	static ::java::awt::Window* focusedWindow;
	static ::java::awt::Window* activeWindow;
	::java::awt::FocusTraversalPolicy* defaultPolicy = nullptr;
	static $StringArray* defaultFocusTraversalKeyPropertyNames;
	$Array<::java::util::Set>* defaultFocusTraversalKeys = nullptr;
	static ::java::awt::Container* currentFocusCycleRoot;
	::java::beans::VetoableChangeSupport* vetoableSupport = nullptr;
	::java::beans::PropertyChangeSupport* changeSupport = nullptr;
	::java::util::LinkedList* keyEventDispatchers = nullptr;
	::java::util::LinkedList* keyEventPostProcessors = nullptr;
	static ::java::util::Map* mostRecentFocusOwners;
	static ::java::awt::AWTPermission* replaceKeyboardFocusManagerPermission;
	::java::awt::SequencedEvent* currentSequencedEvent = nullptr;
	static ::java::util::LinkedList* heavyweightRequests;
	static ::java::util::LinkedList* currentLightweightRequests;
	static bool clearingCurrentLightweightRequests;
	static bool allowSyncFocusRequests;
	static ::java::awt::Component* newFocusOwner;
	static $volatile(bool) disableRestoreFocus;
	static const int32_t SNFH_FAILURE = 0;
	static const int32_t SNFH_SUCCESS_HANDLED = 1;
	static const int32_t SNFH_SUCCESS_PROCEED = 2;
};

	} // awt
} // java

#pragma pop_macro("BACKWARD_TRAVERSAL_KEYS")
#pragma pop_macro("DOWN_CYCLE_TRAVERSAL_KEYS")
#pragma pop_macro("FORWARD_TRAVERSAL_KEYS")
#pragma pop_macro("SNFH_FAILURE")
#pragma pop_macro("SNFH_SUCCESS_HANDLED")
#pragma pop_macro("SNFH_SUCCESS_PROCEED")
#pragma pop_macro("TRAVERSAL_KEY_LENGTH")
#pragma pop_macro("UP_CYCLE_TRAVERSAL_KEYS")

#endif // _java_awt_KeyboardFocusManager_h_