#ifndef _sun_awt_windows_WInputMethodDescriptor_h_
#define _sun_awt_windows_WInputMethodDescriptor_h_
//$ class sun.awt.windows.WInputMethodDescriptor
//$ extends java.awt.im.spi.InputMethodDescriptor

#include <java/awt/im/spi/InputMethodDescriptor.h>
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

namespace sun {
	namespace awt {
		namespace windows {

class WInputMethodDescriptor : public ::java::awt::im::spi::InputMethodDescriptor {
	$class(WInputMethodDescriptor, $NO_CLASS_INIT, ::java::awt::im::spi::InputMethodDescriptor)
public:
	WInputMethodDescriptor();
	void init$();
	virtual ::java::awt::im::spi::InputMethod* createInputMethod() override;
	virtual $Array<::java::util::Locale>* getAvailableLocales() override;
	static $Array<::java::util::Locale>* getAvailableLocalesInternal();
	virtual $String* getInputMethodDisplayName(::java::util::Locale* inputLocale, ::java::util::Locale* displayLanguage) override;
	virtual ::java::awt::Image* getInputMethodIcon(::java::util::Locale* inputLocale) override;
	static $Array<::java::util::Locale>* getNativeAvailableLocales();
	virtual bool hasDynamicLocaleList() override;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WInputMethodDescriptor_h_