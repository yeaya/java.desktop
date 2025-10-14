#ifndef _java_awt_im_spi_InputMethod_h_
#define _java_awt_im_spi_InputMethod_h_
//$ interface java.awt.im.spi.InputMethod
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class AWTEvent;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace im {
			namespace spi {
				class InputMethodContext;
			}
		}
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
			namespace spi {

class $export InputMethod : public ::java::lang::Object {
	$interface(InputMethod, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void activate() {}
	virtual void deactivate(bool isTemporary) {}
	virtual void dispatchEvent(::java::awt::AWTEvent* event) {}
	virtual void dispose() {}
	virtual void endComposition() {}
	virtual $Object* getControlObject() {return nullptr;}
	virtual ::java::util::Locale* getLocale() {return nullptr;}
	virtual void hideWindows() {}
	virtual bool isCompositionEnabled() {return false;}
	virtual void notifyClientWindowChange(::java::awt::Rectangle* bounds) {}
	virtual void reconvert() {}
	virtual void removeNotify() {}
	virtual void setCharacterSubsets($Array<::java::lang::Character$Subset>* subsets) {}
	virtual void setCompositionEnabled(bool enable) {}
	virtual void setInputMethodContext(::java::awt::im::spi::InputMethodContext* context) {}
	virtual bool setLocale(::java::util::Locale* locale) {return false;}
};

			} // spi
		} // im
	} // awt
} // java

#endif // _java_awt_im_spi_InputMethod_h_