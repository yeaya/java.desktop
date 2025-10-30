#include <java/awt/WaitDispatchSupport$1.h>

#include <java/awt/Conditional.h>
#include <java/awt/WaitDispatchSupport.h>
#include <java/util/TimerTask.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef FINEST

using $Conditional = ::java::awt::Conditional;
using $WaitDispatchSupport = ::java::awt::WaitDispatchSupport;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TimerTask = ::java::util::TimerTask;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace java {
	namespace awt {

$FieldInfo _WaitDispatchSupport$1_FieldInfo_[] = {
	{"this$0", "Ljava/awt/WaitDispatchSupport;", nullptr, $FINAL | $SYNTHETIC, $field(WaitDispatchSupport$1, this$0)},
	{}
};

$MethodInfo _WaitDispatchSupport$1_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/WaitDispatchSupport;)V", nullptr, 0, $method(static_cast<void(WaitDispatchSupport$1::*)($WaitDispatchSupport*)>(&WaitDispatchSupport$1::init$))},
	{"evaluate", "()Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WaitDispatchSupport$1_EnclosingMethodInfo_ = {
	"java.awt.WaitDispatchSupport",
	"<init>",
	"(Ljava/awt/EventDispatchThread;Ljava/awt/Conditional;)V"
};

$InnerClassInfo _WaitDispatchSupport$1_InnerClassesInfo_[] = {
	{"java.awt.WaitDispatchSupport$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WaitDispatchSupport$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.WaitDispatchSupport$1",
	"java.lang.Object",
	"java.awt.Conditional",
	_WaitDispatchSupport$1_FieldInfo_,
	_WaitDispatchSupport$1_MethodInfo_,
	nullptr,
	&_WaitDispatchSupport$1_EnclosingMethodInfo_,
	_WaitDispatchSupport$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.WaitDispatchSupport"
};

$Object* allocate$WaitDispatchSupport$1($Class* clazz) {
	return $of($alloc(WaitDispatchSupport$1));
}

void WaitDispatchSupport$1::init$($WaitDispatchSupport* this$0) {
	$set(this, this$0, this$0);
}

bool WaitDispatchSupport$1::evaluate() {
	$useLocalCurrentObjectStackCache();
	$init($WaitDispatchSupport);
	$init($PlatformLogger$Level);
	if ($nc($WaitDispatchSupport::log)->isLoggable($PlatformLogger$Level::FINEST)) {
		$var($String, var$0, $$str({"evaluate(): blockingEDT="_s, $$str($nc(this->this$0->keepBlockingEDT)->get()), ", blockingCT="_s}));
		$nc($WaitDispatchSupport::log)->finest($$concat(var$0, $$str($nc(this->this$0->keepBlockingCT)->get())));
	}
	bool extEvaluate = (this->this$0->extCondition != nullptr) ? $nc(this->this$0->extCondition)->evaluate() : true;
	bool var$1 = !$nc(this->this$0->keepBlockingEDT)->get() || !extEvaluate;
	if (var$1 || $nc(this->this$0->afterExit)->get()) {
		if (this->this$0->timerTask != nullptr) {
			$nc(this->this$0->timerTask)->cancel();
			$set(this->this$0, timerTask, nullptr);
		}
		return false;
	}
	return true;
}

WaitDispatchSupport$1::WaitDispatchSupport$1() {
}

$Class* WaitDispatchSupport$1::load$($String* name, bool initialize) {
	$loadClass(WaitDispatchSupport$1, name, initialize, &_WaitDispatchSupport$1_ClassInfo_, allocate$WaitDispatchSupport$1);
	return class$;
}

$Class* WaitDispatchSupport$1::class$ = nullptr;

	} // awt
} // java