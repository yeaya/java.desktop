#include <sun/awt/AppContext$CreateThreadAction.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

#undef NORM_PRIORITY

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AppContext = ::sun::awt::AppContext;

namespace sun {
	namespace awt {

$FieldInfo _AppContext$CreateThreadAction_FieldInfo_[] = {
	{"appContext", "Lsun/awt/AppContext;", nullptr, $PRIVATE | $FINAL, $field(AppContext$CreateThreadAction, appContext)},
	{"runnable", "Ljava/lang/Runnable;", nullptr, $PRIVATE | $FINAL, $field(AppContext$CreateThreadAction, runnable)},
	{}
};

$MethodInfo _AppContext$CreateThreadAction_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/AppContext;Ljava/lang/Runnable;)V", nullptr, 0, $method(static_cast<void(AppContext$CreateThreadAction::*)($AppContext*,$Runnable*)>(&AppContext$CreateThreadAction::init$))},
	{"run", "()Ljava/lang/Thread;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AppContext$CreateThreadAction_InnerClassesInfo_[] = {
	{"sun.awt.AppContext$CreateThreadAction", "sun.awt.AppContext", "CreateThreadAction", $STATIC | $FINAL},
	{}
};

$ClassInfo _AppContext$CreateThreadAction_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.AppContext$CreateThreadAction",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_AppContext$CreateThreadAction_FieldInfo_,
	_AppContext$CreateThreadAction_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Thread;>;",
	nullptr,
	_AppContext$CreateThreadAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.AppContext"
};

$Object* allocate$AppContext$CreateThreadAction($Class* clazz) {
	return $of($alloc(AppContext$CreateThreadAction));
}

void AppContext$CreateThreadAction::init$($AppContext* ac, $Runnable* r) {
	$set(this, appContext, ac);
	$set(this, runnable, r);
}

$Object* AppContext$CreateThreadAction::run() {
	$useLocalCurrentObjectStackCache();
	$var($Thread, t, $new($Thread, $($nc(this->appContext)->getThreadGroup()), this->runnable, "AppContext Disposer"_s, 0, false));
	t->setContextClassLoader($($nc(this->appContext)->getContextClassLoader()));
	t->setPriority($Thread::NORM_PRIORITY + 1);
	t->setDaemon(true);
	return $of(t);
}

AppContext$CreateThreadAction::AppContext$CreateThreadAction() {
}

$Class* AppContext$CreateThreadAction::load$($String* name, bool initialize) {
	$loadClass(AppContext$CreateThreadAction, name, initialize, &_AppContext$CreateThreadAction_ClassInfo_, allocate$AppContext$CreateThreadAction);
	return class$;
}

$Class* AppContext$CreateThreadAction::class$ = nullptr;

	} // awt
} // sun