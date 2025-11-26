#ifndef _java_awt_DefaultKeyboardFocusManager_h_
#define _java_awt_DefaultKeyboardFocusManager_h_
//$ class java.awt.DefaultKeyboardFocusManager
//$ extends java.awt.KeyboardFocusManager

#include <java/awt/KeyboardFocusManager.h>

#pragma push_macro("NULL_COMPONENT_WR")
#undef NULL_COMPONENT_WR
#pragma push_macro("NULL_WINDOW_WR")
#undef NULL_WINDOW_WR

namespace java {
	namespace awt {
		class AWTEvent;
		class Component;
		class Container;
		class Window;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class FocusEvent;
			class KeyEvent;
			class WindowEvent;
		}
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class WeakReference;
		}
	}
}
namespace java {
	namespace util {
		class LinkedList;
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

class $import DefaultKeyboardFocusManager : public ::java::awt::KeyboardFocusManager {
	$class(DefaultKeyboardFocusManager, 0, ::java::awt::KeyboardFocusManager)
public:
	DefaultKeyboardFocusManager();
	using ::java::awt::KeyboardFocusManager::focusNextComponent;
	using ::java::awt::KeyboardFocusManager::focusPreviousComponent;
	using ::java::awt::KeyboardFocusManager::downFocusCycle;
	void init$();
	virtual void clearMarkers() override;
	void consumeNextKeyTyped(::java::awt::event::KeyEvent* e);
	bool consumeProcessedKeyEvent(::java::awt::event::KeyEvent* e);
	void consumeTraversalKey(::java::awt::event::KeyEvent* e);
	virtual void dequeueKeyEvents(int64_t after, ::java::awt::Component* untilFocused) override;
	virtual void discardKeyEvents(::java::awt::Component* comp) override;
	virtual bool dispatchEvent(::java::awt::AWTEvent* e) override;
	virtual bool dispatchKeyEvent(::java::awt::event::KeyEvent* e) override;
	bool doRestoreFocus(::java::awt::Component* toFocus, ::java::awt::Component* vetoedComponent, bool clearOnFailure);
	virtual void downFocusCycle(::java::awt::Container* aContainer) override;
	virtual void dumpMarkers();
	virtual void enqueueKeyEvents(int64_t after, ::java::awt::Component* untilFocused) override;
	virtual void focusNextComponent(::java::awt::Component* aComponent) override;
	virtual void focusPreviousComponent(::java::awt::Component* aComponent) override;
	::java::awt::Window* getOwningFrameDialog(::java::awt::Window* window);
	bool hasMarker(::java::awt::Component* comp);
	static void initStatic();
	virtual bool postProcessKeyEvent(::java::awt::event::KeyEvent* e) override;
	bool preDispatchKeyEvent(::java::awt::event::KeyEvent* ke);
	virtual void processKeyEvent(::java::awt::Component* focusedComponent, ::java::awt::event::KeyEvent* e) override;
	void pumpApprovedKeyEvents();
	void purgeStampedEvents(int64_t start, int64_t end);
	bool repostIfFollowsKeyEvents(::java::awt::event::WindowEvent* e);
	void restoreFocus(::java::awt::event::FocusEvent* fe, ::java::awt::Window* newFocusedWindow);
	void restoreFocus(::java::awt::event::WindowEvent* we);
	bool restoreFocus(::java::awt::Window* aWindow, ::java::awt::Component* vetoedComponent, bool clearOnFailure);
	bool restoreFocus(::java::awt::Component* toFocus, bool clearOnFailure);
	static bool sendMessage(::java::awt::Component* target, ::java::awt::AWTEvent* e);
	bool typeAheadAssertions(::java::awt::Component* target, ::java::awt::AWTEvent* e);
	using ::java::awt::KeyboardFocusManager::upFocusCycle;
	virtual void upFocusCycle(::java::awt::Component* aComponent) override;
	static ::sun::util::logging::PlatformLogger* focusLog;
	static ::java::lang::ref::WeakReference* NULL_WINDOW_WR;
	static ::java::lang::ref::WeakReference* NULL_COMPONENT_WR;
	::java::lang::ref::WeakReference* realOppositeWindowWR = nullptr;
	::java::lang::ref::WeakReference* realOppositeComponentWR = nullptr;
	int32_t inSendMessage = 0;
	::java::util::LinkedList* enqueuedKeyEvents = nullptr;
	::java::util::LinkedList* typeAheadMarkers = nullptr;
	bool consumeNextKeyTyped$ = false;
	::java::awt::Component* restoreFocusTo = nullptr;
	static bool fxAppThreadIsDispatchThread;
};

	} // awt
} // java

#pragma pop_macro("NULL_COMPONENT_WR")
#pragma pop_macro("NULL_WINDOW_WR")

#endif // _java_awt_DefaultKeyboardFocusManager_h_