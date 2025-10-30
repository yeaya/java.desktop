#include <java/awt/Container$WakingRunnable.h>

#include <java/awt/Container.h>
#include <jcpp.h>

using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

namespace java {
	namespace awt {

$MethodInfo _Container$WakingRunnable_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Container$WakingRunnable::*)()>(&Container$WakingRunnable::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Container$WakingRunnable_InnerClassesInfo_[] = {
	{"java.awt.Container$WakingRunnable", "java.awt.Container", "WakingRunnable", $STATIC | $FINAL},
	{}
};

$ClassInfo _Container$WakingRunnable_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.awt.Container$WakingRunnable",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Container$WakingRunnable_MethodInfo_,
	nullptr,
	nullptr,
	_Container$WakingRunnable_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Container"
};

$Object* allocate$Container$WakingRunnable($Class* clazz) {
	return $of($alloc(Container$WakingRunnable));
}

void Container$WakingRunnable::init$() {
}

void Container$WakingRunnable::run() {
}

Container$WakingRunnable::Container$WakingRunnable() {
}

$Class* Container$WakingRunnable::load$($String* name, bool initialize) {
	$loadClass(Container$WakingRunnable, name, initialize, &_Container$WakingRunnable_ClassInfo_, allocate$Container$WakingRunnable);
	return class$;
}

$Class* Container$WakingRunnable::class$ = nullptr;

	} // awt
} // java