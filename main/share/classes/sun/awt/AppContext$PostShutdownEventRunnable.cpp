#include <sun/awt/AppContext$PostShutdownEventRunnable.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/EventQueue.h>
#include <sun/awt/AWTAutoShutdown.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

#undef EVENT_QUEUE_KEY

using $EventQueue = ::java::awt::EventQueue;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAutoShutdown = ::sun::awt::AWTAutoShutdown;
using $AppContext = ::sun::awt::AppContext;

namespace sun {
	namespace awt {

$FieldInfo _AppContext$PostShutdownEventRunnable_FieldInfo_[] = {
	{"appContext", "Lsun/awt/AppContext;", nullptr, $PRIVATE | $FINAL, $field(AppContext$PostShutdownEventRunnable, appContext)},
	{}
};

$MethodInfo _AppContext$PostShutdownEventRunnable_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/AppContext;)V", nullptr, 0, $method(static_cast<void(AppContext$PostShutdownEventRunnable::*)($AppContext*)>(&AppContext$PostShutdownEventRunnable::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AppContext$PostShutdownEventRunnable_InnerClassesInfo_[] = {
	{"sun.awt.AppContext$PostShutdownEventRunnable", "sun.awt.AppContext", "PostShutdownEventRunnable", $STATIC | $FINAL},
	{}
};

$ClassInfo _AppContext$PostShutdownEventRunnable_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.AppContext$PostShutdownEventRunnable",
	"java.lang.Object",
	"java.lang.Runnable",
	_AppContext$PostShutdownEventRunnable_FieldInfo_,
	_AppContext$PostShutdownEventRunnable_MethodInfo_,
	nullptr,
	nullptr,
	_AppContext$PostShutdownEventRunnable_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.AppContext"
};

$Object* allocate$AppContext$PostShutdownEventRunnable($Class* clazz) {
	return $of($alloc(AppContext$PostShutdownEventRunnable));
}

void AppContext$PostShutdownEventRunnable::init$($AppContext* ac) {
	$set(this, appContext, ac);
}

void AppContext$PostShutdownEventRunnable::run() {
	$useLocalCurrentObjectStackCache();
	$init($AppContext);
	$var($EventQueue, eq, $cast($EventQueue, $nc(this->appContext)->get($AppContext::EVENT_QUEUE_KEY)));
	if (eq != nullptr) {
		eq->postEvent($($AWTAutoShutdown::getShutdownEvent()));
	}
}

AppContext$PostShutdownEventRunnable::AppContext$PostShutdownEventRunnable() {
}

$Class* AppContext$PostShutdownEventRunnable::load$($String* name, bool initialize) {
	$loadClass(AppContext$PostShutdownEventRunnable, name, initialize, &_AppContext$PostShutdownEventRunnable_ClassInfo_, allocate$AppContext$PostShutdownEventRunnable);
	return class$;
}

$Class* AppContext$PostShutdownEventRunnable::class$ = nullptr;

	} // awt
} // sun