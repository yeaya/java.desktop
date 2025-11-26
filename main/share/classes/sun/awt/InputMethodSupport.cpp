#include <sun/awt/InputMethodSupport.h>

#include <java/awt/Window.h>
#include <java/awt/im/spi/InputMethodDescriptor.h>
#include <java/util/Locale.h>
#include <sun/awt/im/InputContext.h>
#include <jcpp.h>

using $Window = ::java::awt::Window;
using $InputMethodDescriptor = ::java::awt::im::spi::InputMethodDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $InputContext = ::sun::awt::im::InputContext;

namespace sun {
	namespace awt {

$MethodInfo _InputMethodSupport_MethodInfo_[] = {
	{"createInputMethodWindow", "(Ljava/lang/String;Lsun/awt/im/InputContext;)Ljava/awt/Window;", nullptr, $PUBLIC | $ABSTRACT},
	{"enableInputMethodsForTextComponent", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getDefaultKeyboardLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC | $ABSTRACT},
	{"getInputMethodAdapterDescriptor", "()Ljava/awt/im/spi/InputMethodDescriptor;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.awt.AWTException"},
	{}
};

$ClassInfo _InputMethodSupport_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.InputMethodSupport",
	nullptr,
	nullptr,
	nullptr,
	_InputMethodSupport_MethodInfo_
};

$Object* allocate$InputMethodSupport($Class* clazz) {
	return $of($alloc(InputMethodSupport));
}

$Class* InputMethodSupport::load$($String* name, bool initialize) {
	$loadClass(InputMethodSupport, name, initialize, &_InputMethodSupport_ClassInfo_, allocate$InputMethodSupport);
	return class$;
}

$Class* InputMethodSupport::class$ = nullptr;

	} // awt
} // sun