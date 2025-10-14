#include <java/awt/EventQueue$1AWTInvocationLock.h>

#include <java/awt/EventQueue.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $EventQueue = ::java::awt::EventQueue;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$MethodInfo _EventQueue$1AWTInvocationLock_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(EventQueue$1AWTInvocationLock::*)()>(&EventQueue$1AWTInvocationLock::init$))},
	{}
};

$EnclosingMethodInfo _EventQueue$1AWTInvocationLock_EnclosingMethodInfo_ = {
	"java.awt.EventQueue",
	"invokeAndWait",
	"(Ljava/lang/Object;Ljava/lang/Runnable;)V"
};

$InnerClassInfo _EventQueue$1AWTInvocationLock_InnerClassesInfo_[] = {
	{"java.awt.EventQueue$1AWTInvocationLock", nullptr, "AWTInvocationLock", 0},
	{}
};

$ClassInfo _EventQueue$1AWTInvocationLock_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.EventQueue$1AWTInvocationLock",
	"java.lang.Object",
	nullptr,
	nullptr,
	_EventQueue$1AWTInvocationLock_MethodInfo_,
	nullptr,
	&_EventQueue$1AWTInvocationLock_EnclosingMethodInfo_,
	_EventQueue$1AWTInvocationLock_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.EventQueue"
};

$Object* allocate$EventQueue$1AWTInvocationLock($Class* clazz) {
	return $of($alloc(EventQueue$1AWTInvocationLock));
}

void EventQueue$1AWTInvocationLock::init$() {
}

EventQueue$1AWTInvocationLock::EventQueue$1AWTInvocationLock() {
}

$Class* EventQueue$1AWTInvocationLock::load$($String* name, bool initialize) {
	$loadClass(EventQueue$1AWTInvocationLock, name, initialize, &_EventQueue$1AWTInvocationLock_ClassInfo_, allocate$EventQueue$1AWTInvocationLock);
	return class$;
}

$Class* EventQueue$1AWTInvocationLock::class$ = nullptr;

	} // awt
} // java