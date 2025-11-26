#include <java/awt/desktop/AppForegroundListener.h>

#include <java/awt/desktop/AppForegroundEvent.h>
#include <jcpp.h>

using $AppForegroundEvent = ::java::awt::desktop::AppForegroundEvent;
using $SystemEventListener = ::java::awt::desktop::SystemEventListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace desktop {

$MethodInfo _AppForegroundListener_MethodInfo_[] = {
	{"appMovedToBackground", "(Ljava/awt/desktop/AppForegroundEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"appRaisedToForeground", "(Ljava/awt/desktop/AppForegroundEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AppForegroundListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.desktop.AppForegroundListener",
	nullptr,
	"java.awt.desktop.SystemEventListener",
	nullptr,
	_AppForegroundListener_MethodInfo_
};

$Object* allocate$AppForegroundListener($Class* clazz) {
	return $of($alloc(AppForegroundListener));
}

$Class* AppForegroundListener::load$($String* name, bool initialize) {
	$loadClass(AppForegroundListener, name, initialize, &_AppForegroundListener_ClassInfo_, allocate$AppForegroundListener);
	return class$;
}

$Class* AppForegroundListener::class$ = nullptr;

		} // desktop
	} // awt
} // java