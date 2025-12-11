#include <sun/awt/FwDispatcher.h>

#include <java/awt/SecondaryLoop.h>
#include <java/lang/Runnable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

$MethodInfo _FwDispatcher_MethodInfo_[] = {
	{"createSecondaryLoop", "()Ljava/awt/SecondaryLoop;", nullptr, $PUBLIC | $ABSTRACT},
	{"isDispatchThread", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"scheduleDispatch", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _FwDispatcher_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.FwDispatcher",
	nullptr,
	nullptr,
	nullptr,
	_FwDispatcher_MethodInfo_
};

$Object* allocate$FwDispatcher($Class* clazz) {
	return $of($alloc(FwDispatcher));
}

$Class* FwDispatcher::load$($String* name, bool initialize) {
	$loadClass(FwDispatcher, name, initialize, &_FwDispatcher_ClassInfo_, allocate$FwDispatcher);
	return class$;
}

$Class* FwDispatcher::class$ = nullptr;

	} // awt
} // sun