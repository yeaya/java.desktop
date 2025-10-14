#ifndef _sun_awt_InputMethodSupport_h_
#define _sun_awt_InputMethodSupport_h_
//$ interface sun.awt.InputMethodSupport
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Window;
	}
}
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
	namespace util {
		class Locale;
	}
}
namespace sun {
	namespace awt {
		namespace im {
			class InputContext;
		}
	}
}

namespace sun {
	namespace awt {

class $export InputMethodSupport : public ::java::lang::Object {
	$interface(InputMethodSupport, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::awt::Window* createInputMethodWindow($String* title, ::sun::awt::im::InputContext* context) {return nullptr;}
	virtual bool enableInputMethodsForTextComponent() {return false;}
	virtual ::java::util::Locale* getDefaultKeyboardLocale() {return nullptr;}
	virtual ::java::awt::im::spi::InputMethodDescriptor* getInputMethodAdapterDescriptor() {return nullptr;}
};

	} // awt
} // sun

#endif // _sun_awt_InputMethodSupport_h_