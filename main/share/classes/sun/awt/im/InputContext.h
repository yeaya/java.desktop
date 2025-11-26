#ifndef _sun_awt_im_InputContext_h_
#define _sun_awt_im_InputContext_h_
//$ class sun.awt.im.InputContext
//$ extends java.awt.im.InputContext
//$ implements java.awt.event.ComponentListener,java.awt.event.WindowListener

#include <java/awt/event/ComponentListener.h>
#include <java/awt/event/WindowListener.h>
#include <java/awt/im/InputContext.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class AWTEvent;
		class AWTKeyStroke;
		class Component;
		class Rectangle;
		class Window;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ComponentEvent;
			class KeyEvent;
			class WindowEvent;
		}
	}
}
namespace java {
	namespace awt {
		namespace im {
			namespace spi {
				class InputMethod;
			}
		}
	}
}
namespace java {
	namespace lang {
		class Character$Subset;
		class Throwable;
	}
}
namespace java {
	namespace util {
		class HashMap;
		class Locale;
	}
}
namespace java {
	namespace util {
		namespace prefs {
			class Preferences;
		}
	}
}
namespace sun {
	namespace awt {
		namespace im {
			class InputMethodLocator;
		}
	}
}
namespace sun {
	namespace util {
		namespace logging {
			class PlatformLogger;
		}
	}
}

namespace sun {
	namespace awt {
		namespace im {

class InputContext : public ::java::awt::im::InputContext, public ::java::awt::event::ComponentListener, public ::java::awt::event::WindowListener {
	$class(InputContext, 0, ::java::awt::im::InputContext, ::java::awt::event::ComponentListener, ::java::awt::event::WindowListener)
public:
	InputContext();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void activateInputMethod(bool updateCompositionArea);
	void addClientWindowListeners();
	bool addedClientWindowListeners();
	virtual void changeInputMethod(::sun::awt::im::InputMethodLocator* newLocator);
	bool checkInputMethodSelectionKey(::java::awt::event::KeyEvent* event);
	virtual void componentHidden(::java::awt::event::ComponentEvent* e) override;
	virtual void componentMoved(::java::awt::event::ComponentEvent* e) override;
	virtual void componentResized(::java::awt::event::ComponentEvent* e) override;
	virtual void componentShown(::java::awt::event::ComponentEvent* e) override;
	void deactivateInputMethod(bool isTemporary);
	virtual void disableNativeIM();
	virtual void dispatchEvent(::java::awt::AWTEvent* event) override;
	virtual void dispose() override;
	virtual void enableClientWindowNotification(::java::awt::im::spi::InputMethod* requester, bool enable);
	virtual void endComposition() override;
	void focusGained(::java::awt::Component* source);
	void focusLost(::java::awt::Component* source, bool isTemporary);
	virtual ::java::awt::Component* getClientComponent();
	static ::java::awt::Window* getComponentWindow(::java::awt::Component* component);
	::java::awt::im::spi::InputMethod* getInputMethod();
	virtual $Object* getInputMethodControlObject() override;
	virtual $String* getInputMethodInfo();
	::java::awt::im::spi::InputMethod* getInputMethodInstance();
	virtual ::sun::awt::im::InputMethodLocator* getInputMethodLocator();
	::java::awt::AWTKeyStroke* getInputMethodSelectionKeyStroke(::java::util::prefs::Preferences* root);
	virtual ::java::util::Locale* getLocale() override;
	void initializeInputMethodSelectionKey();
	virtual bool isCompositionEnabled() override;
	void logCreationFailed($Throwable* throwable);
	void notifyClientWindowChange(::java::awt::Window* window);
	virtual void reconvert() override;
	void removeClientWindowListeners();
	virtual void removeNotify(::java::awt::Component* component) override;
	virtual bool selectInputMethod(::java::util::Locale* locale) override;
	virtual void setCharacterSubsets($Array<::java::lang::Character$Subset>* subsets) override;
	virtual void setCompositionEnabled(bool enable) override;
	virtual $String* toString() override;
	virtual void windowActivated(::java::awt::event::WindowEvent* e) override;
	virtual void windowClosed(::java::awt::event::WindowEvent* e) override;
	virtual void windowClosing(::java::awt::event::WindowEvent* e) override;
	virtual void windowDeactivated(::java::awt::event::WindowEvent* e) override;
	virtual void windowDeiconified(::java::awt::event::WindowEvent* e) override;
	virtual void windowIconified(::java::awt::event::WindowEvent* e) override;
	virtual void windowOpened(::java::awt::event::WindowEvent* e) override;
	static ::sun::util::logging::PlatformLogger* log;
	::sun::awt::im::InputMethodLocator* inputMethodLocator = nullptr;
	::java::awt::im::spi::InputMethod* inputMethod = nullptr;
	bool inputMethodCreationFailed = false;
	::java::util::HashMap* usedInputMethods = nullptr;
	::java::awt::Component* currentClientComponent = nullptr;
	::java::awt::Component* awtFocussedComponent = nullptr;
	bool isInputMethodActive = false;
	$Array<::java::lang::Character$Subset>* characterSubsets = nullptr;
	bool compositionAreaHidden = false;
	static ::sun::awt::im::InputContext* inputMethodWindowContext;
	static ::java::awt::im::spi::InputMethod* previousInputMethod;
	bool clientWindowNotificationEnabled = false;
	::java::awt::Window* clientWindowListened = nullptr;
	::java::awt::Rectangle* clientWindowLocation = nullptr;
	::java::util::HashMap* perInputMethodState = nullptr;
	static ::java::awt::AWTKeyStroke* inputMethodSelectionKey;
	static bool inputMethodSelectionKeyInitialized;
	static $String* inputMethodSelectionKeyPath;
	static $String* inputMethodSelectionKeyCodeName;
	static $String* inputMethodSelectionKeyModifiersName;
};

		} // im
	} // awt
} // sun

#endif // _sun_awt_im_InputContext_h_