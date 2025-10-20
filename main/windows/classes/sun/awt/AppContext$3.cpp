#include <sun/awt/AppContext$3.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/ThreadLocal.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Map.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $ThreadLocal = ::java::lang::ThreadLocal;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Map = ::java::util::Map;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;
using $AppContext = ::sun::awt::AppContext;
using $SunToolkit = ::sun::awt::SunToolkit;

namespace sun {
	namespace awt {

$MethodInfo _AppContext$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AppContext$3::*)()>(&AppContext$3::init$))},
	{"run", "()Lsun/awt/AppContext;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AppContext$3_EnclosingMethodInfo_ = {
	"sun.awt.AppContext",
	"getAppContext",
	"()Lsun/awt/AppContext;"
};

$InnerClassInfo _AppContext$3_InnerClassesInfo_[] = {
	{"sun.awt.AppContext$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AppContext$3_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.AppContext$3",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_AppContext$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Lsun/awt/AppContext;>;",
	&_AppContext$3_EnclosingMethodInfo_,
	_AppContext$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.AppContext"
};

$Object* allocate$AppContext$3($Class* clazz) {
	return $of($alloc(AppContext$3));
}

void AppContext$3::init$() {
}

$Object* AppContext$3::run() {
	$useLocalCurrentObjectStackCache();
	$var($ThreadGroup, currentThreadGroup, $($Thread::currentThread())->getThreadGroup());
	$var($ThreadGroup, threadGroup, currentThreadGroup);
	$init($AppContext);
	$synchronized($AppContext::getAppContextLock) {
		if ($nc($AppContext::numAppContexts)->get() == 0) {
			bool var$0 = $System::getProperty("javaplugin.version"_s) == nullptr;
			if (var$0 && $System::getProperty("javawebstart.version"_s) == nullptr) {
				$AppContext::initMainAppContext();
			} else {
				bool var$2 = $System::getProperty("javafx.version"_s) != nullptr;
				if (var$2 && $nc(threadGroup)->getParent() != nullptr) {
					$SunToolkit::createNewAppContext();
				}
			}
		}
	}
	$var($AppContext, context, $cast($AppContext, $nc($AppContext::threadGroup2appContext)->get(threadGroup)));
	while (context == nullptr) {
		$assign(threadGroup, $nc(threadGroup)->getParent());
		if (threadGroup == nullptr) {
			$var($SecurityManager, securityManager, $System::getSecurityManager());
			if (securityManager != nullptr) {
				$var($ThreadGroup, smThreadGroup, securityManager->getThreadGroup());
				if (smThreadGroup != nullptr) {
					return $of($cast($AppContext, $nc($AppContext::threadGroup2appContext)->get(smThreadGroup)));
				}
			}
			return $of(nullptr);
		}
		$assign(context, $cast($AppContext, $nc($AppContext::threadGroup2appContext)->get(threadGroup)));
	}
	{
		$var($ThreadGroup, tg, currentThreadGroup);
		for (; tg != threadGroup; $assign(tg, $nc(tg)->getParent())) {
			$nc($AppContext::threadGroup2appContext)->put(tg, context);
		}
	}
	$nc($AppContext::threadAppContext)->set(context);
	return $of(context);
}

AppContext$3::AppContext$3() {
}

$Class* AppContext$3::load$($String* name, bool initialize) {
	$loadClass(AppContext$3, name, initialize, &_AppContext$3_ClassInfo_, allocate$AppContext$3);
	return class$;
}

$Class* AppContext$3::class$ = nullptr;

	} // awt
} // sun