#include <sun/awt/X11/XInputMethodDescriptor.h>

#include <java/awt/im/spi/InputMethod.h>
#include <sun/awt/X11/XInputMethod.h>
#include <sun/awt/X11InputMethod.h>
#include <sun/awt/X11InputMethodBase.h>
#include <sun/awt/X11InputMethodDescriptor.h>
#include <sun/awt/im/InputMethodAdapter.h>
#include <jcpp.h>

using $InputMethod = ::java::awt::im::spi::InputMethod;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XInputMethod = ::sun::awt::X11::XInputMethod;
using $X11InputMethod = ::sun::awt::X11InputMethod;
using $X11InputMethodBase = ::sun::awt::X11InputMethodBase;
using $X11InputMethodDescriptor = ::sun::awt::X11InputMethodDescriptor;
using $InputMethodAdapter = ::sun::awt::im::InputMethodAdapter;

namespace sun {
	namespace awt {
		namespace X11 {

$MethodInfo _XInputMethodDescriptor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(XInputMethodDescriptor::*)()>(&XInputMethodDescriptor::init$))},
	{"createInputMethod", "()Ljava/awt/im/spi/InputMethod;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$ClassInfo _XInputMethodDescriptor_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XInputMethodDescriptor",
	"sun.awt.X11InputMethodDescriptor",
	nullptr,
	nullptr,
	_XInputMethodDescriptor_MethodInfo_
};

$Object* allocate$XInputMethodDescriptor($Class* clazz) {
	return $of($alloc(XInputMethodDescriptor));
}

void XInputMethodDescriptor::init$() {
	$X11InputMethodDescriptor::init$();
}

$InputMethod* XInputMethodDescriptor::createInputMethod() {
	return $new($XInputMethod);
}

XInputMethodDescriptor::XInputMethodDescriptor() {
}

$Class* XInputMethodDescriptor::load$($String* name, bool initialize) {
	$loadClass(XInputMethodDescriptor, name, initialize, &_XInputMethodDescriptor_ClassInfo_, allocate$XInputMethodDescriptor);
	return class$;
}

$Class* XInputMethodDescriptor::class$ = nullptr;

		} // X11
	} // awt
} // sun