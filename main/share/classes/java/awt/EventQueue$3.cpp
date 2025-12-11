#include <java/awt/EventQueue$3.h>

#include <java/awt/EventQueue.h>
#include <jcpp.h>

using $EventQueue = ::java::awt::EventQueue;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$MethodInfo _EventQueue$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(EventQueue$3::*)()>(&EventQueue$3::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _EventQueue$3_EnclosingMethodInfo_ = {
	"java.awt.EventQueue",
	nullptr,
	nullptr
};

$InnerClassInfo _EventQueue$3_InnerClassesInfo_[] = {
	{"java.awt.EventQueue$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _EventQueue$3_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.EventQueue$3",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_EventQueue$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_EventQueue$3_EnclosingMethodInfo_,
	_EventQueue$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.EventQueue"
};

$Object* allocate$EventQueue$3($Class* clazz) {
	return $of($alloc(EventQueue$3));
}

void EventQueue$3::init$() {
}

$Object* EventQueue$3::run() {
	$init($EventQueue);
	$EventQueue::fxAppThreadIsDispatchThread = "true"_s->equals($($System::getProperty("javafx.embed.singleThread"_s)));
	return $of(nullptr);
}

EventQueue$3::EventQueue$3() {
}

$Class* EventQueue$3::load$($String* name, bool initialize) {
	$loadClass(EventQueue$3, name, initialize, &_EventQueue$3_ClassInfo_, allocate$EventQueue$3);
	return class$;
}

$Class* EventQueue$3::class$ = nullptr;

	} // awt
} // java