#ifndef _sun_awt_im_InputMethodManager_h_
#define _sun_awt_im_InputMethodManager_h_
//$ class sun.awt.im.InputMethodManager
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("LOCK")
#undef LOCK

namespace java {
	namespace awt {
		class Component;
	}
}
namespace java {
	namespace util {
		class Locale;
	}
}
namespace sun {
	namespace awt {
		namespace im {
			class InputContext;
			class InputMethodLocator;
		}
	}
}

namespace sun {
	namespace awt {
		namespace im {

class InputMethodManager : public ::java::lang::Object {
	$class(InputMethodManager, 0, ::java::lang::Object)
public:
	InputMethodManager();
	void init$();
	virtual ::sun::awt::im::InputMethodLocator* findInputMethod(::java::util::Locale* forLocale) {return nullptr;}
	virtual ::java::util::Locale* getDefaultKeyboardLocale() {return nullptr;}
	static ::sun::awt::im::InputMethodManager* getInstance();
	virtual $String* getTriggerMenuString() {return nullptr;}
	virtual bool hasMultipleInputMethods() {return false;}
	virtual void notifyChangeRequest(::java::awt::Component* comp) {}
	virtual void notifyChangeRequestByHotKey(::java::awt::Component* comp) {}
	virtual void setInputContext(::sun::awt::im::InputContext* inputContext) {}
	static $String* threadName;
	static $Object* LOCK;
	static ::sun::awt::im::InputMethodManager* inputMethodManager;
};

		} // im
	} // awt
} // sun

#pragma pop_macro("LOCK")

#endif // _sun_awt_im_InputMethodManager_h_