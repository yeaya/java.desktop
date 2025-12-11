#ifndef _sun_lwawt_macosx_CInputMethodDescriptor_h_
#define _sun_lwawt_macosx_CInputMethodDescriptor_h_
//$ class sun.lwawt.macosx.CInputMethodDescriptor
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
		class List;
		class Locale;
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CInputMethodDescriptor : public ::java::awt::im::spi::InputMethodDescriptor {
	$class(CInputMethodDescriptor, 0, ::java::awt::im::spi::InputMethodDescriptor)
public:
	CInputMethodDescriptor();
	void init$();
	virtual ::java::awt::im::spi::InputMethod* createInputMethod() override;
	virtual $Array<::java::util::Locale>* getAvailableLocales() override;
	static $ObjectArray* getAvailableLocalesInternal();
	virtual $String* getInputMethodDisplayName(::java::util::Locale* inputLocale, ::java::util::Locale* displayLanguage) override;
	virtual ::java::awt::Image* getInputMethodIcon(::java::util::Locale* inputLocale) override;
	virtual bool hasDynamicLocaleList() override;
	static ::java::util::List* nativeGetAvailableLocales();
	static void nativeInit();
	virtual $String* toString() override;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CInputMethodDescriptor_h_