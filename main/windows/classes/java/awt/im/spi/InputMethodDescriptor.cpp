#include <java/awt/im/spi/InputMethodDescriptor.h>

#include <java/awt/Image.h>
#include <java/awt/im/spi/InputMethod.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <jcpp.h>

using $LocaleArray = $Array<::java::util::Locale>;
using $Image = ::java::awt::Image;
using $InputMethod = ::java::awt::im::spi::InputMethod;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;

namespace java {
	namespace awt {
		namespace im {
			namespace spi {

$MethodInfo _InputMethodDescriptor_MethodInfo_[] = {
	{"createInputMethod", "()Ljava/awt/im/spi/InputMethod;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Exception"},
	{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.awt.AWTException"},
	{"getInputMethodDisplayName", "(Ljava/util/Locale;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getInputMethodIcon", "(Ljava/util/Locale;)Ljava/awt/Image;", nullptr, $PUBLIC | $ABSTRACT},
	{"hasDynamicLocaleList", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _InputMethodDescriptor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.im.spi.InputMethodDescriptor",
	nullptr,
	nullptr,
	nullptr,
	_InputMethodDescriptor_MethodInfo_
};

$Object* allocate$InputMethodDescriptor($Class* clazz) {
	return $of($alloc(InputMethodDescriptor));
}

$Class* InputMethodDescriptor::load$($String* name, bool initialize) {
	$loadClass(InputMethodDescriptor, name, initialize, &_InputMethodDescriptor_ClassInfo_, allocate$InputMethodDescriptor);
	return class$;
}

$Class* InputMethodDescriptor::class$ = nullptr;

			} // spi
		} // im
	} // awt
} // java