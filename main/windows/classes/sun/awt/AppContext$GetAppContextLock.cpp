#include <sun/awt/AppContext$GetAppContextLock.h>

#include <sun/awt/AppContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AppContext = ::sun::awt::AppContext;

namespace sun {
	namespace awt {

$MethodInfo _AppContext$GetAppContextLock_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(AppContext$GetAppContextLock::*)()>(&AppContext$GetAppContextLock::init$))},
	{}
};

$InnerClassInfo _AppContext$GetAppContextLock_InnerClassesInfo_[] = {
	{"sun.awt.AppContext$GetAppContextLock", "sun.awt.AppContext", "GetAppContextLock", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AppContext$GetAppContextLock_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.AppContext$GetAppContextLock",
	"java.lang.Object",
	nullptr,
	nullptr,
	_AppContext$GetAppContextLock_MethodInfo_,
	nullptr,
	nullptr,
	_AppContext$GetAppContextLock_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.AppContext"
};

$Object* allocate$AppContext$GetAppContextLock($Class* clazz) {
	return $of($alloc(AppContext$GetAppContextLock));
}

void AppContext$GetAppContextLock::init$() {
}

AppContext$GetAppContextLock::AppContext$GetAppContextLock() {
}

$Class* AppContext$GetAppContextLock::load$($String* name, bool initialize) {
	$loadClass(AppContext$GetAppContextLock, name, initialize, &_AppContext$GetAppContextLock_ClassInfo_, allocate$AppContext$GetAppContextLock);
	return class$;
}

$Class* AppContext$GetAppContextLock::class$ = nullptr;

	} // awt
} // sun