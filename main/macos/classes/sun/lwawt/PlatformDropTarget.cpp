#include <sun/lwawt/PlatformDropTarget.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace lwawt {

$MethodInfo _PlatformDropTarget_MethodInfo_[] = {
	{"dispose", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _PlatformDropTarget_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.lwawt.PlatformDropTarget",
	nullptr,
	nullptr,
	nullptr,
	_PlatformDropTarget_MethodInfo_
};

$Object* allocate$PlatformDropTarget($Class* clazz) {
	return $of($alloc(PlatformDropTarget));
}

$Class* PlatformDropTarget::load$($String* name, bool initialize) {
	$loadClass(PlatformDropTarget, name, initialize, &_PlatformDropTarget_ClassInfo_, allocate$PlatformDropTarget);
	return class$;
}

$Class* PlatformDropTarget::class$ = nullptr;

	} // lwawt
} // sun