#include <sun/awt/AppContext$6.h>

#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <sun/awt/AppContext$6$1.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;
using $JavaAWTAccess = ::jdk::internal::access::JavaAWTAccess;
using $AppContext = ::sun::awt::AppContext;
using $AppContext$6$1 = ::sun::awt::AppContext$6$1;

namespace sun {
	namespace awt {

$MethodInfo _AppContext$6_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AppContext$6::*)()>(&AppContext$6::init$))},
	{"getAppletContext", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"hasRootThreadGroup", "(Lsun/awt/AppContext;)Z", nullptr, $PRIVATE, $method(static_cast<bool(AppContext$6::*)($AppContext*)>(&AppContext$6::hasRootThreadGroup))},
	{}
};

$EnclosingMethodInfo _AppContext$6_EnclosingMethodInfo_ = {
	"sun.awt.AppContext",
	nullptr,
	nullptr
};

$InnerClassInfo _AppContext$6_InnerClassesInfo_[] = {
	{"sun.awt.AppContext$6", nullptr, nullptr, 0},
	{"sun.awt.AppContext$6$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AppContext$6_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.AppContext$6",
	"java.lang.Object",
	"jdk.internal.access.JavaAWTAccess",
	nullptr,
	_AppContext$6_MethodInfo_,
	nullptr,
	&_AppContext$6_EnclosingMethodInfo_,
	_AppContext$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.AppContext"
};

$Object* allocate$AppContext$6($Class* clazz) {
	return $of($alloc(AppContext$6));
}

void AppContext$6::init$() {
}

bool AppContext$6::hasRootThreadGroup($AppContext* ecx) {
	$beforeCallerSensitive();
	return $nc(($cast($Boolean, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($AppContext$6$1, this, ecx)))))))->booleanValue();
}

$Object* AppContext$6::getAppletContext() {
	$init($AppContext);
	if ($nc($AppContext::numAppContexts)->get() == 0) {
		return $of(nullptr);
	}
	$var($AppContext, ecx, nullptr);
	if ($nc($AppContext::numAppContexts)->get() > 0) {
		$assign(ecx, ecx != nullptr ? ecx : $AppContext::getAppContext());
	}
	bool isMainAppContext = ecx == nullptr || $AppContext::mainAppContext == ecx || $AppContext::mainAppContext == nullptr && hasRootThreadGroup(ecx);
	return $of(isMainAppContext ? ($Object*)nullptr : $of(ecx));
}

AppContext$6::AppContext$6() {
}

$Class* AppContext$6::load$($String* name, bool initialize) {
	$loadClass(AppContext$6, name, initialize, &_AppContext$6_ClassInfo_, allocate$AppContext$6);
	return class$;
}

$Class* AppContext$6::class$ = nullptr;

	} // awt
} // sun