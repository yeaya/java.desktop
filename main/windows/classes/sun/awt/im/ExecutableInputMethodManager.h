#ifndef _sun_awt_im_ExecutableInputMethodManager_h_
#define _sun_awt_im_ExecutableInputMethodManager_h_
//$ class sun.awt.im.ExecutableInputMethodManager
//$ extends sun.awt.im.InputMethodManager
//$ implements java.lang.Runnable

#include <java/lang/Runnable.h>
#include <sun/awt/im/InputMethodManager.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace java {
	namespace util {
		class Hashtable;
		class Locale;
		class Vector;
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
			class InputContext;
			class InputMethodLocator;
			class InputMethodPopupMenu;
		}
	}
}

namespace sun {
	namespace awt {
		namespace im {

class ExecutableInputMethodManager : public ::sun::awt::im::InputMethodManager, public ::java::lang::Runnable {
	$class(ExecutableInputMethodManager, 0, ::sun::awt::im::InputMethodManager, ::java::lang::Runnable)
public:
	ExecutableInputMethodManager();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void changeInputMethod($String* choice);
	$String* createLocalePath(::java::util::Locale* locale);
	virtual ::sun::awt::im::InputMethodLocator* findInputMethod(::java::util::Locale* locale) override;
	$String* findPreferredInputMethodNode(::java::util::Locale* locale);
	::java::util::Locale* getAdvertisedLocale(::sun::awt::im::InputMethodLocator* locator, ::java::util::Locale* locale);
	$String* getCurrentSelection();
	virtual ::java::util::Locale* getDefaultKeyboardLocale() override;
	::sun::awt::im::InputMethodLocator* getPreferredInputMethod(::java::util::Locale* locale);
	virtual $String* getTriggerMenuString() override;
	::java::util::prefs::Preferences* getUserRoot();
	virtual bool hasMultipleInputMethods() override;
	virtual void initialize();
	void initializeInputMethodLocatorList();
	virtual void notifyChangeRequest(::java::awt::Component* comp) override;
	virtual void notifyChangeRequestByHotKey(::java::awt::Component* comp) override;
	void putPreferredInputMethod(::sun::awt::im::InputMethodLocator* locator);
	$String* readPreferredInputMethod($String* nodePath);
	virtual void run() override;
	virtual void setInputContext(::sun::awt::im::InputContext* inputContext) override;
	void showInputMethodMenu();
	void showInputMethodMenuOnRequesterEDT(::java::awt::Component* requester);
	virtual $String* toString() override;
	void waitForChangeRequest();
	void writePreferredInputMethod($String* path, $String* descriptorName);
	::sun::awt::im::InputContext* currentInputContext = nullptr;
	$String* triggerMenuString = nullptr;
	::sun::awt::im::InputMethodPopupMenu* selectionMenu = nullptr;
	static $String* selectInputMethodMenuTitle;
	::sun::awt::im::InputMethodLocator* hostAdapterLocator = nullptr;
	int32_t javaInputMethodCount = 0;
	::java::util::Vector* javaInputMethodLocatorList = nullptr;
	::java::awt::Component* requestComponent = nullptr;
	::sun::awt::im::InputContext* requestInputContext = nullptr;
	static $String* preferredIMNode;
	static $String* descriptorKey;
	::java::util::Hashtable* preferredLocatorCache = nullptr;
	::java::util::prefs::Preferences* userRoot = nullptr;
};

		} // im
	} // awt
} // sun

#endif // _sun_awt_im_ExecutableInputMethodManager_h_