#include <sun/awt/im/InputMethodWindow.h>

#include <sun/awt/im/InputContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace im {

$MethodInfo _InputMethodWindow_MethodInfo_[] = {
	{"setInputContext", "(Lsun/awt/im/InputContext;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _InputMethodWindow_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.im.InputMethodWindow",
	nullptr,
	nullptr,
	nullptr,
	_InputMethodWindow_MethodInfo_
};

$Object* allocate$InputMethodWindow($Class* clazz) {
	return $of($alloc(InputMethodWindow));
}

$Class* InputMethodWindow::load$($String* name, bool initialize) {
	$loadClass(InputMethodWindow, name, initialize, &_InputMethodWindow_ClassInfo_, allocate$InputMethodWindow);
	return class$;
}

$Class* InputMethodWindow::class$ = nullptr;

		} // im
	} // awt
} // sun