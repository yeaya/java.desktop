#include <sun/awt/SunToolkit$1AWTInvocationLock.h>

#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunToolkit = ::sun::awt::SunToolkit;

namespace sun {
	namespace awt {

$MethodInfo _SunToolkit$1AWTInvocationLock_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SunToolkit$1AWTInvocationLock::*)()>(&SunToolkit$1AWTInvocationLock::init$))},
	{}
};

$EnclosingMethodInfo _SunToolkit$1AWTInvocationLock_EnclosingMethodInfo_ = {
	"sun.awt.SunToolkit",
	"executeOnEDTAndWait",
	"(Ljava/lang/Object;Ljava/lang/Runnable;)V"
};

$InnerClassInfo _SunToolkit$1AWTInvocationLock_InnerClassesInfo_[] = {
	{"sun.awt.SunToolkit$1AWTInvocationLock", nullptr, "AWTInvocationLock", 0},
	{}
};

$ClassInfo _SunToolkit$1AWTInvocationLock_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.SunToolkit$1AWTInvocationLock",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SunToolkit$1AWTInvocationLock_MethodInfo_,
	nullptr,
	&_SunToolkit$1AWTInvocationLock_EnclosingMethodInfo_,
	_SunToolkit$1AWTInvocationLock_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.SunToolkit"
};

$Object* allocate$SunToolkit$1AWTInvocationLock($Class* clazz) {
	return $of($alloc(SunToolkit$1AWTInvocationLock));
}

void SunToolkit$1AWTInvocationLock::init$() {
}

SunToolkit$1AWTInvocationLock::SunToolkit$1AWTInvocationLock() {
}

$Class* SunToolkit$1AWTInvocationLock::load$($String* name, bool initialize) {
	$loadClass(SunToolkit$1AWTInvocationLock, name, initialize, &_SunToolkit$1AWTInvocationLock_ClassInfo_, allocate$SunToolkit$1AWTInvocationLock);
	return class$;
}

$Class* SunToolkit$1AWTInvocationLock::class$ = nullptr;

	} // awt
} // sun