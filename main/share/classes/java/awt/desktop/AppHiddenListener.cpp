#include <java/awt/desktop/AppHiddenListener.h>

#include <java/awt/desktop/AppHiddenEvent.h>
#include <jcpp.h>

using $AppHiddenEvent = ::java::awt::desktop::AppHiddenEvent;
using $SystemEventListener = ::java::awt::desktop::SystemEventListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace desktop {

$MethodInfo _AppHiddenListener_MethodInfo_[] = {
	{"appHidden", "(Ljava/awt/desktop/AppHiddenEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"appUnhidden", "(Ljava/awt/desktop/AppHiddenEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AppHiddenListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.desktop.AppHiddenListener",
	nullptr,
	"java.awt.desktop.SystemEventListener",
	nullptr,
	_AppHiddenListener_MethodInfo_
};

$Object* allocate$AppHiddenListener($Class* clazz) {
	return $of($alloc(AppHiddenListener));
}

$Class* AppHiddenListener::load$($String* name, bool initialize) {
	$loadClass(AppHiddenListener, name, initialize, &_AppHiddenListener_ClassInfo_, allocate$AppHiddenListener);
	return class$;
}

$Class* AppHiddenListener::class$ = nullptr;

		} // desktop
	} // awt
} // java