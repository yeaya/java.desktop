#include <java/awt/desktop/AppReopenedListener.h>

#include <java/awt/desktop/AppReopenedEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace desktop {

$MethodInfo _AppReopenedListener_MethodInfo_[] = {
	{"appReopened", "(Ljava/awt/desktop/AppReopenedEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AppReopenedListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.desktop.AppReopenedListener",
	nullptr,
	"java.awt.desktop.SystemEventListener",
	nullptr,
	_AppReopenedListener_MethodInfo_
};

$Object* allocate$AppReopenedListener($Class* clazz) {
	return $of($alloc(AppReopenedListener));
}

$Class* AppReopenedListener::load$($String* name, bool initialize) {
	$loadClass(AppReopenedListener, name, initialize, &_AppReopenedListener_ClassInfo_, allocate$AppReopenedListener);
	return class$;
}

$Class* AppReopenedListener::class$ = nullptr;

		} // desktop
	} // awt
} // java