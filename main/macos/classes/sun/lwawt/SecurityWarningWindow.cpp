#include <sun/lwawt/SecurityWarningWindow.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace lwawt {

$MethodInfo _SecurityWarningWindow_MethodInfo_[] = {
	{"reposition", "(IIII)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setVisible", "(ZZ)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SecurityWarningWindow_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.lwawt.SecurityWarningWindow",
	nullptr,
	"sun.lwawt.PlatformWindow",
	nullptr,
	_SecurityWarningWindow_MethodInfo_
};

$Object* allocate$SecurityWarningWindow($Class* clazz) {
	return $of($alloc(SecurityWarningWindow));
}

$Class* SecurityWarningWindow::load$($String* name, bool initialize) {
	$loadClass(SecurityWarningWindow, name, initialize, &_SecurityWarningWindow_ClassInfo_, allocate$SecurityWarningWindow);
	return class$;
}

$Class* SecurityWarningWindow::class$ = nullptr;

	} // lwawt
} // sun