#include <sun/awt/AppContext$2.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AppContext = ::sun::awt::AppContext;
using $SunToolkit = ::sun::awt::SunToolkit;

namespace sun {
	namespace awt {

$MethodInfo _AppContext$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AppContext$2::*)()>(&AppContext$2::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AppContext$2_EnclosingMethodInfo_ = {
	"sun.awt.AppContext",
	"initMainAppContext",
	"()V"
};

$InnerClassInfo _AppContext$2_InnerClassesInfo_[] = {
	{"sun.awt.AppContext$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AppContext$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.AppContext$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_AppContext$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_AppContext$2_EnclosingMethodInfo_,
	_AppContext$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.AppContext"
};

$Object* allocate$AppContext$2($Class* clazz) {
	return $of($alloc(AppContext$2));
}

void AppContext$2::init$() {
}

$Object* AppContext$2::run() {
	$useLocalCurrentObjectStackCache();
	$var($ThreadGroup, currentThreadGroup, $($Thread::currentThread())->getThreadGroup());
	$var($ThreadGroup, parentThreadGroup, $nc(currentThreadGroup)->getParent());
	while (parentThreadGroup != nullptr) {
		$assign(currentThreadGroup, parentThreadGroup);
		$assign(parentThreadGroup, currentThreadGroup->getParent());
	}
	$init($AppContext);
	$assignStatic($AppContext::mainAppContext, $SunToolkit::createNewAppContext(currentThreadGroup));
	return $of(nullptr);
}

AppContext$2::AppContext$2() {
}

$Class* AppContext$2::load$($String* name, bool initialize) {
	$loadClass(AppContext$2, name, initialize, &_AppContext$2_ClassInfo_, allocate$AppContext$2);
	return class$;
}

$Class* AppContext$2::class$ = nullptr;

	} // awt
} // sun