#include <java/awt/WaitDispatchSupport$3.h>

#include <java/awt/WaitDispatchSupport.h>
#include <java/util/TimerTask.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <jcpp.h>

using $WaitDispatchSupport = ::java::awt::WaitDispatchSupport;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TimerTask = ::java::util::TimerTask;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;

namespace java {
	namespace awt {

$FieldInfo _WaitDispatchSupport$3_FieldInfo_[] = {
	{"this$0", "Ljava/awt/WaitDispatchSupport;", nullptr, $FINAL | $SYNTHETIC, $field(WaitDispatchSupport$3, this$0)},
	{}
};

$MethodInfo _WaitDispatchSupport$3_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/WaitDispatchSupport;)V", nullptr, 0, $method(static_cast<void(WaitDispatchSupport$3::*)($WaitDispatchSupport*)>(&WaitDispatchSupport$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WaitDispatchSupport$3_EnclosingMethodInfo_ = {
	"java.awt.WaitDispatchSupport",
	"enter",
	"()Z"
};

$InnerClassInfo _WaitDispatchSupport$3_InnerClassesInfo_[] = {
	{"java.awt.WaitDispatchSupport$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WaitDispatchSupport$3_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.WaitDispatchSupport$3",
	"java.util.TimerTask",
	nullptr,
	_WaitDispatchSupport$3_FieldInfo_,
	_WaitDispatchSupport$3_MethodInfo_,
	nullptr,
	&_WaitDispatchSupport$3_EnclosingMethodInfo_,
	_WaitDispatchSupport$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.WaitDispatchSupport"
};

$Object* allocate$WaitDispatchSupport$3($Class* clazz) {
	return $of($alloc(WaitDispatchSupport$3));
}

void WaitDispatchSupport$3::init$($WaitDispatchSupport* this$0) {
	$set(this, this$0, this$0);
	$TimerTask::init$();
}

void WaitDispatchSupport$3::run() {
	if ($nc(this->this$0->keepBlockingEDT)->compareAndSet(true, false)) {
		this->this$0->wakeupEDT();
	}
}

WaitDispatchSupport$3::WaitDispatchSupport$3() {
}

$Class* WaitDispatchSupport$3::load$($String* name, bool initialize) {
	$loadClass(WaitDispatchSupport$3, name, initialize, &_WaitDispatchSupport$3_ClassInfo_, allocate$WaitDispatchSupport$3);
	return class$;
}

$Class* WaitDispatchSupport$3::class$ = nullptr;

	} // awt
} // java