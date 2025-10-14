#include <java/awt/desktop/SystemSleepListener.h>

#include <java/awt/desktop/SystemSleepEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $SystemEventListener = ::java::awt::desktop::SystemEventListener;
using $SystemSleepEvent = ::java::awt::desktop::SystemSleepEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace desktop {

$MethodInfo _SystemSleepListener_MethodInfo_[] = {
	{"systemAboutToSleep", "(Ljava/awt/desktop/SystemSleepEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"systemAwoke", "(Ljava/awt/desktop/SystemSleepEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SystemSleepListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.desktop.SystemSleepListener",
	nullptr,
	"java.awt.desktop.SystemEventListener",
	nullptr,
	_SystemSleepListener_MethodInfo_
};

$Object* allocate$SystemSleepListener($Class* clazz) {
	return $of($alloc(SystemSleepListener));
}

$Class* SystemSleepListener::load$($String* name, bool initialize) {
	$loadClass(SystemSleepListener, name, initialize, &_SystemSleepListener_ClassInfo_, allocate$SystemSleepListener);
	return class$;
}

$Class* SystemSleepListener::class$ = nullptr;

		} // desktop
	} // awt
} // java