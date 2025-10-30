#include <java/awt/im/spi/InputMethod.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Rectangle.h>
#include <java/awt/im/spi/InputMethodContext.h>
#include <java/lang/Character$Subset.h>
#include <java/util/Locale.h>
#include <jcpp.h>

using $Character$SubsetArray = $Array<::java::lang::Character$Subset>;
using $AWTEvent = ::java::awt::AWTEvent;
using $Rectangle = ::java::awt::Rectangle;
using $InputMethodContext = ::java::awt::im::spi::InputMethodContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;

namespace java {
	namespace awt {
		namespace im {
			namespace spi {

$MethodInfo _InputMethod_MethodInfo_[] = {
	{"activate", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"deactivate", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"dispatchEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"dispose", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"endComposition", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"getControlObject", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"getLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC | $ABSTRACT},
	{"hideWindows", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"isCompositionEnabled", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"notifyClientWindowChange", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"reconvert", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"removeNotify", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"setCharacterSubsets", "([Ljava/lang/Character$Subset;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setCompositionEnabled", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setInputMethodContext", "(Ljava/awt/im/spi/InputMethodContext;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setLocale", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _InputMethod_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.im.spi.InputMethod",
	nullptr,
	nullptr,
	nullptr,
	_InputMethod_MethodInfo_
};

$Object* allocate$InputMethod($Class* clazz) {
	return $of($alloc(InputMethod));
}

$Class* InputMethod::load$($String* name, bool initialize) {
	$loadClass(InputMethod, name, initialize, &_InputMethod_ClassInfo_, allocate$InputMethod);
	return class$;
}

$Class* InputMethod::class$ = nullptr;

			} // spi
		} // im
	} // awt
} // java