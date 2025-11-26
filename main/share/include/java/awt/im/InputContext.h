#ifndef _java_awt_im_InputContext_h_
#define _java_awt_im_InputContext_h_
//$ class java.awt.im.InputContext
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class AWTEvent;
		class Component;
	}
}
namespace java {
	namespace lang {
		class Character$Subset;
	}
}
namespace java {
	namespace util {
		class Locale;
	}
}

namespace java {
	namespace awt {
		namespace im {

class $import InputContext : public ::java::lang::Object {
	$class(InputContext, $NO_CLASS_INIT, ::java::lang::Object)
public:
	InputContext();
	void init$();
	virtual void dispatchEvent(::java::awt::AWTEvent* event);
	virtual void dispose();
	virtual void endComposition();
	virtual $Object* getInputMethodControlObject();
	static ::java::awt::im::InputContext* getInstance();
	virtual ::java::util::Locale* getLocale();
	virtual bool isCompositionEnabled();
	virtual void reconvert();
	virtual void removeNotify(::java::awt::Component* client);
	virtual bool selectInputMethod(::java::util::Locale* locale);
	virtual void setCharacterSubsets($Array<::java::lang::Character$Subset>* subsets);
	virtual void setCompositionEnabled(bool enable);
};

		} // im
	} // awt
} // java

#endif // _java_awt_im_InputContext_h_