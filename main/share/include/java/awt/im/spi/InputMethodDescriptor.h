#ifndef _java_awt_im_spi_InputMethodDescriptor_h_
#define _java_awt_im_spi_InputMethodDescriptor_h_
//$ interface java.awt.im.spi.InputMethodDescriptor
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Image;
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
	namespace util {
		class Locale;
	}
}

namespace java {
	namespace awt {
		namespace im {
			namespace spi {

class $import InputMethodDescriptor : public ::java::lang::Object {
	$interface(InputMethodDescriptor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::awt::im::spi::InputMethod* createInputMethod() {return nullptr;}
	virtual $Array<::java::util::Locale>* getAvailableLocales() {return nullptr;}
	virtual $String* getInputMethodDisplayName(::java::util::Locale* inputLocale, ::java::util::Locale* displayLanguage) {return nullptr;}
	virtual ::java::awt::Image* getInputMethodIcon(::java::util::Locale* inputLocale) {return nullptr;}
	virtual bool hasDynamicLocaleList() {return false;}
};

			} // spi
		} // im
	} // awt
} // java

#endif // _java_awt_im_spi_InputMethodDescriptor_h_