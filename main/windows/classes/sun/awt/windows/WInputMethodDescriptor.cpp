#include <sun/awt/windows/WInputMethodDescriptor.h>

#include <java/awt/Image.h>
#include <java/awt/Toolkit.h>
#include <java/awt/im/spi/InputMethod.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <sun/awt/im/InputMethodAdapter.h>
#include <sun/awt/windows/WInputMethod.h>
#include <jcpp.h>

using $LocaleArray = $Array<::java::util::Locale>;
using $Image = ::java::awt::Image;
using $Toolkit = ::java::awt::Toolkit;
using $InputMethod = ::java::awt::im::spi::InputMethod;
using $InputMethodDescriptor = ::java::awt::im::spi::InputMethodDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $InputMethodAdapter = ::sun::awt::im::InputMethodAdapter;
using $WInputMethod = ::sun::awt::windows::WInputMethod;

namespace sun {
	namespace awt {
		namespace windows {

$MethodInfo _WInputMethodDescriptor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(WInputMethodDescriptor::*)()>(&WInputMethodDescriptor::init$))},
	{"createInputMethod", "()Ljava/awt/im/spi/InputMethod;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC},
	{"getAvailableLocalesInternal", "()[Ljava/util/Locale;", nullptr, $STATIC, $method(static_cast<$LocaleArray*(*)()>(&WInputMethodDescriptor::getAvailableLocalesInternal))},
	{"getInputMethodDisplayName", "(Ljava/util/Locale;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getInputMethodIcon", "(Ljava/util/Locale;)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"getNativeAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$LocaleArray*(*)()>(&WInputMethodDescriptor::getNativeAvailableLocales))},
	{"hasDynamicLocaleList", "()Z", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_getNativeAvailableLocales 6

$ClassInfo _WInputMethodDescriptor_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.windows.WInputMethodDescriptor",
	"java.lang.Object",
	"java.awt.im.spi.InputMethodDescriptor",
	nullptr,
	_WInputMethodDescriptor_MethodInfo_
};

$Object* allocate$WInputMethodDescriptor($Class* clazz) {
	return $of($alloc(WInputMethodDescriptor));
}

void WInputMethodDescriptor::init$() {
}

$LocaleArray* WInputMethodDescriptor::getAvailableLocales() {
	$useLocalCurrentObjectStackCache();
	$var($LocaleArray, locales, getAvailableLocalesInternal());
	$var($LocaleArray, tmp, $new($LocaleArray, $nc(locales)->length));
	$System::arraycopy(locales, 0, tmp, 0, locales->length);
	return tmp;
}

$LocaleArray* WInputMethodDescriptor::getAvailableLocalesInternal() {
	$init(WInputMethodDescriptor);
	return getNativeAvailableLocales();
}

bool WInputMethodDescriptor::hasDynamicLocaleList() {
	return true;
}

$String* WInputMethodDescriptor::getInputMethodDisplayName($Locale* inputLocale, $Locale* displayLanguage) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($String, name, "System Input Methods"_s);
		if ($nc($($Locale::getDefault()))->equals(displayLanguage)) {
			$assign(name, $Toolkit::getProperty("AWT.HostInputMethodDisplayName"_s, name));
		}
		return name;
	}
}

$Image* WInputMethodDescriptor::getInputMethodIcon($Locale* inputLocale) {
	return nullptr;
}

$InputMethod* WInputMethodDescriptor::createInputMethod() {
	return $new($WInputMethod);
}

$LocaleArray* WInputMethodDescriptor::getNativeAvailableLocales() {
	$init(WInputMethodDescriptor);
	$var($LocaleArray, $ret, nullptr);
	$prepareNativeStatic(WInputMethodDescriptor, getNativeAvailableLocales, $LocaleArray*);
	$assign($ret, $invokeNativeStatic(WInputMethodDescriptor, getNativeAvailableLocales));
	$finishNativeStatic();
	return $ret;
}

WInputMethodDescriptor::WInputMethodDescriptor() {
}

$Class* WInputMethodDescriptor::load$($String* name, bool initialize) {
	$loadClass(WInputMethodDescriptor, name, initialize, &_WInputMethodDescriptor_ClassInfo_, allocate$WInputMethodDescriptor);
	return class$;
}

$Class* WInputMethodDescriptor::class$ = nullptr;

		} // windows
	} // awt
} // sun