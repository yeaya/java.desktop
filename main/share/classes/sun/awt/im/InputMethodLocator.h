#ifndef _sun_awt_im_InputMethodLocator_h_
#define _sun_awt_im_InputMethodLocator_h_
//$ class sun.awt.im.InputMethodLocator
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		namespace im {
			namespace spi {
				class InputMethodDescriptor;
			}
		}
	}
}
namespace java {
	namespace lang {
		class ClassLoader;
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

class InputMethodLocator : public ::java::lang::Object {
	$class(InputMethodLocator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	InputMethodLocator();
	void init$(::java::awt::im::spi::InputMethodDescriptor* descriptor, ::java::lang::ClassLoader* loader, ::java::util::Locale* locale);
	::sun::awt::im::InputMethodLocator* deriveLocator(::java::util::Locale* forLocale);
	virtual bool equals(Object$* other) override;
	$String* getActionCommandString();
	::java::lang::ClassLoader* getClassLoader();
	::java::awt::im::spi::InputMethodDescriptor* getDescriptor();
	::java::util::Locale* getLocale();
	virtual int32_t hashCode() override;
	bool isLocaleAvailable(::java::util::Locale* locale);
	bool sameInputMethod(::sun::awt::im::InputMethodLocator* other);
	::java::awt::im::spi::InputMethodDescriptor* descriptor = nullptr;
	::java::lang::ClassLoader* loader = nullptr;
	::java::util::Locale* locale = nullptr;
};

		} // im
	} // awt
} // sun

#endif // _sun_awt_im_InputMethodLocator_h_