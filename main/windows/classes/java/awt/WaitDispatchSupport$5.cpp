#include <java/awt/WaitDispatchSupport$5.h>

#include <java/awt/WaitDispatchSupport.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

using $WaitDispatchSupport = ::java::awt::WaitDispatchSupport;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace java {
	namespace awt {

$FieldInfo _WaitDispatchSupport$5_FieldInfo_[] = {
	{"this$0", "Ljava/awt/WaitDispatchSupport;", nullptr, $FINAL | $SYNTHETIC, $field(WaitDispatchSupport$5, this$0)},
	{}
};

$MethodInfo _WaitDispatchSupport$5_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/WaitDispatchSupport;)V", nullptr, 0, $method(static_cast<void(WaitDispatchSupport$5::*)($WaitDispatchSupport*)>(&WaitDispatchSupport$5::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WaitDispatchSupport$5_EnclosingMethodInfo_ = {
	"java.awt.WaitDispatchSupport",
	nullptr,
	nullptr
};

$InnerClassInfo _WaitDispatchSupport$5_InnerClassesInfo_[] = {
	{"java.awt.WaitDispatchSupport$5", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WaitDispatchSupport$5_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.WaitDispatchSupport$5",
	"java.lang.Object",
	"java.lang.Runnable",
	_WaitDispatchSupport$5_FieldInfo_,
	_WaitDispatchSupport$5_MethodInfo_,
	nullptr,
	&_WaitDispatchSupport$5_EnclosingMethodInfo_,
	_WaitDispatchSupport$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.WaitDispatchSupport"
};

$Object* allocate$WaitDispatchSupport$5($Class* clazz) {
	return $of($alloc(WaitDispatchSupport$5));
}

void WaitDispatchSupport$5::init$($WaitDispatchSupport* this$0) {
	$set(this, this$0, this$0);
}

void WaitDispatchSupport$5::run() {
	$init($WaitDispatchSupport);
	$nc($WaitDispatchSupport::log)->fine("Wake up EDT"_s);
	$synchronized($WaitDispatchSupport::getTreeLock()) {
		$nc(this->this$0->keepBlockingCT)->set(false);
		$nc($of($($WaitDispatchSupport::getTreeLock())))->notifyAll();
	}
	$nc($WaitDispatchSupport::log)->fine("Wake up EDT done"_s);
}

WaitDispatchSupport$5::WaitDispatchSupport$5() {
}

$Class* WaitDispatchSupport$5::load$($String* name, bool initialize) {
	$loadClass(WaitDispatchSupport$5, name, initialize, &_WaitDispatchSupport$5_ClassInfo_, allocate$WaitDispatchSupport$5);
	return class$;
}

$Class* WaitDispatchSupport$5::class$ = nullptr;

	} // awt
} // java