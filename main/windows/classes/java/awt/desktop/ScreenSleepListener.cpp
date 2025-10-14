#include <java/awt/desktop/ScreenSleepListener.h>

#include <java/awt/desktop/ScreenSleepEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ScreenSleepEvent = ::java::awt::desktop::ScreenSleepEvent;
using $SystemEventListener = ::java::awt::desktop::SystemEventListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace desktop {

$MethodInfo _ScreenSleepListener_MethodInfo_[] = {
	{"screenAboutToSleep", "(Ljava/awt/desktop/ScreenSleepEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"screenAwoke", "(Ljava/awt/desktop/ScreenSleepEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ScreenSleepListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.desktop.ScreenSleepListener",
	nullptr,
	"java.awt.desktop.SystemEventListener",
	nullptr,
	_ScreenSleepListener_MethodInfo_
};

$Object* allocate$ScreenSleepListener($Class* clazz) {
	return $of($alloc(ScreenSleepListener));
}

$Class* ScreenSleepListener::load$($String* name, bool initialize) {
	$loadClass(ScreenSleepListener, name, initialize, &_ScreenSleepListener_ClassInfo_, allocate$ScreenSleepListener);
	return class$;
}

$Class* ScreenSleepListener::class$ = nullptr;

		} // desktop
	} // awt
} // java