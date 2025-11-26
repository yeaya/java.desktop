#ifndef _sun_awt_X11InputMethodDescriptor_h_
#define _sun_awt_X11InputMethodDescriptor_h_
//$ class sun.awt.X11InputMethodDescriptor
//$ extends java.awt.im.spi.InputMethodDescriptor

#include <java/awt/im/spi/InputMethodDescriptor.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Image;
	}
}
namespace java {
	namespace util {
		class Locale;
	}
}

namespace sun {
	namespace awt {

class $export X11InputMethodDescriptor : public ::java::awt::im::spi::InputMethodDescriptor {
	$class(X11InputMethodDescriptor, $NO_CLASS_INIT, ::java::awt::im::spi::InputMethodDescriptor)
public:
	X11InputMethodDescriptor();
	virtual ::java::awt::im::spi::InputMethod* createInputMethod() override {return nullptr;}
	void init$();
	virtual $Array<::java::util::Locale>* getAvailableLocales() override;
	virtual $String* getInputMethodDisplayName(::java::util::Locale* inputLocale, ::java::util::Locale* displayLanguage) override;
	virtual ::java::awt::Image* getInputMethodIcon(::java::util::Locale* inputLocale) override;
	static ::java::util::Locale* getSupportedLocale();
	virtual bool hasDynamicLocaleList() override;
	static ::java::util::Locale* locale;
};

	} // awt
} // sun

#endif // _sun_awt_X11InputMethodDescriptor_h_