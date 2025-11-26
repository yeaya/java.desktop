#ifndef _sun_awt_im_InputMethodAdapter_h_
#define _sun_awt_im_InputMethodAdapter_h_
//$ class sun.awt.im.InputMethodAdapter
//$ extends java.awt.im.spi.InputMethod

#include <java/awt/im/spi/InputMethod.h>

namespace java {
	namespace awt {
		class Component;
		class Rectangle;
	}
}

namespace sun {
	namespace awt {
		namespace im {

class $import InputMethodAdapter : public ::java::awt::im::spi::InputMethod {
	$class(InputMethodAdapter, $NO_CLASS_INIT, ::java::awt::im::spi::InputMethod)
public:
	InputMethodAdapter();
	void init$();
	virtual void disableInputMethod() {}
	virtual ::java::awt::Component* getClientComponent();
	virtual $String* getNativeInputMethodInfo() {return nullptr;}
	virtual bool haveActiveClient();
	virtual void notifyClientWindowChange(::java::awt::Rectangle* location) override;
	virtual void reconvert() override;
	virtual void setAWTFocussedComponent(::java::awt::Component* component);
	virtual void setClientComponent(::java::awt::Component* client);
	virtual void stopListening();
	virtual bool supportsBelowTheSpot();
	::java::awt::Component* clientComponent = nullptr;
};

		} // im
	} // awt
} // sun

#endif // _sun_awt_im_InputMethodAdapter_h_