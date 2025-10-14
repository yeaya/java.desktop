#include <java/awt/WaitDispatchSupport$2.h>

#include <java/awt/Conditional.h>
#include <java/awt/EventDispatchThread.h>
#include <java/awt/EventFilter.h>
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
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

using $Conditional = ::java::awt::Conditional;
using $EventDispatchThread = ::java::awt::EventDispatchThread;
using $EventFilter = ::java::awt::EventFilter;
using $WaitDispatchSupport = ::java::awt::WaitDispatchSupport;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace java {
	namespace awt {

$FieldInfo _WaitDispatchSupport$2_FieldInfo_[] = {
	{"this$0", "Ljava/awt/WaitDispatchSupport;", nullptr, $FINAL | $SYNTHETIC, $field(WaitDispatchSupport$2, this$0)},
	{}
};

$MethodInfo _WaitDispatchSupport$2_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/WaitDispatchSupport;)V", nullptr, 0, $method(static_cast<void(WaitDispatchSupport$2::*)($WaitDispatchSupport*)>(&WaitDispatchSupport$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WaitDispatchSupport$2_EnclosingMethodInfo_ = {
	"java.awt.WaitDispatchSupport",
	"enter",
	"()Z"
};

$InnerClassInfo _WaitDispatchSupport$2_InnerClassesInfo_[] = {
	{"java.awt.WaitDispatchSupport$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WaitDispatchSupport$2_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.WaitDispatchSupport$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_WaitDispatchSupport$2_FieldInfo_,
	_WaitDispatchSupport$2_MethodInfo_,
	nullptr,
	&_WaitDispatchSupport$2_EnclosingMethodInfo_,
	_WaitDispatchSupport$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.WaitDispatchSupport"
};

$Object* allocate$WaitDispatchSupport$2($Class* clazz) {
	return $of($alloc(WaitDispatchSupport$2));
}

void WaitDispatchSupport$2::init$($WaitDispatchSupport* this$0) {
	$set(this, this$0, this$0);
}

void WaitDispatchSupport$2::run() {
	$init($WaitDispatchSupport);
	$nc($WaitDispatchSupport::log)->fine("Starting a new event pump"_s);
	if (this->this$0->filter == nullptr) {
		$nc(this->this$0->dispatchThread)->pumpEvents(this->this$0->condition);
	} else {
		$nc(this->this$0->dispatchThread)->pumpEventsForFilter(this->this$0->condition, this->this$0->filter);
	}
}

WaitDispatchSupport$2::WaitDispatchSupport$2() {
}

$Class* WaitDispatchSupport$2::load$($String* name, bool initialize) {
	$loadClass(WaitDispatchSupport$2, name, initialize, &_WaitDispatchSupport$2_ClassInfo_, allocate$WaitDispatchSupport$2);
	return class$;
}

$Class* WaitDispatchSupport$2::class$ = nullptr;

	} // awt
} // java