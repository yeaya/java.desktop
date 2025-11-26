#include <java/awt/EventQueue$6.h>

#include <java/awt/EventDispatchThread.h>
#include <java/awt/EventQueue.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ThreadGroup.h>
#include <sun/awt/AWTAutoShutdown.h>
#include <jcpp.h>

#undef NORM_PRIORITY

using $EventDispatchThread = ::java::awt::EventDispatchThread;
using $EventQueue = ::java::awt::EventQueue;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AWTAutoShutdown = ::sun::awt::AWTAutoShutdown;

namespace java {
	namespace awt {

$FieldInfo _EventQueue$6_FieldInfo_[] = {
	{"this$0", "Ljava/awt/EventQueue;", nullptr, $FINAL | $SYNTHETIC, $field(EventQueue$6, this$0)},
	{}
};

$MethodInfo _EventQueue$6_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/EventQueue;)V", nullptr, 0, $method(static_cast<void(EventQueue$6::*)($EventQueue*)>(&EventQueue$6::init$))},
	{"run", "()Ljava/awt/EventDispatchThread;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _EventQueue$6_EnclosingMethodInfo_ = {
	"java.awt.EventQueue",
	"initDispatchThread",
	"()V"
};

$InnerClassInfo _EventQueue$6_InnerClassesInfo_[] = {
	{"java.awt.EventQueue$6", nullptr, nullptr, 0},
	{}
};

$ClassInfo _EventQueue$6_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.EventQueue$6",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_EventQueue$6_FieldInfo_,
	_EventQueue$6_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/awt/EventDispatchThread;>;",
	&_EventQueue$6_EnclosingMethodInfo_,
	_EventQueue$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.EventQueue"
};

$Object* allocate$EventQueue$6($Class* clazz) {
	return $of($alloc(EventQueue$6));
}

void EventQueue$6::init$($EventQueue* this$0) {
	$set(this, this$0, this$0);
}

$Object* EventQueue$6::run() {
	$useLocalCurrentObjectStackCache();
	$var($EventDispatchThread, t, $new($EventDispatchThread, this->this$0->threadGroup, this->this$0->name, this->this$0));
	t->setContextClassLoader(this->this$0->classLoader);
	t->setPriority($Thread::NORM_PRIORITY + 1);
	t->setDaemon(false);
	$nc($($AWTAutoShutdown::getInstance()))->notifyThreadBusy(t);
	return $of(t);
}

EventQueue$6::EventQueue$6() {
}

$Class* EventQueue$6::load$($String* name, bool initialize) {
	$loadClass(EventQueue$6, name, initialize, &_EventQueue$6_ClassInfo_, allocate$EventQueue$6);
	return class$;
}

$Class* EventQueue$6::class$ = nullptr;

	} // awt
} // java